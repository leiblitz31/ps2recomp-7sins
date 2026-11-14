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

// Function: sub_002A3A30
// Address: 0x2a3a30 - 0x2a5010
void sub_002A3A30_0x2a3a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3A30_0x2a3a30");
#endif

    switch (ctx->pc) {
        case 0x2a3a4cu: goto label_2a3a4c;
        case 0x2a3b60u: goto label_2a3b60;
        case 0x2a3bc8u: goto label_2a3bc8;
        case 0x2a3c1cu: goto label_2a3c1c;
        case 0x2a3c3cu: goto label_2a3c3c;
        case 0x2a3c9cu: goto label_2a3c9c;
        case 0x2a3cb4u: goto label_2a3cb4;
        case 0x2a3cd4u: goto label_2a3cd4;
        case 0x2a3ce8u: goto label_2a3ce8;
        case 0x2a3d10u: goto label_2a3d10;
        case 0x2a3d40u: goto label_2a3d40;
        case 0x2a3d54u: goto label_2a3d54;
        case 0x2a3d78u: goto label_2a3d78;
        case 0x2a3d94u: goto label_2a3d94;
        case 0x2a3dacu: goto label_2a3dac;
        case 0x2a3dc0u: goto label_2a3dc0;
        case 0x2a3dd8u: goto label_2a3dd8;
        case 0x2a3e00u: goto label_2a3e00;
        case 0x2a3e1cu: goto label_2a3e1c;
        case 0x2a3e44u: goto label_2a3e44;
        case 0x2a3e54u: goto label_2a3e54;
        case 0x2a3e6cu: goto label_2a3e6c;
        case 0x2a3e80u: goto label_2a3e80;
        case 0x2a3e88u: goto label_2a3e88;
        case 0x2a3f00u: goto label_2a3f00;
        case 0x2a3f18u: goto label_2a3f18;
        case 0x2a3f30u: goto label_2a3f30;
        case 0x2a3f40u: goto label_2a3f40;
        case 0x2a3f68u: goto label_2a3f68;
        case 0x2a3f7cu: goto label_2a3f7c;
        case 0x2a3f9cu: goto label_2a3f9c;
        case 0x2a3fbcu: goto label_2a3fbc;
        case 0x2a4008u: goto label_2a4008;
        case 0x2a4018u: goto label_2a4018;
        case 0x2a405cu: goto label_2a405c;
        case 0x2a4070u: goto label_2a4070;
        case 0x2a4080u: goto label_2a4080;
        case 0x2a4094u: goto label_2a4094;
        case 0x2a409cu: goto label_2a409c;
        case 0x2a40a8u: goto label_2a40a8;
        case 0x2a40bcu: goto label_2a40bc;
        case 0x2a40ecu: goto label_2a40ec;
        case 0x2a4100u: goto label_2a4100;
        case 0x2a4108u: goto label_2a4108;
        case 0x2a4114u: goto label_2a4114;
        case 0x2a4128u: goto label_2a4128;
        case 0x2a414cu: goto label_2a414c;
        case 0x2a4160u: goto label_2a4160;
        case 0x2a4168u: goto label_2a4168;
        case 0x2a4174u: goto label_2a4174;
        case 0x2a4188u: goto label_2a4188;
        case 0x2a41d0u: goto label_2a41d0;
        case 0x2a41dcu: goto label_2a41dc;
        case 0x2a41f0u: goto label_2a41f0;
        case 0x2a4210u: goto label_2a4210;
        case 0x2a4240u: goto label_2a4240;
        case 0x2a425cu: goto label_2a425c;
        case 0x2a4268u: goto label_2a4268;
        case 0x2a42c0u: goto label_2a42c0;
        case 0x2a42e0u: goto label_2a42e0;
        case 0x2a4300u: goto label_2a4300;
        case 0x2a4320u: goto label_2a4320;
        case 0x2a4340u: goto label_2a4340;
        case 0x2a4370u: goto label_2a4370;
        case 0x2a4388u: goto label_2a4388;
        case 0x2a43b4u: goto label_2a43b4;
        case 0x2a43d4u: goto label_2a43d4;
        case 0x2a43ecu: goto label_2a43ec;
        case 0x2a43fcu: goto label_2a43fc;
        case 0x2a4414u: goto label_2a4414;
        case 0x2a4434u: goto label_2a4434;
        case 0x2a4460u: goto label_2a4460;
        case 0x2a4474u: goto label_2a4474;
        case 0x2a44e4u: goto label_2a44e4;
        case 0x2a4580u: goto label_2a4580;
        case 0x2a45b8u: goto label_2a45b8;
        case 0x2a45ccu: goto label_2a45cc;
        case 0x2a45d8u: goto label_2a45d8;
        case 0x2a465cu: goto label_2a465c;
        case 0x2a471cu: goto label_2a471c;
        case 0x2a4738u: goto label_2a4738;
        case 0x2a4748u: goto label_2a4748;
        case 0x2a4760u: goto label_2a4760;
        case 0x2a478cu: goto label_2a478c;
        case 0x2a47acu: goto label_2a47ac;
        case 0x2a47c0u: goto label_2a47c0;
        case 0x2a47fcu: goto label_2a47fc;
        case 0x2a484cu: goto label_2a484c;
        case 0x2a4864u: goto label_2a4864;
        case 0x2a48acu: goto label_2a48ac;
        case 0x2a48f4u: goto label_2a48f4;
        case 0x2a4938u: goto label_2a4938;
        case 0x2a4994u: goto label_2a4994;
        case 0x2a49c0u: goto label_2a49c0;
        case 0x2a49d8u: goto label_2a49d8;
        case 0x2a49e4u: goto label_2a49e4;
        case 0x2a49f4u: goto label_2a49f4;
        case 0x2a4a08u: goto label_2a4a08;
        case 0x2a4a88u: goto label_2a4a88;
        case 0x2a4ad4u: goto label_2a4ad4;
        case 0x2a4aecu: goto label_2a4aec;
        case 0x2a4b10u: goto label_2a4b10;
        case 0x2a4b30u: goto label_2a4b30;
        case 0x2a4c5cu: goto label_2a4c5c;
        case 0x2a4c68u: goto label_2a4c68;
        case 0x2a4c80u: goto label_2a4c80;
        case 0x2a4ca0u: goto label_2a4ca0;
        case 0x2a4ce4u: goto label_2a4ce4;
        case 0x2a4d84u: goto label_2a4d84;
        case 0x2a4dbcu: goto label_2a4dbc;
        case 0x2a4dd8u: goto label_2a4dd8;
        case 0x2a4dfcu: goto label_2a4dfc;
        case 0x2a4e24u: goto label_2a4e24;
        case 0x2a4e50u: goto label_2a4e50;
        case 0x2a4e74u: goto label_2a4e74;
        case 0x2a4e90u: goto label_2a4e90;
        case 0x2a4ea8u: goto label_2a4ea8;
        case 0x2a4ef0u: goto label_2a4ef0;
        case 0x2a4f20u: goto label_2a4f20;
        case 0x2a4f40u: goto label_2a4f40;
        case 0x2a4f64u: goto label_2a4f64;
        case 0x2a4f9cu: goto label_2a4f9c;
        default: break;
    }

    ctx->pc = 0x2a3a30u;

    // 0x2a3a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a3a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a3a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a3a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a3a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a3a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a3a3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2a3a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2a3a40: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a3a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3a44: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x2A3A44u;
    SET_GPR_U32(ctx, 31, 0x2A3A4Cu);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2A3A44u, 0x2A3A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3A4Cu;
label_2a3a4c:
    // 0x2a3a4c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a3a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2a3a50: 0x24636300  addiu       $v1, $v1, 0x6300
    ctx->pc = 0x2a3a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25344));
    // 0x2a3a54: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3a58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a3a5c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3a60: 0xa0400054  sb          $zero, 0x54($v0)
    ctx->pc = 0x2a3a60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3a64: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3a68: 0xac4000b8  sw          $zero, 0xB8($v0)
    ctx->pc = 0x2a3a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
    // 0x2a3a6c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3a70: 0xac4000bc  sw          $zero, 0xBC($v0)
    ctx->pc = 0x2a3a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 0));
    // 0x2a3a74: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3a78: 0xac4000c0  sw          $zero, 0xC0($v0)
    ctx->pc = 0x2a3a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 0));
    // 0x2a3a7c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3a80: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x2a3a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    // 0x2a3a84: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3a88: 0xac400114  sw          $zero, 0x114($v0)
    ctx->pc = 0x2a3a88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 0));
    // 0x2a3a8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3a90: 0xac400118  sw          $zero, 0x118($v0)
    ctx->pc = 0x2a3a90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
    // 0x2a3a94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3a98: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2a3a98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3a9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3a9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3aa0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3aa4: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x2a3aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x2a3aa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3aa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3aac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3ab0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2a3ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2a3ab4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3ab8: 0xac40012c  sw          $zero, 0x12C($v0)
    ctx->pc = 0x2a3ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 0));
    // 0x2a3abc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3ac0: 0xac400130  sw          $zero, 0x130($v0)
    ctx->pc = 0x2a3ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
    // 0x2a3ac4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3ac8: 0xac400180  sw          $zero, 0x180($v0)
    ctx->pc = 0x2a3ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 0));
    // 0x2a3acc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3ad0: 0xac400184  sw          $zero, 0x184($v0)
    ctx->pc = 0x2a3ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 388), GPR_U32(ctx, 0));
    // 0x2a3ad4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3ad8: 0xa0400188  sb          $zero, 0x188($v0)
    ctx->pc = 0x2a3ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 392), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a3adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3ae0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3ae4: 0xa0430189  sb          $v1, 0x189($v0)
    ctx->pc = 0x2a3ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 393), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a3ae8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3ae8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3aec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3af0: 0xe440019c  swc1        $f0, 0x19C($v0)
    ctx->pc = 0x2a3af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 412), bits); }
    // 0x2a3af4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3af8: 0xa04001a0  sb          $zero, 0x1A0($v0)
    ctx->pc = 0x2a3af8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 416), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3afc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3b00: 0xac4001a4  sw          $zero, 0x1A4($v0)
    ctx->pc = 0x2a3b00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 420), GPR_U32(ctx, 0));
    // 0x2a3b04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3b08: 0xac4001a8  sw          $zero, 0x1A8($v0)
    ctx->pc = 0x2a3b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 424), GPR_U32(ctx, 0));
    // 0x2a3b0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a3b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3b10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3b14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3b18: 0xe44001ac  swc1        $f0, 0x1AC($v0)
    ctx->pc = 0x2a3b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 428), bits); }
    // 0x2a3b1c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3b20: 0xac4001b0  sw          $zero, 0x1B0($v0)
    ctx->pc = 0x2a3b20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 432), GPR_U32(ctx, 0));
    // 0x2a3b24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3b28: 0xa04001b4  sb          $zero, 0x1B4($v0)
    ctx->pc = 0x2a3b28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 436), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3b2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3b2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3b30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3b34: 0xe44001d8  swc1        $f0, 0x1D8($v0)
    ctx->pc = 0x2a3b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 472), bits); }
    // 0x2a3b38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3b38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3b3c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3b40: 0xe4400194  swc1        $f0, 0x194($v0)
    ctx->pc = 0x2a3b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 404), bits); }
    // 0x2a3b44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3b48: 0xe4400190  swc1        $f0, 0x190($v0)
    ctx->pc = 0x2a3b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 400), bits); }
    // 0x2a3b4c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3b50: 0xe440018c  swc1        $f0, 0x18C($v0)
    ctx->pc = 0x2a3b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 396), bits); }
    // 0x2a3b54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a3b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3b58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3B58u;
    {
        const bool branch_taken_0x2a3b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3b58) {
            ctx->pc = 0x2A3B74u;
            goto label_2a3b74;
        }
    }
    ctx->pc = 0x2A3B60u;
label_2a3b60:
    // 0x2a3b60: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2a3b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a3b64: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3b68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a3b6c: 0xac4001b8  sw          $zero, 0x1B8($v0)
    ctx->pc = 0x2a3b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 440), GPR_U32(ctx, 0));
    // 0x2a3b70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a3b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a3b74:
    // 0x2a3b74: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x2a3b74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a3b78: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A3B78u;
    {
        const bool branch_taken_0x2a3b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3b78) {
            ctx->pc = 0x2A3B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3b60;
        }
    }
    ctx->pc = 0x2A3B80u;
    // 0x2a3b80: 0x8f82bc48  lw          $v0, -0x43B8($gp)
    ctx->pc = 0x2a3b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949960)));
    // 0x2a3b84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a3b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a3b88: 0xaf82bc48  sw          $v0, -0x43B8($gp)
    ctx->pc = 0x2a3b88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949960), GPR_U32(ctx, 2));
    // 0x2a3b8c: 0x8f83bc48  lw          $v1, -0x43B8($gp)
    ctx->pc = 0x2a3b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949960)));
    // 0x2a3b90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3b94: 0xac4301a8  sw          $v1, 0x1A8($v0)
    ctx->pc = 0x2a3b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 424), GPR_U32(ctx, 3));
    // 0x2a3b98: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3b9c: 0xa04001c8  sb          $zero, 0x1C8($v0)
    ctx->pc = 0x2a3b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 456), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3ba0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3ba4: 0xac4001dc  sw          $zero, 0x1DC($v0)
    ctx->pc = 0x2a3ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 476), GPR_U32(ctx, 0));
    // 0x2a3ba8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3bac: 0xac4001e0  sw          $zero, 0x1E0($v0)
    ctx->pc = 0x2a3bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 480), GPR_U32(ctx, 0));
    // 0x2a3bb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3bb4: 0x24440055  addiu       $a0, $v0, 0x55
    ctx->pc = 0x2a3bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
    // 0x2a3bb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3bbc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2a3bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a3bc0: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x2A3BC0u;
    SET_GPR_U32(ctx, 31, 0x2A3BC8u);
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x2A3BC0u, 0x2A3BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3BC8u;
label_2a3bc8:
    // 0x2a3bc8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3bcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a3bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3bd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3bd4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a3bd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3BE0u;
    // 0x2a3be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a3be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a3be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a3be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a3be8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a3be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a3bec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2a3becu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a3bf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3bf4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A3BF4u;
    {
        const bool branch_taken_0x2a3bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3bf4) {
            ctx->pc = 0x2A3C3Cu;
            goto label_2a3c3c;
        }
    }
    ctx->pc = 0x2A3BFCu;
    // 0x2a3bfc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a3bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2a3c00: 0x24636300  addiu       $v1, $v1, 0x6300
    ctx->pc = 0x2a3c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25344));
    // 0x2a3c04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a3c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3c08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a3c0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a3c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3c10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3c14: 0xc09d150  jal         func_274540
    ctx->pc = 0x2A3C14u;
    SET_GPR_U32(ctx, 31, 0x2A3C1Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x2A3C14u, 0x2A3C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3C1Cu;
label_2a3c1c:
    // 0x2a3c1c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2a3c1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3c20: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a3c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a3c24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a3c24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a3c28: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3C28u;
    {
        const bool branch_taken_0x2a3c28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a3c28) {
            ctx->pc = 0x2A3C3Cu;
            goto label_2a3c3c;
        }
    }
    ctx->pc = 0x2A3C30u;
    // 0x2a3c30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a3c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3c34: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2A3C34u;
    SET_GPR_U32(ctx, 31, 0x2A3C3Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2A3C34u, 0x2A3C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3C3Cu;
label_2a3c3c:
    // 0x2a3c3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a3c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3c44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a3c44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3c48: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3C50u;
    // 0x2a3c50: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x2a3c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
    // 0x2a3c54: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a3c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2a3c58: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2a3c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2a3c5c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a3c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2a3c60: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a3c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2a3c64: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a3c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a3c68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a3c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a3c6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a3c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a3c70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a3c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a3c74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a3c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a3c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a3c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a3c7c: 0xafa40300  sw          $a0, 0x300($sp)
    ctx->pc = 0x2a3c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 4));
    // 0x2a3c80: 0xafa50310  sw          $a1, 0x310($sp)
    ctx->pc = 0x2a3c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 5));
    // 0x2a3c84: 0xafa60320  sw          $a2, 0x320($sp)
    ctx->pc = 0x2a3c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 6));
    // 0x2a3c88: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x2a3c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a3c8c: 0x8fa50310  lw          $a1, 0x310($sp)
    ctx->pc = 0x2a3c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2a3c90: 0x8fa60320  lw          $a2, 0x320($sp)
    ctx->pc = 0x2a3c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a3c94: 0xc09d18c  jal         func_274630
    ctx->pc = 0x2A3C94u;
    SET_GPR_U32(ctx, 31, 0x2A3C9Cu);
    ctx->pc = 0x274630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274630u, 0x2A3C94u, 0x2A3C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3C9Cu;
