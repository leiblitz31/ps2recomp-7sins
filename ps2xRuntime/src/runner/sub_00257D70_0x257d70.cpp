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

// Function: sub_00257D70
// Address: 0x257d70 - 0x2580e0
void sub_00257D70_0x257d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257D70_0x257d70");
#endif

    switch (ctx->pc) {
        case 0x257d90u: goto label_257d90;
        case 0x257dd4u: goto label_257dd4;
        case 0x257e0cu: goto label_257e0c;
        case 0x257e1cu: goto label_257e1c;
        case 0x257e2cu: goto label_257e2c;
        case 0x257e3cu: goto label_257e3c;
        case 0x257e4cu: goto label_257e4c;
        case 0x257e64u: goto label_257e64;
        case 0x257e74u: goto label_257e74;
        case 0x257e84u: goto label_257e84;
        case 0x257f24u: goto label_257f24;
        case 0x257f44u: goto label_257f44;
        case 0x257f54u: goto label_257f54;
        case 0x257f64u: goto label_257f64;
        case 0x257fa4u: goto label_257fa4;
        case 0x257fc4u: goto label_257fc4;
        case 0x258004u: goto label_258004;
        case 0x258014u: goto label_258014;
        case 0x258028u: goto label_258028;
        case 0x258034u: goto label_258034;
        case 0x258058u: goto label_258058;
        case 0x258080u: goto label_258080;
        case 0x25809cu: goto label_25809c;
        default: break;
    }

    ctx->pc = 0x257d70u;

    // 0x257d70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x257d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x257d74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x257d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x257d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x257d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257d7c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x257d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x257d80: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x257d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257d84: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x257d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x257d88: 0xc091174  jal         func_2445D0
    ctx->pc = 0x257D88u;
    SET_GPR_U32(ctx, 31, 0x257D90u);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x257D88u, 0x257D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257D90u;
label_257d90:
    // 0x257d90: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x257d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x257d94: 0x24635900  addiu       $v1, $v1, 0x5900
    ctx->pc = 0x257d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22784));
    // 0x257d98: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257d9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x257d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x257da0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257da4: 0xa0400054  sb          $zero, 0x54($v0)
    ctx->pc = 0x257da4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x257da8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x257da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257dac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257db0: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x257db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x257db4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x257db4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257db8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257dbc: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x257dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x257dc0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257dc4: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x257dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x257dc8: 0x27859eec  addiu       $a1, $gp, -0x6114
    ctx->pc = 0x257dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942444));
    // 0x257dcc: 0xc040304  jal         func_100C10
    ctx->pc = 0x257DCCu;
    SET_GPR_U32(ctx, 31, 0x257DD4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x257DCCu, 0x257DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257DD4u;
label_257dd4:
    // 0x257dd4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257dd8: 0xa040007c  sb          $zero, 0x7C($v0)
    ctx->pc = 0x257dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x257ddc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257de0: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x257de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x257de4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x257de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257de8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257dec: 0xa0430084  sb          $v1, 0x84($v0)
    ctx->pc = 0x257decu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 132), (uint8_t)GPR_U32(ctx, 3));
    // 0x257df0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x257df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x257df4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257df8: 0xac430088  sw          $v1, 0x88($v0)
    ctx->pc = 0x257df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
    // 0x257dfc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257e00: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x257e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x257e04: 0xc0965f8  jal         func_2597E0
    ctx->pc = 0x257E04u;
    SET_GPR_U32(ctx, 31, 0x257E0Cu);
    ctx->pc = 0x2597E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2597E0u, 0x257E04u, 0x257E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E0Cu;
label_257e0c:
    // 0x257e0c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257e10: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x257e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x257e14: 0xc0965f8  jal         func_2597E0
    ctx->pc = 0x257E14u;
    SET_GPR_U32(ctx, 31, 0x257E1Cu);
    ctx->pc = 0x2597E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2597E0u, 0x257E14u, 0x257E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E1Cu;
label_257e1c:
    // 0x257e1c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257e20: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x257e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x257e24: 0xc0965f8  jal         func_2597E0
    ctx->pc = 0x257E24u;
    SET_GPR_U32(ctx, 31, 0x257E2Cu);
    ctx->pc = 0x2597E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2597E0u, 0x257E24u, 0x257E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E2Cu;
