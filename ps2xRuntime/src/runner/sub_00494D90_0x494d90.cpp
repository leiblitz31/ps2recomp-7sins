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

// Function: sub_00494D90
// Address: 0x494d90 - 0x495150
void sub_00494D90_0x494d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494D90_0x494d90");
#endif

    switch (ctx->pc) {
        case 0x494d90u: goto label_494d90;
        case 0x494d94u: goto label_494d94;
        case 0x494d98u: goto label_494d98;
        case 0x494d9cu: goto label_494d9c;
        case 0x494da0u: goto label_494da0;
        case 0x494da4u: goto label_494da4;
        case 0x494da8u: goto label_494da8;
        case 0x494dacu: goto label_494dac;
        case 0x494db0u: goto label_494db0;
        case 0x494db4u: goto label_494db4;
        case 0x494db8u: goto label_494db8;
        case 0x494dbcu: goto label_494dbc;
        case 0x494dc0u: goto label_494dc0;
        case 0x494dc4u: goto label_494dc4;
        case 0x494dc8u: goto label_494dc8;
        case 0x494dccu: goto label_494dcc;
        case 0x494dd0u: goto label_494dd0;
        case 0x494dd4u: goto label_494dd4;
        case 0x494dd8u: goto label_494dd8;
        case 0x494ddcu: goto label_494ddc;
        case 0x494de0u: goto label_494de0;
        case 0x494de4u: goto label_494de4;
        case 0x494de8u: goto label_494de8;
        case 0x494decu: goto label_494dec;
        case 0x494df0u: goto label_494df0;
        case 0x494df4u: goto label_494df4;
        case 0x494df8u: goto label_494df8;
        case 0x494dfcu: goto label_494dfc;
        case 0x494e00u: goto label_494e00;
        case 0x494e04u: goto label_494e04;
        case 0x494e08u: goto label_494e08;
        case 0x494e0cu: goto label_494e0c;
        case 0x494e10u: goto label_494e10;
        case 0x494e14u: goto label_494e14;
        case 0x494e18u: goto label_494e18;
        case 0x494e1cu: goto label_494e1c;
        case 0x494e20u: goto label_494e20;
        case 0x494e24u: goto label_494e24;
        case 0x494e28u: goto label_494e28;
        case 0x494e2cu: goto label_494e2c;
        case 0x494e30u: goto label_494e30;
        case 0x494e34u: goto label_494e34;
        case 0x494e38u: goto label_494e38;
        case 0x494e3cu: goto label_494e3c;
        case 0x494e40u: goto label_494e40;
        case 0x494e44u: goto label_494e44;
        case 0x494e48u: goto label_494e48;
        case 0x494e4cu: goto label_494e4c;
        case 0x494e50u: goto label_494e50;
        case 0x494e54u: goto label_494e54;
        case 0x494e58u: goto label_494e58;
        case 0x494e5cu: goto label_494e5c;
        case 0x494e60u: goto label_494e60;
        case 0x494e64u: goto label_494e64;
        case 0x494e68u: goto label_494e68;
        case 0x494e6cu: goto label_494e6c;
        case 0x494e70u: goto label_494e70;
        case 0x494e74u: goto label_494e74;
        case 0x494e78u: goto label_494e78;
        case 0x494e7cu: goto label_494e7c;
        case 0x494e80u: goto label_494e80;
        case 0x494e84u: goto label_494e84;
        case 0x494e88u: goto label_494e88;
        case 0x494e8cu: goto label_494e8c;
        case 0x494e90u: goto label_494e90;
        case 0x494e94u: goto label_494e94;
        case 0x494e98u: goto label_494e98;
        case 0x494e9cu: goto label_494e9c;
        case 0x494ea0u: goto label_494ea0;
        case 0x494ea4u: goto label_494ea4;
        case 0x494ea8u: goto label_494ea8;
        case 0x494eacu: goto label_494eac;
        case 0x494eb0u: goto label_494eb0;
        case 0x494eb4u: goto label_494eb4;
        case 0x494eb8u: goto label_494eb8;
        case 0x494ebcu: goto label_494ebc;
        case 0x494ec0u: goto label_494ec0;
        case 0x494ec4u: goto label_494ec4;
        case 0x494ec8u: goto label_494ec8;
        case 0x494eccu: goto label_494ecc;
        case 0x494ed0u: goto label_494ed0;
        case 0x494ed4u: goto label_494ed4;
        case 0x494ed8u: goto label_494ed8;
        case 0x494edcu: goto label_494edc;
        case 0x494ee0u: goto label_494ee0;
        case 0x494ee4u: goto label_494ee4;
        case 0x494ee8u: goto label_494ee8;
        case 0x494eecu: goto label_494eec;
        case 0x494ef0u: goto label_494ef0;
        case 0x494ef4u: goto label_494ef4;
        case 0x494ef8u: goto label_494ef8;
        case 0x494efcu: goto label_494efc;
        case 0x494f00u: goto label_494f00;
        case 0x494f04u: goto label_494f04;
        case 0x494f08u: goto label_494f08;
        case 0x494f0cu: goto label_494f0c;
        case 0x494f10u: goto label_494f10;
        case 0x494f14u: goto label_494f14;
        case 0x494f18u: goto label_494f18;
        case 0x494f1cu: goto label_494f1c;
        case 0x494f20u: goto label_494f20;
        case 0x494f24u: goto label_494f24;
        case 0x494f28u: goto label_494f28;
        case 0x494f2cu: goto label_494f2c;
        case 0x494f30u: goto label_494f30;
        case 0x494f34u: goto label_494f34;
        case 0x494f38u: goto label_494f38;
        case 0x494f3cu: goto label_494f3c;
        case 0x494f40u: goto label_494f40;
        case 0x494f44u: goto label_494f44;
        case 0x494f48u: goto label_494f48;
        case 0x494f4cu: goto label_494f4c;
        case 0x494f50u: goto label_494f50;
        case 0x494f54u: goto label_494f54;
        case 0x494f58u: goto label_494f58;
        case 0x494f5cu: goto label_494f5c;
        case 0x494f60u: goto label_494f60;
        case 0x494f64u: goto label_494f64;
        case 0x494f68u: goto label_494f68;
        case 0x494f6cu: goto label_494f6c;
        case 0x494f70u: goto label_494f70;
        case 0x494f74u: goto label_494f74;
        case 0x494f78u: goto label_494f78;
        case 0x494f7cu: goto label_494f7c;
        case 0x494f80u: goto label_494f80;
        case 0x494f84u: goto label_494f84;
        case 0x494f88u: goto label_494f88;
        case 0x494f8cu: goto label_494f8c;
        case 0x494f90u: goto label_494f90;
        case 0x494f94u: goto label_494f94;
        case 0x494f98u: goto label_494f98;
        case 0x494f9cu: goto label_494f9c;
        case 0x494fa0u: goto label_494fa0;
        case 0x494fa4u: goto label_494fa4;
        case 0x494fa8u: goto label_494fa8;
        case 0x494facu: goto label_494fac;
        case 0x494fb0u: goto label_494fb0;
        case 0x494fb4u: goto label_494fb4;
        case 0x494fb8u: goto label_494fb8;
        case 0x494fbcu: goto label_494fbc;
        case 0x494fc0u: goto label_494fc0;
        case 0x494fc4u: goto label_494fc4;
        case 0x494fc8u: goto label_494fc8;
        case 0x494fccu: goto label_494fcc;
        case 0x494fd0u: goto label_494fd0;
        case 0x494fd4u: goto label_494fd4;
        case 0x494fd8u: goto label_494fd8;
        case 0x494fdcu: goto label_494fdc;
        case 0x494fe0u: goto label_494fe0;
        case 0x494fe4u: goto label_494fe4;
        case 0x494fe8u: goto label_494fe8;
        case 0x494fecu: goto label_494fec;
        case 0x494ff0u: goto label_494ff0;
        case 0x494ff4u: goto label_494ff4;
        case 0x494ff8u: goto label_494ff8;
        case 0x494ffcu: goto label_494ffc;
        case 0x495000u: goto label_495000;
        case 0x495004u: goto label_495004;
        case 0x495008u: goto label_495008;
        case 0x49500cu: goto label_49500c;
        case 0x495010u: goto label_495010;
        case 0x495014u: goto label_495014;
        case 0x495018u: goto label_495018;
        case 0x49501cu: goto label_49501c;
        case 0x495020u: goto label_495020;
        case 0x495024u: goto label_495024;
        case 0x495028u: goto label_495028;
        case 0x49502cu: goto label_49502c;
        case 0x495030u: goto label_495030;
        case 0x495034u: goto label_495034;
        case 0x495038u: goto label_495038;
        case 0x49503cu: goto label_49503c;
        case 0x495040u: goto label_495040;
        case 0x495044u: goto label_495044;
        case 0x495048u: goto label_495048;
        case 0x49504cu: goto label_49504c;
        case 0x495050u: goto label_495050;
        case 0x495054u: goto label_495054;
        case 0x495058u: goto label_495058;
        case 0x49505cu: goto label_49505c;
        case 0x495060u: goto label_495060;
        case 0x495064u: goto label_495064;
        case 0x495068u: goto label_495068;
        case 0x49506cu: goto label_49506c;
        case 0x495070u: goto label_495070;
        case 0x495074u: goto label_495074;
        case 0x495078u: goto label_495078;
        case 0x49507cu: goto label_49507c;
        case 0x495080u: goto label_495080;
        case 0x495084u: goto label_495084;
        case 0x495088u: goto label_495088;
        case 0x49508cu: goto label_49508c;
        case 0x495090u: goto label_495090;
        case 0x495094u: goto label_495094;
        case 0x495098u: goto label_495098;
        case 0x49509cu: goto label_49509c;
        case 0x4950a0u: goto label_4950a0;
        case 0x4950a4u: goto label_4950a4;
        case 0x4950a8u: goto label_4950a8;
        case 0x4950acu: goto label_4950ac;
        case 0x4950b0u: goto label_4950b0;
        case 0x4950b4u: goto label_4950b4;
        case 0x4950b8u: goto label_4950b8;
        case 0x4950bcu: goto label_4950bc;
        case 0x4950c0u: goto label_4950c0;
        case 0x4950c4u: goto label_4950c4;
        case 0x4950c8u: goto label_4950c8;
        case 0x4950ccu: goto label_4950cc;
        case 0x4950d0u: goto label_4950d0;
        case 0x4950d4u: goto label_4950d4;
        case 0x4950d8u: goto label_4950d8;
        case 0x4950dcu: goto label_4950dc;
        case 0x4950e0u: goto label_4950e0;
        case 0x4950e4u: goto label_4950e4;
        case 0x4950e8u: goto label_4950e8;
        case 0x4950ecu: goto label_4950ec;
        case 0x4950f0u: goto label_4950f0;
        case 0x4950f4u: goto label_4950f4;
        case 0x4950f8u: goto label_4950f8;
        case 0x4950fcu: goto label_4950fc;
        case 0x495100u: goto label_495100;
        case 0x495104u: goto label_495104;
        case 0x495108u: goto label_495108;
        case 0x49510cu: goto label_49510c;
        case 0x495110u: goto label_495110;
        case 0x495114u: goto label_495114;
        case 0x495118u: goto label_495118;
        case 0x49511cu: goto label_49511c;
        case 0x495120u: goto label_495120;
        case 0x495124u: goto label_495124;
        case 0x495128u: goto label_495128;
        case 0x49512cu: goto label_49512c;
        case 0x495130u: goto label_495130;
        case 0x495134u: goto label_495134;
        case 0x495138u: goto label_495138;
        case 0x49513cu: goto label_49513c;
        case 0x495140u: goto label_495140;
        case 0x495144u: goto label_495144;
        case 0x495148u: goto label_495148;
        case 0x49514cu: goto label_49514c;
        default: break;
    }

    ctx->pc = 0x494d90u;

