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

// Function: sub_001B8480
// Address: 0x1b8480 - 0x1b84f0
void sub_001B8480_0x1b8480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8480_0x1b8480");
#endif

    switch (ctx->pc) {
        case 0x1b8480u: goto label_1b8480;
        case 0x1b8484u: goto label_1b8484;
        case 0x1b8488u: goto label_1b8488;
        case 0x1b848cu: goto label_1b848c;
        case 0x1b8490u: goto label_1b8490;
        case 0x1b8494u: goto label_1b8494;
        case 0x1b8498u: goto label_1b8498;
        case 0x1b849cu: goto label_1b849c;
        case 0x1b84a0u: goto label_1b84a0;
        case 0x1b84a4u: goto label_1b84a4;
        case 0x1b84a8u: goto label_1b84a8;
        case 0x1b84acu: goto label_1b84ac;
        case 0x1b84b0u: goto label_1b84b0;
        case 0x1b84b4u: goto label_1b84b4;
        case 0x1b84b8u: goto label_1b84b8;
        case 0x1b84bcu: goto label_1b84bc;
        case 0x1b84c0u: goto label_1b84c0;
        case 0x1b84c4u: goto label_1b84c4;
        case 0x1b84c8u: goto label_1b84c8;
        case 0x1b84ccu: goto label_1b84cc;
        case 0x1b84d0u: goto label_1b84d0;
        case 0x1b84d4u: goto label_1b84d4;
        case 0x1b84d8u: goto label_1b84d8;
        case 0x1b84dcu: goto label_1b84dc;
        case 0x1b84e0u: goto label_1b84e0;
        case 0x1b84e4u: goto label_1b84e4;
        case 0x1b84e8u: goto label_1b84e8;
        case 0x1b84ecu: goto label_1b84ec;
        default: break;
    }

    ctx->pc = 0x1b8480u;

label_1b8480:
    // 0x1b8480: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b8480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1b8484:
    // 0x1b8484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b8484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b8488:
    // 0x1b8488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b8488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b848c:
    // 0x1b848c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1b848cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_1b8490:
    // 0x1b8490: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1b8490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1b8494:
    // 0x1b8494: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1b8494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_1b8498:
    // 0x1b8498: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x1b8498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_1b849c:
    // 0x1b849c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b849cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b84a0:
    // 0x1b84a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b84a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b84a4:
    // 0x1b84a4: 0xc06e13c  jal         func_1B84F0
label_1b84a8:
    if (ctx->pc == 0x1B84A8u) {
        ctx->pc = 0x1B84ACu;
        goto label_1b84ac;
    }
    ctx->pc = 0x1B84A4u;
    SET_GPR_U32(ctx, 31, 0x1B84ACu);
    ctx->pc = 0x1B84F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B84F0u, 0x1B84A4u, 0x1B84ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84ACu;
label_1b84ac:
    // 0x1b84ac: 0x3c10001b  lui         $s0, 0x1B
    ctx->pc = 0x1b84acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)27 << 16));
label_1b84b0:
    // 0x1b84b0: 0x26107b00  addiu       $s0, $s0, 0x7B00
    ctx->pc = 0x1b84b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31488));
label_1b84b4:
    // 0x1b84b4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1b84b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1b84b8:
    // 0x1b84b8: 0x200f809  jalr        $s0
label_1b84bc:
    if (ctx->pc == 0x1B84BCu) {
        ctx->pc = 0x1B84C0u;
        goto label_1b84c0;
    }
    ctx->pc = 0x1B84B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1B84C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B84B8u, 0x1B84C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B84C0u;
label_1b84c0:
    // 0x1b84c0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b84c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b84c4:
    // 0x1b84c4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1b84c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1b84c8:
    // 0x1b84c8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x1b84c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1b84cc:
    // 0x1b84cc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1b84ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1b84d0:
    // 0x1b84d0: 0xc06cf3c  jal         func_1B3CF0
label_1b84d4:
    if (ctx->pc == 0x1B84D4u) {
        ctx->pc = 0x1B84D8u;
        goto label_1b84d8;
    }
    ctx->pc = 0x1B84D0u;
    SET_GPR_U32(ctx, 31, 0x1B84D8u);
    ctx->pc = 0x1B3CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CF0u, 0x1B84D0u, 0x1B84D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84D8u;
label_1b84d8:
    // 0x1b84d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b84d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b84dc:
    // 0x1b84dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b84dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b84e0:
    // 0x1b84e0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1b84e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1b84e4:
    // 0x1b84e4: 0x3e00008  jr          $ra
label_1b84e8:
    if (ctx->pc == 0x1B84E8u) {
        ctx->pc = 0x1B84ECu;
        goto label_1b84ec;
    }
    ctx->pc = 0x1B84E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B84E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B84ECu;
label_1b84ec:
    // 0x1b84ec: 0x0  nop
    ctx->pc = 0x1b84ecu;
    // NOP
    ctx->pc = 0x1b84f0u;
}