label_2a3c9c:
    // 0x2a3c9c: 0xa3a202ff  sb          $v0, 0x2FF($sp)
    ctx->pc = 0x2a3c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 767), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a3ca0: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2a3ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a3ca4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2a3ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a3ca8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a3ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a3cac: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A3CACu;
    SET_GPR_U32(ctx, 31, 0x2A3CB4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A3CACu, 0x2A3CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3CB4u;
label_2a3cb4:
    // 0x2a3cb4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2a3cb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3cb8: 0xafa002f4  sw          $zero, 0x2F4($sp)
    ctx->pc = 0x2a3cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 0));
    // 0x2a3cbc: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x2a3cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a3cc0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2a3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a3cc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3cc8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2a3cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2a3ccc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A3CCCu;
    SET_GPR_U32(ctx, 31, 0x2A3CD4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A3CCCu, 0x2A3CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3CD4u;
label_2a3cd4:
    // 0x2a3cd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a3cd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3cd8: 0xafa002f0  sw          $zero, 0x2F0($sp)
    ctx->pc = 0x2a3cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 0));
    // 0x2a3cdc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a3cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ce0: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x2A3CE0u;
    SET_GPR_U32(ctx, 31, 0x2A3CE8u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x2A3CE0u, 0x2A3CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3CE8u;
label_2a3ce8:
    // 0x2a3ce8: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x2a3ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a3cec: 0xac8200b8  sw          $v0, 0xB8($a0)
    ctx->pc = 0x2a3cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 2));
    // 0x2a3cf0: 0xafa202ec  sw          $v0, 0x2EC($sp)
    ctx->pc = 0x2a3cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 2));
    // 0x2a3cf4: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x2a3cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a3cf8: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2a3cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a3cfc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a3cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d00: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2a3d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a3d04: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2a3d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d08: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A3D08u;
    SET_GPR_U32(ctx, 31, 0x2A3D10u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A3D08u, 0x2A3D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3D10u;
label_2a3d10:
    // 0x2a3d10: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x2a3d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a3d14: 0xaca2012c  sw          $v0, 0x12C($a1)
    ctx->pc = 0x2a3d14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 300), GPR_U32(ctx, 2));
    // 0x2a3d18: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2a3d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a3d1c: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x2a3d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a3d20: 0x10e0001d  beqz        $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x2A3D20u;
    {
        const bool branch_taken_0x2a3d20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3d20) {
            ctx->pc = 0x2A3D98u;
            goto label_2a3d98;
        }
    }
    ctx->pc = 0x2A3D28u;
    // 0x2a3d28: 0x8faa0320  lw          $t2, 0x320($sp)
    ctx->pc = 0x2a3d28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a3d2c: 0x8d43000c  lw          $v1, 0xC($t2)
    ctx->pc = 0x2a3d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x2a3d30: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2a3d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d34: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a3d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a3d38: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A3D38u;
    SET_GPR_U32(ctx, 31, 0x2A3D40u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A3D38u, 0x2A3D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3D40u;
label_2a3d40:
    // 0x2a3d40: 0xafa202f4  sw          $v0, 0x2F4($sp)
    ctx->pc = 0x2a3d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 2));
    // 0x2a3d44: 0x8fa602f4  lw          $a2, 0x2F4($sp)
    ctx->pc = 0x2a3d44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
    // 0x2a3d48: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2a3d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d4c: 0xc0a82cc  jal         func_2A0B30
    ctx->pc = 0x2A3D4Cu;
    SET_GPR_U32(ctx, 31, 0x2A3D54u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x2A3D4Cu, 0x2A3D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3D54u;
label_2a3d54:
    // 0x2a3d54: 0x8fa80300  lw          $t0, 0x300($sp)
    ctx->pc = 0x2a3d54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a3d58: 0xad0200c0  sw          $v0, 0xC0($t0)
    ctx->pc = 0x2a3d58u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 192), GPR_U32(ctx, 2));
    // 0x2a3d5c: 0x8fa90320  lw          $t1, 0x320($sp)
    ctx->pc = 0x2a3d5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a3d60: 0x8d2a000c  lw          $t2, 0xC($t1)
    ctx->pc = 0x2a3d60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2a3d64: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2a3d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d68: 0x240b0009  addiu       $t3, $zero, 0x9
    ctx->pc = 0x2a3d68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a3d6c: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x2a3d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d70: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A3D70u;
    SET_GPR_U32(ctx, 31, 0x2A3D78u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A3D70u, 0x2A3D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3D78u;
label_2a3d78:
    // 0x2a3d78: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a3d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a3d7c: 0xac620130  sw          $v0, 0x130($v1)
    ctx->pc = 0x2a3d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 2));
    // 0x2a3d80: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2a3d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a3d84: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2a3d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a3d88: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2a3d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2a3d8c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A3D8Cu;
    SET_GPR_U32(ctx, 31, 0x2A3D94u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A3D8Cu, 0x2A3D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3D94u;
label_2a3d94:
    // 0x2a3d94: 0xafa202f0  sw          $v0, 0x2F0($sp)
    ctx->pc = 0x2a3d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 2));
label_2a3d98:
    // 0x2a3d98: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a3d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a3d9c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2a3d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2a3da0: 0x24650055  addiu       $a1, $v1, 0x55
    ctx->pc = 0x2a3da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 85));
    // 0x2a3da4: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2A3DA4u;
    SET_GPR_U32(ctx, 31, 0x2A3DACu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A3DA4u, 0x2A3DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3DACu;
label_2a3dac:
    // 0x2a3dac: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a3dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a3db0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2a3db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2a3db4: 0x24450055  addiu       $a1, $v0, 0x55
    ctx->pc = 0x2a3db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
    // 0x2a3db8: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2A3DB8u;
    SET_GPR_U32(ctx, 31, 0x2A3DC0u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A3DB8u, 0x2A3DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3DC0u;
label_2a3dc0:
    // 0x2a3dc0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a3dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3dc4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a3dc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3dc8: 0x8fa40310  lw          $a0, 0x310($sp)
    ctx->pc = 0x2a3dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2a3dcc: 0x2405053a  addiu       $a1, $zero, 0x53A
    ctx->pc = 0x2a3dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1338));
    // 0x2a3dd0: 0xc042090  jal         func_108240
    ctx->pc = 0x2A3DD0u;
    SET_GPR_U32(ctx, 31, 0x2A3DD8u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2A3DD0u, 0x2A3DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3DD8u;
label_2a3dd8:
    // 0x2a3dd8: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a3dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a3ddc: 0xe46001ac  swc1        $f0, 0x1AC($v1)
    ctx->pc = 0x2a3ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 428), bits); }
    // 0x2a3de0: 0xa3a002fe  sb          $zero, 0x2FE($sp)
    ctx->pc = 0x2a3de0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 766), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3de4: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a3de8: 0x2445005a  addiu       $a1, $v0, 0x5A
    ctx->pc = 0x2a3de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x2a3dec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a3decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3df0: 0x2786a3e8  addiu       $a2, $gp, -0x5C18
    ctx->pc = 0x2a3df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943720));
    // 0x2a3df4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2a3df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3df8: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x2A3DF8u;
    SET_GPR_U32(ctx, 31, 0x2A3E00u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x2A3DF8u, 0x2A3E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E00u;
label_2a3e00:
    // 0x2a3e00: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2A3E00u;
    {
        const bool branch_taken_0x2a3e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3e00) {
            ctx->pc = 0x2A3F00u;
            goto label_2a3f00;
        }
    }
    ctx->pc = 0x2A3E08u;
    // 0x2a3e08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a3e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3e0c: 0xa3a302fe  sb          $v1, 0x2FE($sp)
    ctx->pc = 0x2a3e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 766), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a3e10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a3e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e14: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2A3E14u;
    SET_GPR_U32(ctx, 31, 0x2A3E1Cu);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2A3E14u, 0x2A3E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E1Cu;
label_2a3e1c:
    // 0x2a3e1c: 0xafa202e8  sw          $v0, 0x2E8($sp)
    ctx->pc = 0x2a3e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 2));
    // 0x2a3e20: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x2a3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x2a3e24: 0x10020011  beq         $zero, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A3E24u;
    {
        const bool branch_taken_0x2a3e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a3e24) {
            ctx->pc = 0x2A3E6Cu;
            goto label_2a3e6c;
        }
    }
    ctx->pc = 0x2A3E2Cu;
    // 0x2a3e2c: 0x8fa502e8  lw          $a1, 0x2E8($sp)
    ctx->pc = 0x2a3e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x2a3e30: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a3e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e34: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a3e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a3e38: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2a3e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e3c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A3E3Cu;
    SET_GPR_U32(ctx, 31, 0x2A3E44u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A3E3Cu, 0x2A3E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E44u;
label_2a3e44:
    // 0x2a3e44: 0xafa202e4  sw          $v0, 0x2E4($sp)
    ctx->pc = 0x2a3e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 2));
    // 0x2a3e48: 0x8fa402e4  lw          $a0, 0x2E4($sp)
    ctx->pc = 0x2a3e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
    // 0x2a3e4c: 0xc0a5a88  jal         func_296A20
    ctx->pc = 0x2A3E4Cu;
    SET_GPR_U32(ctx, 31, 0x2A3E54u);
    ctx->pc = 0x296A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296A20u, 0x2A3E4Cu, 0x2A3E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E54u;
label_2a3e54:
    // 0x2a3e54: 0xafa202e0  sw          $v0, 0x2E0($sp)
    ctx->pc = 0x2a3e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 2));
    // 0x2a3e58: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a3e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a3e5c: 0x24440055  addiu       $a0, $v0, 0x55
    ctx->pc = 0x2a3e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
    // 0x2a3e60: 0x8fa502e0  lw          $a1, 0x2E0($sp)
    ctx->pc = 0x2a3e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x2a3e64: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2A3E64u;
    SET_GPR_U32(ctx, 31, 0x2A3E6Cu);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2A3E64u, 0x2A3E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E6Cu;
label_2a3e6c:
    // 0x2a3e6c: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a3e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a3e70: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x2a3e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2a3e74: 0x24650055  addiu       $a1, $v1, 0x55
    ctx->pc = 0x2a3e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 85));
    // 0x2a3e78: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2A3E78u;
    SET_GPR_U32(ctx, 31, 0x2A3E80u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A3E78u, 0x2A3E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E80u;
label_2a3e80:
    // 0x2a3e80: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2A3E80u;
    SET_GPR_U32(ctx, 31, 0x2A3E88u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2A3E80u, 0x2A3E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E88u;
label_2a3e88:
    // 0x2a3e88: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3E88u;
    {
        const bool branch_taken_0x2a3e88 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a3e88) {
            ctx->pc = 0x2A3EA4u;
            goto label_2a3ea4;
        }
    }
    ctx->pc = 0x2A3E90u;
    // 0x2a3e90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3e94: 0x0  nop
    ctx->pc = 0x2a3e94u;
    // NOP
    // 0x2a3e98: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a3e98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a3e9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A3E9Cu;
    {
        const bool branch_taken_0x2a3e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3e9c) {
            ctx->pc = 0x2A3EC0u;
            goto label_2a3ec0;
        }
    }
    ctx->pc = 0x2A3EA4u;
label_2a3ea4:
    // 0x2a3ea4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a3ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a3ea8: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x2a3ea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a3eac: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2a3eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2a3eb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a3eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3eb4: 0x0  nop
    ctx->pc = 0x2a3eb4u;
    // NOP
    // 0x2a3eb8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a3eb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a3ebc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a3ebcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a3ec0:
    // 0x2a3ec0: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x2a3ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
    // 0x2a3ec4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a3ec4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3ec8: 0x0  nop
    ctx->pc = 0x2a3ec8u;
    // NOP
    // 0x2a3ecc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2a3eccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2a3ed0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2a3ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2a3ed4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3ed8: 0x0  nop
    ctx->pc = 0x2a3ed8u;
    // NOP
    // 0x2a3edc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a3edcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a3ee0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2A3EE0u;
    {
        const bool branch_taken_0x2a3ee0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a3ee0) {
            ctx->pc = 0x2A3F00u;
            goto label_2a3f00;
        }
    }
    ctx->pc = 0x2A3EE8u;
    // 0x2a3ee8: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x2a3ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a3eec: 0x24850055  addiu       $a1, $a0, 0x55
    ctx->pc = 0x2a3eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 85));
    // 0x2a3ef0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a3ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ef4: 0x2785a3f0  addiu       $a1, $gp, -0x5C10
    ctx->pc = 0x2a3ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943728));
    // 0x2a3ef8: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2A3EF8u;
    SET_GPR_U32(ctx, 31, 0x2A3F00u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2A3EF8u, 0x2A3F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F00u;
label_2a3f00:
    // 0x2a3f00: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a3f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a3f04: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a3f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a3f08: 0x24640075  addiu       $a0, $v1, 0x75
    ctx->pc = 0x2a3f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 117));
    // 0x2a3f0c: 0x24450055  addiu       $a1, $v0, 0x55
    ctx->pc = 0x2a3f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
    // 0x2a3f10: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2A3F10u;
    SET_GPR_U32(ctx, 31, 0x2A3F18u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A3F10u, 0x2A3F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F18u;
label_2a3f18:
    // 0x2a3f18: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2a3f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2a3f1c: 0x10040017  beq         $zero, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2A3F1Cu;
    {
        const bool branch_taken_0x2a3f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2a3f1c) {
            ctx->pc = 0x2A3F7Cu;
            goto label_2a3f7c;
        }
    }
    ctx->pc = 0x2A3F24u;
    // 0x2a3f24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a3f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f28: 0xc096950  jal         func_25A540
    ctx->pc = 0x2A3F28u;
    SET_GPR_U32(ctx, 31, 0x2A3F30u);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x2A3F28u, 0x2A3F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F30u;
label_2a3f30:
    // 0x2a3f30: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2a3f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2a3f34: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2a3f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x2a3f38: 0xc096950  jal         func_25A540
    ctx->pc = 0x2A3F38u;
    SET_GPR_U32(ctx, 31, 0x2A3F40u);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x2A3F38u, 0x2A3F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F40u;