label_494d90:
    // 0x494d90: 0x27bdfc50  addiu       $sp, $sp, -0x3B0
    ctx->pc = 0x494d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966352));
label_494d94:
    // 0x494d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x494d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_494d98:
    // 0x494d98: 0xafa403a0  sw          $a0, 0x3A0($sp)
    ctx->pc = 0x494d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 4));
label_494d9c:
    // 0x494d9c: 0x8f82c15c  lw          $v0, -0x3EA4($gp)
    ctx->pc = 0x494d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951260)));
label_494da0:
    // 0x494da0: 0x2c410013  sltiu       $at, $v0, 0x13
    ctx->pc = 0x494da0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_494da4:
    // 0x494da4: 0x102000e3  beqz        $at, . + 4 + (0xE3 << 2)
label_494da8:
    if (ctx->pc == 0x494DA8u) {
        ctx->pc = 0x494DACu;
        goto label_494dac;
    }
    ctx->pc = 0x494DA4u;
    {
        const bool branch_taken_0x494da4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x494da4) {
            ctx->pc = 0x495134u;
            goto label_495134;
        }
    }
    ctx->pc = 0x494DACu;
label_494dac:
    // 0x494dac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x494dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_494db0:
    // 0x494db0: 0x24631dd0  addiu       $v1, $v1, 0x1DD0
    ctx->pc = 0x494db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7632));
