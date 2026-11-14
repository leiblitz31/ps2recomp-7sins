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

// Function: sub_001B3D90
// Address: 0x1b3d90 - 0x1b47e0
void sub_001B3D90_0x1b3d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3D90_0x1b3d90");
#endif

    switch (ctx->pc) {
        case 0x1b3dbcu: goto label_1b3dbc;
        case 0x1b3dd4u: goto label_1b3dd4;
        case 0x1b3df0u: goto label_1b3df0;
        case 0x1b3e10u: goto label_1b3e10;
        case 0x1b3e2cu: goto label_1b3e2c;
        case 0x1b3e4cu: goto label_1b3e4c;
        case 0x1b3e68u: goto label_1b3e68;
        case 0x1b3e88u: goto label_1b3e88;
        case 0x1b3ea4u: goto label_1b3ea4;
        case 0x1b3ec4u: goto label_1b3ec4;
        case 0x1b3edcu: goto label_1b3edc;
        case 0x1b3efcu: goto label_1b3efc;
        case 0x1b3f18u: goto label_1b3f18;
        case 0x1b3f34u: goto label_1b3f34;
        case 0x1b3f4cu: goto label_1b3f4c;
        case 0x1b3f68u: goto label_1b3f68;
        case 0x1b3f80u: goto label_1b3f80;
        case 0x1b3fa0u: goto label_1b3fa0;
        case 0x1b3fb8u: goto label_1b3fb8;
        case 0x1b3fd4u: goto label_1b3fd4;
        case 0x1b3fecu: goto label_1b3fec;
        case 0x1b4008u: goto label_1b4008;
        case 0x1b4020u: goto label_1b4020;
        case 0x1b4044u: goto label_1b4044;
        case 0x1b4060u: goto label_1b4060;
        case 0x1b407cu: goto label_1b407c;
        case 0x1b4094u: goto label_1b4094;
        case 0x1b40b0u: goto label_1b40b0;
        case 0x1b40c8u: goto label_1b40c8;
        case 0x1b40e4u: goto label_1b40e4;
        case 0x1b40fcu: goto label_1b40fc;
        case 0x1b4118u: goto label_1b4118;
        case 0x1b4130u: goto label_1b4130;
        case 0x1b414cu: goto label_1b414c;
        case 0x1b4164u: goto label_1b4164;
        case 0x1b4180u: goto label_1b4180;
        case 0x1b4198u: goto label_1b4198;
        case 0x1b41b4u: goto label_1b41b4;
        case 0x1b41ccu: goto label_1b41cc;
        case 0x1b41e8u: goto label_1b41e8;
        case 0x1b4200u: goto label_1b4200;
        case 0x1b421cu: goto label_1b421c;
        case 0x1b4234u: goto label_1b4234;
        case 0x1b4250u: goto label_1b4250;
        case 0x1b4268u: goto label_1b4268;
        case 0x1b4284u: goto label_1b4284;
        case 0x1b429cu: goto label_1b429c;
        case 0x1b42b8u: goto label_1b42b8;
        case 0x1b42d0u: goto label_1b42d0;
        case 0x1b42ecu: goto label_1b42ec;
        case 0x1b4304u: goto label_1b4304;
        case 0x1b4314u: goto label_1b4314;
        case 0x1b432cu: goto label_1b432c;
        case 0x1b4340u: goto label_1b4340;
        case 0x1b434cu: goto label_1b434c;
        case 0x1b4364u: goto label_1b4364;
        case 0x1b4378u: goto label_1b4378;
        case 0x1b4384u: goto label_1b4384;
        case 0x1b439cu: goto label_1b439c;
        case 0x1b43b0u: goto label_1b43b0;
        case 0x1b43bcu: goto label_1b43bc;
        case 0x1b43d8u: goto label_1b43d8;
        case 0x1b43f0u: goto label_1b43f0;
        case 0x1b4400u: goto label_1b4400;
        case 0x1b4418u: goto label_1b4418;
        case 0x1b4434u: goto label_1b4434;
        case 0x1b4440u: goto label_1b4440;
        case 0x1b4458u: goto label_1b4458;
        case 0x1b4474u: goto label_1b4474;
        case 0x1b4480u: goto label_1b4480;
        case 0x1b4498u: goto label_1b4498;
        case 0x1b44b4u: goto label_1b44b4;
        case 0x1b44c0u: goto label_1b44c0;
        case 0x1b44d8u: goto label_1b44d8;
        case 0x1b44f4u: goto label_1b44f4;
        case 0x1b4500u: goto label_1b4500;
        case 0x1b451cu: goto label_1b451c;
        case 0x1b4530u: goto label_1b4530;
        case 0x1b4540u: goto label_1b4540;
        case 0x1b455cu: goto label_1b455c;
        case 0x1b457cu: goto label_1b457c;
        case 0x1b459cu: goto label_1b459c;
        case 0x1b45acu: goto label_1b45ac;
        case 0x1b45c0u: goto label_1b45c0;
        case 0x1b45e0u: goto label_1b45e0;
        case 0x1b45fcu: goto label_1b45fc;
        case 0x1b4610u: goto label_1b4610;
        case 0x1b4640u: goto label_1b4640;
        case 0x1b4718u: goto label_1b4718;
        case 0x1b474cu: goto label_1b474c;
        case 0x1b4768u: goto label_1b4768;
        case 0x1b4780u: goto label_1b4780;
        case 0x1b4798u: goto label_1b4798;
        case 0x1b47b4u: goto label_1b47b4;
        case 0x1b47c4u: goto label_1b47c4;
        default: break;
    }

    ctx->pc = 0x1b3d90u;

    // 0x1b3d90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b3d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b3d94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b3d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b3d98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b3d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b3d9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b3d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b3da0: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1b3da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1b3da4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b3da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3da8: 0x249000a4  addiu       $s0, $a0, 0xA4
    ctx->pc = 0x1b3da8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1b3dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3db0: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1b3db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1b3db4: 0xc056708  jal         func_159C20
    ctx->pc = 0x1B3DB4u;
    SET_GPR_U32(ctx, 31, 0x1B3DBCu);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1B3DB4u, 0x1B3DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3DBCu;