label_2a3f40:
    // 0x2a3f40: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2a3f40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a3f44: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A3F44u;
    {
        const bool branch_taken_0x2a3f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a3f44) {
            ctx->pc = 0x2A3F7Cu;
            goto label_2a3f7c;
        }
    }
    ctx->pc = 0x2A3F4Cu;
    // 0x2a3f4c: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a3f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a3f50: 0x24650075  addiu       $a1, $v1, 0x75
    ctx->pc = 0x2a3f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 117));
    // 0x2a3f54: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a3f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f58: 0x2786a3f4  addiu       $a2, $gp, -0x5C0C
    ctx->pc = 0x2a3f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943732));
    // 0x2a3f5c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2a3f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f60: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2A3F60u;
    SET_GPR_U32(ctx, 31, 0x2A3F68u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2A3F60u, 0x2A3F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F68u;
label_2a3f68:
    // 0x2a3f68: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a3f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a3f6c: 0x24440055  addiu       $a0, $v0, 0x55
    ctx->pc = 0x2a3f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
    // 0x2a3f70: 0x2785a3f4  addiu       $a1, $gp, -0x5C0C
    ctx->pc = 0x2a3f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943732));
    // 0x2a3f74: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2A3F74u;
    SET_GPR_U32(ctx, 31, 0x2A3F7Cu);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2A3F74u, 0x2A3F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F7Cu;
label_2a3f7c:
    // 0x2a3f7c: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x2a3f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a3f80: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x2a3f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2a3f84: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a3f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f88: 0x24030537  addiu       $v1, $zero, 0x537
    ctx->pc = 0x2a3f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1335));
    // 0x2a3f8c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2a3f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a3f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f94: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2A3F94u;
    SET_GPR_U32(ctx, 31, 0x2A3F9Cu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2A3F94u, 0x2A3F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F9Cu;
label_2a3f9c:
    // 0x2a3f9c: 0xa3a202fd  sb          $v0, 0x2FD($sp)
    ctx->pc = 0x2a3f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 765), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a3fa0: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x2a3fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a3fa4: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x2a3fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2a3fa8: 0x10c0003a  beqz        $a2, . + 4 + (0x3A << 2)
    ctx->pc = 0x2A3FA8u;
    {
        const bool branch_taken_0x2a3fa8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3fa8) {
            ctx->pc = 0x2A4094u;
            goto label_2a4094;
        }
    }
    ctx->pc = 0x2A3FB0u;
    // 0x2a3fb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a3fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3fb4: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2A3FB4u;
    SET_GPR_U32(ctx, 31, 0x2A3FBCu);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2A3FB4u, 0x2A3FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3FBCu;
label_2a3fbc:
    // 0x2a3fbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a3fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3fc0: 0x14430034  bne         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2A3FC0u;
    {
        const bool branch_taken_0x2a3fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a3fc0) {
            ctx->pc = 0x2A4094u;
            goto label_2a4094;
        }
    }
    ctx->pc = 0x2A3FC8u;
    // 0x2a3fc8: 0x93a202fd  lbu         $v0, 0x2FD($sp)
    ctx->pc = 0x2a3fc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 765)));
    // 0x2a3fcc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2a3fccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a3fd0: 0x14800030  bnez        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2A3FD0u;
    {
        const bool branch_taken_0x2a3fd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3fd0) {
            ctx->pc = 0x2A4094u;
            goto label_2a4094;
        }
    }
    ctx->pc = 0x2A3FD8u;
    // 0x2a3fd8: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x2a3fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a3fdc: 0x80a6005a  lb          $a2, 0x5A($a1)
    ctx->pc = 0x2a3fdcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 90)));
    // 0x2a3fe0: 0x6163c  dsll32      $v0, $a2, 24
    ctx->pc = 0x2a3fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 24));
    // 0x2a3fe4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2a3fe4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2a3fe8: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x2a3fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2a3fec: 0x10430029  beq         $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2A3FECu;
    {
        const bool branch_taken_0x2a3fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a3fec) {
            ctx->pc = 0x2A4094u;
            goto label_2a4094;
        }
    }
    ctx->pc = 0x2A3FF4u;
    // 0x2a3ff4: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x2a3ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a3ff8: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x2a3ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a3ffc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2a3ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a4000: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A4000u;
    SET_GPR_U32(ctx, 31, 0x2A4008u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A4000u, 0x2A4008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4008u;
label_2a4008:
    // 0x2a4008: 0xafa202dc  sw          $v0, 0x2DC($sp)
    ctx->pc = 0x2a4008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 2));
    // 0x2a400c: 0x8fa402dc  lw          $a0, 0x2DC($sp)
    ctx->pc = 0x2a400cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
    // 0x2a4010: 0xc09b03c  jal         func_26C0F0
    ctx->pc = 0x2A4010u;
    SET_GPR_U32(ctx, 31, 0x2A4018u);
    ctx->pc = 0x26C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C0F0u, 0x2A4010u, 0x2A4018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4018u;
label_2a4018:
    // 0x2a4018: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2a4018u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a401c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2a401cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a4020: 0x12e20009  beq         $s7, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A4020u;
    {
        const bool branch_taken_0x2a4020 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a4020) {
            ctx->pc = 0x2A4048u;
            goto label_2a4048;
        }
    }
    ctx->pc = 0x2A4028u;
    // 0x2a4028: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A4028u;
    {
        const bool branch_taken_0x2a4028 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4028) {
            ctx->pc = 0x2A4048u;
            goto label_2a4048;
        }
    }
    ctx->pc = 0x2A4030u;
    // 0x2a4030: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a4030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a4034: 0x12e20004  beq         $s7, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4034u;
    {
        const bool branch_taken_0x2a4034 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a4034) {
            ctx->pc = 0x2A4048u;
            goto label_2a4048;
        }
    }
    ctx->pc = 0x2A403Cu;
    // 0x2a403c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4040: 0x16e20014  bne         $s7, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A4040u;
    {
        const bool branch_taken_0x2a4040 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a4040) {
            ctx->pc = 0x2A4094u;
            goto label_2a4094;
        }
    }
    ctx->pc = 0x2A4048u;
label_2a4048:
    // 0x2a4048: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x2a4048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a404c: 0x24840055  addiu       $a0, $a0, 0x55
    ctx->pc = 0x2a404cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 85));
    // 0x2a4050: 0x2785a3f8  addiu       $a1, $gp, -0x5C08
    ctx->pc = 0x2a4050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943736));
    // 0x2a4054: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2A4054u;
    SET_GPR_U32(ctx, 31, 0x2A405Cu);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2A4054u, 0x2A405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A405Cu;
label_2a405c:
    // 0x2a405c: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4060: 0x24440075  addiu       $a0, $v0, 0x75
    ctx->pc = 0x2a4060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 117));
    // 0x2a4064: 0x2785a3f8  addiu       $a1, $gp, -0x5C08
    ctx->pc = 0x2a4064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943736));
    // 0x2a4068: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2A4068u;
    SET_GPR_U32(ctx, 31, 0x2A4070u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2A4068u, 0x2A4070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4070u;
label_2a4070:
    // 0x2a4070: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2a4070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2a4074: 0x2785a3f8  addiu       $a1, $gp, -0x5C08
    ctx->pc = 0x2a4074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943736));
    // 0x2a4078: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2A4078u;
    SET_GPR_U32(ctx, 31, 0x2A4080u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2A4078u, 0x2A4080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4080u;
label_2a4080:
    // 0x2a4080: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x2a4080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2a4084: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2a4084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4088: 0x2785a3f8  addiu       $a1, $gp, -0x5C08
    ctx->pc = 0x2a4088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943736));
    // 0x2a408c: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2A408Cu;
    SET_GPR_U32(ctx, 31, 0x2A4094u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2A408Cu, 0x2A4094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4094u;
label_2a4094:
    // 0x2a4094: 0xc090864  jal         func_242190
    ctx->pc = 0x2A4094u;
    SET_GPR_U32(ctx, 31, 0x2A409Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2A4094u, 0x2A409Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A409Cu;
label_2a409c:
    // 0x2a409c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a409cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40a0: 0xc0905a8  jal         func_2416A0
    ctx->pc = 0x2A40A0u;
    SET_GPR_U32(ctx, 31, 0x2A40A8u);
    ctx->pc = 0x2416A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416A0u, 0x2A40A0u, 0x2A40A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A40A8u;
label_2a40a8:
    // 0x2a40a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a40a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40ac: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a40acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a40b0: 0x24450075  addiu       $a1, $v0, 0x75
    ctx->pc = 0x2a40b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 117));
    // 0x2a40b4: 0xc0993e0  jal         func_264F80
    ctx->pc = 0x2A40B4u;
    SET_GPR_U32(ctx, 31, 0x2A40BCu);
    ctx->pc = 0x264F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264F80u, 0x2A40B4u, 0x2A40BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A40BCu;
label_2a40bc:
    // 0x2a40bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a40bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40c0: 0x1410001a  bne         $zero, $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A40C0u;
    {
        const bool branch_taken_0x2a40c0 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 16));
        if (branch_taken_0x2a40c0) {
            ctx->pc = 0x2A412Cu;
            goto label_2a412c;
        }
    }
    ctx->pc = 0x2A40C8u;
    // 0x2a40c8: 0x93a202fe  lbu         $v0, 0x2FE($sp)
    ctx->pc = 0x2a40c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 766)));
    // 0x2a40cc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2A40CCu;
    {
        const bool branch_taken_0x2a40cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a40cc) {
            ctx->pc = 0x2A412Cu;
            goto label_2a412c;
        }
    }
    ctx->pc = 0x2A40D4u;
    // 0x2a40d4: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x2a40d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a40d8: 0x24850055  addiu       $a1, $a0, 0x55
    ctx->pc = 0x2a40d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 85));
    // 0x2a40dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a40dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40e0: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2a40e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2a40e4: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2A40E4u;
    SET_GPR_U32(ctx, 31, 0x2A40ECu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A40E4u, 0x2A40ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A40ECu;
label_2a40ec:
    // 0x2a40ec: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a40ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a40f0: 0x24440075  addiu       $a0, $v0, 0x75
    ctx->pc = 0x2a40f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 117));
    // 0x2a40f4: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x2a40f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x2a40f8: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2A40F8u;
    SET_GPR_U32(ctx, 31, 0x2A4100u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A40F8u, 0x2A4100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4100u;
label_2a4100:
    // 0x2a4100: 0xc090864  jal         func_242190
    ctx->pc = 0x2A4100u;
    SET_GPR_U32(ctx, 31, 0x2A4108u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2A4100u, 0x2A4108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4108u;
label_2a4108:
    // 0x2a4108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a4108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a410c: 0xc0905a8  jal         func_2416A0
    ctx->pc = 0x2A410Cu;
    SET_GPR_U32(ctx, 31, 0x2A4114u);
    ctx->pc = 0x2416A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416A0u, 0x2A410Cu, 0x2A4114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4114u;
label_2a4114:
    // 0x2a4114: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a4114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a4118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a411c: 0x24650075  addiu       $a1, $v1, 0x75
    ctx->pc = 0x2a411cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 117));
    // 0x2a4120: 0xc0993e0  jal         func_264F80
    ctx->pc = 0x2A4120u;
    SET_GPR_U32(ctx, 31, 0x2A4128u);
    ctx->pc = 0x264F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264F80u, 0x2A4120u, 0x2A4128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4128u;
label_2a4128:
    // 0x2a4128: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a4128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a412c:
    // 0x2a412c: 0x14100017  bne         $zero, $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2A412Cu;
    {
        const bool branch_taken_0x2a412c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 16));
        if (branch_taken_0x2a412c) {
            ctx->pc = 0x2A418Cu;
            goto label_2a418c;
        }
    }
    ctx->pc = 0x2A4134u;
    // 0x2a4134: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x2a4134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4138: 0x24a60055  addiu       $a2, $a1, 0x55
    ctx->pc = 0x2a4138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 85));
    // 0x2a413c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2a413cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4140: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x2a4140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2a4144: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2A4144u;
    SET_GPR_U32(ctx, 31, 0x2A414Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A4144u, 0x2A414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A414Cu;
label_2a414c:
    // 0x2a414c: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a414cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4150: 0x24440075  addiu       $a0, $v0, 0x75
    ctx->pc = 0x2a4150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 117));
    // 0x2a4154: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x2a4154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2a4158: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2A4158u;
    SET_GPR_U32(ctx, 31, 0x2A4160u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A4158u, 0x2A4160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4160u;
label_2a4160:
    // 0x2a4160: 0xc090864  jal         func_242190
    ctx->pc = 0x2A4160u;
    SET_GPR_U32(ctx, 31, 0x2A4168u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2A4160u, 0x2A4168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4168u;
label_2a4168:
    // 0x2a4168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a4168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a416c: 0xc0905a8  jal         func_2416A0
    ctx->pc = 0x2A416Cu;
    SET_GPR_U32(ctx, 31, 0x2A4174u);
    ctx->pc = 0x2416A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416A0u, 0x2A416Cu, 0x2A4174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4174u;
label_2a4174:
    // 0x2a4174: 0x8fa60300  lw          $a2, 0x300($sp)
    ctx->pc = 0x2a4174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4178: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a4178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a417c: 0x24c50075  addiu       $a1, $a2, 0x75
    ctx->pc = 0x2a417cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 117));
    // 0x2a4180: 0xc0993e0  jal         func_264F80
    ctx->pc = 0x2A4180u;
    SET_GPR_U32(ctx, 31, 0x2A4188u);
    ctx->pc = 0x264F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264F80u, 0x2A4180u, 0x2A4188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4188u;
label_2a4188:
    // 0x2a4188: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a4188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a418c:
    // 0x2a418c: 0x14100019  bne         $zero, $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A418Cu;
    {
        const bool branch_taken_0x2a418c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 16));
        if (branch_taken_0x2a418c) {
            ctx->pc = 0x2A41F4u;
            goto label_2a41f4;
        }
    }
    ctx->pc = 0x2A4194u;
    // 0x2a4194: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a4194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4198: 0x80620078  lb          $v0, 0x78($v1)
    ctx->pc = 0x2a4198u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x2a419c: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2a419cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2a41a0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2a41a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2a41a4: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x2a41a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x2a41a8: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A41A8u;
    {
        const bool branch_taken_0x2a41a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a41a8) {
            ctx->pc = 0x2A41F4u;
            goto label_2a41f4;
        }
    }
    ctx->pc = 0x2A41B0u;
    // 0x2a41b0: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x2a41b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2a41b4: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a41b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a41b8: 0xa0620078  sb          $v0, 0x78($v1)
    ctx->pc = 0x2a41b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 120), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a41bc: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x2a41bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2a41c0: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a41c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a41c4: 0xa0620058  sb          $v0, 0x58($v1)
    ctx->pc = 0x2a41c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 88), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a41c8: 0xc090864  jal         func_242190
    ctx->pc = 0x2A41C8u;
    SET_GPR_U32(ctx, 31, 0x2A41D0u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2A41C8u, 0x2A41D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A41D0u;
label_2a41d0:
    // 0x2a41d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a41d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a41d4: 0xc0905a8  jal         func_2416A0
    ctx->pc = 0x2A41D4u;
    SET_GPR_U32(ctx, 31, 0x2A41DCu);
    ctx->pc = 0x2416A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416A0u, 0x2A41D4u, 0x2A41DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A41DCu;
label_2a41dc:
    // 0x2a41dc: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a41dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a41e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a41e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a41e4: 0x24650075  addiu       $a1, $v1, 0x75
    ctx->pc = 0x2a41e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 117));
    // 0x2a41e8: 0xc0993e0  jal         func_264F80
    ctx->pc = 0x2A41E8u;
    SET_GPR_U32(ctx, 31, 0x2A41F0u);
    ctx->pc = 0x264F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264F80u, 0x2A41E8u, 0x2A41F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A41F0u;