label_494db4:
    // 0x494db4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x494db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_494db8:
    // 0x494db8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x494db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_494dbc:
    // 0x494dbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x494dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_494dc0:
    // 0x494dc0: 0x400008  jr          $v0
label_494dc4:
    if (ctx->pc == 0x494DC4u) {
        ctx->pc = 0x494DC8u;
        goto label_494dc8;
    }
    ctx->pc = 0x494DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x494DC8u: goto label_494dc8;
            case 0x494DD8u: goto label_494dd8;
            case 0x494E94u: goto label_494e94;
            case 0x495024u: goto label_495024;
            case 0x49508Cu: goto label_49508c;
            case 0x4950FCu: goto label_4950fc;
            case 0x49511Cu: goto label_49511c;
            case 0x495134u: goto label_495134;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494DC0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x494DC8u;
label_494dc8:
    // 0x494dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x494dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_494dcc:
    // 0x494dcc: 0xaf82c170  sw          $v0, -0x3E90($gp)
    ctx->pc = 0x494dccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951280), GPR_U32(ctx, 2));
label_494dd0:
    // 0x494dd0: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_494dd4:
    if (ctx->pc == 0x494DD4u) {
        ctx->pc = 0x494DD8u;
        goto label_494dd8;
    }
    ctx->pc = 0x494DD0u;
    {
        const bool branch_taken_0x494dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494dd0) {
            ctx->pc = 0x495134u;
            goto label_495134;
        }
    }
    ctx->pc = 0x494DD8u;
label_494dd8:
    // 0x494dd8: 0x8f82b748  lw          $v0, -0x48B8($gp)
    ctx->pc = 0x494dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948680)));
label_494ddc:
    // 0x494ddc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_494de0:
    if (ctx->pc == 0x494DE0u) {
        ctx->pc = 0x494DE4u;
        goto label_494de4;
    }
    ctx->pc = 0x494DDCu;
    {
        const bool branch_taken_0x494ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494ddc) {
            ctx->pc = 0x494E7Cu;
            goto label_494e7c;
        }
    }
    ctx->pc = 0x494DE4u;
label_494de4:
    // 0x494de4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x494de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_494de8:
    // 0x494de8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x494de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_494dec:
    // 0x494dec: 0x27a60390  addiu       $a2, $sp, 0x390
    ctx->pc = 0x494decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_494df0:
    // 0x494df0: 0xc115ee8  jal         func_457BA0
label_494df4:
    if (ctx->pc == 0x494DF4u) {
        ctx->pc = 0x494DF8u;
        goto label_494df8;
    }
    ctx->pc = 0x494DF0u;
    SET_GPR_U32(ctx, 31, 0x494DF8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x494DF0u, 0x494DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494DF8u;
label_494df8:
    // 0x494df8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_494dfc:
    if (ctx->pc == 0x494DFCu) {
        ctx->pc = 0x494E00u;
        goto label_494e00;
    }
    ctx->pc = 0x494DF8u;
    {
        const bool branch_taken_0x494df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494df8) {
            ctx->pc = 0x494E7Cu;
            goto label_494e7c;
        }
    }
    ctx->pc = 0x494E00u;
label_494e00:
    // 0x494e00: 0x8fa20398  lw          $v0, 0x398($sp)
    ctx->pc = 0x494e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_494e04:
    // 0x494e04: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_494e08:
    if (ctx->pc == 0x494E08u) {
        ctx->pc = 0x494E0Cu;
        goto label_494e0c;
    }
    ctx->pc = 0x494E04u;
    {
        const bool branch_taken_0x494e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494e04) {
            ctx->pc = 0x494E7Cu;
            goto label_494e7c;
        }
    }
    ctx->pc = 0x494E0Cu;
