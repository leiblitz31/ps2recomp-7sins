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

// Function: sub_001AEC10
// Address: 0x1aec10 - 0x1aed60
void sub_001AEC10_0x1aec10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEC10_0x1aec10");
#endif

    switch (ctx->pc) {
        case 0x1aec2cu: goto label_1aec2c;
        case 0x1aec4cu: goto label_1aec4c;
        case 0x1aec74u: goto label_1aec74;
        case 0x1aec84u: goto label_1aec84;
        case 0x1aec94u: goto label_1aec94;
        case 0x1aeca4u: goto label_1aeca4;
        case 0x1aecccu: goto label_1aeccc;
        case 0x1aece8u: goto label_1aece8;
        default: break;
    }

    ctx->pc = 0x1aec10u;

    // 0x1aec10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aec10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aec14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aec14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aec18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1aec18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1aec1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1aec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aec20: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1aec20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1aec24: 0xc064924  jal         func_192490
    ctx->pc = 0x1AEC24u;
    SET_GPR_U32(ctx, 31, 0x1AEC2Cu);
    ctx->pc = 0x192490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192490u, 0x1AEC24u, 0x1AEC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC2Cu;
label_1aec2c:
    // 0x1aec2c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1aec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1aec30: 0x246347b0  addiu       $v1, $v1, 0x47B0
    ctx->pc = 0x1aec30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18352));
    // 0x1aec34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aec34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aec38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1aec38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1aec3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aec40: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1aec40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1aec44: 0xc056254  jal         func_158950
    ctx->pc = 0x1AEC44u;
    SET_GPR_U32(ctx, 31, 0x1AEC4Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1AEC44u, 0x1AEC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC4Cu;
label_1aec4c:
    // 0x1aec4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aec50: 0x24440184  addiu       $a0, $v0, 0x184
    ctx->pc = 0x1aec50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 388));
    // 0x1aec54: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1aec54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x1aec58: 0x24a5f5f0  addiu       $a1, $a1, -0xA10
    ctx->pc = 0x1aec58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964720));
    // 0x1aec5c: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1aec5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
    // 0x1aec60: 0x24c6f570  addiu       $a2, $a2, -0xA90
    ctx->pc = 0x1aec60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964592));
    // 0x1aec64: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1aec64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1aec68: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1aec68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aec6c: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x1AEC6Cu;
    SET_GPR_U32(ctx, 31, 0x1AEC74u);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x1AEC6Cu, 0x1AEC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC74u;
label_1aec74:
    // 0x1aec74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aec78: 0x244401cc  addiu       $a0, $v0, 0x1CC
    ctx->pc = 0x1aec78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 460));
    // 0x1aec7c: 0xc06bd4c  jal         func_1AF530
    ctx->pc = 0x1AEC7Cu;
    SET_GPR_U32(ctx, 31, 0x1AEC84u);
    ctx->pc = 0x1AF530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF530u, 0x1AEC7Cu, 0x1AEC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC84u;
label_1aec84:
    // 0x1aec84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aec84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aec88: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1aec88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1aec8c: 0xc06bcf4  jal         func_1AF3D0
    ctx->pc = 0x1AEC8Cu;
    SET_GPR_U32(ctx, 31, 0x1AEC94u);
    ctx->pc = 0x1AF3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF3D0u, 0x1AEC8Cu, 0x1AEC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC94u;
label_1aec94:
    // 0x1aec94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aec94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aec98: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1aec98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1aec9c: 0xc06bc9c  jal         func_1AF270
    ctx->pc = 0x1AEC9Cu;
    SET_GPR_U32(ctx, 31, 0x1AECA4u);
    ctx->pc = 0x1AF270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF270u, 0x1AEC9Cu, 0x1AECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AECA4u;
label_1aeca4:
    // 0x1aeca4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aeca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aeca8: 0x24440214  addiu       $a0, $v0, 0x214
    ctx->pc = 0x1aeca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 532));
    // 0x1aecac: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1aecacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1aecb0: 0x24a50930  addiu       $a1, $a1, 0x930
    ctx->pc = 0x1aecb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2352));
    // 0x1aecb4: 0x3c060021  lui         $a2, 0x21
    ctx->pc = 0x1aecb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33 << 16));
    // 0x1aecb8: 0x24c60a80  addiu       $a2, $a2, 0xA80
    ctx->pc = 0x1aecb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2688));
    // 0x1aecbc: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x1aecbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1aecc0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1aecc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aecc4: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x1AECC4u;
    SET_GPR_U32(ctx, 31, 0x1AECCCu);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x1AECC4u, 0x1AECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AECCCu;
label_1aeccc:
    // 0x1aeccc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aecd0: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1aecd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x1aecd4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1aecd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1aecd8: 0x24a56d98  addiu       $a1, $a1, 0x6D98
    ctx->pc = 0x1aecd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28056));
    // 0x1aecdc: 0x24460064  addiu       $a2, $v0, 0x64
    ctx->pc = 0x1aecdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1aece0: 0xc08e514  jal         func_239450
    ctx->pc = 0x1AECE0u;
    SET_GPR_U32(ctx, 31, 0x1AECE8u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x1AECE0u, 0x1AECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AECE8u;
label_1aece8:
    // 0x1aece8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1aece8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aecec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aecf0: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1aecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x1aecf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aecf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aecf8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aecfc: 0xe4400488  swc1        $f0, 0x488($v0)
    ctx->pc = 0x1aecfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1160), bits); }
    // 0x1aed00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aed00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1aed04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aed04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aed08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aed08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aed0c: 0xe440048c  swc1        $f0, 0x48C($v0)
    ctx->pc = 0x1aed0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1164), bits); }
    // 0x1aed10: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1aed10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1aed14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aed14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aed18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aed1c: 0xe440049c  swc1        $f0, 0x49C($v0)
    ctx->pc = 0x1aed1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1180), bits); }
    // 0x1aed20: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1aed20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1aed24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aed24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aed28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aed28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aed2c: 0xe44004a0  swc1        $f0, 0x4A0($v0)
    ctx->pc = 0x1aed2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1184), bits); }
    // 0x1aed30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aed34: 0xac4004a4  sw          $zero, 0x4A4($v0)
    ctx->pc = 0x1aed34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1188), GPR_U32(ctx, 0));
    // 0x1aed38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aed38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aed3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aed40: 0xa04304a8  sb          $v1, 0x4A8($v0)
    ctx->pc = 0x1aed40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1192), (uint8_t)GPR_U32(ctx, 3));
    // 0x1aed44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aed44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aed48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aed48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aed4c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1aed4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aed50: 0x3e00008  jr          $ra
    ctx->pc = 0x1AED50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AED50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AED58u;
    // 0x1aed58: 0x0  nop
    ctx->pc = 0x1aed58u;
    // NOP
    // 0x1aed5c: 0x0  nop
    ctx->pc = 0x1aed5cu;
    // NOP
    ctx->pc = 0x1aed60u;
}
