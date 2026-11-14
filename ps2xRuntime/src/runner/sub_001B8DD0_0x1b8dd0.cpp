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

// Function: sub_001B8DD0
// Address: 0x1b8dd0 - 0x1b8f30
void sub_001B8DD0_0x1b8dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8DD0_0x1b8dd0");
#endif

    switch (ctx->pc) {
        case 0x1b8df0u: goto label_1b8df0;
        case 0x1b8e10u: goto label_1b8e10;
        case 0x1b8e20u: goto label_1b8e20;
        case 0x1b8e30u: goto label_1b8e30;
        case 0x1b8e40u: goto label_1b8e40;
        case 0x1b8e50u: goto label_1b8e50;
        case 0x1b8e60u: goto label_1b8e60;
        case 0x1b8e68u: goto label_1b8e68;
        case 0x1b8e74u: goto label_1b8e74;
        case 0x1b8ee8u: goto label_1b8ee8;
        case 0x1b8f0cu: goto label_1b8f0c;
        default: break;
    }

    ctx->pc = 0x1b8dd0u;

    // 0x1b8dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b8dd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b8dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b8dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b8dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b8ddc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b8ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b8de0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b8de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8de4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b8de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b8de8: 0xc064924  jal         func_192490
    ctx->pc = 0x1B8DE8u;
    SET_GPR_U32(ctx, 31, 0x1B8DF0u);
    ctx->pc = 0x192490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192490u, 0x1B8DE8u, 0x1B8DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8DF0u;
label_1b8df0:
    // 0x1b8df0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1b8df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1b8df4: 0x24634870  addiu       $v1, $v1, 0x4870
    ctx->pc = 0x1b8df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18544));
    // 0x1b8df8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8dfc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1b8dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1b8e00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8e04: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x1b8e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x1b8e08: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x1B8E08u;
    SET_GPR_U32(ctx, 31, 0x1B8E10u);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x1B8E08u, 0x1B8E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E10u;
label_1b8e10:
    // 0x1b8e10: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8e14: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x1b8e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x1b8e18: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x1B8E18u;
    SET_GPR_U32(ctx, 31, 0x1B8E20u);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x1B8E18u, 0x1B8E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E20u;
label_1b8e20:
    // 0x1b8e20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8e24: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x1b8e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1b8e28: 0xc06e6a4  jal         func_1B9A90
    ctx->pc = 0x1B8E28u;
    SET_GPR_U32(ctx, 31, 0x1B8E30u);
    ctx->pc = 0x1B9A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9A90u, 0x1B8E28u, 0x1B8E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E30u;
label_1b8e30:
    // 0x1b8e30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8e34: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1b8e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x1b8e38: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x1B8E38u;
    SET_GPR_U32(ctx, 31, 0x1B8E40u);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x1B8E38u, 0x1B8E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E40u;
label_1b8e40:
    // 0x1b8e40: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8e44: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x1b8e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x1b8e48: 0xc06e64c  jal         func_1B9930
    ctx->pc = 0x1B8E48u;
    SET_GPR_U32(ctx, 31, 0x1B8E50u);
    ctx->pc = 0x1B9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9930u, 0x1B8E48u, 0x1B8E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E50u;
label_1b8e50:
    // 0x1b8e50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8e54: 0x244400f4  addiu       $a0, $v0, 0xF4
    ctx->pc = 0x1b8e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 244));
    // 0x1b8e58: 0xc06e5f4  jal         func_1B97D0
    ctx->pc = 0x1B8E58u;
    SET_GPR_U32(ctx, 31, 0x1B8E60u);
    ctx->pc = 0x1B97D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B97D0u, 0x1B8E58u, 0x1B8E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E60u;
label_1b8e60:
    // 0x1b8e60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8e64: 0x24500100  addiu       $s0, $v0, 0x100
    ctx->pc = 0x1b8e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
label_1b8e68:
    // 0x1b8e68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8e6c: 0xc06e5e0  jal         func_1B9780
    ctx->pc = 0x1B8E6Cu;
    SET_GPR_U32(ctx, 31, 0x1B8E74u);
    ctx->pc = 0x1B9780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9780u, 0x1B8E6Cu, 0x1B8E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E74u;
label_1b8e74:
    // 0x1b8e74: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x1b8e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1b8e78: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8e7c: 0x244208d0  addiu       $v0, $v0, 0x8D0
    ctx->pc = 0x1b8e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2256));
    // 0x1b8e80: 0x1602fff9  bne         $s0, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B8E80u;
    {
        const bool branch_taken_0x1b8e80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8e80) {
            ctx->pc = 0x1B8E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8e68;
        }
    }
    ctx->pc = 0x1B8E88u;
    // 0x1b8e88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b8e88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8e8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8e90: 0xe44008d0  swc1        $f0, 0x8D0($v0)
    ctx->pc = 0x1b8e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2256), bits); }
    // 0x1b8e94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b8e94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8e98: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8e9c: 0xe44008d4  swc1        $f0, 0x8D4($v0)
    ctx->pc = 0x1b8e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2260), bits); }
    // 0x1b8ea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b8ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8ea4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8ea8: 0xe44008d8  swc1        $f0, 0x8D8($v0)
    ctx->pc = 0x1b8ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2264), bits); }
    // 0x1b8eac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b8eacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b8eb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8eb4: 0xe44008dc  swc1        $f0, 0x8DC($v0)
    ctx->pc = 0x1b8eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2268), bits); }
    // 0x1b8eb8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8ebc: 0xac4008e0  sw          $zero, 0x8E0($v0)
    ctx->pc = 0x1b8ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2272), GPR_U32(ctx, 0));
    // 0x1b8ec0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8ec4: 0xa04008e4  sb          $zero, 0x8E4($v0)
    ctx->pc = 0x1b8ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2276), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8ec8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8ecc: 0xa04008e5  sb          $zero, 0x8E5($v0)
    ctx->pc = 0x1b8eccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2277), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8ed0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8ed4: 0xa04008e6  sb          $zero, 0x8E6($v0)
    ctx->pc = 0x1b8ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2278), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8ed8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8edc: 0x244408f0  addiu       $a0, $v0, 0x8F0
    ctx->pc = 0x1b8edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2288));
    // 0x1b8ee0: 0xc06e5a4  jal         func_1B9690
    ctx->pc = 0x1B8EE0u;
    SET_GPR_U32(ctx, 31, 0x1B8EE8u);
    ctx->pc = 0x1B9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9690u, 0x1B8EE0u, 0x1B8EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8EE8u;
label_1b8ee8:
    // 0x1b8ee8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8eec: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1b8eecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1b8ef0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8ef4: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1b8ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x1b8ef8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b8ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b8efc: 0x24a57438  addiu       $a1, $a1, 0x7438
    ctx->pc = 0x1b8efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29752));
    // 0x1b8f00: 0x24460064  addiu       $a2, $v0, 0x64
    ctx->pc = 0x1b8f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1b8f04: 0xc08e514  jal         func_239450
    ctx->pc = 0x1B8F04u;
    SET_GPR_U32(ctx, 31, 0x1B8F0Cu);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x1B8F04u, 0x1B8F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8F0Cu;
label_1b8f0c:
    // 0x1b8f0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b8f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8f10: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8f14: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1b8f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x1b8f18: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8f1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8f20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b8f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8f24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b8f24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b8f28: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8F30u;
}