label_2a41f0:
    // 0x2a41f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a41f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a41f4:
    // 0x2a41f4: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a41f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a41f8: 0xac5001b0  sw          $s0, 0x1B0($v0)
    ctx->pc = 0x2a41f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 432), GPR_U32(ctx, 16));
    // 0x2a41fc: 0x14100048  bne         $zero, $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2A41FCu;
    {
        const bool branch_taken_0x2a41fc = (GPR_U64(ctx, 0) != GPR_U64(ctx, 16));
        if (branch_taken_0x2a41fc) {
            ctx->pc = 0x2A4320u;
            goto label_2a4320;
        }
    }
    ctx->pc = 0x2A4204u;
    // 0x2a4204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a4204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4208: 0xc096950  jal         func_25A540
    ctx->pc = 0x2A4208u;
    SET_GPR_U32(ctx, 31, 0x2A4210u);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x2A4208u, 0x2A4210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4210u;
label_2a4210:
    // 0x2a4210: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a4210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4214: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2A4214u;
    {
        const bool branch_taken_0x2a4214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a4214) {
            ctx->pc = 0x2A4248u;
            goto label_2a4248;
        }
    }
    ctx->pc = 0x2A421Cu;
    // 0x2a421c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A421Cu;
    {
        const bool branch_taken_0x2a421c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a421c) {
            ctx->pc = 0x2A422Cu;
            goto label_2a422c;
        }
    }
    ctx->pc = 0x2A4224u;
    // 0x2a4224: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A4224u;
    {
        const bool branch_taken_0x2a4224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4224) {
            ctx->pc = 0x2A425Cu;
            goto label_2a425c;
        }
    }
    ctx->pc = 0x2A422Cu;
label_2a422c:
    // 0x2a422c: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a422cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4230: 0x24440055  addiu       $a0, $v0, 0x55
    ctx->pc = 0x2a4230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
    // 0x2a4234: 0x2785a400  addiu       $a1, $gp, -0x5C00
    ctx->pc = 0x2a4234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943744));
    // 0x2a4238: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2A4238u;
    SET_GPR_U32(ctx, 31, 0x2A4240u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A4238u, 0x2A4240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4240u;
label_2a4240:
    // 0x2a4240: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4240u;
    {
        const bool branch_taken_0x2a4240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4240) {
            ctx->pc = 0x2A425Cu;
            goto label_2a425c;
        }
    }
    ctx->pc = 0x2A4248u;
label_2a4248:
    // 0x2a4248: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x2a4248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a424c: 0x24a40055  addiu       $a0, $a1, 0x55
    ctx->pc = 0x2a424cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 85));
    // 0x2a4250: 0x2785a404  addiu       $a1, $gp, -0x5BFC
    ctx->pc = 0x2a4250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943748));
    // 0x2a4254: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2A4254u;
    SET_GPR_U32(ctx, 31, 0x2A425Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A4254u, 0x2A425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A425Cu;
label_2a425c:
    // 0x2a425c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a425cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4260: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2A4260u;
    SET_GPR_U32(ctx, 31, 0x2A4268u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2A4260u, 0x2A4268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4268u;
label_2a4268:
    // 0x2a4268: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2a4268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a426c: 0x10450026  beq         $v0, $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2A426Cu;
    {
        const bool branch_taken_0x2a426c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2a426c) {
            ctx->pc = 0x2A4308u;
            goto label_2a4308;
        }
    }
    ctx->pc = 0x2A4274u;
    // 0x2a4274: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2A4274u;
    {
        const bool branch_taken_0x2a4274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4274) {
            ctx->pc = 0x2A4308u;
            goto label_2a4308;
        }
    }
    ctx->pc = 0x2A427Cu;
    // 0x2a427c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a427cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a4280: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A4280u;
    {
        const bool branch_taken_0x2a4280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a4280) {
            ctx->pc = 0x2A42E8u;
            goto label_2a42e8;
        }
    }
    ctx->pc = 0x2A4288u;
    // 0x2a4288: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a4288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a428c: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2A428Cu;
    {
        const bool branch_taken_0x2a428c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a428c) {
            ctx->pc = 0x2A42C8u;
            goto label_2a42c8;
        }
    }
    ctx->pc = 0x2A4294u;
    // 0x2a4294: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a4294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4298: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4298u;
    {
        const bool branch_taken_0x2a4298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a4298) {
            ctx->pc = 0x2A42A8u;
            goto label_2a42a8;
        }
    }
    ctx->pc = 0x2A42A0u;
    // 0x2a42a0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2A42A0u;
    {
        const bool branch_taken_0x2a42a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a42a0) {
            ctx->pc = 0x2A4320u;
            goto label_2a4320;
        }
    }
    ctx->pc = 0x2A42A8u;
label_2a42a8:
    // 0x2a42a8: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a42a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a42ac: 0x24440055  addiu       $a0, $v0, 0x55
    ctx->pc = 0x2a42acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
    // 0x2a42b0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a42b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a42b4: 0x24a5db30  addiu       $a1, $a1, -0x24D0
    ctx->pc = 0x2a42b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957872));
    // 0x2a42b8: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2A42B8u;
    SET_GPR_U32(ctx, 31, 0x2A42C0u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2A42B8u, 0x2A42C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A42C0u;
label_2a42c0:
    // 0x2a42c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2A42C0u;
    {
        const bool branch_taken_0x2a42c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a42c0) {
            ctx->pc = 0x2A4320u;
            goto label_2a4320;
        }
    }
    ctx->pc = 0x2A42C8u;
label_2a42c8:
    // 0x2a42c8: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a42c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a42cc: 0x24440055  addiu       $a0, $v0, 0x55
    ctx->pc = 0x2a42ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
    // 0x2a42d0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a42d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a42d4: 0x24a5db40  addiu       $a1, $a1, -0x24C0
    ctx->pc = 0x2a42d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957888));
    // 0x2a42d8: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2A42D8u;
    SET_GPR_U32(ctx, 31, 0x2A42E0u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2A42D8u, 0x2A42E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A42E0u;
label_2a42e0:
    // 0x2a42e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A42E0u;
    {
        const bool branch_taken_0x2a42e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a42e0) {
            ctx->pc = 0x2A4320u;
            goto label_2a4320;
        }
    }
    ctx->pc = 0x2A42E8u;
label_2a42e8:
    // 0x2a42e8: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a42e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a42ec: 0x24440055  addiu       $a0, $v0, 0x55
    ctx->pc = 0x2a42ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
    // 0x2a42f0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a42f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a42f4: 0x24a5db50  addiu       $a1, $a1, -0x24B0
    ctx->pc = 0x2a42f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957904));
    // 0x2a42f8: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2A42F8u;
    SET_GPR_U32(ctx, 31, 0x2A4300u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2A42F8u, 0x2A4300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4300u;
label_2a4300:
    // 0x2a4300: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A4300u;
    {
        const bool branch_taken_0x2a4300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4300) {
            ctx->pc = 0x2A4320u;
            goto label_2a4320;
        }
    }
    ctx->pc = 0x2A4308u;
label_2a4308:
    // 0x2a4308: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a4308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a430c: 0x24440055  addiu       $a0, $v0, 0x55
    ctx->pc = 0x2a430cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
    // 0x2a4310: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a4310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a4314: 0x24a5db60  addiu       $a1, $a1, -0x24A0
    ctx->pc = 0x2a4314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957920));
    // 0x2a4318: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2A4318u;
    SET_GPR_U32(ctx, 31, 0x2A4320u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2A4318u, 0x2A4320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4320u;
label_2a4320:
    // 0x2a4320: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x2a4320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a4324: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2a4324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2a4328: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x2A4328u;
    {
        const bool branch_taken_0x2a4328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4328) {
            ctx->pc = 0x2A474Cu;
            goto label_2a474c;
        }
    }
    ctx->pc = 0x2A4330u;
    // 0x2a4330: 0x8fa402ec  lw          $a0, 0x2EC($sp)
    ctx->pc = 0x2a4330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 748)));
    // 0x2a4334: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2a4334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a4338: 0xc121e84  jal         func_487A10
    ctx->pc = 0x2A4338u;
    SET_GPR_U32(ctx, 31, 0x2A4340u);
    ctx->pc = 0x487A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A10u, 0x2A4338u, 0x2A4340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4340u;
label_2a4340:
    // 0x2a4340: 0x27a30288  addiu       $v1, $sp, 0x288
    ctx->pc = 0x2a4340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
    // 0x2a4344: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2a4344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a4348: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2a4348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a434c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2a434cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4350: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2a4350u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2a4354: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2a4354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2a4358: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2a4358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2a435c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2a435cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a4360: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2a4360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a4364: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2a4364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a4368: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A4368u;
    SET_GPR_U32(ctx, 31, 0x2A4370u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A4368u, 0x2A4370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4370u;
label_2a4370:
    // 0x2a4370: 0xafa202d8  sw          $v0, 0x2D8($sp)
    ctx->pc = 0x2a4370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 2));
    // 0x2a4374: 0x27a50248  addiu       $a1, $sp, 0x248
    ctx->pc = 0x2a4374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
    // 0x2a4378: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a4378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a437c: 0x8fa502d8  lw          $a1, 0x2D8($sp)
    ctx->pc = 0x2a437cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x2a4380: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2A4380u;
    SET_GPR_U32(ctx, 31, 0x2A4388u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2A4380u, 0x2A4388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4388u;
label_2a4388:
    // 0x2a4388: 0x27a40248  addiu       $a0, $sp, 0x248
    ctx->pc = 0x2a4388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
    // 0x2a438c: 0x27a20278  addiu       $v0, $sp, 0x278
    ctx->pc = 0x2a438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
    // 0x2a4390: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2a4390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a4394: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2a4394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4398: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2a4398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a439c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2a439cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2a43a0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2a43a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2a43a4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2a43a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2a43a8: 0x8fa402d8  lw          $a0, 0x2D8($sp)
    ctx->pc = 0x2a43a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x2a43ac: 0xc091010  jal         func_244040
    ctx->pc = 0x2A43ACu;
    SET_GPR_U32(ctx, 31, 0x2A43B4u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x2A43ACu, 0x2A43B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A43B4u;
label_2a43b4:
    // 0x2a43b4: 0xafa202d4  sw          $v0, 0x2D4($sp)
    ctx->pc = 0x2a43b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 2));
    // 0x2a43b8: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x2a43b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a43bc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2a43bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2a43c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a43c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a43c4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2a43c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a43c8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2a43c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a43cc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A43CCu;
    SET_GPR_U32(ctx, 31, 0x2A43D4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A43CCu, 0x2A43D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A43D4u;
label_2a43d4:
    // 0x2a43d4: 0xafa202d0  sw          $v0, 0x2D0($sp)
    ctx->pc = 0x2a43d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 2));
    // 0x2a43d8: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2a43d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a43dc: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2a43dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a43e0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a43e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a43e4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A43E4u;
    SET_GPR_U32(ctx, 31, 0x2A43ECu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A43E4u, 0x2A43ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A43ECu;
label_2a43ec:
    // 0x2a43ec: 0xafa202cc  sw          $v0, 0x2CC($sp)
    ctx->pc = 0x2a43ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 2));
    // 0x2a43f0: 0x8fa402d0  lw          $a0, 0x2D0($sp)
    ctx->pc = 0x2a43f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2a43f4: 0xc09b03c  jal         func_26C0F0
    ctx->pc = 0x2A43F4u;
    SET_GPR_U32(ctx, 31, 0x2A43FCu);
    ctx->pc = 0x26C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C0F0u, 0x2A43F4u, 0x2A43FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A43FCu;
label_2a43fc:
    // 0x2a43fc: 0xafa202c8  sw          $v0, 0x2C8($sp)
    ctx->pc = 0x2a43fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 2));
    // 0x2a4400: 0x8fa502d0  lw          $a1, 0x2D0($sp)
    ctx->pc = 0x2a4400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x2a4404: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2a4404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2a4408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a4408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a440c: 0xc09138c  jal         func_244E30
    ctx->pc = 0x2A440Cu;
    SET_GPR_U32(ctx, 31, 0x2A4414u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x2A440Cu, 0x2A4414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4414u;
label_2a4414:
    // 0x2a4414: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x2a4414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a4418: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x2a4418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2a441c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a441cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4420: 0x8fa502c8  lw          $a1, 0x2C8($sp)
    ctx->pc = 0x2a4420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x2a4424: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x2a4424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2a4428: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a4428u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a442c: 0xc099f04  jal         func_267C10
    ctx->pc = 0x2A442Cu;
    SET_GPR_U32(ctx, 31, 0x2A4434u);
    ctx->pc = 0x267C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267C10u, 0x2A442Cu, 0x2A4434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4434u;
label_2a4434:
    // 0x2a4434: 0xa3a202fc  sb          $v0, 0x2FC($sp)
    ctx->pc = 0x2a4434u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 764), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a4438: 0x93a502fc  lbu         $a1, 0x2FC($sp)
    ctx->pc = 0x2a4438u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 764)));
    // 0x2a443c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A443Cu;
    {
        const bool branch_taken_0x2a443c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a443c) {
            ctx->pc = 0x2A4458u;
            goto label_2a4458;
        }
    }
    ctx->pc = 0x2A4444u;
    // 0x2a4444: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2a4444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a4448: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2a4448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a444c: 0x240a0064  addiu       $t2, $zero, 0x64
    ctx->pc = 0x2a444cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a4450: 0x10ea00be  beq         $a3, $t2, . + 4 + (0xBE << 2)
    ctx->pc = 0x2A4450u;
    {
        const bool branch_taken_0x2a4450 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        if (branch_taken_0x2a4450) {
            ctx->pc = 0x2A474Cu;
            goto label_2a474c;
        }
    }
    ctx->pc = 0x2A4458u;