label_494e0c:
    // 0x494e0c: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x494e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_494e10:
    // 0x494e10: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x494e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_494e14:
    // 0x494e14: 0x8fa60394  lw          $a2, 0x394($sp)
    ctx->pc = 0x494e14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 916)));
label_494e18:
    // 0x494e18: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x494e18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_494e1c:
    // 0x494e1c: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x494e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_494e20:
    // 0x494e20: 0x2408016d  addiu       $t0, $zero, 0x16D
    ctx->pc = 0x494e20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
label_494e24:
    // 0x494e24: 0x2789b754  addiu       $t1, $gp, -0x48AC
    ctx->pc = 0x494e24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948692));
label_494e28:
    // 0x494e28: 0xc113940  jal         func_44E500
label_494e2c:
    if (ctx->pc == 0x494E2Cu) {
        ctx->pc = 0x494E30u;
        goto label_494e30;
    }
    ctx->pc = 0x494E28u;
    SET_GPR_U32(ctx, 31, 0x494E30u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x494E28u, 0x494E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494E30u;
label_494e30:
    // 0x494e30: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x494e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_494e34:
    // 0x494e34: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x494e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_494e38:
    // 0x494e38: 0x24a55430  addiu       $a1, $a1, 0x5430
    ctx->pc = 0x494e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21552));
label_494e3c:
    // 0x494e3c: 0xc115c24  jal         func_457090
label_494e40:
    if (ctx->pc == 0x494E40u) {
        ctx->pc = 0x494E44u;
        goto label_494e44;
    }
    ctx->pc = 0x494E3Cu;
    SET_GPR_U32(ctx, 31, 0x494E44u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x494E3Cu, 0x494E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494E44u;
label_494e44:
    // 0x494e44: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x494e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_494e48:
    // 0x494e48: 0x8fa20398  lw          $v0, 0x398($sp)
    ctx->pc = 0x494e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_494e4c:
    // 0x494e4c: 0x40f809  jalr        $v0
label_494e50:
    if (ctx->pc == 0x494E50u) {
        ctx->pc = 0x494E54u;
        goto label_494e54;
    }
    ctx->pc = 0x494E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x494E54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494E4Cu, 0x494E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x494E54u;
label_494e54:
    // 0x494e54: 0xaf82b748  sw          $v0, -0x48B8($gp)
    ctx->pc = 0x494e54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948680), GPR_U32(ctx, 2));
label_494e58:
    // 0x494e58: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x494e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_494e5c:
    // 0x494e5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_494e60:
    if (ctx->pc == 0x494E60u) {
        ctx->pc = 0x494E64u;
        goto label_494e64;
    }
    ctx->pc = 0x494E5Cu;
    {
        const bool branch_taken_0x494e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494e5c) {
            ctx->pc = 0x494E6Cu;
            goto label_494e6c;
        }
    }
    ctx->pc = 0x494E64u;
label_494e64:
    // 0x494e64: 0xd  break       0
    ctx->pc = 0x494e64u;
    runtime->handleBreak(rdram, ctx);
label_494e68:
    // 0x494e68: 0x0  nop
    ctx->pc = 0x494e68u;
    // NOP
label_494e6c:
    // 0x494e6c: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x494e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_494e70:
    // 0x494e70: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x494e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_494e74:
    // 0x494e74: 0xc11392c  jal         func_44E4B0
label_494e78:
    if (ctx->pc == 0x494E78u) {
        ctx->pc = 0x494E7Cu;
        goto label_494e7c;
    }
    ctx->pc = 0x494E74u;
    SET_GPR_U32(ctx, 31, 0x494E7Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x494E74u, 0x494E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494E7Cu;
label_494e7c:
    // 0x494e7c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x494e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_494e80:
    // 0x494e80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x494e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494e84:
    // 0x494e84: 0xc125548  jal         func_495520
label_494e88:
    if (ctx->pc == 0x494E88u) {
        ctx->pc = 0x494E8Cu;
        goto label_494e8c;
    }
    ctx->pc = 0x494E84u;
    SET_GPR_U32(ctx, 31, 0x494E8Cu);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x494E84u, 0x494E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494E8Cu;
label_494e8c:
    // 0x494e8c: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_494e90:
    if (ctx->pc == 0x494E90u) {
        ctx->pc = 0x494E94u;
        goto label_494e94;
    }
    ctx->pc = 0x494E8Cu;
    {
        const bool branch_taken_0x494e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494e8c) {
            ctx->pc = 0x495134u;
            goto label_495134;
        }
    }
    ctx->pc = 0x494E94u;
label_494e94:
    // 0x494e94: 0x8f82b74c  lw          $v0, -0x48B4($gp)
    ctx->pc = 0x494e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948684)));
label_494e98:
    // 0x494e98: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_494e9c:
    if (ctx->pc == 0x494E9Cu) {
        ctx->pc = 0x494EA0u;
        goto label_494ea0;
    }
    ctx->pc = 0x494E98u;
    {
        const bool branch_taken_0x494e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494e98) {
            ctx->pc = 0x494F38u;
            goto label_494f38;
        }
    }
    ctx->pc = 0x494EA0u;
label_494ea0:
    // 0x494ea0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x494ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_494ea4:
    // 0x494ea4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x494ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_494ea8:
    // 0x494ea8: 0x27a60380  addiu       $a2, $sp, 0x380
    ctx->pc = 0x494ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_494eac:
    // 0x494eac: 0xc115ee8  jal         func_457BA0
