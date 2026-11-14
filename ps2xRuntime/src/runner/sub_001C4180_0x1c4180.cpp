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

// Function: sub_001C4180
// Address: 0x1c4180 - 0x1c41f0
void sub_001C4180_0x1c4180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4180_0x1c4180");
#endif

    switch (ctx->pc) {
        case 0x1c4180u: goto label_1c4180;
        case 0x1c4184u: goto label_1c4184;
        case 0x1c4188u: goto label_1c4188;
        case 0x1c418cu: goto label_1c418c;
        case 0x1c4190u: goto label_1c4190;
        case 0x1c4194u: goto label_1c4194;
        case 0x1c4198u: goto label_1c4198;
        case 0x1c419cu: goto label_1c419c;
        case 0x1c41a0u: goto label_1c41a0;
        case 0x1c41a4u: goto label_1c41a4;
        case 0x1c41a8u: goto label_1c41a8;
        case 0x1c41acu: goto label_1c41ac;
        case 0x1c41b0u: goto label_1c41b0;
        case 0x1c41b4u: goto label_1c41b4;
        case 0x1c41b8u: goto label_1c41b8;
        case 0x1c41bcu: goto label_1c41bc;
        case 0x1c41c0u: goto label_1c41c0;
        case 0x1c41c4u: goto label_1c41c4;
        case 0x1c41c8u: goto label_1c41c8;
        case 0x1c41ccu: goto label_1c41cc;
        case 0x1c41d0u: goto label_1c41d0;
        case 0x1c41d4u: goto label_1c41d4;
        case 0x1c41d8u: goto label_1c41d8;
        case 0x1c41dcu: goto label_1c41dc;
        case 0x1c41e0u: goto label_1c41e0;
        case 0x1c41e4u: goto label_1c41e4;
        case 0x1c41e8u: goto label_1c41e8;
        case 0x1c41ecu: goto label_1c41ec;
        default: break;
    }

    ctx->pc = 0x1c4180u;

label_1c4180:
    // 0x1c4180: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c4180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1c4184:
    // 0x1c4184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c4188:
    // 0x1c4188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c418c:
    // 0x1c418c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1c418cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1c4190:
    // 0x1c4190: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1c4190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1c4194:
    // 0x1c4194: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1c4194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_1c4198:
    // 0x1c4198: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1c4198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_1c419c:
    // 0x1c419c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c419cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c41a0:
    // 0x1c41a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c41a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c41a4:
    // 0x1c41a4: 0xc06490c  jal         func_192430
label_1c41a8:
    if (ctx->pc == 0x1C41A8u) {
        ctx->pc = 0x1C41ACu;
        goto label_1c41ac;
    }
    ctx->pc = 0x1C41A4u;
    SET_GPR_U32(ctx, 31, 0x1C41ACu);
    ctx->pc = 0x192430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192430u, 0x1C41A4u, 0x1C41ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C41ACu;
label_1c41ac:
    // 0x1c41ac: 0x3c100019  lui         $s0, 0x19
    ctx->pc = 0x1c41acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)25 << 16));
label_1c41b0:
    // 0x1c41b0: 0x26102020  addiu       $s0, $s0, 0x2020
    ctx->pc = 0x1c41b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8224));
label_1c41b4:
    // 0x1c41b4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1c41b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1c41b8:
    // 0x1c41b8: 0x200f809  jalr        $s0
label_1c41bc:
    if (ctx->pc == 0x1C41BCu) {
        ctx->pc = 0x1C41C0u;
        goto label_1c41c0;
    }
    ctx->pc = 0x1C41B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1C41C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C41B8u, 0x1C41C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C41C0u;
label_1c41c0:
    // 0x1c41c0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1c41c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1c41c4:
    // 0x1c41c4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1c41c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1c41c8:
    // 0x1c41c8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x1c41c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1c41cc:
    // 0x1c41cc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1c41ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1c41d0:
    // 0x1c41d0: 0xc071088  jal         func_1C4220
label_1c41d4:
    if (ctx->pc == 0x1C41D4u) {
        ctx->pc = 0x1C41D8u;
        goto label_1c41d8;
    }
    ctx->pc = 0x1C41D0u;
    SET_GPR_U32(ctx, 31, 0x1C41D8u);
    ctx->pc = 0x1C4220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4220u, 0x1C41D0u, 0x1C41D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C41D8u;
label_1c41d8:
    // 0x1c41d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c41d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c41dc:
    // 0x1c41dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c41dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c41e0:
    // 0x1c41e0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1c41e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1c41e4:
    // 0x1c41e4: 0x3e00008  jr          $ra
label_1c41e8:
    if (ctx->pc == 0x1C41E8u) {
        ctx->pc = 0x1C41ECu;
        goto label_1c41ec;
    }
    ctx->pc = 0x1C41E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C41E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C41ECu;
label_1c41ec:
    // 0x1c41ec: 0x0  nop
    ctx->pc = 0x1c41ecu;
    // NOP
    ctx->pc = 0x1c41f0u;
}