label_2a4458:
    // 0x2a4458: 0xc090864  jal         func_242190
    ctx->pc = 0x2A4458u;
    SET_GPR_U32(ctx, 31, 0x2A4460u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2A4458u, 0x2A4460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4460u;
label_2a4460:
    // 0x2a4460: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a4460u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4464: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2a4464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4468: 0x8fa502c8  lw          $a1, 0x2C8($sp)
    ctx->pc = 0x2a4468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x2a446c: 0xc090844  jal         func_242110
    ctx->pc = 0x2A446Cu;
    SET_GPR_U32(ctx, 31, 0x2A4474u);
    ctx->pc = 0x242110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242110u, 0x2A446Cu, 0x2A4474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4474u;
label_2a4474:
    // 0x2a4474: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2a4474u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4478: 0x8fa60320  lw          $a2, 0x320($sp)
    ctx->pc = 0x2a4478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a447c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a447cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a4480: 0xafa202c4  sw          $v0, 0x2C4($sp)
    ctx->pc = 0x2a4480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 2));
    // 0x2a4484: 0x8fa80320  lw          $t0, 0x320($sp)
    ctx->pc = 0x2a4484u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a4488: 0x8d090000  lw          $t1, 0x0($t0)
    ctx->pc = 0x2a4488u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a448c: 0x950c0  sll         $t2, $t1, 3
    ctx->pc = 0x2a448cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2a4490: 0x2ca5821  addu        $t3, $s6, $t2
    ctx->pc = 0x2a4490u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
    // 0x2a4494: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2a4494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4498: 0xe7a00268  swc1        $f0, 0x268($sp)
    ctx->pc = 0x2a4498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
    // 0x2a449c: 0xc7a0027c  lwc1        $f0, 0x27C($sp)
    ctx->pc = 0x2a449cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a44a0: 0xe7a0026c  swc1        $f0, 0x26C($sp)
    ctx->pc = 0x2a44a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 620), bits); }
    // 0x2a44a4: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2a44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a44a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a44a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a44ac: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a44acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a44b0: 0x2c22021  addu        $a0, $s6, $v0
    ctx->pc = 0x2a44b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2a44b4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2a44b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a44b8: 0xe7a00270  swc1        $f0, 0x270($sp)
    ctx->pc = 0x2a44b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x2a44bc: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x2a44bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a44c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2a44c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a44c4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a44c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a44c8: 0x2c32021  addu        $a0, $s6, $v1
    ctx->pc = 0x2a44c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2a44cc: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x2a44ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2a44d0: 0xafa502c0  sw          $a1, 0x2C0($sp)
    ctx->pc = 0x2a44d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 5));
    // 0x2a44d4: 0x8fa202d4  lw          $v0, 0x2D4($sp)
    ctx->pc = 0x2a44d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x2a44d8: 0xafa202bc  sw          $v0, 0x2BC($sp)
    ctx->pc = 0x2a44d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 2));
    // 0x2a44dc: 0xc103db0  jal         func_40F6C0
    ctx->pc = 0x2A44DCu;
    SET_GPR_U32(ctx, 31, 0x2A44E4u);
    ctx->pc = 0x40F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F6C0u, 0x2A44DCu, 0x2A44E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A44E4u;
label_2a44e4:
    // 0x2a44e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a44e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a44e8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2a44e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2a44ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a44ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a44f0: 0x0  nop
    ctx->pc = 0x2a44f0u;
    // NOP
    // 0x2a44f4: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x2a44f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2a44f8: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2a44f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2a44fc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2a44fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2a4500: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a4500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4504: 0x0  nop
    ctx->pc = 0x2a4504u;
    // NOP
    // 0x2a4508: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2a4508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2a450c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2a450cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2a4510: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2a4510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2a4514: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a4514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4518: 0x0  nop
    ctx->pc = 0x2a4518u;
    // NOP
    // 0x2a451c: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x2a451cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2a4520: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2a4520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2a4524: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x2a4524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2a4528: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a4528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a452c: 0x0  nop
    ctx->pc = 0x2a452cu;
    // NOP
    // 0x2a4530: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2a4530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2a4534: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2a4534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2a4538: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2a4538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2a453c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2a453cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2a4540: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2a4540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2a4544: 0x34620003  ori         $v0, $v1, 0x3
    ctx->pc = 0x2a4544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2a4548: 0xa22025  or          $a0, $a1, $v0
    ctx->pc = 0x2a4548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2a454c: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x2a454cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x2a4550: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a4550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a4554: 0x24a5db20  addiu       $a1, $a1, -0x24E0
    ctx->pc = 0x2a4554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957856));
    // 0x2a4558: 0x27a30258  addiu       $v1, $sp, 0x258
    ctx->pc = 0x2a4558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x2a455c: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x2a455cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4EDB20u));
    // 0x2a4560: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2a4560u;
    { uint32_t bits = FAST_READ32(0x4EDB28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4564: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2a4564u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2a4568: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2a4568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2a456c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a456cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4570: 0x27a50268  addiu       $a1, $sp, 0x268
    ctx->pc = 0x2a4570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
    // 0x2a4574: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a4574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4578: 0xc103d16  jal         func_40F458
    ctx->pc = 0x2A4578u;
    SET_GPR_U32(ctx, 31, 0x2A4580u);
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x2A4578u, 0x2A4580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4580u;
label_2a4580:
    // 0x2a4580: 0x8fa302bc  lw          $v1, 0x2BC($sp)
    ctx->pc = 0x2a4580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
    // 0x2a4584: 0x31023  negu        $v0, $v1
    ctx->pc = 0x2a4584u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2a4588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a458c: 0x0  nop
    ctx->pc = 0x2a458cu;
    // NOP
    // 0x2a4590: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a4590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a4594: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a4594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2a4598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a459c: 0x0  nop
    ctx->pc = 0x2a459cu;
    // NOP
    // 0x2a45a0: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2a45a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a45a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a45a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a45a8: 0x27a50258  addiu       $a1, $sp, 0x258
    ctx->pc = 0x2a45a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x2a45ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a45acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a45b0: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x2A45B0u;
    SET_GPR_U32(ctx, 31, 0x2A45B8u);
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x2A45B0u, 0x2A45B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45B8u;
label_2a45b8:
    // 0x2a45b8: 0x27a40268  addiu       $a0, $sp, 0x268
    ctx->pc = 0x2a45b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
    // 0x2a45bc: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x2a45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2a45c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a45c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a45c4: 0xc041d58  jal         func_107560
    ctx->pc = 0x2A45C4u;
    SET_GPR_U32(ctx, 31, 0x2A45CCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2A45C4u, 0x2A45CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45CCu;
label_2a45cc:
    // 0x2a45cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a45ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a45d0: 0xc103da2  jal         func_40F688
    ctx->pc = 0x2A45D0u;
    SET_GPR_U32(ctx, 31, 0x2A45D8u);
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x2A45D0u, 0x2A45D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45D8u;
label_2a45d8:
    // 0x2a45d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a45d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a45dc: 0xc7a10268  lwc1        $f1, 0x268($sp)
    ctx->pc = 0x2a45dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a45e0: 0xc7a00278  lwc1        $f0, 0x278($sp)
    ctx->pc = 0x2a45e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a45e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a45e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a45e8: 0xe7a00268  swc1        $f0, 0x268($sp)
    ctx->pc = 0x2a45e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
    // 0x2a45ec: 0xc7a10270  lwc1        $f1, 0x270($sp)
    ctx->pc = 0x2a45ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a45f0: 0xc7a00280  lwc1        $f0, 0x280($sp)
    ctx->pc = 0x2a45f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a45f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a45f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a45f8: 0xe7a00270  swc1        $f0, 0x270($sp)
    ctx->pc = 0x2a45f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x2a45fc: 0x8fa502c0  lw          $a1, 0x2C0($sp)
    ctx->pc = 0x2a45fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2a4600: 0x51023  negu        $v0, $a1
    ctx->pc = 0x2a4600u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x2a4604: 0x8fa302d4  lw          $v1, 0x2D4($sp)
    ctx->pc = 0x2a4604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
    // 0x2a4608: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2a4608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a460c: 0xafa402bc  sw          $a0, 0x2BC($sp)
    ctx->pc = 0x2a460cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 4));
    // 0x2a4610: 0x8fa502c0  lw          $a1, 0x2C0($sp)
    ctx->pc = 0x2a4610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2a4614: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a4614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4618: 0xac450198  sw          $a1, 0x198($v0)
    ctx->pc = 0x2a4618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 408), GPR_U32(ctx, 5));
    // 0x2a461c: 0x8fa202bc  lw          $v0, 0x2BC($sp)
    ctx->pc = 0x2a461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
    // 0x2a4620: 0x21823  negu        $v1, $v0
    ctx->pc = 0x2a4620u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2a4624: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a4624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4628: 0x0  nop
    ctx->pc = 0x2a4628u;
    // NOP
    // 0x2a462c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a462cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a4630: 0x3c0542b4  lui         $a1, 0x42B4
    ctx->pc = 0x2a4630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17076 << 16));
    // 0x2a4634: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a4634u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4638: 0x0  nop
    ctx->pc = 0x2a4638u;
    // NOP
    // 0x2a463c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a463cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4640: 0x8fa60300  lw          $a2, 0x300($sp)
    ctx->pc = 0x2a4640u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4644: 0xe4c0019c  swc1        $f0, 0x19C($a2)
    ctx->pc = 0x2a4644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 412), bits); }
    // 0x2a4648: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a4648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a464c: 0x2444018c  addiu       $a0, $v0, 0x18C
    ctx->pc = 0x2a464cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 396));
    // 0x2a4650: 0x27a50268  addiu       $a1, $sp, 0x268
    ctx->pc = 0x2a4650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 616));
    // 0x2a4654: 0xc041d58  jal         func_107560
    ctx->pc = 0x2A4654u;
    SET_GPR_U32(ctx, 31, 0x2A465Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2A4654u, 0x2A465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A465Cu;
label_2a465c:
    // 0x2a465c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a465cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4660: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a4660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a4664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4668: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a4668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a466c: 0xe4600168  swc1        $f0, 0x168($v1)
    ctx->pc = 0x2a466cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 360), bits); }
    // 0x2a4670: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a4670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4674: 0xe4400154  swc1        $f0, 0x154($v0)
    ctx->pc = 0x2a4674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 340), bits); }
    // 0x2a4678: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x2a4678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a467c: 0xe4800140  swc1        $f0, 0x140($a0)
    ctx->pc = 0x2a467cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 320), bits); }
    // 0x2a4680: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a4680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4684: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x2a4684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4688: 0xe4a00150  swc1        $f0, 0x150($a1)
    ctx->pc = 0x2a4688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 336), bits); }
    // 0x2a468c: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a468cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4690: 0xe4400148  swc1        $f0, 0x148($v0)
    ctx->pc = 0x2a4690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 328), bits); }
    // 0x2a4694: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x2a4694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4698: 0xe4800144  swc1        $f0, 0x144($a0)
    ctx->pc = 0x2a4698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 324), bits); }
    // 0x2a469c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a469cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a46a0: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a46a4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2a46a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2a46a8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2a46a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a46ac: 0xe4400164  swc1        $f0, 0x164($v0)
    ctx->pc = 0x2a46acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 356), bits); }
    // 0x2a46b0: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x2a46b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a46b4: 0xe4800160  swc1        $f0, 0x160($a0)
    ctx->pc = 0x2a46b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 352), bits); }
    // 0x2a46b8: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a46b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a46bc: 0xe4400158  swc1        $f0, 0x158($v0)
    ctx->pc = 0x2a46bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 344), bits); }
    // 0x2a46c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a46c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a46c4: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a46c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a46c8: 0xe4600178  swc1        $f0, 0x178($v1)
    ctx->pc = 0x2a46c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 376), bits); }
    // 0x2a46cc: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x2a46ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a46d0: 0xe4a00174  swc1        $f0, 0x174($a1)
    ctx->pc = 0x2a46d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 372), bits); }
    // 0x2a46d4: 0x8fa60300  lw          $a2, 0x300($sp)
    ctx->pc = 0x2a46d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a46d8: 0xe4c00170  swc1        $f0, 0x170($a2)
    ctx->pc = 0x2a46d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 368), bits); }
    // 0x2a46dc: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a46dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a46e0: 0x8c42014c  lw          $v0, 0x14C($v0)
    ctx->pc = 0x2a46e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x2a46e4: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2a46e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2a46e8: 0x34a40003  ori         $a0, $a1, 0x3
    ctx->pc = 0x2a46e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x2a46ec: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2a46ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2a46f0: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x2a46f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a46f4: 0xac82014c  sw          $v0, 0x14C($a0)
    ctx->pc = 0x2a46f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 332), GPR_U32(ctx, 2));
    // 0x2a46f8: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x2a46f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a46fc: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a46fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4700: 0x24a20140  addiu       $v0, $a1, 0x140
    ctx->pc = 0x2a4700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x2a4704: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a4704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4708: 0x27a50258  addiu       $a1, $sp, 0x258
    ctx->pc = 0x2a4708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 600));
    // 0x2a470c: 0xc46c019c  lwc1        $f12, 0x19C($v1)
    ctx->pc = 0x2a470cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a4710: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a4710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4714: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x2A4714u;
    SET_GPR_U32(ctx, 31, 0x2A471Cu);
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x2A4714u, 0x2A471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A471Cu;
label_2a471c:
    // 0x2a471c: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a471cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4720: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a4720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4724: 0x24640140  addiu       $a0, $v1, 0x140
    ctx->pc = 0x2a4724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x2a4728: 0x2445018c  addiu       $a1, $v0, 0x18C
    ctx->pc = 0x2a4728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 396));
    // 0x2a472c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a472cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4730: 0xc103d16  jal         func_40F458
    ctx->pc = 0x2A4730u;
    SET_GPR_U32(ctx, 31, 0x2A4738u);
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x2A4730u, 0x2A4738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4738u;
label_2a4738:
    // 0x2a4738: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a4738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a473c: 0x24640140  addiu       $a0, $v1, 0x140
    ctx->pc = 0x2a473cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 320));
    // 0x2a4740: 0xc103eb2  jal         func_40FAC8
    ctx->pc = 0x2A4740u;
    SET_GPR_U32(ctx, 31, 0x2A4748u);
    ctx->pc = 0x40FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAC8u, 0x2A4740u, 0x2A4748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4748u;
label_2a4748:
    // 0x2a4748: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a4748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a474c:
    // 0x2a474c: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x2a474cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4750: 0x8ca2012c  lw          $v0, 0x12C($a1)
    ctx->pc = 0x2a4750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 300)));
    // 0x2a4754: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a4754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4758: 0xc091018  jal         func_244060
    ctx->pc = 0x2A4758u;
    SET_GPR_U32(ctx, 31, 0x2A4760u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x2A4758u, 0x2A4760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4760u;
label_2a4760:
    // 0x2a4760: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a4760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4764: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a4764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4768: 0xac440110  sw          $a0, 0x110($v0)
    ctx->pc = 0x2a4768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 4));
    // 0x2a476c: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a476cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4770: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a4770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a4774: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4774u;
    {
        const bool branch_taken_0x2a4774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4774) {
            ctx->pc = 0x2A4798u;
            goto label_2a4798;
        }
    }
    ctx->pc = 0x2A477Cu;
    // 0x2a477c: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a477cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4780: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x2a4780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a4784: 0xc091018  jal         func_244060
    ctx->pc = 0x2A4784u;
    SET_GPR_U32(ctx, 31, 0x2A478Cu);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x2A4784u, 0x2A478Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A478Cu;
label_2a478c:
    // 0x2a478c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a478cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4790: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x2a4790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4794: 0xaca40114  sw          $a0, 0x114($a1)
    ctx->pc = 0x2a4794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 276), GPR_U32(ctx, 4));
label_2a4798:
    // 0x2a4798: 0x1010005f  beq         $zero, $s0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2A4798u;
    {
        const bool branch_taken_0x2a4798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x2a4798) {
            ctx->pc = 0x2A4918u;
            goto label_2a4918;
        }
    }
    ctx->pc = 0x2A47A0u;
    // 0x2a47a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a47a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a47a4: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2A47A4u;
    SET_GPR_U32(ctx, 31, 0x2A47ACu);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2A47A4u, 0x2A47ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A47ACu;