label_494eb0:
    if (ctx->pc == 0x494EB0u) {
        ctx->pc = 0x494EB4u;
        goto label_494eb4;
    }
    ctx->pc = 0x494EACu;
    SET_GPR_U32(ctx, 31, 0x494EB4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x494EACu, 0x494EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494EB4u;
label_494eb4:
    // 0x494eb4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_494eb8:
    if (ctx->pc == 0x494EB8u) {
        ctx->pc = 0x494EBCu;
        goto label_494ebc;
    }
    ctx->pc = 0x494EB4u;
    {
        const bool branch_taken_0x494eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494eb4) {
            ctx->pc = 0x494F38u;
            goto label_494f38;
        }
    }
    ctx->pc = 0x494EBCu;
label_494ebc:
    // 0x494ebc: 0x8fa20388  lw          $v0, 0x388($sp)
    ctx->pc = 0x494ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
label_494ec0:
    // 0x494ec0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_494ec4:
    if (ctx->pc == 0x494EC4u) {
        ctx->pc = 0x494EC8u;
        goto label_494ec8;
    }
    ctx->pc = 0x494EC0u;
    {
        const bool branch_taken_0x494ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494ec0) {
            ctx->pc = 0x494F38u;
            goto label_494f38;
        }
    }
    ctx->pc = 0x494EC8u;
label_494ec8:
    // 0x494ec8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x494ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_494ecc:
    // 0x494ecc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x494eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_494ed0:
    // 0x494ed0: 0x8fa60384  lw          $a2, 0x384($sp)
    ctx->pc = 0x494ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 900)));
label_494ed4:
    // 0x494ed4: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x494ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_494ed8:
    // 0x494ed8: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x494ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_494edc:
    // 0x494edc: 0x24080173  addiu       $t0, $zero, 0x173
    ctx->pc = 0x494edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 371));
label_494ee0:
    // 0x494ee0: 0x2789b754  addiu       $t1, $gp, -0x48AC
    ctx->pc = 0x494ee0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948692));
label_494ee4:
    // 0x494ee4: 0xc113940  jal         func_44E500
label_494ee8:
    if (ctx->pc == 0x494EE8u) {
        ctx->pc = 0x494EECu;
        goto label_494eec;
    }
    ctx->pc = 0x494EE4u;
    SET_GPR_U32(ctx, 31, 0x494EECu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x494EE4u, 0x494EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494EECu;
label_494eec:
    // 0x494eec: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x494eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_494ef0:
    // 0x494ef0: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x494ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_494ef4:
    // 0x494ef4: 0x24a554a0  addiu       $a1, $a1, 0x54A0
    ctx->pc = 0x494ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21664));
label_494ef8:
    // 0x494ef8: 0xc115c24  jal         func_457090
label_494efc:
    if (ctx->pc == 0x494EFCu) {
        ctx->pc = 0x494F00u;
        goto label_494f00;
    }
    ctx->pc = 0x494EF8u;
    SET_GPR_U32(ctx, 31, 0x494F00u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x494EF8u, 0x494F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494F00u;
label_494f00:
    // 0x494f00: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x494f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_494f04:
    // 0x494f04: 0x8fa20388  lw          $v0, 0x388($sp)
    ctx->pc = 0x494f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
label_494f08:
    // 0x494f08: 0x40f809  jalr        $v0
label_494f0c:
    if (ctx->pc == 0x494F0Cu) {
        ctx->pc = 0x494F10u;
        goto label_494f10;
    }
    ctx->pc = 0x494F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x494F10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494F08u, 0x494F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x494F10u;
label_494f10:
    // 0x494f10: 0xaf82b74c  sw          $v0, -0x48B4($gp)
    ctx->pc = 0x494f10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948684), GPR_U32(ctx, 2));
label_494f14:
    // 0x494f14: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x494f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_494f18:
    // 0x494f18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_494f1c:
    if (ctx->pc == 0x494F1Cu) {
        ctx->pc = 0x494F20u;
        goto label_494f20;
    }
    ctx->pc = 0x494F18u;
    {
        const bool branch_taken_0x494f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494f18) {
            ctx->pc = 0x494F28u;
            goto label_494f28;
        }
    }
    ctx->pc = 0x494F20u;
label_494f20:
    // 0x494f20: 0xd  break       0
    ctx->pc = 0x494f20u;
    runtime->handleBreak(rdram, ctx);
label_494f24:
    // 0x494f24: 0x0  nop
    ctx->pc = 0x494f24u;
    // NOP
label_494f28:
    // 0x494f28: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x494f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_494f2c:
    // 0x494f2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x494f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_494f30:
    // 0x494f30: 0xc11392c  jal         func_44E4B0
label_494f34:
    if (ctx->pc == 0x494F34u) {
        ctx->pc = 0x494F38u;
        goto label_494f38;
    }
    ctx->pc = 0x494F30u;
    SET_GPR_U32(ctx, 31, 0x494F38u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x494F30u, 0x494F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494F38u;
label_494f38:
    // 0x494f38: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x494f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_494f3c:
    // 0x494f3c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x494f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_494f40:
    // 0x494f40: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x494f40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_494f44:
    // 0x494f44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x494f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_494f48:
    // 0x494f48: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_494f4c:
    if (ctx->pc == 0x494F4Cu) {
        ctx->pc = 0x494F50u;
        goto label_494f50;
    }
    ctx->pc = 0x494F48u;
    {
        const bool branch_taken_0x494f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x494f48) {
            ctx->pc = 0x494FF8u;
            goto label_494ff8;
        }
    }
    ctx->pc = 0x494F50u;
label_494f50:
    // 0x494f50: 0x8f82b750  lw          $v0, -0x48B0($gp)
    ctx->pc = 0x494f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948688)));
