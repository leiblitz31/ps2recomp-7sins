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

// Function: sub_0025F190
// Address: 0x25f190 - 0x25f200
void sub_0025F190_0x25f190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F190_0x25f190");
#endif

    switch (ctx->pc) {
        case 0x25f190u: goto label_25f190;
        case 0x25f194u: goto label_25f194;
        case 0x25f198u: goto label_25f198;
        case 0x25f19cu: goto label_25f19c;
        case 0x25f1a0u: goto label_25f1a0;
        case 0x25f1a4u: goto label_25f1a4;
        case 0x25f1a8u: goto label_25f1a8;
        case 0x25f1acu: goto label_25f1ac;
        case 0x25f1b0u: goto label_25f1b0;
        case 0x25f1b4u: goto label_25f1b4;
        case 0x25f1b8u: goto label_25f1b8;
        case 0x25f1bcu: goto label_25f1bc;
        case 0x25f1c0u: goto label_25f1c0;
        case 0x25f1c4u: goto label_25f1c4;
        case 0x25f1c8u: goto label_25f1c8;
        case 0x25f1ccu: goto label_25f1cc;
        case 0x25f1d0u: goto label_25f1d0;
        case 0x25f1d4u: goto label_25f1d4;
        case 0x25f1d8u: goto label_25f1d8;
        case 0x25f1dcu: goto label_25f1dc;
        case 0x25f1e0u: goto label_25f1e0;
        case 0x25f1e4u: goto label_25f1e4;
        case 0x25f1e8u: goto label_25f1e8;
        case 0x25f1ecu: goto label_25f1ec;
        case 0x25f1f0u: goto label_25f1f0;
        case 0x25f1f4u: goto label_25f1f4;
        case 0x25f1f8u: goto label_25f1f8;
        case 0x25f1fcu: goto label_25f1fc;
        default: break;
    }

    ctx->pc = 0x25f190u;

label_25f190:
    // 0x25f190: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25f190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_25f194:
    // 0x25f194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25f194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_25f198:
    // 0x25f198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25f198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25f19c:
    // 0x25f19c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x25f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_25f1a0:
    // 0x25f1a0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25f1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_25f1a4:
    // 0x25f1a4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x25f1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_25f1a8:
    // 0x25f1a8: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x25f1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_25f1ac:
    // 0x25f1ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25f1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25f1b0:
    // 0x25f1b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25f1b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25f1b4:
    // 0x25f1b4: 0xc046a48  jal         func_11A920
label_25f1b8:
    if (ctx->pc == 0x25F1B8u) {
        ctx->pc = 0x25F1BCu;
        goto label_25f1bc;
    }
    ctx->pc = 0x25F1B4u;
    SET_GPR_U32(ctx, 31, 0x25F1BCu);
    ctx->pc = 0x11A920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A920u, 0x25F1B4u, 0x25F1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F1BCu;
label_25f1bc:
    // 0x25f1bc: 0x3c100012  lui         $s0, 0x12
    ctx->pc = 0x25f1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)18 << 16));
label_25f1c0:
    // 0x25f1c0: 0x26109b50  addiu       $s0, $s0, -0x64B0
    ctx->pc = 0x25f1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941520));
label_25f1c4:
    // 0x25f1c4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x25f1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_25f1c8:
    // 0x25f1c8: 0x200f809  jalr        $s0
label_25f1cc:
    if (ctx->pc == 0x25F1CCu) {
        ctx->pc = 0x25F1D0u;
        goto label_25f1d0;
    }
    ctx->pc = 0x25F1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x25F1D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F1C8u, 0x25F1D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25F1D0u;
label_25f1d0:
    // 0x25f1d0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25f1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_25f1d4:
    // 0x25f1d4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x25f1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_25f1d8:
    // 0x25f1d8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x25f1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_25f1dc:
    // 0x25f1dc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x25f1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_25f1e0:
    // 0x25f1e0: 0xc04fec4  jal         func_13FB10
label_25f1e4:
    if (ctx->pc == 0x25F1E4u) {
        ctx->pc = 0x25F1E8u;
        goto label_25f1e8;
    }
    ctx->pc = 0x25F1E0u;
    SET_GPR_U32(ctx, 31, 0x25F1E8u);
    ctx->pc = 0x13FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB10u, 0x25F1E0u, 0x25F1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F1E8u;
label_25f1e8:
    // 0x25f1e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25f1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25f1ec:
    // 0x25f1ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25f1ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25f1f0:
    // 0x25f1f0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x25f1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_25f1f4:
    // 0x25f1f4: 0x3e00008  jr          $ra
label_25f1f8:
    if (ctx->pc == 0x25F1F8u) {
        ctx->pc = 0x25F1FCu;
        goto label_25f1fc;
    }
    ctx->pc = 0x25F1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F1FCu;
label_25f1fc:
    // 0x25f1fc: 0x0  nop
    ctx->pc = 0x25f1fcu;
    // NOP
    ctx->pc = 0x25f200u;
}