label_1b3dbc:
    // 0x1b3dbc: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1b3dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3dc0: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1b3dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1b3dc4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b3dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b3dc8: 0x24a56e50  addiu       $a1, $a1, 0x6E50
    ctx->pc = 0x1b3dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28240));
    // 0x1b3dcc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B3DCCu;
    SET_GPR_U32(ctx, 31, 0x1B3DD4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B3DCCu, 0x1B3DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3DD4u;
label_1b3dd4:
    // 0x1b3dd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3dd8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b3dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3ddc: 0x249100a4  addiu       $s1, $a0, 0xA4
    ctx->pc = 0x1b3ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1b3de0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3de4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3de8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B3DE8u;
    SET_GPR_U32(ctx, 31, 0x1B3DF0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B3DE8u, 0x1B3DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3DF0u;
label_1b3df0:
    // 0x1b3df0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b3df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b3df4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b3df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3df8: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1b3df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1b3dfc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b3dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e00: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b3e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b3e04: 0x24a56e60  addiu       $a1, $a1, 0x6E60
    ctx->pc = 0x1b3e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28256));
    // 0x1b3e08: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B3E08u;
    SET_GPR_U32(ctx, 31, 0x1B3E10u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B3E08u, 0x1B3E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E10u;
label_1b3e10:
    // 0x1b3e10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e14: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b3e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3e18: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b3e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b3e1c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b3e1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3e20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b3e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e24: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B3E24u;
    SET_GPR_U32(ctx, 31, 0x1B3E2Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B3E24u, 0x1B3E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E2Cu;
label_1b3e2c:
    // 0x1b3e2c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b3e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b3e30: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b3e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3e34: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1b3e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1b3e38: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b3e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e3c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b3e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b3e40: 0x24a56e80  addiu       $a1, $a1, 0x6E80
    ctx->pc = 0x1b3e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28288));
    // 0x1b3e44: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B3E44u;
    SET_GPR_U32(ctx, 31, 0x1B3E4Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B3E44u, 0x1B3E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E4Cu;
label_1b3e4c:
    // 0x1b3e4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e50: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b3e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3e54: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b3e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b3e58: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1b3e58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3e5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b3e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e60: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B3E60u;
    SET_GPR_U32(ctx, 31, 0x1B3E68u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B3E60u, 0x1B3E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E68u;
label_1b3e68:
    // 0x1b3e68: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b3e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b3e6c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b3e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3e70: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1b3e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1b3e74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b3e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e78: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b3e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b3e7c: 0x24a56ea0  addiu       $a1, $a1, 0x6EA0
    ctx->pc = 0x1b3e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28320));
    // 0x1b3e80: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B3E80u;
    SET_GPR_U32(ctx, 31, 0x1B3E88u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B3E80u, 0x1B3E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3E88u;
label_1b3e88:
    // 0x1b3e88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e8c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3e90: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b3e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b3e94: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1b3e94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3e98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b3e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3e9c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B3E9Cu;
    SET_GPR_U32(ctx, 31, 0x1B3EA4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B3E9Cu, 0x1B3EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3EA4u;
label_1b3ea4:
    // 0x1b3ea4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b3ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b3ea8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b3ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3eac: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1b3eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1b3eb0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b3eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3eb4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b3eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b3eb8: 0x24a56eb8  addiu       $a1, $a1, 0x6EB8
    ctx->pc = 0x1b3eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28344));
    // 0x1b3ebc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B3EBCu;
    SET_GPR_U32(ctx, 31, 0x1B3EC4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B3EBCu, 0x1B3EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3EC4u;
label_1b3ec4:
    // 0x1b3ec4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ec8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3ecc: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b3eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b3ed0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b3ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3ed4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B3ED4u;
    SET_GPR_U32(ctx, 31, 0x1B3EDCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B3ED4u, 0x1B3EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3EDCu;
label_1b3edc:
    // 0x1b3edc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b3edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b3ee0: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1b3ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3ee4: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1b3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1b3ee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b3ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3eec: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b3eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b3ef0: 0x24a56ec8  addiu       $a1, $a1, 0x6EC8
    ctx->pc = 0x1b3ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28360));
    // 0x1b3ef4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B3EF4u;
    SET_GPR_U32(ctx, 31, 0x1B3EFCu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B3EF4u, 0x1B3EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3EFCu;
label_1b3efc:
    // 0x1b3efc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b3efcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f00: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b3f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3f04: 0x249000a4  addiu       $s0, $a0, 0xA4
    ctx->pc = 0x1b3f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1b3f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f0c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b3f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b3f10: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B3F10u;
    SET_GPR_U32(ctx, 31, 0x1B3F18u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B3F10u, 0x1B3F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F18u;
label_1b3f18:
    // 0x1b3f18: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1b3f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1b3f1c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1b3f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3f20: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1b3f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1b3f24: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b3f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b3f28: 0x24a56ed8  addiu       $a1, $a1, 0x6ED8
    ctx->pc = 0x1b3f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28376));
    // 0x1b3f2c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B3F2Cu;
    SET_GPR_U32(ctx, 31, 0x1B3F34u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B3F2Cu, 0x1B3F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F34u;
label_1b3f34:
    // 0x1b3f34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f38: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x1b3f38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3f3c: 0x24e400a4  addiu       $a0, $a3, 0xA4
    ctx->pc = 0x1b3f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 164));
    // 0x1b3f40: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b3f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b3f44: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B3F44u;
    SET_GPR_U32(ctx, 31, 0x1B3F4Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B3F44u, 0x1B3F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F4Cu;
label_1b3f4c:
    // 0x1b3f4c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b3f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b3f50: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b3f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3f54: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1b3f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b3f58: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b3f58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b3f5c: 0x24a56ee8  addiu       $a1, $a1, 0x6EE8
    ctx->pc = 0x1b3f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28392));
    // 0x1b3f60: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B3F60u;
    SET_GPR_U32(ctx, 31, 0x1B3F68u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B3F60u, 0x1B3F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F68u;
label_1b3f68:
    // 0x1b3f68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b3f68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f6c: 0x8fb00070  lw          $s0, 0x70($sp)
    ctx->pc = 0x1b3f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3f70: 0x260400a4  addiu       $a0, $s0, 0xA4
    ctx->pc = 0x1b3f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
    // 0x1b3f74: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b3f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b3f78: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B3F78u;
    SET_GPR_U32(ctx, 31, 0x1B3F80u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B3F78u, 0x1B3F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3F80u;
label_1b3f80:
    // 0x1b3f80: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1b3f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1b3f84: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b3f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3f88: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1b3f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b3f8c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b3f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f90: 0x27869520  addiu       $a2, $gp, -0x6AE0
    ctx->pc = 0x1b3f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939936));
    // 0x1b3f94: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1b3f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3f98: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B3F98u;
    SET_GPR_U32(ctx, 31, 0x1B3FA0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B3F98u, 0x1B3FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3FA0u;
label_1b3fa0:
    // 0x1b3fa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3fa4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b3fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3fa8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b3fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b3fac: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1b3facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b3fb0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B3FB0u;
    SET_GPR_U32(ctx, 31, 0x1B3FB8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B3FB0u, 0x1B3FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3FB8u;
label_1b3fb8:
    // 0x1b3fb8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b3fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b3fbc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b3fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3fc0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1b3fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b3fc4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b3fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b3fc8: 0x24a56ef8  addiu       $a1, $a1, 0x6EF8
    ctx->pc = 0x1b3fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28408));
    // 0x1b3fcc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B3FCCu;
    SET_GPR_U32(ctx, 31, 0x1B3FD4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B3FCCu, 0x1B3FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3FD4u;
label_1b3fd4:
    // 0x1b3fd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3fd8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b3fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3fdc: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b3fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b3fe0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b3fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b3fe4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B3FE4u;
    SET_GPR_U32(ctx, 31, 0x1B3FECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B3FE4u, 0x1B3FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3FECu;
label_1b3fec:
    // 0x1b3fec: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b3fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b3ff0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b3ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3ff4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1b3ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b3ff8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b3ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b3ffc: 0x24a56f08  addiu       $a1, $a1, 0x6F08
    ctx->pc = 0x1b3ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28424));
    // 0x1b4000: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B4000u;
    SET_GPR_U32(ctx, 31, 0x1B4008u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B4000u, 0x1B4008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4008u;
label_1b4008:
    // 0x1b4008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b400c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b400cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4010: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b4010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b4014: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b4014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b4018: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4018u;
    SET_GPR_U32(ctx, 31, 0x1B4020u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4018u, 0x1B4020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4020u;
label_1b4020:
    // 0x1b4020: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b4020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b4024: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4028: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1b4028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b402c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b402cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4030: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1b4030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x1b4034: 0x24c66f18  addiu       $a2, $a2, 0x6F18
    ctx->pc = 0x1b4034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28440));
    // 0x1b4038: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1b4038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b403c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B403Cu;
    SET_GPR_U32(ctx, 31, 0x1B4044u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B403Cu, 0x1B4044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4044u;
label_1b4044:
    // 0x1b4044: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b4044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4048: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x1b4048u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b404c: 0x251000a4  addiu       $s0, $t0, 0xA4
    ctx->pc = 0x1b404cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 164));
    // 0x1b4050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4054: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1b4054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1b4058: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4058u;
    SET_GPR_U32(ctx, 31, 0x1B4060u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4058u, 0x1B4060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4060u;
label_1b4060:
    // 0x1b4060: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1b4060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1b4064: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1b4064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4068: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1b4068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1b406c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b406cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b4070: 0x24a56f28  addiu       $a1, $a1, 0x6F28
    ctx->pc = 0x1b4070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28456));
    // 0x1b4074: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B4074u;
    SET_GPR_U32(ctx, 31, 0x1B407Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B4074u, 0x1B407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B407Cu;
label_1b407c:
    // 0x1b407c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b407cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4080: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4084: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b4084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b4088: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1b4088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b408c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B408Cu;
    SET_GPR_U32(ctx, 31, 0x1B4094u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B408Cu, 0x1B4094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4094u;
label_1b4094:
    // 0x1b4094: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b4094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b4098: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b409c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1b409cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b40a0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b40a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b40a4: 0x24a56f40  addiu       $a1, $a1, 0x6F40
    ctx->pc = 0x1b40a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28480));
    // 0x1b40a8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B40A8u;
    SET_GPR_U32(ctx, 31, 0x1B40B0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B40A8u, 0x1B40B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40B0u;
label_1b40b0:
    // 0x1b40b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b40b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b40b4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b40b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b40b8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b40b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b40bc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1b40bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b40c0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B40C0u;
    SET_GPR_U32(ctx, 31, 0x1B40C8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B40C0u, 0x1B40C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40C8u;
label_1b40c8:
    // 0x1b40c8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b40c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b40cc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b40ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b40d0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1b40d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b40d4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b40d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b40d8: 0x24a56f50  addiu       $a1, $a1, 0x6F50
    ctx->pc = 0x1b40d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28496));
    // 0x1b40dc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B40DCu;
    SET_GPR_U32(ctx, 31, 0x1B40E4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B40DCu, 0x1B40E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40E4u;
label_1b40e4:
    // 0x1b40e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b40e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b40e8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b40e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b40ec: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b40ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b40f0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1b40f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b40f4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B40F4u;
    SET_GPR_U32(ctx, 31, 0x1B40FCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B40F4u, 0x1B40FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B40FCu;
label_1b40fc:
    // 0x1b40fc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b40fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b4100: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4104: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1b4104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b4108: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b4108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b410c: 0x24a56f60  addiu       $a1, $a1, 0x6F60
    ctx->pc = 0x1b410cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28512));
    // 0x1b4110: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B4110u;
    SET_GPR_U32(ctx, 31, 0x1B4118u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B4110u, 0x1B4118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4118u;
label_1b4118:
    // 0x1b4118: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b411c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b411cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4120: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b4120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b4124: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1b4124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b4128: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4128u;
    SET_GPR_U32(ctx, 31, 0x1B4130u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4128u, 0x1B4130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4130u;
label_1b4130:
    // 0x1b4130: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b4130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b4134: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4138: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1b4138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b413c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b413cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b4140: 0x24a56f80  addiu       $a1, $a1, 0x6F80
    ctx->pc = 0x1b4140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28544));
    // 0x1b4144: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B4144u;
    SET_GPR_U32(ctx, 31, 0x1B414Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B4144u, 0x1B414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B414Cu;
label_1b414c:
    // 0x1b414c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b414cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4150: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4154: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b4154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b4158: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1b4158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b415c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B415Cu;
    SET_GPR_U32(ctx, 31, 0x1B4164u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B415Cu, 0x1B4164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4164u;
label_1b4164:
    // 0x1b4164: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b4164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b4168: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b416c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1b416cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b4170: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b4170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b4174: 0x24a56fa0  addiu       $a1, $a1, 0x6FA0
    ctx->pc = 0x1b4174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28576));
    // 0x1b4178: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B4178u;
    SET_GPR_U32(ctx, 31, 0x1B4180u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B4178u, 0x1B4180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4180u;
label_1b4180:
    // 0x1b4180: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4184: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4188: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b4188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b418c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1b418cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1b4190: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4190u;
    SET_GPR_U32(ctx, 31, 0x1B4198u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4190u, 0x1B4198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4198u;
label_1b4198:
    // 0x1b4198: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b4198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b419c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b419cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b41a0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1b41a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b41a4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b41a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b41a8: 0x24a56fc0  addiu       $a1, $a1, 0x6FC0
    ctx->pc = 0x1b41a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28608));
    // 0x1b41ac: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B41ACu;
    SET_GPR_U32(ctx, 31, 0x1B41B4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B41ACu, 0x1B41B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B41B4u;
label_1b41b4:
    // 0x1b41b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b41b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b41b8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b41bc: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b41bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b41c0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1b41c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1b41c4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B41C4u;
    SET_GPR_U32(ctx, 31, 0x1B41CCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B41C4u, 0x1B41CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B41CCu;
label_1b41cc:
    // 0x1b41cc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b41ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b41d0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b41d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b41d4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1b41d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b41d8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b41d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b41dc: 0x24a56fe0  addiu       $a1, $a1, 0x6FE0
    ctx->pc = 0x1b41dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28640));
    // 0x1b41e0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B41E0u;
    SET_GPR_U32(ctx, 31, 0x1B41E8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B41E0u, 0x1B41E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B41E8u;
label_1b41e8:
    // 0x1b41e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b41e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b41ec: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b41ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b41f0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b41f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b41f4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1b41f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b41f8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B41F8u;
    SET_GPR_U32(ctx, 31, 0x1B4200u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B41F8u, 0x1B4200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4200u;
label_1b4200:
    // 0x1b4200: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b4200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b4204: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4208: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1b4208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b420c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b420cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b4210: 0x24a57000  addiu       $a1, $a1, 0x7000
    ctx->pc = 0x1b4210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    // 0x1b4214: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B4214u;
    SET_GPR_U32(ctx, 31, 0x1B421Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B4214u, 0x1B421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B421Cu;
label_1b421c:
    // 0x1b421c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b421cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4220: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4224: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b4224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b4228: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b4228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b422c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B422Cu;
    SET_GPR_U32(ctx, 31, 0x1B4234u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B422Cu, 0x1B4234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4234u;
label_1b4234:
    // 0x1b4234: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b4234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b4238: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b423c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1b423cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b4240: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b4240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b4244: 0x24a57020  addiu       $a1, $a1, 0x7020
    ctx->pc = 0x1b4244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28704));
    // 0x1b4248: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B4248u;
    SET_GPR_U32(ctx, 31, 0x1B4250u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B4248u, 0x1B4250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4250u;
label_1b4250:
    // 0x1b4250: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4254: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4258: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b4258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b425c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1b425cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1b4260: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4260u;
    SET_GPR_U32(ctx, 31, 0x1B4268u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4260u, 0x1B4268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4268u;
label_1b4268:
    // 0x1b4268: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b4268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b426c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b426cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4270: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1b4270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b4274: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b4274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b4278: 0x24a57040  addiu       $a1, $a1, 0x7040
    ctx->pc = 0x1b4278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28736));
    // 0x1b427c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B427Cu;
    SET_GPR_U32(ctx, 31, 0x1B4284u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B427Cu, 0x1B4284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4284u;
label_1b4284:
    // 0x1b4284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4288: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b428c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b428cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b4290: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1b4290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1b4294: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4294u;
    SET_GPR_U32(ctx, 31, 0x1B429Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4294u, 0x1B429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B429Cu;
label_1b429c:
    // 0x1b429c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b429cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b42a0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b42a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b42a4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1b42a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b42a8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b42a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b42ac: 0x24a57058  addiu       $a1, $a1, 0x7058
    ctx->pc = 0x1b42acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28760));
    // 0x1b42b0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B42B0u;
    SET_GPR_U32(ctx, 31, 0x1B42B8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B42B0u, 0x1B42B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B42B8u;
label_1b42b8:
    // 0x1b42b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b42b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b42bc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b42bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b42c0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b42c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b42c4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1b42c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b42c8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B42C8u;
    SET_GPR_U32(ctx, 31, 0x1B42D0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B42C8u, 0x1B42D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B42D0u;
label_1b42d0:
    // 0x1b42d0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b42d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b42d4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b42d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b42d8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1b42d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b42dc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b42dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b42e0: 0x24a57068  addiu       $a1, $a1, 0x7068
    ctx->pc = 0x1b42e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28776));
    // 0x1b42e4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1B42E4u;
    SET_GPR_U32(ctx, 31, 0x1B42ECu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1B42E4u, 0x1B42ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B42ECu;
label_1b42ec:
    // 0x1b42ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b42ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b42f0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b42f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b42f4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b42f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b42f8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1b42f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1b42fc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B42FCu;
    SET_GPR_U32(ctx, 31, 0x1B4304u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B42FCu, 0x1B4304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4304u;
label_1b4304:
    // 0x1b4304: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1b4304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1b4308: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b4308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b430c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B430Cu;
    SET_GPR_U32(ctx, 31, 0x1B4314u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B430Cu, 0x1B4314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4314u;
label_1b4314:
    // 0x1b4314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4318: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b431c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b431cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b4320: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1b4320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b4324: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4324u;
    SET_GPR_U32(ctx, 31, 0x1B432Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4324u, 0x1B432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B432Cu;
label_1b432c:
    // 0x1b432c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b432cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4334: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4338: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1B4338u;
    SET_GPR_U32(ctx, 31, 0x1B4340u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B4338u, 0x1B4340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4340u;
label_1b4340:
    // 0x1b4340: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b4340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4344: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B4344u;
    SET_GPR_U32(ctx, 31, 0x1B434Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B4344u, 0x1B434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B434Cu;
label_1b434c:
    // 0x1b434c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b434cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4350: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4354: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b4354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b4358: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1b4358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b435c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B435Cu;
    SET_GPR_U32(ctx, 31, 0x1B4364u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B435Cu, 0x1B4364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4364u;
label_1b4364:
    // 0x1b4364: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b4364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b436c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b436cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4370: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1B4370u;
    SET_GPR_U32(ctx, 31, 0x1B4378u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B4370u, 0x1B4378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4378u;
label_1b4378:
    // 0x1b4378: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b4378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b437c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B437Cu;
    SET_GPR_U32(ctx, 31, 0x1B4384u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B437Cu, 0x1B4384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4384u;
label_1b4384:
    // 0x1b4384: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4388: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b438c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b438cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b4390: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1b4390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1b4394: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4394u;
    SET_GPR_U32(ctx, 31, 0x1B439Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4394u, 0x1B439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B439Cu;
label_1b439c:
    // 0x1b439c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b439cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b43a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b43a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b43a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43a8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1B43A8u;
    SET_GPR_U32(ctx, 31, 0x1B43B0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B43A8u, 0x1B43B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43B0u;
label_1b43b0:
    // 0x1b43b0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b43b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b43b4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B43B4u;
    SET_GPR_U32(ctx, 31, 0x1B43BCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B43B4u, 0x1B43BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43BCu;
label_1b43bc:
    // 0x1b43bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b43bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43c0: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1b43c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b43c4: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x1b43c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x1b43c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b43c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43cc: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1b43ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1b43d0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B43D0u;
    SET_GPR_U32(ctx, 31, 0x1B43D8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B43D0u, 0x1B43D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43D8u;
label_1b43d8:
    // 0x1b43d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b43d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43dc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1b43dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b43e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b43e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b43e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43e8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1B43E8u;
    SET_GPR_U32(ctx, 31, 0x1B43F0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B43E8u, 0x1B43F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B43F0u;
label_1b43f0:
    // 0x1b43f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b43f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b43f4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b43f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b43f8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B43F8u;
    SET_GPR_U32(ctx, 31, 0x1B4400u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B43F8u, 0x1B4400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4400u;
label_1b4400:
    // 0x1b4400: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b4400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4404: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4408: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b4408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b440c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1b440cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b4410: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4410u;
    SET_GPR_U32(ctx, 31, 0x1B4418u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4410u, 0x1B4418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4418u;
label_1b4418:
    // 0x1b4418: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b4418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b441c: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1b441cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b4420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4424: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b4424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4428: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b442c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1B442Cu;
    SET_GPR_U32(ctx, 31, 0x1B4434u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B442Cu, 0x1B4434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4434u;
label_1b4434:
    // 0x1b4434: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b4434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4438: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B4438u;
    SET_GPR_U32(ctx, 31, 0x1B4440u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B4438u, 0x1B4440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4440u;
label_1b4440:
    // 0x1b4440: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b4440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4444: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4448: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b4448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b444c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1b444cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b4450: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4450u;
    SET_GPR_U32(ctx, 31, 0x1B4458u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4450u, 0x1B4458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4458u;
label_1b4458:
    // 0x1b4458: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b4458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b445c: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1b445cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b4460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4464: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b4464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b446c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1B446Cu;
    SET_GPR_U32(ctx, 31, 0x1B4474u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B446Cu, 0x1B4474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4474u;
label_1b4474:
    // 0x1b4474: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b4474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4478: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B4478u;
    SET_GPR_U32(ctx, 31, 0x1B4480u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B4478u, 0x1B4480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4480u;
label_1b4480:
    // 0x1b4480: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b4480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4484: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4488: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b4488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b448c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1b448cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1b4490: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4490u;
    SET_GPR_U32(ctx, 31, 0x1B4498u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4490u, 0x1B4498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4498u;
label_1b4498:
    // 0x1b4498: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b4498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b449c: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1b449cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b44a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b44a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b44a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b44a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44ac: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1B44ACu;
    SET_GPR_U32(ctx, 31, 0x1B44B4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B44ACu, 0x1B44B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B44B4u;
label_1b44b4:
    // 0x1b44b4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b44b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b44b8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B44B8u;
    SET_GPR_U32(ctx, 31, 0x1B44C0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B44B8u, 0x1B44C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B44C0u;
label_1b44c0:
    // 0x1b44c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b44c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44c4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b44c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b44c8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b44c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b44cc: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1b44ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1b44d0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B44D0u;
    SET_GPR_U32(ctx, 31, 0x1B44D8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B44D0u, 0x1B44D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B44D8u;
label_1b44d8:
    // 0x1b44d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b44d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44dc: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1b44dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b44e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b44e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b44e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b44e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44ec: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1B44ECu;
    SET_GPR_U32(ctx, 31, 0x1B44F4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1B44ECu, 0x1B44F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B44F4u;
label_1b44f4:
    // 0x1b44f4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b44f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b44f8: 0xc0495d4  jal         func_125750
    ctx->pc = 0x1B44F8u;
    SET_GPR_U32(ctx, 31, 0x1B4500u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x1B44F8u, 0x1B4500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4500u;
label_1b4500:
    // 0x1b4500: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b4500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4504: 0x8f82bbdc  lw          $v0, -0x4424($gp)
    ctx->pc = 0x1b4504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x1b4508: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b4508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b450c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b450cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b4510: 0x24a57080  addiu       $a1, $a1, 0x7080
    ctx->pc = 0x1b4510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28800));
    // 0x1b4514: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x1B4514u;
    SET_GPR_U32(ctx, 31, 0x1B451Cu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1B4514u, 0x1B451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B451Cu;
label_1b451c:
    // 0x1b451c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1b451cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b4520: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b4520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4524: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b4524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4528: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x1B4528u;
    SET_GPR_U32(ctx, 31, 0x1B4530u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x1B4528u, 0x1B4530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4530u;
label_1b4530:
    // 0x1b4530: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b4530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4534: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b4534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4538: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B4538u;
    SET_GPR_U32(ctx, 31, 0x1B4540u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B4538u, 0x1B4540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4540u;
label_1b4540:
    // 0x1b4540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4544: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1b4544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4548: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x1b4548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x1b454c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b454cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4550: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1b4550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b4554: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4554u;
    SET_GPR_U32(ctx, 31, 0x1B455Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4554u, 0x1B455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B455Cu;
label_1b455c:
    // 0x1b455c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b455cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4560: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1b4560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b4564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4568: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x1b4568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b456c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b456cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4570: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b4570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4574: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x1B4574u;
    SET_GPR_U32(ctx, 31, 0x1B457Cu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x1B4574u, 0x1B457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B457Cu;
label_1b457c:
    // 0x1b457c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b457cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4580: 0x8f85bbdc  lw          $a1, -0x4424($gp)
    ctx->pc = 0x1b4580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x1b4584: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b4584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4588: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1b4588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1b458c: 0x244270a0  addiu       $v0, $v0, 0x70A0
    ctx->pc = 0x1b458cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28832));
    // 0x1b4590: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b4590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4594: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x1B4594u;
    SET_GPR_U32(ctx, 31, 0x1B459Cu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1B4594u, 0x1B459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B459Cu;
label_1b459c:
    // 0x1b459c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b459cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b45a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b45a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45a4: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x1B45A4u;
    SET_GPR_U32(ctx, 31, 0x1B45ACu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x1B45A4u, 0x1B45ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B45ACu;
label_1b45ac:
    // 0x1b45ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b45acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45b0: 0x8fb10070  lw          $s1, 0x70($sp)
    ctx->pc = 0x1b45b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b45b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b45b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45b8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B45B8u;
    SET_GPR_U32(ctx, 31, 0x1B45C0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B45B8u, 0x1B45C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B45C0u;
label_1b45c0:
    // 0x1b45c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b45c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45c4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1b45c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b45c8: 0x248500a4  addiu       $a1, $a0, 0xA4
    ctx->pc = 0x1b45c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1b45cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b45ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45d0: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1b45d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1b45d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b45d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45d8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B45D8u;
    SET_GPR_U32(ctx, 31, 0x1B45E0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B45D8u, 0x1B45E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B45E0u;
label_1b45e0:
    // 0x1b45e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b45e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b45e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b45e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45e8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1b45e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b45ec: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b45ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b45f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b45f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45f4: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x1B45F4u;
    SET_GPR_U32(ctx, 31, 0x1B45FCu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x1B45F4u, 0x1B45FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B45FCu;
label_1b45fc:
    // 0x1b45fc: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x1b45fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1b4600: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1b4600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b4604: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4604u;
    {
        const bool branch_taken_0x1b4604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4604) {
            ctx->pc = 0x1B462Cu;
            goto label_1b462c;
        }
    }
    ctx->pc = 0x1B460Cu;
    // 0x1b460c: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1b460cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1b4610:
    // 0x1b4610: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1b4610u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4614: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b4614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b4618: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1b4618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1b461c: 0x0  nop
    ctx->pc = 0x1b461cu;
    // NOP
    // 0x1b4620: 0x0  nop
    ctx->pc = 0x1b4620u;
    // NOP
    // 0x1b4624: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B4624u;
    {
        const bool branch_taken_0x1b4624 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4624) {
            ctx->pc = 0x1B4610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4610;
        }
    }
    ctx->pc = 0x1B462Cu;
label_1b462c:
    // 0x1b462c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1b462cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b4630: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b4630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b4634: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4634u;
    {
        const bool branch_taken_0x1b4634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4634) {
            ctx->pc = 0x1B465Cu;
            goto label_1b465c;
        }
    }
    ctx->pc = 0x1B463Cu;
    // 0x1b463c: 0x402821  addu        $a1, $v0, $zero
    ctx->pc = 0x1b463cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_1b4640:
    // 0x1b4640: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1b4640u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4644: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b4644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b4648: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1b4648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1b464c: 0x0  nop
    ctx->pc = 0x1b464cu;
    // NOP
    // 0x1b4650: 0x0  nop
    ctx->pc = 0x1b4650u;
    // NOP
    // 0x1b4654: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B4654u;
    {
        const bool branch_taken_0x1b4654 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4654) {
            ctx->pc = 0x1B4640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4640;
        }
    }
    ctx->pc = 0x1B465Cu;
label_1b465c:
    // 0x1b465c: 0x8f90bb80  lw          $s0, -0x4480($gp)
    ctx->pc = 0x1b465cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b4660: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b4660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1b4664: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4664u;
    {
        const bool branch_taken_0x1b4664 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b4664) {
            ctx->pc = 0x1B4680u;
            goto label_1b4680;
        }
    }
    ctx->pc = 0x1B466Cu;
    // 0x1b466c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b466cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4670: 0x0  nop
    ctx->pc = 0x1b4670u;
    // NOP
    // 0x1b4674: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b4674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b4678: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4678u;
    {
        const bool branch_taken_0x1b4678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4678) {
            ctx->pc = 0x1B469Cu;
            goto label_1b469c;
        }
    }
    ctx->pc = 0x1B4680u;
label_1b4680:
    // 0x1b4680: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x1b4680u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b4684: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x1b4684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b4688: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1b4688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1b468c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b468cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4690: 0x0  nop
    ctx->pc = 0x1b4690u;
    // NOP
    // 0x1b4694: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b4694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b4698: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b4698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b469c:
    // 0x1b469c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1b469cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1b46a0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1b46a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1b46a4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1b46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b46a8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B46A8u;
    {
        const bool branch_taken_0x1b46a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b46a8) {
            ctx->pc = 0x1B46C4u;
            goto label_1b46c4;
        }
    }
    ctx->pc = 0x1B46B0u;
    // 0x1b46b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b46b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b46b4: 0x0  nop
    ctx->pc = 0x1b46b4u;
    // NOP
    // 0x1b46b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b46b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b46bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B46BCu;
    {
        const bool branch_taken_0x1b46bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b46bc) {
            ctx->pc = 0x1B46E0u;
            goto label_1b46e0;
        }
    }
    ctx->pc = 0x1B46C4u;
label_1b46c4:
    // 0x1b46c4: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x1b46c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b46c8: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x1b46c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b46cc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1b46ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1b46d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b46d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b46d4: 0x0  nop
    ctx->pc = 0x1b46d4u;
    // NOP
    // 0x1b46d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b46d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b46dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b46dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b46e0:
    // 0x1b46e0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b46e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1b46e4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1b46e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1b46e8: 0x2790b6c0  addiu       $s0, $gp, -0x4940
    ctx->pc = 0x1b46e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1b46ec: 0xafb00040  sw          $s0, 0x40($sp)
    ctx->pc = 0x1b46ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 16));
    // 0x1b46f0: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x1b46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1b46f4: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1b46f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x1b46f8: 0x2784b6c0  addiu       $a0, $gp, -0x4940
    ctx->pc = 0x1b46f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1b46fc: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1b46fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1b4700: 0x2785b6c0  addiu       $a1, $gp, -0x4940
    ctx->pc = 0x1b4700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1b4704: 0xafa5004c  sw          $a1, 0x4C($sp)
    ctx->pc = 0x1b4704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 5));
    // 0x1b4708: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b470c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b470cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4710: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B4710u;
    SET_GPR_U32(ctx, 31, 0x1B4718u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B4710u, 0x1B4718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4718u;
label_1b4718:
    // 0x1b4718: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1b4718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1b471c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b471cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4720: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1b4720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1b4724: 0x24a570b0  addiu       $a1, $a1, 0x70B0
    ctx->pc = 0x1b4724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28848));
    // 0x1b4728: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1b4728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b472c: 0x27b10058  addiu       $s1, $sp, 0x58
    ctx->pc = 0x1b472cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1b4730: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b4730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4734: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x1b4734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b4738: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b4738u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b473c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b473cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4740: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b4740u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4744: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1B4744u;
    SET_GPR_U32(ctx, 31, 0x1B474Cu);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1B4744u, 0x1B474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B474Cu;
label_1b474c:
    // 0x1b474c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b474cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4750: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1b4750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4754: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x1b4754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x1b4758: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b4758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b475c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1b475cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1b4760: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4760u;
    SET_GPR_U32(ctx, 31, 0x1B4768u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4760u, 0x1B4768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4768u;
label_1b4768:
    // 0x1b4768: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b4768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b476c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x1b476cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x1b4770: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1b4770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4774: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b4774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4778: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1B4778u;
    SET_GPR_U32(ctx, 31, 0x1B4780u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1B4778u, 0x1B4780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4780u;
label_1b4780:
    // 0x1b4780: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4784: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1b4784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b4788: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1b4788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1b478c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b478cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4790: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1B4790u;
    SET_GPR_U32(ctx, 31, 0x1B4798u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1B4790u, 0x1B4798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4798u;
label_1b4798:
    // 0x1b4798: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b4798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b479c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b479cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b47a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b47a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b47a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b47a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b47a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b47a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b47ac: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1B47ACu;
    SET_GPR_U32(ctx, 31, 0x1B47B4u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1B47ACu, 0x1B47B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B47B4u;
label_1b47b4:
    // 0x1b47b4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b47b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b47b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b47b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b47bc: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x1B47BCu;
    SET_GPR_U32(ctx, 31, 0x1B47C4u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1B47BCu, 0x1B47C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B47C4u;
label_1b47c4:
    // 0x1b47c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b47c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b47c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b47c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b47cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b47ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b47d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b47d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b47d4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1b47d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b47d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B47D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B47D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B47E0u;
}