label_494f54:
    // 0x494f54: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_494f58:
    if (ctx->pc == 0x494F58u) {
        ctx->pc = 0x494F5Cu;
        goto label_494f5c;
    }
    ctx->pc = 0x494F54u;
    {
        const bool branch_taken_0x494f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494f54) {
            ctx->pc = 0x494FF8u;
            goto label_494ff8;
        }
    }
    ctx->pc = 0x494F5Cu;
label_494f5c:
    // 0x494f5c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x494f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_494f60:
    // 0x494f60: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x494f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_494f64:
    // 0x494f64: 0x27a60370  addiu       $a2, $sp, 0x370
    ctx->pc = 0x494f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_494f68:
    // 0x494f68: 0xc115ee8  jal         func_457BA0
label_494f6c:
    if (ctx->pc == 0x494F6Cu) {
        ctx->pc = 0x494F70u;
        goto label_494f70;
    }
    ctx->pc = 0x494F68u;
    SET_GPR_U32(ctx, 31, 0x494F70u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x494F68u, 0x494F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494F70u;
label_494f70:
    // 0x494f70: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_494f74:
    if (ctx->pc == 0x494F74u) {
        ctx->pc = 0x494F78u;
        goto label_494f78;
    }
    ctx->pc = 0x494F70u;
    {
        const bool branch_taken_0x494f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494f70) {
            ctx->pc = 0x494FF8u;
            goto label_494ff8;
        }
    }
    ctx->pc = 0x494F78u;
label_494f78:
    // 0x494f78: 0x8fa20378  lw          $v0, 0x378($sp)
    ctx->pc = 0x494f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 888)));
label_494f7c:
    // 0x494f7c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_494f80:
    if (ctx->pc == 0x494F80u) {
        ctx->pc = 0x494F84u;
        goto label_494f84;
    }
    ctx->pc = 0x494F7Cu;
    {
        const bool branch_taken_0x494f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494f7c) {
            ctx->pc = 0x494FF8u;
            goto label_494ff8;
        }
    }
    ctx->pc = 0x494F84u;
label_494f84:
    // 0x494f84: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x494f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_494f88:
    // 0x494f88: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x494f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_494f8c:
    // 0x494f8c: 0x8fa60374  lw          $a2, 0x374($sp)
    ctx->pc = 0x494f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 884)));
label_494f90:
    // 0x494f90: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x494f90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_494f94:
    // 0x494f94: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x494f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_494f98:
    // 0x494f98: 0x24080174  addiu       $t0, $zero, 0x174
    ctx->pc = 0x494f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 372));
label_494f9c:
    // 0x494f9c: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x494f9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_494fa0:
    // 0x494fa0: 0x252954b0  addiu       $t1, $t1, 0x54B0
    ctx->pc = 0x494fa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 21680));
label_494fa4:
    // 0x494fa4: 0xc113940  jal         func_44E500
label_494fa8:
    if (ctx->pc == 0x494FA8u) {
        ctx->pc = 0x494FACu;
        goto label_494fac;
    }
    ctx->pc = 0x494FA4u;
    SET_GPR_U32(ctx, 31, 0x494FACu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x494FA4u, 0x494FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494FACu;
label_494fac:
    // 0x494fac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x494facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_494fb0:
    // 0x494fb0: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x494fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_494fb4:
    // 0x494fb4: 0x24a554e0  addiu       $a1, $a1, 0x54E0
    ctx->pc = 0x494fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21728));
label_494fb8:
    // 0x494fb8: 0xc115c24  jal         func_457090
label_494fbc:
    if (ctx->pc == 0x494FBCu) {
        ctx->pc = 0x494FC0u;
        goto label_494fc0;
    }
    ctx->pc = 0x494FB8u;
    SET_GPR_U32(ctx, 31, 0x494FC0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x494FB8u, 0x494FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494FC0u;
label_494fc0:
    // 0x494fc0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x494fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_494fc4:
    // 0x494fc4: 0x8fa20378  lw          $v0, 0x378($sp)
    ctx->pc = 0x494fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 888)));
label_494fc8:
    // 0x494fc8: 0x40f809  jalr        $v0
label_494fcc:
    if (ctx->pc == 0x494FCCu) {
        ctx->pc = 0x494FD0u;
        goto label_494fd0;
    }
    ctx->pc = 0x494FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x494FD0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494FC8u, 0x494FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x494FD0u;
label_494fd0:
    // 0x494fd0: 0xaf82b750  sw          $v0, -0x48B0($gp)
    ctx->pc = 0x494fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948688), GPR_U32(ctx, 2));
label_494fd4:
    // 0x494fd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x494fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_494fd8:
    // 0x494fd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_494fdc:
    if (ctx->pc == 0x494FDCu) {
        ctx->pc = 0x494FE0u;
        goto label_494fe0;
    }
    ctx->pc = 0x494FD8u;
    {
        const bool branch_taken_0x494fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494fd8) {
            ctx->pc = 0x494FE8u;
            goto label_494fe8;
        }
    }
    ctx->pc = 0x494FE0u;
label_494fe0:
    // 0x494fe0: 0xd  break       0
    ctx->pc = 0x494fe0u;
    runtime->handleBreak(rdram, ctx);
label_494fe4:
    // 0x494fe4: 0x0  nop
    ctx->pc = 0x494fe4u;
    // NOP
label_494fe8:
    // 0x494fe8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x494fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_494fec:
    // 0x494fec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x494fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_494ff0:
    // 0x494ff0: 0xc11392c  jal         func_44E4B0