label_257e2c:
    // 0x257e2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257e30: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x257e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x257e34: 0xc0965f8  jal         func_2597E0
    ctx->pc = 0x257E34u;
    SET_GPR_U32(ctx, 31, 0x257E3Cu);
    ctx->pc = 0x2597E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2597E0u, 0x257E34u, 0x257E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E3Cu;
label_257e3c:
    // 0x257e3c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257e40: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x257e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x257e44: 0xc0965f8  jal         func_2597E0
    ctx->pc = 0x257E44u;
    SET_GPR_U32(ctx, 31, 0x257E4Cu);
    ctx->pc = 0x2597E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2597E0u, 0x257E44u, 0x257E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E4Cu;
label_257e4c:
    // 0x257e4c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257e50: 0xac4000c8  sw          $zero, 0xC8($v0)
    ctx->pc = 0x257e50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 0));
    // 0x257e54: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257e58: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x257e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x257e5c: 0xc0495d4  jal         func_125750
    ctx->pc = 0x257E5Cu;
    SET_GPR_U32(ctx, 31, 0x257E64u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x257E5Cu, 0x257E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E64u;
label_257e64:
    // 0x257e64: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257e68: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x257e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
    // 0x257e6c: 0xc0495d4  jal         func_125750
    ctx->pc = 0x257E6Cu;
    SET_GPR_U32(ctx, 31, 0x257E74u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x257E6Cu, 0x257E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E74u;
label_257e74:
    // 0x257e74: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257e78: 0x244400e8  addiu       $a0, $v0, 0xE8
    ctx->pc = 0x257e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
    // 0x257e7c: 0xc0610e4  jal         func_184390
    ctx->pc = 0x257E7Cu;
    SET_GPR_U32(ctx, 31, 0x257E84u);
    ctx->pc = 0x184390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184390u, 0x257E7Cu, 0x257E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E84u;
label_257e84:
    // 0x257e84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x257e84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257e88: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257e8c: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x257e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x257e90: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257e94: 0xa04000f8  sb          $zero, 0xF8($v0)
    ctx->pc = 0x257e94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 248), (uint8_t)GPR_U32(ctx, 0));
    // 0x257e98: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257e9c: 0xa04000f9  sb          $zero, 0xF9($v0)
    ctx->pc = 0x257e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 249), (uint8_t)GPR_U32(ctx, 0));
    // 0x257ea0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x257ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257ea4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257ea8: 0xa04300fa  sb          $v1, 0xFA($v0)
    ctx->pc = 0x257ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 250), (uint8_t)GPR_U32(ctx, 3));
    // 0x257eac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257eb0: 0xa04000fb  sb          $zero, 0xFB($v0)
    ctx->pc = 0x257eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 251), (uint8_t)GPR_U32(ctx, 0));
    // 0x257eb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x257eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257eb8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257ebc: 0xe4400108  swc1        $f0, 0x108($v0)
    ctx->pc = 0x257ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
    // 0x257ec0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257ec4: 0xac40010c  sw          $zero, 0x10C($v0)
    ctx->pc = 0x257ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 0));
    // 0x257ec8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257ecc: 0xa0400110  sb          $zero, 0x110($v0)
    ctx->pc = 0x257eccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 272), (uint8_t)GPR_U32(ctx, 0));
    // 0x257ed0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257ed4: 0xa0400111  sb          $zero, 0x111($v0)
    ctx->pc = 0x257ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 273), (uint8_t)GPR_U32(ctx, 0));
    // 0x257ed8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257edc: 0xa0400112  sb          $zero, 0x112($v0)
    ctx->pc = 0x257edcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 274), (uint8_t)GPR_U32(ctx, 0));
    // 0x257ee0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257ee4: 0xa0400113  sb          $zero, 0x113($v0)
    ctx->pc = 0x257ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 275), (uint8_t)GPR_U32(ctx, 0));
    // 0x257ee8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x257ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x257eec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257ef0: 0xac430114  sw          $v1, 0x114($v0)
    ctx->pc = 0x257ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 3));
    // 0x257ef4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257ef8: 0xa0400118  sb          $zero, 0x118($v0)
    ctx->pc = 0x257ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 280), (uint8_t)GPR_U32(ctx, 0));
    // 0x257efc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257f00: 0xac400124  sw          $zero, 0x124($v0)
    ctx->pc = 0x257f00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 0));
    // 0x257f04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257f08: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x257f08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x257f0c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257f10: 0xac40012c  sw          $zero, 0x12C($v0)
    ctx->pc = 0x257f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 0));
    // 0x257f14: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257f18: 0x24440130  addiu       $a0, $v0, 0x130
    ctx->pc = 0x257f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x257f1c: 0xc0965f8  jal         func_2597E0
    ctx->pc = 0x257F1Cu;
    SET_GPR_U32(ctx, 31, 0x257F24u);
    ctx->pc = 0x2597E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2597E0u, 0x257F1Cu, 0x257F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F24u;
