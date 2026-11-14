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

// Function: sub_00180080
// Address: 0x180080 - 0x1800f0
void sub_00180080_0x180080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180080_0x180080");
#endif

    switch (ctx->pc) {
        case 0x180080u: goto label_180080;
        case 0x180084u: goto label_180084;
        case 0x180088u: goto label_180088;
        case 0x18008cu: goto label_18008c;
        case 0x180090u: goto label_180090;
        case 0x180094u: goto label_180094;
        case 0x180098u: goto label_180098;
        case 0x18009cu: goto label_18009c;
        case 0x1800a0u: goto label_1800a0;
        case 0x1800a4u: goto label_1800a4;
        case 0x1800a8u: goto label_1800a8;
        case 0x1800acu: goto label_1800ac;
        case 0x1800b0u: goto label_1800b0;
        case 0x1800b4u: goto label_1800b4;
        case 0x1800b8u: goto label_1800b8;
        case 0x1800bcu: goto label_1800bc;
        case 0x1800c0u: goto label_1800c0;
        case 0x1800c4u: goto label_1800c4;
        case 0x1800c8u: goto label_1800c8;
        case 0x1800ccu: goto label_1800cc;
        case 0x1800d0u: goto label_1800d0;
        case 0x1800d4u: goto label_1800d4;
        case 0x1800d8u: goto label_1800d8;
        case 0x1800dcu: goto label_1800dc;
        case 0x1800e0u: goto label_1800e0;
        case 0x1800e4u: goto label_1800e4;
        case 0x1800e8u: goto label_1800e8;
        case 0x1800ecu: goto label_1800ec;
        default: break;
    }

    ctx->pc = 0x180080u;

label_180080:
    // 0x180080: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x180080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_180084:
    // 0x180084: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x180084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_180088:
    // 0x180088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18008c:
    // 0x18008c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18008cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_180090:
    // 0x180090: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x180090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_180094:
    // 0x180094: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x180094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_180098:
    // 0x180098: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x180098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_18009c:
    // 0x18009c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18009cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1800a0:
    // 0x1800a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1800a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1800a4:
    // 0x1800a4: 0xc056df8  jal         func_15B7E0
label_1800a8:
    if (ctx->pc == 0x1800A8u) {
        ctx->pc = 0x1800ACu;
        goto label_1800ac;
    }
    ctx->pc = 0x1800A4u;
    SET_GPR_U32(ctx, 31, 0x1800ACu);
    ctx->pc = 0x15B7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B7E0u, 0x1800A4u, 0x1800ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800ACu;
label_1800ac:
    // 0x1800ac: 0x3c100016  lui         $s0, 0x16
    ctx->pc = 0x1800acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)22 << 16));
label_1800b0:
    // 0x1800b0: 0x2610b340  addiu       $s0, $s0, -0x4CC0
    ctx->pc = 0x1800b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947648));
label_1800b4:
    // 0x1800b4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1800b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1800b8:
    // 0x1800b8: 0x200f809  jalr        $s0
label_1800bc:
    if (ctx->pc == 0x1800BCu) {
        ctx->pc = 0x1800C0u;
        goto label_1800c0;
    }
    ctx->pc = 0x1800B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1800C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1800B8u, 0x1800C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1800C0u;
label_1800c0:
    // 0x1800c0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1800c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1800c4:
    // 0x1800c4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1800c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1800c8:
    // 0x1800c8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x1800c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1800cc:
    // 0x1800cc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1800ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1800d0:
    // 0x1800d0: 0xc060048  jal         func_180120
label_1800d4:
    if (ctx->pc == 0x1800D4u) {
        ctx->pc = 0x1800D8u;
        goto label_1800d8;
    }
    ctx->pc = 0x1800D0u;
    SET_GPR_U32(ctx, 31, 0x1800D8u);
    ctx->pc = 0x180120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180120u, 0x1800D0u, 0x1800D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800D8u;
label_1800d8:
    // 0x1800d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1800d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1800dc:
    // 0x1800dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1800dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1800e0:
    // 0x1800e0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1800e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1800e4:
    // 0x1800e4: 0x3e00008  jr          $ra
label_1800e8:
    if (ctx->pc == 0x1800E8u) {
        ctx->pc = 0x1800ECu;
        goto label_1800ec;
    }
    ctx->pc = 0x1800E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1800E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1800ECu;
label_1800ec:
    // 0x1800ec: 0x0  nop
    ctx->pc = 0x1800ecu;
    // NOP
    ctx->pc = 0x1800f0u;
}