label_2a47ac:
    // 0x2a47ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A47ACu;
    {
        const bool branch_taken_0x2a47ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a47ac) {
            ctx->pc = 0x2A47CCu;
            goto label_2a47cc;
        }
    }
    ctx->pc = 0x2A47B4u;
    // 0x2a47b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a47b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a47b8: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2A47B8u;
    SET_GPR_U32(ctx, 31, 0x2A47C0u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2A47B8u, 0x2A47C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A47C0u;
label_2a47c0:
    // 0x2a47c0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2a47c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a47c4: 0x14440054  bne         $v0, $a0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2A47C4u;
    {
        const bool branch_taken_0x2a47c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a47c4) {
            ctx->pc = 0x2A4918u;
            goto label_2a4918;
        }
    }
    ctx->pc = 0x2A47CCu;
label_2a47cc:
    // 0x2a47cc: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2a47ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a47d0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2a47d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2a47d4: 0xa22024  and         $a0, $a1, $v0
    ctx->pc = 0x2a47d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2a47d8: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A47D8u;
    {
        const bool branch_taken_0x2a47d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a47d8) {
            ctx->pc = 0x2A480Cu;
            goto label_2a480c;
        }
    }
    ctx->pc = 0x2A47E0u;
    // 0x2a47e0: 0x8fa50310  lw          $a1, 0x310($sp)
    ctx->pc = 0x2a47e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2a47e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a47e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a47e8: 0x240204af  addiu       $v0, $zero, 0x4AF
    ctx->pc = 0x2a47e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1199));
    // 0x2a47ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a47ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a47f0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a47f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a47f4: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2A47F4u;
    SET_GPR_U32(ctx, 31, 0x2A47FCu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2A47F4u, 0x2A47FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A47FCu;
label_2a47fc:
    // 0x2a47fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a47fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a4800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4804: 0x14a2002f  bne         $a1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2A4804u;
    {
        const bool branch_taken_0x2a4804 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a4804) {
            ctx->pc = 0x2A48C4u;
            goto label_2a48c4;
        }
    }
    ctx->pc = 0x2A480Cu;
label_2a480c:
    // 0x2a480c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a480cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4810: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x2a4810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4814: 0xac820180  sw          $v0, 0x180($a0)
    ctx->pc = 0x2a4814u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 384), GPR_U32(ctx, 2));
    // 0x2a4818: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2a4818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a481c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2a481cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a4820: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4820u;
    {
        const bool branch_taken_0x2a4820 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4820) {
            ctx->pc = 0x2A4838u;
            goto label_2a4838;
        }
    }
    ctx->pc = 0x2A4828u;
    // 0x2a4828: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a4828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a482c: 0xac400180  sw          $zero, 0x180($v0)
    ctx->pc = 0x2a482cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 0));
    // 0x2a4830: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2A4830u;
    {
        const bool branch_taken_0x2a4830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4830) {
            ctx->pc = 0x2A48C4u;
            goto label_2a48c4;
        }
    }
    ctx->pc = 0x2A4838u;
label_2a4838:
    // 0x2a4838: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2a4838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a483c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2a483cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a4840: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a4840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a4844: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A4844u;
    SET_GPR_U32(ctx, 31, 0x2A484Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A4844u, 0x2A484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A484Cu;
label_2a484c:
    // 0x2a484c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a484cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4850: 0xafa502b8  sw          $a1, 0x2B8($sp)
    ctx->pc = 0x2a4850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 5));
    // 0x2a4854: 0x8fa202b8  lw          $v0, 0x2B8($sp)
    ctx->pc = 0x2a4854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x2a4858: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a4858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a485c: 0xc0a5368  jal         func_294DA0
    ctx->pc = 0x2A485Cu;
    SET_GPR_U32(ctx, 31, 0x2A4864u);
    ctx->pc = 0x294DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294DA0u, 0x2A485Cu, 0x2A4864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4864u;
label_2a4864:
    // 0x2a4864: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x2a4864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4868: 0xac8200bc  sw          $v0, 0xBC($a0)
    ctx->pc = 0x2a4868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 2));
    // 0x2a486c: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x2a486cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4870: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2a4870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x2a4874: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2a4874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a4878: 0x14440012  bne         $v0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A4878u;
    {
        const bool branch_taken_0x2a4878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a4878) {
            ctx->pc = 0x2A48C4u;
            goto label_2a48c4;
        }
    }
    ctx->pc = 0x2A4880u;
    // 0x2a4880: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2a4880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a4884: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2a4884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2a4888: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x2a4888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a488c: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A488Cu;
    {
        const bool branch_taken_0x2a488c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a488c) {
            ctx->pc = 0x2A48C4u;
            goto label_2a48c4;
        }
    }
    ctx->pc = 0x2A4894u;
    // 0x2a4894: 0x8fa20310  lw          $v0, 0x310($sp)
    ctx->pc = 0x2a4894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2a4898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a4898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a489c: 0x240504af  addiu       $a1, $zero, 0x4AF
    ctx->pc = 0x2a489cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1199));
    // 0x2a48a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a48a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a48a4: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2A48A4u;
    SET_GPR_U32(ctx, 31, 0x2A48ACu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2A48A4u, 0x2A48ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A48ACu;
label_2a48ac:
    // 0x2a48ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a48acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a48b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a48b4: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A48B4u;
    {
        const bool branch_taken_0x2a48b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a48b4) {
            ctx->pc = 0x2A48C4u;
            goto label_2a48c4;
        }
    }
    ctx->pc = 0x2A48BCu;
    // 0x2a48bc: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a48bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a48c0: 0xac400180  sw          $zero, 0x180($v0)
    ctx->pc = 0x2a48c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 0));
label_2a48c4:
    // 0x2a48c4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2a48c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a48c8: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x2a48c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x2a48cc: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x2a48ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x2a48d0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A48D0u;
    {
        const bool branch_taken_0x2a48d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a48d0) {
            ctx->pc = 0x2A4900u;
            goto label_2a4900;
        }
    }
    ctx->pc = 0x2A48D8u;
    // 0x2a48d8: 0x8fa20310  lw          $v0, 0x310($sp)
    ctx->pc = 0x2a48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2a48dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a48dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a48e0: 0x240204af  addiu       $v0, $zero, 0x4AF
    ctx->pc = 0x2a48e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1199));
    // 0x2a48e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a48e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a48e8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a48e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a48ec: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2A48ECu;
    SET_GPR_U32(ctx, 31, 0x2A48F4u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2A48ECu, 0x2A48F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A48F4u;
label_2a48f4:
    // 0x2a48f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a48f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a48f8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A48F8u;
    {
        const bool branch_taken_0x2a48f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a48f8) {
            ctx->pc = 0x2A4918u;
            goto label_2a4918;
        }
    }
    ctx->pc = 0x2A4900u;
label_2a4900:
    // 0x2a4900: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a4900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4904: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a4904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4908: 0xac620180  sw          $v0, 0x180($v1)
    ctx->pc = 0x2a4908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 384), GPR_U32(ctx, 2));
    // 0x2a490c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2a490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a4910: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2a4910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2a4914: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a4914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2a4918:
    // 0x2a4918: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a4918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a491c: 0x8c430180  lw          $v1, 0x180($v0)
    ctx->pc = 0x2a491cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x2a4920: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a4920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4924: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A4924u;
    {
        const bool branch_taken_0x2a4924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a4924) {
            ctx->pc = 0x2A4944u;
            goto label_2a4944;
        }
    }
    ctx->pc = 0x2A492Cu;
    // 0x2a492c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a492cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4930: 0xc1030b6  jal         func_40C2D8
    ctx->pc = 0x2A4930u;
    SET_GPR_U32(ctx, 31, 0x2A4938u);
    ctx->pc = 0x40C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C2D8u, 0x2A4930u, 0x2A4938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4938u;
label_2a4938:
    // 0x2a4938: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a4938u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a493c: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4940: 0xac430118  sw          $v1, 0x118($v0)
    ctx->pc = 0x2a4940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 3));
label_2a4944:
    // 0x2a4944: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a4944u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4948: 0x101000bf  beq         $zero, $s0, . + 4 + (0xBF << 2)
    ctx->pc = 0x2A4948u;
    {
        const bool branch_taken_0x2a4948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x2a4948) {
            ctx->pc = 0x2A4C48u;
            goto label_2a4c48;
        }
    }
    ctx->pc = 0x2A4950u;
    // 0x2a4950: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2a4950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a4954: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2a4954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2a4958: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x2a4958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a495c: 0x10a00052  beqz        $a1, . + 4 + (0x52 << 2)
    ctx->pc = 0x2A495Cu;
    {
        const bool branch_taken_0x2a495c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a495c) {
            ctx->pc = 0x2A4AA8u;
            goto label_2a4aa8;
        }
    }
    ctx->pc = 0x2A4964u;
    // 0x2a4964: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2a4964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a4968: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2a4968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a496c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A496Cu;
    {
        const bool branch_taken_0x2a496c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a496c) {
            ctx->pc = 0x2A4988u;
            goto label_2a4988;
        }
    }
    ctx->pc = 0x2A4974u;
    // 0x2a4974: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2a4974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a4978: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2a4978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a497c: 0xafa30294  sw          $v1, 0x294($sp)
    ctx->pc = 0x2a497cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 3));
    // 0x2a4980: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4980u;
    {
        const bool branch_taken_0x2a4980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4980) {
            ctx->pc = 0x2A4998u;
            goto label_2a4998;
        }
    }
    ctx->pc = 0x2A4988u;
label_2a4988:
    // 0x2a4988: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a4988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a498c: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2A498Cu;
    SET_GPR_U32(ctx, 31, 0x2A4994u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2A498Cu, 0x2A4994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4994u;
label_2a4994:
    // 0x2a4994: 0xafa20294  sw          $v0, 0x294($sp)
    ctx->pc = 0x2a4994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
label_2a4998:
    // 0x2a4998: 0x8fa40294  lw          $a0, 0x294($sp)
    ctx->pc = 0x2a4998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x2a499c: 0xafa402b4  sw          $a0, 0x2B4($sp)
    ctx->pc = 0x2a499cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 4));
    // 0x2a49a0: 0x8fa502b4  lw          $a1, 0x2B4($sp)
    ctx->pc = 0x2a49a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
    // 0x2a49a4: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2A49A4u;
    {
        const bool branch_taken_0x2a49a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a49a4) {
            ctx->pc = 0x2A4A38u;
            goto label_2a4a38;
        }
    }
    ctx->pc = 0x2A49ACu;
    // 0x2a49ac: 0x8fa202b4  lw          $v0, 0x2B4($sp)
    ctx->pc = 0x2a49acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
    // 0x2a49b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a49b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49b4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2a49b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2a49b8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A49B8u;
    SET_GPR_U32(ctx, 31, 0x2A49C0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A49B8u, 0x2A49C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49C0u;
label_2a49c0:
    // 0x2a49c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a49c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49c4: 0xafa402b0  sw          $a0, 0x2B0($sp)
    ctx->pc = 0x2a49c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 4));
    // 0x2a49c8: 0x8fa502b0  lw          $a1, 0x2B0($sp)
    ctx->pc = 0x2a49c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2a49cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a49ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49d0: 0xc09b03c  jal         func_26C0F0
    ctx->pc = 0x2A49D0u;
    SET_GPR_U32(ctx, 31, 0x2A49D8u);
    ctx->pc = 0x26C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C0F0u, 0x2A49D0u, 0x2A49D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49D8u;
label_2a49d8:
    // 0x2a49d8: 0xafa202ac  sw          $v0, 0x2AC($sp)
    ctx->pc = 0x2a49d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 2));
    // 0x2a49dc: 0xc090864  jal         func_242190
    ctx->pc = 0x2A49DCu;
    SET_GPR_U32(ctx, 31, 0x2A49E4u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2A49DCu, 0x2A49E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49E4u;
label_2a49e4:
    // 0x2a49e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a49e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49e8: 0x8fa502ac  lw          $a1, 0x2AC($sp)
    ctx->pc = 0x2a49e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
    // 0x2a49ec: 0xc090844  jal         func_242110
    ctx->pc = 0x2A49ECu;
    SET_GPR_U32(ctx, 31, 0x2A49F4u);
    ctx->pc = 0x242110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242110u, 0x2A49ECu, 0x2A49F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49F4u;
label_2a49f4:
    // 0x2a49f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a49f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a49f8: 0xafa302a8  sw          $v1, 0x2A8($sp)
    ctx->pc = 0x2a49f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 3));
    // 0x2a49fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a49fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a00: 0xc096ea4  jal         func_25BA90
    ctx->pc = 0x2A4A00u;
    SET_GPR_U32(ctx, 31, 0x2A4A08u);
    ctx->pc = 0x25BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA90u, 0x2A4A00u, 0x2A4A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A08u;
label_2a4a08:
    // 0x2a4a08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a4a08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a0c: 0xafa302a4  sw          $v1, 0x2A4($sp)
    ctx->pc = 0x2a4a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 3));
    // 0x2a4a10: 0x8fa302a4  lw          $v1, 0x2A4($sp)
    ctx->pc = 0x2a4a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x2a4a14: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2a4a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a4a18: 0x8fa402a8  lw          $a0, 0x2A8($sp)
    ctx->pc = 0x2a4a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x2a4a1c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x2a4a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4a20: 0x8ca20090  lw          $v0, 0x90($a1)
    ctx->pc = 0x2a4a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x2a4a24: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4A24u;
    {
        const bool branch_taken_0x2a4a24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a4a24) {
            ctx->pc = 0x2A4A38u;
            goto label_2a4a38;
        }
    }
    ctx->pc = 0x2A4A2Cu;
    // 0x2a4a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a4a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4a30: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2a4a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a4a34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a4a34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a4a38:
    // 0x2a4a38: 0x93a502fd  lbu         $a1, 0x2FD($sp)
    ctx->pc = 0x2a4a38u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 765)));
    // 0x2a4a3c: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2A4A3Cu;
    {
        const bool branch_taken_0x2a4a3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4a3c) {
            ctx->pc = 0x2A4A70u;
            goto label_2a4a70;
        }
    }
    ctx->pc = 0x2A4A44u;
    // 0x2a4a44: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a4a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4a48: 0x80420058  lb          $v0, 0x58($v0)
    ctx->pc = 0x2a4a48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2a4a4c: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x2a4a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2a4a50: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2a4a50u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2a4a54: 0x24050062  addiu       $a1, $zero, 0x62
    ctx->pc = 0x2a4a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x2a4a58: 0x14850005  bne         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4A58u;
    {
        const bool branch_taken_0x2a4a58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a4a58) {
            ctx->pc = 0x2A4A70u;
            goto label_2a4a70;
        }
    }
    ctx->pc = 0x2A4A60u;
    // 0x2a4a60: 0x13102b  sltu        $v0, $zero, $s3
    ctx->pc = 0x2a4a60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2a4a64: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a4a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a4a68: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2a4a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a4a6c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a4a6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a4a70:
    // 0x2a4a70: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x2a4a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4a74: 0x24a20055  addiu       $v0, $a1, 0x55
    ctx->pc = 0x2a4a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 85));
    // 0x2a4a78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a4a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4a7c: 0x2785a408  addiu       $a1, $gp, -0x5BF8
    ctx->pc = 0x2a4a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943752));
    // 0x2a4a80: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x2A4A80u;
    SET_GPR_U32(ctx, 31, 0x2A4A88u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x2A4A80u, 0x2A4A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4A88u;
label_2a4a88:
    // 0x2a4a88: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2A4A88u;
    {
        const bool branch_taken_0x2a4a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4a88) {
            ctx->pc = 0x2A4C48u;
            goto label_2a4c48;
        }
    }
    ctx->pc = 0x2A4A90u;
    // 0x2a4a90: 0x13202b  sltu        $a0, $zero, $s3
    ctx->pc = 0x2a4a90u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2a4a94: 0x38850001  xori        $a1, $a0, 0x1
    ctx->pc = 0x2a4a94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2a4a98: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2a4a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a4a9c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a4a9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4aa0: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x2A4AA0u;
    {
        const bool branch_taken_0x2a4aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4aa0) {
            ctx->pc = 0x2A4C48u;
            goto label_2a4c48;
        }
    }
    ctx->pc = 0x2A4AA8u;