label_257f24:
    // 0x257f24: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257f28: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x257f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    // 0x257f2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257f30: 0xac400140  sw          $zero, 0x140($v0)
    ctx->pc = 0x257f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 0));
    // 0x257f34: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257f38: 0x24440148  addiu       $a0, $v0, 0x148
    ctx->pc = 0x257f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
    // 0x257f3c: 0xc097050  jal         func_25C140
    ctx->pc = 0x257F3Cu;
    SET_GPR_U32(ctx, 31, 0x257F44u);
    ctx->pc = 0x25C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C140u, 0x257F3Cu, 0x257F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F44u;
label_257f44:
    // 0x257f44: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257f48: 0x24440168  addiu       $a0, $v0, 0x168
    ctx->pc = 0x257f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x257f4c: 0xc0965a0  jal         func_259680
    ctx->pc = 0x257F4Cu;
    SET_GPR_U32(ctx, 31, 0x257F54u);
    ctx->pc = 0x259680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259680u, 0x257F4Cu, 0x257F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F54u;
label_257f54:
    // 0x257f54: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257f58: 0x24440174  addiu       $a0, $v0, 0x174
    ctx->pc = 0x257f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 372));
    // 0x257f5c: 0xc096548  jal         func_259520
    ctx->pc = 0x257F5Cu;
    SET_GPR_U32(ctx, 31, 0x257F64u);
    ctx->pc = 0x259520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259520u, 0x257F5Cu, 0x257F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257F64u;
label_257f64:
    // 0x257f64: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257f68: 0xac400180  sw          $zero, 0x180($v0)
    ctx->pc = 0x257f68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 0));
    // 0x257f6c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257f70: 0xac400184  sw          $zero, 0x184($v0)
    ctx->pc = 0x257f70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 388), GPR_U32(ctx, 0));
    // 0x257f74: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257f78: 0xac400188  sw          $zero, 0x188($v0)
    ctx->pc = 0x257f78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 392), GPR_U32(ctx, 0));
    // 0x257f7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257f80: 0xac400194  sw          $zero, 0x194($v0)
    ctx->pc = 0x257f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 404), GPR_U32(ctx, 0));
    // 0x257f84: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257f88: 0xac400198  sw          $zero, 0x198($v0)
    ctx->pc = 0x257f88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 408), GPR_U32(ctx, 0));
    // 0x257f8c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257f90: 0xac40019c  sw          $zero, 0x19C($v0)
    ctx->pc = 0x257f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 412), GPR_U32(ctx, 0));
    // 0x257f94: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257f98: 0x244401a4  addiu       $a0, $v0, 0x1A4
    ctx->pc = 0x257f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    // 0x257f9c: 0xc0970dc  jal         func_25C370
    ctx->pc = 0x257F9Cu;
    SET_GPR_U32(ctx, 31, 0x257FA4u);
    ctx->pc = 0x25C370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C370u, 0x257F9Cu, 0x257FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257FA4u;
label_257fa4:
    // 0x257fa4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257fa8: 0xac4001e8  sw          $zero, 0x1E8($v0)
    ctx->pc = 0x257fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 488), GPR_U32(ctx, 0));
    // 0x257fac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257fb0: 0xac4001ec  sw          $zero, 0x1EC($v0)
    ctx->pc = 0x257fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 492), GPR_U32(ctx, 0));
    // 0x257fb4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257fb8: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x257fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x257fbc: 0xc0964f0  jal         func_2593C0
    ctx->pc = 0x257FBCu;
    SET_GPR_U32(ctx, 31, 0x257FC4u);
    ctx->pc = 0x2593C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2593C0u, 0x257FBCu, 0x257FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257FC4u;