label_494ff4:
    if (ctx->pc == 0x494FF4u) {
        ctx->pc = 0x494FF8u;
        goto label_494ff8;
    }
    ctx->pc = 0x494FF0u;
    SET_GPR_U32(ctx, 31, 0x494FF8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x494FF0u, 0x494FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494FF8u;
label_494ff8:
    // 0x494ff8: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x494ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_494ffc:
    // 0x494ffc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x494ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_495000:
    // 0x495000: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
label_495004:
    if (ctx->pc == 0x495004u) {
        ctx->pc = 0x495008u;
        goto label_495008;
    }
    ctx->pc = 0x495000u;
    {
        const bool branch_taken_0x495000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x495000) {
            ctx->pc = 0x495134u;
            goto label_495134;
        }
    }
    ctx->pc = 0x495008u;
label_495008:
    // 0x495008: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x495008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49500c:
    // 0x49500c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49500cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495010:
    // 0x495010: 0xc125548  jal         func_495520
label_495014:
    if (ctx->pc == 0x495014u) {
        ctx->pc = 0x495018u;
        goto label_495018;
    }
    ctx->pc = 0x495010u;
    SET_GPR_U32(ctx, 31, 0x495018u);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x495010u, 0x495018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495018u;
label_495018:
    // 0x495018: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x495018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49501c:
    // 0x49501c: 0x10000046  b           . + 4 + (0x46 << 2)
label_495020:
    if (ctx->pc == 0x495020u) {
        ctx->pc = 0x495024u;
        goto label_495024;
    }
    ctx->pc = 0x49501Cu;
    {
        const bool branch_taken_0x49501c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49501c) {
            ctx->pc = 0x495138u;
            goto label_495138;
        }
    }
    ctx->pc = 0x495024u;
label_495024:
    // 0x495024: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x495024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_495028:
    // 0x495028: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x495028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49502c:
    // 0x49502c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_495030:
    if (ctx->pc == 0x495030u) {
        ctx->pc = 0x495034u;
        goto label_495034;
    }
    ctx->pc = 0x49502Cu;
    {
        const bool branch_taken_0x49502c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x49502c) {
            ctx->pc = 0x495054u;
            goto label_495054;
        }
    }
    ctx->pc = 0x495034u;
label_495034:
    // 0x495034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x495034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_495038:
    // 0x495038: 0xaf82c150  sw          $v0, -0x3EB0($gp)
    ctx->pc = 0x495038u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951248), GPR_U32(ctx, 2));
label_49503c:
    // 0x49503c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x49503cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_495040:
    // 0x495040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x495040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495044:
    // 0x495044: 0xc125548  jal         func_495520
label_495048:
    if (ctx->pc == 0x495048u) {
        ctx->pc = 0x49504Cu;
        goto label_49504c;
    }
    ctx->pc = 0x495044u;
    SET_GPR_U32(ctx, 31, 0x49504Cu);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x495044u, 0x49504Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49504Cu;
label_49504c:
    // 0x49504c: 0x10000039  b           . + 4 + (0x39 << 2)
label_495050:
    if (ctx->pc == 0x495050u) {
        ctx->pc = 0x495054u;
        goto label_495054;
    }
    ctx->pc = 0x49504Cu;
    {
        const bool branch_taken_0x49504c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49504c) {
            ctx->pc = 0x495134u;
            goto label_495134;
        }
    }
    ctx->pc = 0x495054u;
label_495054:
    // 0x495054: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x495054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_495058:
    // 0x495058: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x495058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_49505c:
    // 0x49505c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x49505cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495060:
    // 0x495060: 0x8f82c168  lw          $v0, -0x3E98($gp)
    ctx->pc = 0x495060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951272)));
label_495064:
    // 0x495064: 0x40f809  jalr        $v0
label_495068:
    if (ctx->pc == 0x495068u) {
        ctx->pc = 0x49506Cu;
        goto label_49506c;
    }
    ctx->pc = 0x495064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49506Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495064u, 0x49506Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49506Cu;
label_49506c:
    // 0x49506c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x49506cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_495070:
    // 0x495070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x495070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495074:
    // 0x495074: 0xc125548  jal         func_495520
label_495078:
    if (ctx->pc == 0x495078u) {
        ctx->pc = 0x49507Cu;
        goto label_49507c;
    }
    ctx->pc = 0x495074u;
    SET_GPR_U32(ctx, 31, 0x49507Cu);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x495074u, 0x49507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49507Cu;
label_49507c:
    // 0x49507c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x49507cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_495080:
    // 0x495080: 0xaf82c17c  sw          $v0, -0x3E84($gp)
    ctx->pc = 0x495080u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951292), GPR_U32(ctx, 2));
label_495084:
    // 0x495084: 0x1000002b  b           . + 4 + (0x2B << 2)
label_495088:
    if (ctx->pc == 0x495088u) {
        ctx->pc = 0x49508Cu;
        goto label_49508c;
    }
    ctx->pc = 0x495084u;
    {
        const bool branch_taken_0x495084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495084) {
            ctx->pc = 0x495134u;
            goto label_495134;
        }
    }
    ctx->pc = 0x49508Cu;
label_49508c:
    // 0x49508c: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x49508cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_495090:
    // 0x495090: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x495090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_495094:
    // 0x495094: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_495098:
    if (ctx->pc == 0x495098u) {
        ctx->pc = 0x49509Cu;
        goto label_49509c;
    }
    ctx->pc = 0x495094u;
    {
        const bool branch_taken_0x495094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x495094) {
            ctx->pc = 0x4950B4u;
            goto label_4950b4;
        }
    }
    ctx->pc = 0x49509Cu;
label_49509c:
    // 0x49509c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x49509cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_4950a0:
    // 0x4950a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4950a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4950a4:
    // 0x4950a4: 0xc125548  jal         func_495520
label_4950a8:
    if (ctx->pc == 0x4950A8u) {
        ctx->pc = 0x4950ACu;
        goto label_4950ac;
    }
    ctx->pc = 0x4950A4u;
    SET_GPR_U32(ctx, 31, 0x4950ACu);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x4950A4u, 0x4950ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4950ACu;