label_2a4aa8:
    // 0x2a4aa8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2a4aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a4aac: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2a4aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2a4ab0: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x2a4ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a4ab4: 0x10800064  beqz        $a0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2A4AB4u;
    {
        const bool branch_taken_0x2a4ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4ab4) {
            ctx->pc = 0x2A4C48u;
            goto label_2a4c48;
        }
    }
    ctx->pc = 0x2A4ABCu;
    // 0x2a4abc: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x2a4abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x2a4ac0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2a4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2a4ac4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a4ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ac8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2a4ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2a4acc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A4ACCu;
    SET_GPR_U32(ctx, 31, 0x2A4AD4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A4ACCu, 0x2A4AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4AD4u;
label_2a4ad4:
    // 0x2a4ad4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a4ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ad8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2a4ad8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4adc: 0x27a40238  addiu       $a0, $sp, 0x238
    ctx->pc = 0x2a4adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
    // 0x2a4ae0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2a4ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ae4: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2A4AE4u;
    SET_GPR_U32(ctx, 31, 0x2A4AECu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2A4AE4u, 0x2A4AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4AECu;
label_2a4aec:
    // 0x2a4aec: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x2a4aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4af0: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4af4: 0xc4400194  lwc1        $f0, 0x194($v0)
    ctx->pc = 0x2a4af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4af8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a4af8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a4afc: 0xe7a002a0  swc1        $f0, 0x2A0($sp)
    ctx->pc = 0x2a4afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x2a4b00: 0x27a40228  addiu       $a0, $sp, 0x228
    ctx->pc = 0x2a4b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
    // 0x2a4b04: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2a4b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4b08: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2A4B08u;
    SET_GPR_U32(ctx, 31, 0x2A4B10u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2A4B08u, 0x2A4B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4B10u;
label_2a4b10:
    // 0x2a4b10: 0xc7a10228  lwc1        $f1, 0x228($sp)
    ctx->pc = 0x2a4b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4b14: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a4b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4b18: 0xc440018c  lwc1        $f0, 0x18C($v0)
    ctx->pc = 0x2a4b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4b1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a4b1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a4b20: 0xe7a0029c  swc1        $f0, 0x29C($sp)
    ctx->pc = 0x2a4b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 668), bits); }
    // 0x2a4b24: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2a4b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4b28: 0xc091010  jal         func_244040
    ctx->pc = 0x2A4B28u;
    SET_GPR_U32(ctx, 31, 0x2A4B30u);
    ctx->pc = 0x244040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244040u, 0x2A4B28u, 0x2A4B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4B30u;
label_2a4b30:
    // 0x2a4b30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a4b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4b34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a4b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4b38: 0x10850028  beq         $a0, $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2A4B38u;
    {
        const bool branch_taken_0x2a4b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x2a4b38) {
            ctx->pc = 0x2A4BDCu;
            goto label_2a4bdc;
        }
    }
    ctx->pc = 0x2A4B40u;
    // 0x2a4b40: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2A4B40u;
    {
        const bool branch_taken_0x2a4b40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4b40) {
            ctx->pc = 0x2A4BDCu;
            goto label_2a4bdc;
        }
    }
    ctx->pc = 0x2A4B48u;
    // 0x2a4b48: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a4b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a4b4c: 0x10860006  beq         $a0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4B4Cu;
    {
        const bool branch_taken_0x2a4b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x2a4b4c) {
            ctx->pc = 0x2A4B68u;
            goto label_2a4b68;
        }
    }
    ctx->pc = 0x2A4B54u;
    // 0x2a4b54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a4b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4b58: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4B58u;
    {
        const bool branch_taken_0x2a4b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a4b58) {
            ctx->pc = 0x2A4B68u;
            goto label_2a4b68;
        }
    }
    ctx->pc = 0x2A4B60u;
    // 0x2a4b60: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2A4B60u;
    {
        const bool branch_taken_0x2a4b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4b60) {
            ctx->pc = 0x2A4C48u;
            goto label_2a4c48;
        }
    }
    ctx->pc = 0x2A4B68u;
label_2a4b68:
    // 0x2a4b68: 0xc7a1029c  lwc1        $f1, 0x29C($sp)
    ctx->pc = 0x2a4b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4b6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a4b6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4b70: 0x0  nop
    ctx->pc = 0x2a4b70u;
    // NOP
    // 0x2a4b74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a4b74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4b78: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2A4B78u;
    {
        const bool branch_taken_0x2a4b78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4b78) {
            ctx->pc = 0x2A4B98u;
            goto label_2a4b98;
        }
    }
    ctx->pc = 0x2A4B80u;
    // 0x2a4b80: 0xc7a102a0  lwc1        $f1, 0x2A0($sp)
    ctx->pc = 0x2a4b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4b84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a4b84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4b88: 0x0  nop
    ctx->pc = 0x2a4b88u;
    // NOP
    // 0x2a4b8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a4b8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4b90: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2A4B90u;
    {
        const bool branch_taken_0x2a4b90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4b90) {
            ctx->pc = 0x2A4BC8u;
            goto label_2a4bc8;
        }
    }
    ctx->pc = 0x2A4B98u;
label_2a4b98:
    // 0x2a4b98: 0xc7a1029c  lwc1        $f1, 0x29C($sp)
    ctx->pc = 0x2a4b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4b9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a4b9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4ba0: 0x0  nop
    ctx->pc = 0x2a4ba0u;
    // NOP
    // 0x2a4ba4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a4ba4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4ba8: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x2A4BA8u;
    {
        const bool branch_taken_0x2a4ba8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4ba8) {
            ctx->pc = 0x2A4C48u;
            goto label_2a4c48;
        }
    }
    ctx->pc = 0x2A4BB0u;
    // 0x2a4bb0: 0xc7a102a0  lwc1        $f1, 0x2A0($sp)
    ctx->pc = 0x2a4bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4bb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a4bb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4bb8: 0x0  nop
    ctx->pc = 0x2a4bb8u;
    // NOP
    // 0x2a4bbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a4bbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4bc0: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x2A4BC0u;
    {
        const bool branch_taken_0x2a4bc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4bc0) {
            ctx->pc = 0x2A4C48u;
            goto label_2a4c48;
        }
    }
    ctx->pc = 0x2A4BC8u;
label_2a4bc8:
    // 0x2a4bc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a4bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4bcc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2a4bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a4bd0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a4bd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4bd4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2A4BD4u;
    {
        const bool branch_taken_0x2a4bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4bd4) {
            ctx->pc = 0x2A4C48u;
            goto label_2a4c48;
        }
    }
    ctx->pc = 0x2A4BDCu;
label_2a4bdc:
    // 0x2a4bdc: 0xc7a1029c  lwc1        $f1, 0x29C($sp)
    ctx->pc = 0x2a4bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4be0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a4be0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4be4: 0x0  nop
    ctx->pc = 0x2a4be4u;
    // NOP
    // 0x2a4be8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a4be8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4bec: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2A4BECu;
    {
        const bool branch_taken_0x2a4bec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4bec) {
            ctx->pc = 0x2A4C0Cu;
            goto label_2a4c0c;
        }
    }
    ctx->pc = 0x2A4BF4u;
    // 0x2a4bf4: 0xc7a102a0  lwc1        $f1, 0x2A0($sp)
    ctx->pc = 0x2a4bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4bf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a4bf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4bfc: 0x0  nop
    ctx->pc = 0x2a4bfcu;
    // NOP
    // 0x2a4c00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a4c00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4c04: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2A4C04u;
    {
        const bool branch_taken_0x2a4c04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4c04) {
            ctx->pc = 0x2A4C3Cu;
            goto label_2a4c3c;
        }
    }
    ctx->pc = 0x2A4C0Cu;
label_2a4c0c:
    // 0x2a4c0c: 0xc7a1029c  lwc1        $f1, 0x29C($sp)
    ctx->pc = 0x2a4c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4c10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a4c10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4c14: 0x0  nop
    ctx->pc = 0x2a4c14u;
    // NOP
    // 0x2a4c18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a4c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4c1c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2A4C1Cu;
    {
        const bool branch_taken_0x2a4c1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4c1c) {
            ctx->pc = 0x2A4C48u;
            goto label_2a4c48;
        }
    }
    ctx->pc = 0x2A4C24u;
    // 0x2a4c24: 0xc7a102a0  lwc1        $f1, 0x2A0($sp)
    ctx->pc = 0x2a4c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4c28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a4c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4c2c: 0x0  nop
    ctx->pc = 0x2a4c2cu;
    // NOP
    // 0x2a4c30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a4c30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4c34: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4C34u;
    {
        const bool branch_taken_0x2a4c34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4c34) {
            ctx->pc = 0x2A4C48u;
            goto label_2a4c48;
        }
    }
    ctx->pc = 0x2A4C3Cu;
label_2a4c3c:
    // 0x2a4c3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a4c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4c40: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2a4c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a4c44: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a4c44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4c48:
    // 0x2a4c48: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2a4c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a4c4c: 0x2782a40c  addiu       $v0, $gp, -0x5BF4
    ctx->pc = 0x2a4c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943756));
    // 0x2a4c50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a4c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c54: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2A4C54u;
    SET_GPR_U32(ctx, 31, 0x2A4C5Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A4C54u, 0x2A4C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C5Cu;
label_2a4c5c:
    // 0x2a4c5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a4c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c60: 0xc122430  jal         func_4890C0
    ctx->pc = 0x2A4C60u;
    SET_GPR_U32(ctx, 31, 0x2A4C68u);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x2A4C60u, 0x2A4C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C68u;
label_2a4c68:
    // 0x2a4c68: 0xafa20298  sw          $v0, 0x298($sp)
    ctx->pc = 0x2a4c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
    // 0x2a4c6c: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4c70: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2a4c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a4c74: 0x24450055  addiu       $a1, $v0, 0x55
    ctx->pc = 0x2a4c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
    // 0x2a4c78: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2A4C78u;
    SET_GPR_U32(ctx, 31, 0x2A4C80u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2A4C78u, 0x2A4C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4C80u;
label_2a4c80:
    // 0x2a4c80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a4c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c84: 0x8fa60300  lw          $a2, 0x300($sp)
    ctx->pc = 0x2a4c84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4c88: 0xa0d301a0  sb          $s3, 0x1A0($a2)
    ctx->pc = 0x2a4c88u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 416), (uint8_t)GPR_U32(ctx, 19));
    // 0x2a4c8c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2a4c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a4c90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a4c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4c94: 0x2785a410  addiu       $a1, $gp, -0x5BF0
    ctx->pc = 0x2a4c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943760));
    // 0x2a4c98: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2A4C98u;
    SET_GPR_U32(ctx, 31, 0x2A4CA0u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2A4C98u, 0x2A4CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4CA0u;
label_2a4ca0:
    // 0x2a4ca0: 0x8fa70300  lw          $a3, 0x300($sp)
    ctx->pc = 0x2a4ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4ca4: 0x8faa0300  lw          $t2, 0x300($sp)
    ctx->pc = 0x2a4ca4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4ca8: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a4ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4cac: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x2a4cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x2a4cb0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a4cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4cb4: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2a4cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a4cb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a4cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4cbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a4cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4cc0: 0x24e20055  addiu       $v0, $a3, 0x55
    ctx->pc = 0x2a4cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 85));
    // 0x2a4cc4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a4cc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4cc8: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x2a4cc8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x2a4ccc: 0x25087680  addiu       $t0, $t0, 0x7680
    ctx->pc = 0x2a4cccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30336));
    // 0x2a4cd0: 0x8fa90300  lw          $t1, 0x300($sp)
    ctx->pc = 0x2a4cd0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4cd4: 0x8d4a01a4  lw          $t2, 0x1A4($t2)
    ctx->pc = 0x2a4cd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 420)));
    // 0x2a4cd8: 0x8c6b01a8  lw          $t3, 0x1A8($v1)
    ctx->pc = 0x2a4cd8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 424)));
    // 0x2a4cdc: 0xc120c08  jal         func_483020
    ctx->pc = 0x2A4CDCu;
    SET_GPR_U32(ctx, 31, 0x2A4CE4u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x2A4CDCu, 0x2A4CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4CE4u;
label_2a4ce4:
    // 0x2a4ce4: 0x10100020  beq         $zero, $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A4CE4u;
    {
        const bool branch_taken_0x2a4ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x2a4ce4) {
            ctx->pc = 0x2A4D68u;
            goto label_2a4d68;
        }
    }
    ctx->pc = 0x2A4CECu;
    // 0x2a4cec: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2a4cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a4cf0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x2a4cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x2a4cf4: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x2a4cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a4cf8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4CF8u;
    {
        const bool branch_taken_0x2a4cf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4cf8) {
            ctx->pc = 0x2A4D08u;
            goto label_2a4d08;
        }
    }
    ctx->pc = 0x2A4D00u;
    // 0x2a4d00: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x2a4d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4d04: 0xaca00184  sw          $zero, 0x184($a1)
    ctx->pc = 0x2a4d04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 388), GPR_U32(ctx, 0));
label_2a4d08:
    // 0x2a4d08: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2a4d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a4d0c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2a4d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2a4d10: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x2a4d10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a4d14: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4D14u;
    {
        const bool branch_taken_0x2a4d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4d14) {
            ctx->pc = 0x2A4D28u;
            goto label_2a4d28;
        }
    }
    ctx->pc = 0x2A4D1Cu;
    // 0x2a4d1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a4d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4d20: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a4d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4d24: 0xac450184  sw          $a1, 0x184($v0)
    ctx->pc = 0x2a4d24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 388), GPR_U32(ctx, 5));
label_2a4d28:
    // 0x2a4d28: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2a4d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a4d2c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x2a4d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x2a4d30: 0x442824  and         $a1, $v0, $a0
    ctx->pc = 0x2a4d30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a4d34: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4D34u;
    {
        const bool branch_taken_0x2a4d34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4d34) {
            ctx->pc = 0x2A4D48u;
            goto label_2a4d48;
        }
    }
    ctx->pc = 0x2A4D3Cu;
    // 0x2a4d3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a4d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4d40: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a4d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4d44: 0xac620184  sw          $v0, 0x184($v1)
    ctx->pc = 0x2a4d44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 388), GPR_U32(ctx, 2));
label_2a4d48:
    // 0x2a4d48: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2a4d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a4d4c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x2a4d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x2a4d50: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x2a4d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x2a4d54: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A4D54u;
    {
        const bool branch_taken_0x2a4d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4d54) {
            ctx->pc = 0x2A4D68u;
            goto label_2a4d68;
        }
    }
    ctx->pc = 0x2A4D5Cu;
    // 0x2a4d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a4d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4d60: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x2a4d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4d64: 0xa0a20188  sb          $v0, 0x188($a1)
    ctx->pc = 0x2a4d64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 392), (uint8_t)GPR_U32(ctx, 2));
