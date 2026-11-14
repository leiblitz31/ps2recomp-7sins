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

// Function: sub_0013C980
// Address: 0x13c980 - 0x13ca70
void sub_0013C980_0x13c980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C980_0x13c980");
#endif

    switch (ctx->pc) {
        case 0x13c9a4u: goto label_13c9a4;
        case 0x13c9c0u: goto label_13c9c0;
        case 0x13c9f4u: goto label_13c9f4;
        case 0x13ca04u: goto label_13ca04;
        case 0x13ca24u: goto label_13ca24;
        case 0x13ca4cu: goto label_13ca4c;
        default: break;
    }

    ctx->pc = 0x13c980u;

    // 0x13c980: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13c980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13c984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13c984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13c988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c98c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c990: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x13c990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x13c994: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x13c994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x13c998: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13c998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c99c: 0xc04f2b8  jal         func_13CAE0
    ctx->pc = 0x13C99Cu;
    SET_GPR_U32(ctx, 31, 0x13C9A4u);
    ctx->pc = 0x13CAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CAE0u, 0x13C99Cu, 0x13C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C9A4u;
label_13c9a4:
    // 0x13c9a4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c9a8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x13c9a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13c9ac: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x13C9ACu;
    {
        const bool branch_taken_0x13c9ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c9ac) {
            ctx->pc = 0x13CA4Cu;
            goto label_13ca4c;
        }
    }
    ctx->pc = 0x13C9B4u;
    // 0x13c9b4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13c9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c9b8: 0xc04e50c  jal         func_139430
    ctx->pc = 0x13C9B8u;
    SET_GPR_U32(ctx, 31, 0x13C9C0u);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x13C9B8u, 0x13C9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C9C0u;
label_13c9c0:
    // 0x13c9c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13c9c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c9c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c9c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c9cc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13C9CCu;
    {
        const bool branch_taken_0x13c9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c9cc) {
            ctx->pc = 0x13CA0Cu;
            goto label_13ca0c;
        }
    }
    ctx->pc = 0x13C9D4u;
    // 0x13c9d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x13c9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c9d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c9dc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13c9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c9e0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x13c9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13c9e4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x13c9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c9e8: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x13c9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13c9ec: 0xc04f29c  jal         func_13CA70
    ctx->pc = 0x13C9ECu;
    SET_GPR_U32(ctx, 31, 0x13C9F4u);
    ctx->pc = 0x13CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CA70u, 0x13C9ECu, 0x13C9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C9F4u;
label_13c9f4:
    // 0x13c9f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13c9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c9f8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13c9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c9fc: 0xc04f168  jal         func_13C5A0
    ctx->pc = 0x13C9FCu;
    SET_GPR_U32(ctx, 31, 0x13CA04u);
    ctx->pc = 0x13C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C5A0u, 0x13C9FCu, 0x13CA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA04u;
label_13ca04:
    // 0x13ca04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13CA04u;
    {
        const bool branch_taken_0x13ca04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ca04) {
            ctx->pc = 0x13CA28u;
            goto label_13ca28;
        }
    }
    ctx->pc = 0x13CA0Cu;
label_13ca0c:
    // 0x13ca0c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x13ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ca10: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x13ca10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x13ca14: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x13ca14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13ca18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13ca18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca1c: 0xc04f43c  jal         func_13D0F0
    ctx->pc = 0x13CA1Cu;
    SET_GPR_U32(ctx, 31, 0x13CA24u);
    ctx->pc = 0x13D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D0F0u, 0x13CA1Cu, 0x13CA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA24u;
label_13ca24:
    // 0x13ca24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13ca24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13ca28:
    // 0x13ca28: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x13ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13ca2c: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x13ca2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13ca30: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13ca34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13ca38: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x13ca38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13ca3c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13ca3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ca40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13ca40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ca44: 0xc04f154  jal         func_13C550
    ctx->pc = 0x13CA44u;
    SET_GPR_U32(ctx, 31, 0x13CA4Cu);
    ctx->pc = 0x13C550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C550u, 0x13CA44u, 0x13CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CA4Cu;
label_13ca4c:
    // 0x13ca4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13ca4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ca50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ca50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ca54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ca54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ca58: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13ca58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13ca5c: 0x3e00008  jr          $ra
    ctx->pc = 0x13CA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CA64u;
    // 0x13ca64: 0x0  nop
    ctx->pc = 0x13ca64u;
    // NOP
    // 0x13ca68: 0x0  nop
    ctx->pc = 0x13ca68u;
    // NOP
    // 0x13ca6c: 0x0  nop
    ctx->pc = 0x13ca6cu;
    // NOP
    ctx->pc = 0x13ca70u;
}
