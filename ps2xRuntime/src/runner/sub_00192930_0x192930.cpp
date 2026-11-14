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

// Function: sub_00192930
// Address: 0x192930 - 0x1929d0
void sub_00192930_0x192930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192930_0x192930");
#endif

    switch (ctx->pc) {
        case 0x192988u: goto label_192988;
        case 0x1929a0u: goto label_1929a0;
        case 0x1929b4u: goto label_1929b4;
        default: break;
    }

    ctx->pc = 0x192930u;

    // 0x192930: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x192930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x192934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x192938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19293c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19293cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x192940: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x192940u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x192944: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x192944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x192948: 0x93a40030  lbu         $a0, 0x30($sp)
    ctx->pc = 0x192948u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19294c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19294cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192950: 0xa0640034  sb          $a0, 0x34($v1)
    ctx->pc = 0x192950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 52), (uint8_t)GPR_U32(ctx, 4));
    // 0x192954: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x192954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192958: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19295c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x19295Cu;
    {
        const bool branch_taken_0x19295c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19295c) {
            ctx->pc = 0x1929B4u;
            goto label_1929b4;
        }
    }
    ctx->pc = 0x192964u;
    // 0x192964: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x192964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192968: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x192968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19296c: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x19296cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x192970: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x192970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192974: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x192974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192978: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x192978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x19297c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19297cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192980: 0xc06479c  jal         func_191E70
    ctx->pc = 0x192980u;
    SET_GPR_U32(ctx, 31, 0x192988u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x192980u, 0x192988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192988u;
label_192988:
    // 0x192988: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19298c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192990: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x192994: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x192994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192998: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x192998u;
    SET_GPR_U32(ctx, 31, 0x1929A0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x192998u, 0x1929A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1929A0u;
label_1929a0:
    // 0x1929a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1929a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1929a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1929a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1929a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1929a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1929ac: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1929ACu;
    SET_GPR_U32(ctx, 31, 0x1929B4u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1929ACu, 0x1929B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1929B4u;
label_1929b4:
    // 0x1929b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1929b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1929b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1929b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1929bc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1929bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1929c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1929C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1929C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1929C8u;
    // 0x1929c8: 0x0  nop
    ctx->pc = 0x1929c8u;
    // NOP
    // 0x1929cc: 0x0  nop
    ctx->pc = 0x1929ccu;
    // NOP
    ctx->pc = 0x1929d0u;
}