label_2a4d68:
    // 0x2a4d68: 0x8fa60310  lw          $a2, 0x310($sp)
    ctx->pc = 0x2a4d68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2a4d6c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2a4d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d70: 0x240204ab  addiu       $v0, $zero, 0x4AB
    ctx->pc = 0x2a4d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1195));
    // 0x2a4d74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a4d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a4d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d7c: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2A4D7Cu;
    SET_GPR_U32(ctx, 31, 0x2A4D84u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2A4D7Cu, 0x2A4D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D84u;
label_2a4d84:
    // 0x2a4d84: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a4d84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4d88: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a4d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4d8c: 0xa043011c  sb          $v1, 0x11C($v0)
    ctx->pc = 0x2a4d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a4d90: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a4d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4d94: 0x9045011c  lbu         $a1, 0x11C($v0)
    ctx->pc = 0x2a4d94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 284)));
    // 0x2a4d98: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A4D98u;
    {
        const bool branch_taken_0x2a4d98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4d98) {
            ctx->pc = 0x2A4DC4u;
            goto label_2a4dc4;
        }
    }
    ctx->pc = 0x2A4DA0u;
    // 0x2a4da0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a4da0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a4da4: 0x8fa60310  lw          $a2, 0x310($sp)
    ctx->pc = 0x2a4da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x2a4da8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2a4da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4dac: 0x240204ac  addiu       $v0, $zero, 0x4AC
    ctx->pc = 0x2a4dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1196));
    // 0x2a4db0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a4db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4db4: 0xc042090  jal         func_108240
    ctx->pc = 0x2A4DB4u;
    SET_GPR_U32(ctx, 31, 0x2A4DBCu);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2A4DB4u, 0x2A4DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4DBCu;
label_2a4dbc:
    // 0x2a4dbc: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x2a4dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4dc0: 0xe4800120  swc1        $f0, 0x120($a0)
    ctx->pc = 0x2a4dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
label_2a4dc4:
    // 0x2a4dc4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a4dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a4dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4dcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a4dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4dd0: 0xc0a9404  jal         func_2A5010
    ctx->pc = 0x2A4DD0u;
    SET_GPR_U32(ctx, 31, 0x2A4DD8u);
    ctx->pc = 0x2A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5010u, 0x2A4DD0u, 0x2A4DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4DD8u;
label_2a4dd8:
    // 0x2a4dd8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a4dd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ddc: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x2a4ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4de0: 0x24850055  addiu       $a1, $a0, 0x55
    ctx->pc = 0x2a4de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 85));
    // 0x2a4de4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a4de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4de8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2a4de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2a4dec: 0x2442db70  addiu       $v0, $v0, -0x2490
    ctx->pc = 0x2a4decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957936));
    // 0x2a4df0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a4df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4df4: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x2A4DF4u;
    SET_GPR_U32(ctx, 31, 0x2A4DFCu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x2A4DF4u, 0x2A4DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4DFCu;
label_2a4dfc:
    // 0x2a4dfc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a4dfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e00: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A4E00u;
    {
        const bool branch_taken_0x2a4e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4e00) {
            ctx->pc = 0x2A4E58u;
            goto label_2a4e58;
        }
    }
    ctx->pc = 0x2A4E08u;
    // 0x2a4e08: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4E08u;
    {
        const bool branch_taken_0x2a4e08 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4e08) {
            ctx->pc = 0x2A4E2Cu;
            goto label_2a4e2c;
        }
    }
    ctx->pc = 0x2A4E10u;
    // 0x2a4e10: 0x26840008  addiu       $a0, $s4, 0x8
    ctx->pc = 0x2a4e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2a4e14: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a4e14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a4e18: 0x24a5db80  addiu       $a1, $a1, -0x2480
    ctx->pc = 0x2a4e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957952));
    // 0x2a4e1c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x2A4E1Cu;
    SET_GPR_U32(ctx, 31, 0x2A4E24u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x2A4E1Cu, 0x2A4E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E24u;
label_2a4e24:
    // 0x2a4e24: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2A4E24u;
    {
        const bool branch_taken_0x2a4e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4e24) {
            ctx->pc = 0x2A4FA0u;
            goto label_2a4fa0;
        }
    }
    ctx->pc = 0x2A4E2Cu;
label_2a4e2c:
    // 0x2a4e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a4e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4e30: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a4e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4e34: 0xac6201e0  sw          $v0, 0x1E0($v1)
    ctx->pc = 0x2a4e34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 480), GPR_U32(ctx, 2));
    // 0x2a4e38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a4e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e3c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a4e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a4e40: 0x24a5db80  addiu       $a1, $a1, -0x2480
    ctx->pc = 0x2a4e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957952));
    // 0x2a4e44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a4e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4e48: 0xc0a83a8  jal         func_2A0EA0
    ctx->pc = 0x2A4E48u;
    SET_GPR_U32(ctx, 31, 0x2A4E50u);
    ctx->pc = 0x2A0EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0EA0u, 0x2A4E48u, 0x2A4E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E50u;
label_2a4e50:
    // 0x2a4e50: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x2A4E50u;
    {
        const bool branch_taken_0x2a4e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4e50) {
            ctx->pc = 0x2A4FA0u;
            goto label_2a4fa0;
        }
    }
    ctx->pc = 0x2A4E58u;
label_2a4e58:
    // 0x2a4e58: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x2a4e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4e5c: 0x24850055  addiu       $a1, $a0, 0x55
    ctx->pc = 0x2a4e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 85));
    // 0x2a4e60: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a4e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e64: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a4e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a4e68: 0x24a5db90  addiu       $a1, $a1, -0x2470
    ctx->pc = 0x2a4e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957968));
    // 0x2a4e6c: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x2A4E6Cu;
    SET_GPR_U32(ctx, 31, 0x2A4E74u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x2A4E6Cu, 0x2A4E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E74u;
label_2a4e74:
    // 0x2a4e74: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2A4E74u;
    {
        const bool branch_taken_0x2a4e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4e74) {
            ctx->pc = 0x2A4F28u;
            goto label_2a4f28;
        }
    }
    ctx->pc = 0x2A4E7Cu;
    // 0x2a4e7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a4e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4e80: 0xa3a302fb  sb          $v1, 0x2FB($sp)
    ctx->pc = 0x2a4e80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 763), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a4e84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a4e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e88: 0xc096950  jal         func_25A540
    ctx->pc = 0x2A4E88u;
    SET_GPR_U32(ctx, 31, 0x2A4E90u);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x2A4E88u, 0x2A4E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E90u;
label_2a4e90:
    // 0x2a4e90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a4e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4e94: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4E94u;
    {
        const bool branch_taken_0x2a4e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a4e94) {
            ctx->pc = 0x2A4EB8u;
            goto label_2a4eb8;
        }
    }
    ctx->pc = 0x2A4E9Cu;
    // 0x2a4e9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a4e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ea0: 0xc096880  jal         func_25A200
    ctx->pc = 0x2A4EA0u;
    SET_GPR_U32(ctx, 31, 0x2A4EA8u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2A4EA0u, 0x2A4EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4EA8u;
label_2a4ea8:
    // 0x2a4ea8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a4ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4eac: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A4EACu;
    {
        const bool branch_taken_0x2a4eac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4eac) {
            ctx->pc = 0x2A4EB8u;
            goto label_2a4eb8;
        }
    }
    ctx->pc = 0x2A4EB4u;
    // 0x2a4eb4: 0xa3a002fb  sb          $zero, 0x2FB($sp)
    ctx->pc = 0x2a4eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 763), (uint8_t)GPR_U32(ctx, 0));
label_2a4eb8:
    // 0x2a4eb8: 0x12400039  beqz        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x2A4EB8u;
    {
        const bool branch_taken_0x2a4eb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4eb8) {
            ctx->pc = 0x2A4FA0u;
            goto label_2a4fa0;
        }
    }
    ctx->pc = 0x2A4EC0u;
    // 0x2a4ec0: 0x93a202fb  lbu         $v0, 0x2FB($sp)
    ctx->pc = 0x2a4ec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 763)));
    // 0x2a4ec4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2A4EC4u;
    {
        const bool branch_taken_0x2a4ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4ec4) {
            ctx->pc = 0x2A4FA0u;
            goto label_2a4fa0;
        }
    }
    ctx->pc = 0x2A4ECCu;
    // 0x2a4ecc: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x2A4ECCu;
    {
        const bool branch_taken_0x2a4ecc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4ecc) {
            ctx->pc = 0x2A4EFCu;
            goto label_2a4efc;
        }
    }
    ctx->pc = 0x2A4ED4u;
    // 0x2a4ed4: 0x26840008  addiu       $a0, $s4, 0x8
    ctx->pc = 0x2a4ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2a4ed8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2a4ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2a4edc: 0x2442dba0  addiu       $v0, $v0, -0x2460
    ctx->pc = 0x2a4edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957984));
    // 0x2a4ee0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2a4ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2a4ee4: 0x7ba500a0  lq          $a1, 0xA0($sp)
    ctx->pc = 0x2a4ee4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a4ee8: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x2A4EE8u;
    SET_GPR_U32(ctx, 31, 0x2A4EF0u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x2A4EE8u, 0x2A4EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4EF0u;
label_2a4ef0:
    // 0x2a4ef0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a4ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ef4: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A4EF4u;
    {
        const bool branch_taken_0x2a4ef4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4ef4) {
            ctx->pc = 0x2A4FA0u;
            goto label_2a4fa0;
        }
    }
    ctx->pc = 0x2A4EFCu;
label_2a4efc:
    // 0x2a4efc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a4efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4f00: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2a4f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4f04: 0xac6201e0  sw          $v0, 0x1E0($v1)
    ctx->pc = 0x2a4f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 480), GPR_U32(ctx, 2));
    // 0x2a4f08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a4f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f0c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a4f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a4f10: 0x24a5dba0  addiu       $a1, $a1, -0x2460
    ctx->pc = 0x2a4f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957984));
    // 0x2a4f14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a4f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4f18: 0xc0a83a8  jal         func_2A0EA0
    ctx->pc = 0x2A4F18u;
    SET_GPR_U32(ctx, 31, 0x2A4F20u);
    ctx->pc = 0x2A0EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0EA0u, 0x2A4F18u, 0x2A4F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F20u;
label_2a4f20:
    // 0x2a4f20: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2A4F20u;
    {
        const bool branch_taken_0x2a4f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4f20) {
            ctx->pc = 0x2A4FA0u;
            goto label_2a4fa0;
        }
    }
    ctx->pc = 0x2A4F28u;
label_2a4f28:
    // 0x2a4f28: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a4f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4f2c: 0x24440055  addiu       $a0, $v0, 0x55
    ctx->pc = 0x2a4f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 85));
    // 0x2a4f30: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a4f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a4f34: 0x24a5dbb0  addiu       $a1, $a1, -0x2450
    ctx->pc = 0x2a4f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958000));
    // 0x2a4f38: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x2A4F38u;
    SET_GPR_U32(ctx, 31, 0x2A4F40u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x2A4F38u, 0x2A4F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F40u;
label_2a4f40:
    // 0x2a4f40: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2A4F40u;
    {
        const bool branch_taken_0x2a4f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4f40) {
            ctx->pc = 0x2A4FA0u;
            goto label_2a4fa0;
        }
    }
    ctx->pc = 0x2A4F48u;
    // 0x2a4f48: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A4F48u;
    {
        const bool branch_taken_0x2a4f48 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4f48) {
            ctx->pc = 0x2A4F70u;
            goto label_2a4f70;
        }
    }
    ctx->pc = 0x2A4F50u;
    // 0x2a4f50: 0x26840008  addiu       $a0, $s4, 0x8
    ctx->pc = 0x2a4f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2a4f54: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a4f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a4f58: 0x24a5dbc0  addiu       $a1, $a1, -0x2440
    ctx->pc = 0x2a4f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958016));
    // 0x2a4f5c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x2A4F5Cu;
    SET_GPR_U32(ctx, 31, 0x2A4F64u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x2A4F5Cu, 0x2A4F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F64u;
label_2a4f64:
    // 0x2a4f64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a4f64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f68: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A4F68u;
    {
        const bool branch_taken_0x2a4f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4f68) {
            ctx->pc = 0x2A4FA0u;
            goto label_2a4fa0;
        }
    }
    ctx->pc = 0x2A4F70u;
label_2a4f70:
    // 0x2a4f70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a4f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a4f74: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x2a4f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4f78: 0xaca201e0  sw          $v0, 0x1E0($a1)
    ctx->pc = 0x2a4f78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 480), GPR_U32(ctx, 2));
    // 0x2a4f7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a4f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f80: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2a4f80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x2a4f84: 0x24c6dbc0  addiu       $a2, $a2, -0x2440
    ctx->pc = 0x2a4f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958016));
    // 0x2a4f88: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2a4f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a4f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4f90: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a4f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f94: 0xc0a83a8  jal         func_2A0EA0
    ctx->pc = 0x2A4F94u;
    SET_GPR_U32(ctx, 31, 0x2A4F9Cu);
    ctx->pc = 0x2A0EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0EA0u, 0x2A4F94u, 0x2A4F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F9Cu;
label_2a4f9c:
    // 0x2a4f9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a4f9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4fa0:
    // 0x2a4fa0: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2a4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4fa4: 0x9044011c  lbu         $a0, 0x11C($v0)
    ctx->pc = 0x2a4fa4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 284)));
    // 0x2a4fa8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A4FA8u;
    {
        const bool branch_taken_0x2a4fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4fa8) {
            ctx->pc = 0x2A4FD4u;
            goto label_2a4fd4;
        }
    }
    ctx->pc = 0x2A4FB0u;
    // 0x2a4fb0: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x2a4fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4fb4: 0xc4a10120  lwc1        $f1, 0x120($a1)
    ctx->pc = 0x2a4fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4fb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a4fb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4fbc: 0x0  nop
    ctx->pc = 0x2a4fbcu;
    // NOP
    // 0x2a4fc0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a4fc0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a4fc4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4FC4u;
    {
        const bool branch_taken_0x2a4fc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a4fc4) {
            ctx->pc = 0x2A4FD4u;
            goto label_2a4fd4;
        }
    }
    ctx->pc = 0x2A4FCCu;
    // 0x2a4fcc: 0x8fa60300  lw          $a2, 0x300($sp)
    ctx->pc = 0x2a4fccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x2a4fd0: 0xa0c0011c  sb          $zero, 0x11C($a2)
    ctx->pc = 0x2a4fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 284), (uint8_t)GPR_U32(ctx, 0));
label_2a4fd4:
    // 0x2a4fd4: 0x93a202ff  lbu         $v0, 0x2FF($sp)
    ctx->pc = 0x2a4fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 767)));
    // 0x2a4fd8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a4fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a4fdc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2a4fdcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a4fe0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a4fe0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a4fe4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a4fe4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a4fe8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a4fe8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a4fec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a4fecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a4ff0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a4ff0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4ff4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a4ff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4ff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a4ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a4ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5000: 0x27bd0330  addiu       $sp, $sp, 0x330
    ctx->pc = 0x2a5000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x2a5004: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A500Cu;
    // 0x2a500c: 0x0  nop
    ctx->pc = 0x2a500cu;
    // NOP
    ctx->pc = 0x2a5010u;
}