label_257fc4:
    // 0x257fc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x257fc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x257fc8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257fcc: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x257fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x257fd0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257fd4: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x257fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x257fd8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257fdc: 0xe44000fc  swc1        $f0, 0xFC($v0)
    ctx->pc = 0x257fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 252), bits); }
    // 0x257fe0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257fe4: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x257fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x257fe8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x257fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x257fec: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x257fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x257ff0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257ff4: 0x24440174  addiu       $a0, $v0, 0x174
    ctx->pc = 0x257ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 372));
    // 0x257ff8: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x257ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x257ffc: 0xc0963d8  jal         func_258F60
    ctx->pc = 0x257FFCu;
    SET_GPR_U32(ctx, 31, 0x258004u);
    ctx->pc = 0x258F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258F60u, 0x257FFCu, 0x258004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258004u;
label_258004:
    // 0x258004: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x258004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258008: 0x244401f4  addiu       $a0, $v0, 0x1F4
    ctx->pc = 0x258008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x25800c: 0xc096384  jal         func_258E10
    ctx->pc = 0x25800Cu;
    SET_GPR_U32(ctx, 31, 0x258014u);
    ctx->pc = 0x258E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E10u, 0x25800Cu, 0x258014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258014u;
label_258014:
    // 0x258014: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x258014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258018: 0x24440168  addiu       $a0, $v0, 0x168
    ctx->pc = 0x258018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x25801c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x25801cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x258020: 0xc0962cc  jal         func_258B30
    ctx->pc = 0x258020u;
    SET_GPR_U32(ctx, 31, 0x258028u);
    ctx->pc = 0x258B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258B30u, 0x258020u, 0x258028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258028u;
label_258028:
    // 0x258028: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x258028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25802c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25802Cu;
    {
        const bool branch_taken_0x25802c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25802c) {
            ctx->pc = 0x258060u;
            goto label_258060;
        }
    }
    ctx->pc = 0x258034u;
label_258034:
    // 0x258034: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x258034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x258038: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x258038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25803c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25803cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x258040: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x258040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x258044: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x258044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258048: 0x24440168  addiu       $a0, $v0, 0x168
    ctx->pc = 0x258048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x25804c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25804cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258050: 0xc0962b4  jal         func_258AD0
    ctx->pc = 0x258050u;
    SET_GPR_U32(ctx, 31, 0x258058u);
    ctx->pc = 0x258AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AD0u, 0x258050u, 0x258058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258058u;
label_258058:
    // 0x258058: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x258058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x25805c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x25805cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_258060:
    // 0x258060: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x258060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x258064: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x258064u;
    {
        const bool branch_taken_0x258064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258064) {
            ctx->pc = 0x258034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258034;
        }
    }
    ctx->pc = 0x25806Cu;
    // 0x25806c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25806cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258070: 0x24440168  addiu       $a0, $v0, 0x168
    ctx->pc = 0x258070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x258074: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x258074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x258078: 0xc0962b4  jal         func_258AD0
    ctx->pc = 0x258078u;
    SET_GPR_U32(ctx, 31, 0x258080u);
    ctx->pc = 0x258AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AD0u, 0x258078u, 0x258080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258080u;
label_258080:
    // 0x258080: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x258080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x258084: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x258084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258088: 0x2444018c  addiu       $a0, $v0, 0x18C
    ctx->pc = 0x258088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 396));
    // 0x25808c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25808cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258090: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x258090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x258094: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x258094u;
    SET_GPR_U32(ctx, 31, 0x25809Cu);
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x258094u, 0x25809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25809Cu;
label_25809c:
    // 0x25809c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25809cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2580a0: 0xac400144  sw          $zero, 0x144($v0)
    ctx->pc = 0x2580a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 0));
    // 0x2580a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2580a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2580a8: 0xac40011c  sw          $zero, 0x11C($v0)
    ctx->pc = 0x2580a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 0));
    // 0x2580ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2580acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2580b0: 0xac4001a0  sw          $zero, 0x1A0($v0)
    ctx->pc = 0x2580b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 416), GPR_U32(ctx, 0));
    // 0x2580b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2580b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2580b8: 0xa04001f0  sb          $zero, 0x1F0($v0)
    ctx->pc = 0x2580b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 496), (uint8_t)GPR_U32(ctx, 0));
    // 0x2580bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2580bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2580c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2580c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2580c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2580c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2580c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2580c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2580cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2580CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2580CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2580D4u;
    // 0x2580d4: 0x0  nop
    ctx->pc = 0x2580d4u;
    // NOP
    // 0x2580d8: 0x0  nop
    ctx->pc = 0x2580d8u;
    // NOP
    // 0x2580dc: 0x0  nop
    ctx->pc = 0x2580dcu;
    // NOP
    ctx->pc = 0x2580e0u;
}
