#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0046A560
// Address: 0x46a560 - 0x46a630
void sub_0046A560_0x46a560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A560_0x46a560");
#endif

    switch (ctx->pc) {
        case 0x46a58cu: goto label_46a58c;
        case 0x46a5a0u: goto label_46a5a0;
        case 0x46a5bcu: goto label_46a5bc;
        case 0x46a5c8u: goto label_46a5c8;
        case 0x46a5e8u: goto label_46a5e8;
        case 0x46a600u: goto label_46a600;
        default: break;
    }

    ctx->pc = 0x46a560u;

    // 0x46a560: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x46a560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x46a564: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x46a564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x46a568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46a568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x46a56c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46a56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46a570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46a570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46a574: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x46a574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x46a578: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x46a578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x46a57c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x46a57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46a580: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x46a580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46a584: 0xc04eda8  jal         func_13B6A0
    ctx->pc = 0x46A584u;
    SET_GPR_U32(ctx, 31, 0x46A58Cu);
    ctx->pc = 0x13B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B6A0u, 0x46A584u, 0x46A58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A58Cu;
label_46a58c:
    // 0x46a58c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x46a58cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a590: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46a590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46a594: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46a594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46a598: 0xc11a5bc  jal         func_4696F0
    ctx->pc = 0x46A598u;
    SET_GPR_U32(ctx, 31, 0x46A5A0u);
    ctx->pc = 0x4696F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4696F0u, 0x46A598u, 0x46A5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A5A0u;
label_46a5a0:
    // 0x46a5a0: 0x242001b  divu        $zero, $s2, $v0
    ctx->pc = 0x46a5a0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x46a5a4: 0x8810  mfhi        $s1
    ctx->pc = 0x46a5a4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x46a5a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46a5ac: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46a5b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46a5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a5b4: 0xc11a98c  jal         func_46A630
    ctx->pc = 0x46A5B4u;
    SET_GPR_U32(ctx, 31, 0x46A5BCu);
    ctx->pc = 0x46A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A630u, 0x46A5B4u, 0x46A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A5BCu;
label_46a5bc:
    // 0x46a5bc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x46a5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46a5c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x46A5C0u;
    {
        const bool branch_taken_0x46a5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a5c0) {
            ctx->pc = 0x46A5CCu;
            goto label_46a5cc;
        }
    }
    ctx->pc = 0x46A5C8u;
label_46a5c8:
    // 0x46a5c8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x46a5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46a5cc:
    // 0x46a5cc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x46A5CCu;
    {
        const bool branch_taken_0x46a5cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a5cc) {
            ctx->pc = 0x46A608u;
            goto label_46a608;
        }
    }
    ctx->pc = 0x46A5D4u;
    // 0x46a5d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46a5d8: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x46a5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x46a5dc: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x46a5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x46a5e0: 0xc11a67c  jal         func_4699F0
    ctx->pc = 0x46A5E0u;
    SET_GPR_U32(ctx, 31, 0x46A5E8u);
    ctx->pc = 0x4699F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4699F0u, 0x46A5E0u, 0x46A5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A5E8u;
label_46a5e8:
    // 0x46a5e8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x46a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46a5ec: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x46a5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x46a5f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46a5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a5f4: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x46a5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46a5f8: 0xc04ed6c  jal         func_13B5B0
    ctx->pc = 0x46A5F8u;
    SET_GPR_U32(ctx, 31, 0x46A600u);
    ctx->pc = 0x13B5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B5B0u, 0x46A5F8u, 0x46A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A600u;
label_46a600:
    // 0x46a600: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x46A600u;
    {
        const bool branch_taken_0x46a600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a600) {
            ctx->pc = 0x46A5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46a5c8;
        }
    }
    ctx->pc = 0x46A608u;
label_46a608:
    // 0x46a608: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46a608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a60c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x46a60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46a610: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46a610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a614: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46a614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46a618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a61c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x46a61cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x46a620: 0x3e00008  jr          $ra
    ctx->pc = 0x46A620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A628u;
    // 0x46a628: 0x0  nop
    ctx->pc = 0x46a628u;
    // NOP
    // 0x46a62c: 0x0  nop
    ctx->pc = 0x46a62cu;
    // NOP
    ctx->pc = 0x46a630u;
}