label_4950ac:
    // 0x4950ac: 0x10000021  b           . + 4 + (0x21 << 2)
label_4950b0:
    if (ctx->pc == 0x4950B0u) {
        ctx->pc = 0x4950B4u;
        goto label_4950b4;
    }
    ctx->pc = 0x4950ACu;
    {
        const bool branch_taken_0x4950ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4950ac) {
            ctx->pc = 0x495134u;
            goto label_495134;
        }
    }
    ctx->pc = 0x4950B4u;
label_4950b4:
    // 0x4950b4: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x4950b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_4950b8:
    // 0x4950b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4950b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4950bc:
    // 0x4950bc: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
label_4950c0:
    if (ctx->pc == 0x4950C0u) {
        ctx->pc = 0x4950C4u;
        goto label_4950c4;
    }
    ctx->pc = 0x4950BCu;
    {
        const bool branch_taken_0x4950bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4950bc) {
            ctx->pc = 0x495134u;
            goto label_495134;
        }
    }
    ctx->pc = 0x4950C4u;
label_4950c4:
    // 0x4950c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4950c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4950c8:
    // 0x4950c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4950c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4950cc:
    // 0x4950cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4950ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4950d0:
    // 0x4950d0: 0x8f82c168  lw          $v0, -0x3E98($gp)
    ctx->pc = 0x4950d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951272)));
label_4950d4:
    // 0x4950d4: 0x40f809  jalr        $v0
label_4950d8:
    if (ctx->pc == 0x4950D8u) {
        ctx->pc = 0x4950DCu;
        goto label_4950dc;
    }
    ctx->pc = 0x4950D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4950DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4950D4u, 0x4950DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4950DCu;
label_4950dc:
    // 0x4950dc: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x4950dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_4950e0:
    // 0x4950e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4950e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4950e4:
    // 0x4950e4: 0xc125548  jal         func_495520
label_4950e8:
    if (ctx->pc == 0x4950E8u) {
        ctx->pc = 0x4950ECu;
        goto label_4950ec;
    }
    ctx->pc = 0x4950E4u;
    SET_GPR_U32(ctx, 31, 0x4950ECu);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x4950E4u, 0x4950ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4950ECu;
label_4950ec:
    // 0x4950ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4950ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4950f0:
    // 0x4950f0: 0xaf82c17c  sw          $v0, -0x3E84($gp)
    ctx->pc = 0x4950f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951292), GPR_U32(ctx, 2));
label_4950f4:
    // 0x4950f4: 0x1000000f  b           . + 4 + (0xF << 2)
label_4950f8:
    if (ctx->pc == 0x4950F8u) {
        ctx->pc = 0x4950FCu;
        goto label_4950fc;
    }
    ctx->pc = 0x4950F4u;
    {
        const bool branch_taken_0x4950f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4950f4) {
            ctx->pc = 0x495134u;
            goto label_495134;
        }
    }
    ctx->pc = 0x4950FCu;
label_4950fc:
    // 0x4950fc: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x4950fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_495100:
    // 0x495100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x495100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495104:
    // 0x495104: 0xc125548  jal         func_495520
label_495108:
    if (ctx->pc == 0x495108u) {
        ctx->pc = 0x49510Cu;
        goto label_49510c;
    }
    ctx->pc = 0x495104u;
    SET_GPR_U32(ctx, 31, 0x49510Cu);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x495104u, 0x49510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49510Cu;
label_49510c:
    // 0x49510c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x49510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_495110:
    // 0x495110: 0xaf82c17c  sw          $v0, -0x3E84($gp)
    ctx->pc = 0x495110u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951292), GPR_U32(ctx, 2));
label_495114:
    // 0x495114: 0x10000007  b           . + 4 + (0x7 << 2)
label_495118:
    if (ctx->pc == 0x495118u) {
        ctx->pc = 0x49511Cu;
        goto label_49511c;
    }
    ctx->pc = 0x495114u;
    {
        const bool branch_taken_0x495114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495114) {
            ctx->pc = 0x495134u;
            goto label_495134;
        }
    }
    ctx->pc = 0x49511Cu;
label_49511c:
    // 0x49511c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x49511cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_495120:
    // 0x495120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x495120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495124:
    // 0x495124: 0xc125548  jal         func_495520
label_495128:
    if (ctx->pc == 0x495128u) {
        ctx->pc = 0x49512Cu;
        goto label_49512c;
    }
    ctx->pc = 0x495124u;
    SET_GPR_U32(ctx, 31, 0x49512Cu);
    ctx->pc = 0x495520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495520u, 0x495124u, 0x49512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49512Cu;
label_49512c:
    // 0x49512c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x49512cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_495130:
    // 0x495130: 0xaf82c17c  sw          $v0, -0x3E84($gp)
    ctx->pc = 0x495130u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951292), GPR_U32(ctx, 2));
label_495134:
    // 0x495134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x495134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_495138:
    // 0x495138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x495138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49513c:
    // 0x49513c: 0x27bd03b0  addiu       $sp, $sp, 0x3B0
    ctx->pc = 0x49513cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_495140:
    // 0x495140: 0x3e00008  jr          $ra
label_495144:
    if (ctx->pc == 0x495144u) {
        ctx->pc = 0x495148u;
        goto label_495148;
    }
    ctx->pc = 0x495140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x495148u;
label_495148:
    // 0x495148: 0x0  nop
    ctx->pc = 0x495148u;
    // NOP
label_49514c:
    // 0x49514c: 0x0  nop
    ctx->pc = 0x49514cu;
    // NOP
    ctx->pc = 0x495150u;
}
