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

// Function: sub_002DE8A0
// Address: 0x2de8a0 - 0x2de910
void sub_002DE8A0_0x2de8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE8A0_0x2de8a0");
#endif

    switch (ctx->pc) {
        case 0x2de8a0u: goto label_2de8a0;
        case 0x2de8a4u: goto label_2de8a4;
        case 0x2de8a8u: goto label_2de8a8;
        case 0x2de8acu: goto label_2de8ac;
        case 0x2de8b0u: goto label_2de8b0;
        case 0x2de8b4u: goto label_2de8b4;
        case 0x2de8b8u: goto label_2de8b8;
        case 0x2de8bcu: goto label_2de8bc;
        case 0x2de8c0u: goto label_2de8c0;
        case 0x2de8c4u: goto label_2de8c4;
        case 0x2de8c8u: goto label_2de8c8;
        case 0x2de8ccu: goto label_2de8cc;
        case 0x2de8d0u: goto label_2de8d0;
        case 0x2de8d4u: goto label_2de8d4;
        case 0x2de8d8u: goto label_2de8d8;
        case 0x2de8dcu: goto label_2de8dc;
        case 0x2de8e0u: goto label_2de8e0;
        case 0x2de8e4u: goto label_2de8e4;
        case 0x2de8e8u: goto label_2de8e8;
        case 0x2de8ecu: goto label_2de8ec;
        case 0x2de8f0u: goto label_2de8f0;
        case 0x2de8f4u: goto label_2de8f4;
        case 0x2de8f8u: goto label_2de8f8;
        case 0x2de8fcu: goto label_2de8fc;
        case 0x2de900u: goto label_2de900;
        case 0x2de904u: goto label_2de904;
        case 0x2de908u: goto label_2de908;
        case 0x2de90cu: goto label_2de90c;
        default: break;
    }

    ctx->pc = 0x2de8a0u;

label_2de8a0:
    // 0x2de8a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2de8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2de8a4:
    // 0x2de8a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2de8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2de8a8:
    // 0x2de8a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2de8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2de8ac:
    // 0x2de8ac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2de8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2de8b0:
    // 0x2de8b0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2de8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2de8b4:
    // 0x2de8b4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2de8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_2de8b8:
    // 0x2de8b8: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x2de8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_2de8bc:
    // 0x2de8bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2de8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de8c0:
    // 0x2de8c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2de8c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de8c4:
    // 0x2de8c4: 0xc0b7a54  jal         func_2DE950
label_2de8c8:
    if (ctx->pc == 0x2DE8C8u) {
        ctx->pc = 0x2DE8CCu;
        goto label_2de8cc;
    }
    ctx->pc = 0x2DE8C4u;
    SET_GPR_U32(ctx, 31, 0x2DE8CCu);
    ctx->pc = 0x2DE950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE950u, 0x2DE8C4u, 0x2DE8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE8CCu;
label_2de8cc:
    // 0x2de8cc: 0x3c10002e  lui         $s0, 0x2E
    ctx->pc = 0x2de8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)46 << 16));
label_2de8d0:
    // 0x2de8d0: 0x2610e6c0  addiu       $s0, $s0, -0x1940
    ctx->pc = 0x2de8d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960832));
label_2de8d4:
    // 0x2de8d4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x2de8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2de8d8:
    // 0x2de8d8: 0x200f809  jalr        $s0
label_2de8dc:
    if (ctx->pc == 0x2DE8DCu) {
        ctx->pc = 0x2DE8E0u;
        goto label_2de8e0;
    }
    ctx->pc = 0x2DE8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2DE8E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE8D8u, 0x2DE8E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DE8E0u;
label_2de8e0:
    // 0x2de8e0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2de8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2de8e4:
    // 0x2de8e4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2de8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2de8e8:
    // 0x2de8e8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2de8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2de8ec:
    // 0x2de8ec: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2de8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2de8f0:
    // 0x2de8f0: 0xc0b7a44  jal         func_2DE910
label_2de8f4:
    if (ctx->pc == 0x2DE8F4u) {
        ctx->pc = 0x2DE8F8u;
        goto label_2de8f8;
    }
    ctx->pc = 0x2DE8F0u;
    SET_GPR_U32(ctx, 31, 0x2DE8F8u);
    ctx->pc = 0x2DE910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE910u, 0x2DE8F0u, 0x2DE8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE8F8u;
label_2de8f8:
    // 0x2de8f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2de8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2de8fc:
    // 0x2de8fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2de8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2de900:
    // 0x2de900: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2de900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2de904:
    // 0x2de904: 0x3e00008  jr          $ra
label_2de908:
    if (ctx->pc == 0x2DE908u) {
        ctx->pc = 0x2DE90Cu;
        goto label_2de90c;
    }
    ctx->pc = 0x2DE904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE90Cu;
label_2de90c:
    // 0x2de90c: 0x0  nop
    ctx->pc = 0x2de90cu;
    // NOP
    ctx->pc = 0x2de910u;
}
