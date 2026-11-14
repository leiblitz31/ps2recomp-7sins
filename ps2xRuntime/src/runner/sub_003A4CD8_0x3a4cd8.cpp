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

// Function: sub_003A4CD8
// Address: 0x3a4cd8 - 0x3a5140
void sub_003A4CD8_0x3a4cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4CD8_0x3a4cd8");
#endif

    switch (ctx->pc) {
        case 0x3a4cd8u: goto label_3a4cd8;
        case 0x3a4cdcu: goto label_3a4cdc;
        case 0x3a4ce0u: goto label_3a4ce0;
        case 0x3a4ce4u: goto label_3a4ce4;
        case 0x3a4ce8u: goto label_3a4ce8;
        case 0x3a4cecu: goto label_3a4cec;
        case 0x3a4cf0u: goto label_3a4cf0;
        case 0x3a4cf4u: goto label_3a4cf4;
        case 0x3a4cf8u: goto label_3a4cf8;
        case 0x3a4cfcu: goto label_3a4cfc;
        case 0x3a4d00u: goto label_3a4d00;
        case 0x3a4d04u: goto label_3a4d04;
        case 0x3a4d08u: goto label_3a4d08;
        case 0x3a4d0cu: goto label_3a4d0c;
        case 0x3a4d10u: goto label_3a4d10;
        case 0x3a4d14u: goto label_3a4d14;
        case 0x3a4d18u: goto label_3a4d18;
        case 0x3a4d1cu: goto label_3a4d1c;
        case 0x3a4d20u: goto label_3a4d20;
        case 0x3a4d24u: goto label_3a4d24;
        case 0x3a4d28u: goto label_3a4d28;
        case 0x3a4d2cu: goto label_3a4d2c;
        case 0x3a4d30u: goto label_3a4d30;
        case 0x3a4d34u: goto label_3a4d34;
        case 0x3a4d38u: goto label_3a4d38;
        case 0x3a4d3cu: goto label_3a4d3c;
        case 0x3a4d40u: goto label_3a4d40;
        case 0x3a4d44u: goto label_3a4d44;
        case 0x3a4d48u: goto label_3a4d48;
        case 0x3a4d4cu: goto label_3a4d4c;
        case 0x3a4d50u: goto label_3a4d50;
        case 0x3a4d54u: goto label_3a4d54;
        case 0x3a4d58u: goto label_3a4d58;
        case 0x3a4d5cu: goto label_3a4d5c;
        case 0x3a4d60u: goto label_3a4d60;
        case 0x3a4d64u: goto label_3a4d64;
        case 0x3a4d68u: goto label_3a4d68;
        case 0x3a4d6cu: goto label_3a4d6c;
        case 0x3a4d70u: goto label_3a4d70;
        case 0x3a4d74u: goto label_3a4d74;
        case 0x3a4d78u: goto label_3a4d78;
        case 0x3a4d7cu: goto label_3a4d7c;
        case 0x3a4d80u: goto label_3a4d80;
        case 0x3a4d84u: goto label_3a4d84;
        case 0x3a4d88u: goto label_3a4d88;
        case 0x3a4d8cu: goto label_3a4d8c;
        case 0x3a4d90u: goto label_3a4d90;
        case 0x3a4d94u: goto label_3a4d94;
        case 0x3a4d98u: goto label_3a4d98;
        case 0x3a4d9cu: goto label_3a4d9c;
        case 0x3a4da0u: goto label_3a4da0;
        case 0x3a4da4u: goto label_3a4da4;
        case 0x3a4da8u: goto label_3a4da8;
        case 0x3a4dacu: goto label_3a4dac;
        case 0x3a4db0u: goto label_3a4db0;
        case 0x3a4db4u: goto label_3a4db4;
        case 0x3a4db8u: goto label_3a4db8;
        case 0x3a4dbcu: goto label_3a4dbc;
        case 0x3a4dc0u: goto label_3a4dc0;
        case 0x3a4dc4u: goto label_3a4dc4;
        case 0x3a4dc8u: goto label_3a4dc8;
        case 0x3a4dccu: goto label_3a4dcc;
        case 0x3a4dd0u: goto label_3a4dd0;
        case 0x3a4dd4u: goto label_3a4dd4;
        case 0x3a4dd8u: goto label_3a4dd8;
        case 0x3a4ddcu: goto label_3a4ddc;
        case 0x3a4de0u: goto label_3a4de0;
        case 0x3a4de4u: goto label_3a4de4;
        case 0x3a4de8u: goto label_3a4de8;
        case 0x3a4decu: goto label_3a4dec;
        case 0x3a4df0u: goto label_3a4df0;
        case 0x3a4df4u: goto label_3a4df4;
        case 0x3a4df8u: goto label_3a4df8;
        case 0x3a4dfcu: goto label_3a4dfc;
        case 0x3a4e00u: goto label_3a4e00;
        case 0x3a4e04u: goto label_3a4e04;
        case 0x3a4e08u: goto label_3a4e08;
        case 0x3a4e0cu: goto label_3a4e0c;
        case 0x3a4e10u: goto label_3a4e10;
        case 0x3a4e14u: goto label_3a4e14;
        case 0x3a4e18u: goto label_3a4e18;
        case 0x3a4e1cu: goto label_3a4e1c;
        case 0x3a4e20u: goto label_3a4e20;
        case 0x3a4e24u: goto label_3a4e24;
        case 0x3a4e28u: goto label_3a4e28;
        case 0x3a4e2cu: goto label_3a4e2c;
        case 0x3a4e30u: goto label_3a4e30;
        case 0x3a4e34u: goto label_3a4e34;
        case 0x3a4e38u: goto label_3a4e38;
        case 0x3a4e3cu: goto label_3a4e3c;
        case 0x3a4e40u: goto label_3a4e40;
        case 0x3a4e44u: goto label_3a4e44;
        case 0x3a4e48u: goto label_3a4e48;
        case 0x3a4e4cu: goto label_3a4e4c;
        case 0x3a4e50u: goto label_3a4e50;
        case 0x3a4e54u: goto label_3a4e54;
        case 0x3a4e58u: goto label_3a4e58;
        case 0x3a4e5cu: goto label_3a4e5c;
        case 0x3a4e60u: goto label_3a4e60;
        case 0x3a4e64u: goto label_3a4e64;
        case 0x3a4e68u: goto label_3a4e68;
        case 0x3a4e6cu: goto label_3a4e6c;
        case 0x3a4e70u: goto label_3a4e70;
        case 0x3a4e74u: goto label_3a4e74;
        case 0x3a4e78u: goto label_3a4e78;
        case 0x3a4e7cu: goto label_3a4e7c;
        case 0x3a4e80u: goto label_3a4e80;
        case 0x3a4e84u: goto label_3a4e84;
        case 0x3a4e88u: goto label_3a4e88;
        case 0x3a4e8cu: goto label_3a4e8c;
        case 0x3a4e90u: goto label_3a4e90;
        case 0x3a4e94u: goto label_3a4e94;
        case 0x3a4e98u: goto label_3a4e98;
        case 0x3a4e9cu: goto label_3a4e9c;
        case 0x3a4ea0u: goto label_3a4ea0;
        case 0x3a4ea4u: goto label_3a4ea4;
        case 0x3a4ea8u: goto label_3a4ea8;
        case 0x3a4eacu: goto label_3a4eac;
        case 0x3a4eb0u: goto label_3a4eb0;
        case 0x3a4eb4u: goto label_3a4eb4;
        case 0x3a4eb8u: goto label_3a4eb8;
        case 0x3a4ebcu: goto label_3a4ebc;
        case 0x3a4ec0u: goto label_3a4ec0;
        case 0x3a4ec4u: goto label_3a4ec4;
        case 0x3a4ec8u: goto label_3a4ec8;
        case 0x3a4eccu: goto label_3a4ecc;
        case 0x3a4ed0u: goto label_3a4ed0;
        case 0x3a4ed4u: goto label_3a4ed4;
        case 0x3a4ed8u: goto label_3a4ed8;
        case 0x3a4edcu: goto label_3a4edc;
        case 0x3a4ee0u: goto label_3a4ee0;
        case 0x3a4ee4u: goto label_3a4ee4;
        case 0x3a4ee8u: goto label_3a4ee8;
        case 0x3a4eecu: goto label_3a4eec;
        case 0x3a4ef0u: goto label_3a4ef0;
        case 0x3a4ef4u: goto label_3a4ef4;
        case 0x3a4ef8u: goto label_3a4ef8;
        case 0x3a4efcu: goto label_3a4efc;
        case 0x3a4f00u: goto label_3a4f00;
        case 0x3a4f04u: goto label_3a4f04;
        case 0x3a4f08u: goto label_3a4f08;
        case 0x3a4f0cu: goto label_3a4f0c;
        case 0x3a4f10u: goto label_3a4f10;
        case 0x3a4f14u: goto label_3a4f14;
        case 0x3a4f18u: goto label_3a4f18;
        case 0x3a4f1cu: goto label_3a4f1c;
        case 0x3a4f20u: goto label_3a4f20;
        case 0x3a4f24u: goto label_3a4f24;
        case 0x3a4f28u: goto label_3a4f28;
        case 0x3a4f2cu: goto label_3a4f2c;
        case 0x3a4f30u: goto label_3a4f30;
        case 0x3a4f34u: goto label_3a4f34;
        case 0x3a4f38u: goto label_3a4f38;
        case 0x3a4f3cu: goto label_3a4f3c;
        case 0x3a4f40u: goto label_3a4f40;
        case 0x3a4f44u: goto label_3a4f44;
        case 0x3a4f48u: goto label_3a4f48;
        case 0x3a4f4cu: goto label_3a4f4c;
        case 0x3a4f50u: goto label_3a4f50;
        case 0x3a4f54u: goto label_3a4f54;
        case 0x3a4f58u: goto label_3a4f58;
        case 0x3a4f5cu: goto label_3a4f5c;
        case 0x3a4f60u: goto label_3a4f60;
        case 0x3a4f64u: goto label_3a4f64;
        case 0x3a4f68u: goto label_3a4f68;
        case 0x3a4f6cu: goto label_3a4f6c;
        case 0x3a4f70u: goto label_3a4f70;
        case 0x3a4f74u: goto label_3a4f74;
        case 0x3a4f78u: goto label_3a4f78;
        case 0x3a4f7cu: goto label_3a4f7c;
        case 0x3a4f80u: goto label_3a4f80;
        case 0x3a4f84u: goto label_3a4f84;
        case 0x3a4f88u: goto label_3a4f88;
        case 0x3a4f8cu: goto label_3a4f8c;
        case 0x3a4f90u: goto label_3a4f90;
        case 0x3a4f94u: goto label_3a4f94;
        case 0x3a4f98u: goto label_3a4f98;
        case 0x3a4f9cu: goto label_3a4f9c;
        case 0x3a4fa0u: goto label_3a4fa0;
        case 0x3a4fa4u: goto label_3a4fa4;
        case 0x3a4fa8u: goto label_3a4fa8;
        case 0x3a4facu: goto label_3a4fac;
        case 0x3a4fb0u: goto label_3a4fb0;
        case 0x3a4fb4u: goto label_3a4fb4;
        case 0x3a4fb8u: goto label_3a4fb8;
        case 0x3a4fbcu: goto label_3a4fbc;
        case 0x3a4fc0u: goto label_3a4fc0;
        case 0x3a4fc4u: goto label_3a4fc4;
        case 0x3a4fc8u: goto label_3a4fc8;
        case 0x3a4fccu: goto label_3a4fcc;
        case 0x3a4fd0u: goto label_3a4fd0;
        case 0x3a4fd4u: goto label_3a4fd4;
        case 0x3a4fd8u: goto label_3a4fd8;
        case 0x3a4fdcu: goto label_3a4fdc;
        case 0x3a4fe0u: goto label_3a4fe0;
        case 0x3a4fe4u: goto label_3a4fe4;
        case 0x3a4fe8u: goto label_3a4fe8;
        case 0x3a4fecu: goto label_3a4fec;
        case 0x3a4ff0u: goto label_3a4ff0;
        case 0x3a4ff4u: goto label_3a4ff4;
        case 0x3a4ff8u: goto label_3a4ff8;
        case 0x3a4ffcu: goto label_3a4ffc;
        case 0x3a5000u: goto label_3a5000;
        case 0x3a5004u: goto label_3a5004;
        case 0x3a5008u: goto label_3a5008;
        case 0x3a500cu: goto label_3a500c;
        case 0x3a5010u: goto label_3a5010;
        case 0x3a5014u: goto label_3a5014;
        case 0x3a5018u: goto label_3a5018;
        case 0x3a501cu: goto label_3a501c;
        case 0x3a5020u: goto label_3a5020;
        case 0x3a5024u: goto label_3a5024;
        case 0x3a5028u: goto label_3a5028;
        case 0x3a502cu: goto label_3a502c;
        case 0x3a5030u: goto label_3a5030;
        case 0x3a5034u: goto label_3a5034;
        case 0x3a5038u: goto label_3a5038;
        case 0x3a503cu: goto label_3a503c;
        case 0x3a5040u: goto label_3a5040;
        case 0x3a5044u: goto label_3a5044;
        case 0x3a5048u: goto label_3a5048;
        case 0x3a504cu: goto label_3a504c;
        case 0x3a5050u: goto label_3a5050;
        case 0x3a5054u: goto label_3a5054;
        case 0x3a5058u: goto label_3a5058;
        case 0x3a505cu: goto label_3a505c;
        case 0x3a5060u: goto label_3a5060;
        case 0x3a5064u: goto label_3a5064;
        case 0x3a5068u: goto label_3a5068;
        case 0x3a506cu: goto label_3a506c;
        case 0x3a5070u: goto label_3a5070;
        case 0x3a5074u: goto label_3a5074;
        case 0x3a5078u: goto label_3a5078;
        case 0x3a507cu: goto label_3a507c;
        case 0x3a5080u: goto label_3a5080;
        case 0x3a5084u: goto label_3a5084;
        case 0x3a5088u: goto label_3a5088;
        case 0x3a508cu: goto label_3a508c;
        case 0x3a5090u: goto label_3a5090;
        case 0x3a5094u: goto label_3a5094;
        case 0x3a5098u: goto label_3a5098;
        case 0x3a509cu: goto label_3a509c;
        case 0x3a50a0u: goto label_3a50a0;
        case 0x3a50a4u: goto label_3a50a4;
        case 0x3a50a8u: goto label_3a50a8;
        case 0x3a50acu: goto label_3a50ac;
        case 0x3a50b0u: goto label_3a50b0;
        case 0x3a50b4u: goto label_3a50b4;
        case 0x3a50b8u: goto label_3a50b8;
        case 0x3a50bcu: goto label_3a50bc;
        case 0x3a50c0u: goto label_3a50c0;
        case 0x3a50c4u: goto label_3a50c4;
        case 0x3a50c8u: goto label_3a50c8;
        case 0x3a50ccu: goto label_3a50cc;
        case 0x3a50d0u: goto label_3a50d0;
        case 0x3a50d4u: goto label_3a50d4;
        case 0x3a50d8u: goto label_3a50d8;
        case 0x3a50dcu: goto label_3a50dc;
        case 0x3a50e0u: goto label_3a50e0;
        case 0x3a50e4u: goto label_3a50e4;
        case 0x3a50e8u: goto label_3a50e8;
        case 0x3a50ecu: goto label_3a50ec;
        case 0x3a50f0u: goto label_3a50f0;
        case 0x3a50f4u: goto label_3a50f4;
        case 0x3a50f8u: goto label_3a50f8;
        case 0x3a50fcu: goto label_3a50fc;
        case 0x3a5100u: goto label_3a5100;
        case 0x3a5104u: goto label_3a5104;
        case 0x3a5108u: goto label_3a5108;
        case 0x3a510cu: goto label_3a510c;
        case 0x3a5110u: goto label_3a5110;
        case 0x3a5114u: goto label_3a5114;
        case 0x3a5118u: goto label_3a5118;
        case 0x3a511cu: goto label_3a511c;
        case 0x3a5120u: goto label_3a5120;
        case 0x3a5124u: goto label_3a5124;
        case 0x3a5128u: goto label_3a5128;
        case 0x3a512cu: goto label_3a512c;
        case 0x3a5130u: goto label_3a5130;
        case 0x3a5134u: goto label_3a5134;
        case 0x3a5138u: goto label_3a5138;
        case 0x3a513cu: goto label_3a513c;
        default: break;
    }

    ctx->pc = 0x3a4cd8u;

label_3a4cd8:
    // 0x3a4cd8: 0x27bdfab0  addiu       $sp, $sp, -0x550
    ctx->pc = 0x3a4cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965936));
label_3a4cdc:
    // 0x3a4cdc: 0x7fb10530  sq          $s1, 0x530($sp)
    ctx->pc = 0x3a4cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 17));
label_3a4ce0:
    // 0x3a4ce0: 0xffbf0520  sd          $ra, 0x520($sp)
    ctx->pc = 0x3a4ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1312), GPR_U64(ctx, 31));
label_3a4ce4:
    // 0x3a4ce4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a4ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4ce8:
    // 0x3a4ce8: 0x7fb00540  sq          $s0, 0x540($sp)
    ctx->pc = 0x3a4ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 16));
label_3a4cec:
    // 0x3a4cec: 0xc112582  jal         func_449608
label_3a4cf0:
    if (ctx->pc == 0x3A4CF0u) {
        ctx->pc = 0x3A4CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4CECu;
        // 0x3a4cf0: 0x8c900014  lw          $s0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4CF4u;
        goto label_3a4cf4;
    }
    ctx->pc = 0x3A4CECu;
    SET_GPR_U32(ctx, 31, 0x3A4CF4u);
    ctx->pc = 0x3A4CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4CECu;
    // 0x3a4cf0: 0x8c900014  lw          $s0, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449608u, 0x3A4CECu, 0x3A4CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4CF4u;
label_3a4cf4:
    // 0x3a4cf4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3a4cf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a4cf8:
    // 0x3a4cf8: 0x512000e7  beql        $t1, $zero, . + 4 + (0xE7 << 2)
label_3a4cfc:
    if (ctx->pc == 0x3A4CFCu) {
        ctx->pc = 0x3A4CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4CF8u;
        // 0x3a4cfc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4D00u;
        goto label_3a4d00;
    }
    ctx->pc = 0x3A4CF8u;
    {
        const bool branch_taken_0x3a4cf8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4cf8) {
            ctx->pc = 0x3A4CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4CF8u;
            // 0x3a4cfc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5098u;
            goto label_3a5098;
        }
    }
    ctx->pc = 0x3A4D00u;
label_3a4d00:
    // 0x3a4d00: 0x91220038  lbu         $v0, 0x38($t1)
    ctx->pc = 0x3a4d00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 56)));
label_3a4d04:
    // 0x3a4d04: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a4d04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a4d08:
    // 0x3a4d08: 0xa20200b6  sb          $v0, 0xB6($s0)
    ctx->pc = 0x3a4d08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 182), (uint8_t)GPR_U32(ctx, 2));
label_3a4d0c:
    // 0x3a4d0c: 0x10600107  beqz        $v1, . + 4 + (0x107 << 2)
label_3a4d10:
    if (ctx->pc == 0x3A4D10u) {
        ctx->pc = 0x3A4D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D0Cu;
        // 0x3a4d10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4D14u;
        goto label_3a4d14;
    }
    ctx->pc = 0x3A4D0Cu;
    {
        const bool branch_taken_0x3a4d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D0Cu;
        // 0x3a4d10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4d0c) {
            ctx->pc = 0x3A512Cu;
            goto label_3a512c;
        }
    }
    ctx->pc = 0x3A4D14u;
label_3a4d14:
    // 0x3a4d14: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x3a4d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_3a4d18:
    // 0x3a4d18: 0x8d23003c  lw          $v1, 0x3C($t1)
    ctx->pc = 0x3a4d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
label_3a4d1c:
    // 0x3a4d1c: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x3a4d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
label_3a4d20:
    // 0x3a4d20: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x3a4d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_3a4d24:
    // 0x3a4d24: 0x8d220034  lw          $v0, 0x34($t1)
    ctx->pc = 0x3a4d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_3a4d28:
    // 0x3a4d28: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_3a4d2c:
    if (ctx->pc == 0x3A4D2Cu) {
        ctx->pc = 0x3A4D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D28u;
        // 0x3a4d2c: 0xae0201f4  sw          $v0, 0x1F4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4D30u;
        goto label_3a4d30;
    }
    ctx->pc = 0x3A4D28u;
    {
        const bool branch_taken_0x3a4d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D28u;
        // 0x3a4d2c: 0xae0201f4  sw          $v0, 0x1F4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4d28) {
            ctx->pc = 0x3A4D38u;
            goto label_3a4d38;
        }
    }
    ctx->pc = 0x3A4D30u;
label_3a4d30:
    // 0x3a4d30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a4d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a4d34:
    // 0x3a4d34: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x3a4d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
label_3a4d38:
    // 0x3a4d38: 0xa20000b5  sb          $zero, 0xB5($s0)
    ctx->pc = 0x3a4d38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 181), (uint8_t)GPR_U32(ctx, 0));
label_3a4d3c:
    // 0x3a4d3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a4d3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4d40:
    // 0x3a4d40: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x3a4d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_3a4d44:
    // 0x3a4d44: 0x0  nop
    ctx->pc = 0x3a4d44u;
    // NOP
label_3a4d48:
    // 0x3a4d48: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x3a4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_3a4d4c:
    // 0x3a4d4c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3a4d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a4d50:
    // 0x3a4d50: 0x10c000c9  beqz        $a2, . + 4 + (0xC9 << 2)
label_3a4d54:
    if (ctx->pc == 0x3A4D54u) {
        ctx->pc = 0x3A4D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D50u;
        // 0x3a4d54: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4D58u;
        goto label_3a4d58;
    }
    ctx->pc = 0x3A4D50u;
    {
        const bool branch_taken_0x3a4d50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D50u;
        // 0x3a4d54: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4d50) {
            ctx->pc = 0x3A5078u;
            goto label_3a5078;
        }
    }
    ctx->pc = 0x3A4D58u;
label_3a4d58:
    // 0x3a4d58: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x3a4d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3a4d5c:
    // 0x3a4d5c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3a4d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_3a4d60:
    // 0x3a4d60: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_3a4d64:
    if (ctx->pc == 0x3A4D64u) {
        ctx->pc = 0x3A4D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D60u;
        // 0x3a4d64: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4D68u;
        goto label_3a4d68;
    }
    ctx->pc = 0x3A4D60u;
    {
        const bool branch_taken_0x3a4d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D60u;
        // 0x3a4d64: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4d60) {
            ctx->pc = 0x3A4E88u;
            goto label_3a4e88;
        }
    }
    ctx->pc = 0x3A4D68u;
label_3a4d68:
    // 0x3a4d68: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x3a4d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_3a4d6c:
    // 0x3a4d6c: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x3a4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3a4d70:
    // 0x3a4d70: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3a4d70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a4d74:
    // 0x3a4d74: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x3a4d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
label_3a4d78:
    // 0x3a4d78: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3a4d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3a4d7c:
    // 0x3a4d7c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3a4d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3a4d80:
    // 0x3a4d80: 0x144000d2  bnez        $v0, . + 4 + (0xD2 << 2)
label_3a4d84:
    if (ctx->pc == 0x3A4D84u) {
        ctx->pc = 0x3A4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D80u;
        // 0x3a4d84: 0x3c046800  lui         $a0, 0x6800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26624 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4D88u;
        goto label_3a4d88;
    }
    ctx->pc = 0x3A4D80u;
    {
        const bool branch_taken_0x3a4d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D80u;
        // 0x3a4d84: 0x3c046800  lui         $a0, 0x6800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26624 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4d80) {
            ctx->pc = 0x3A50CCu;
            goto label_3a50cc;
        }
    }
    ctx->pc = 0x3A4D88u;
label_3a4d88:
    // 0x3a4d88: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x3a4d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_3a4d8c:
    // 0x3a4d8c: 0xa21824  and         $v1, $a1, $v0
    ctx->pc = 0x3a4d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_3a4d90:
    // 0x3a4d90: 0x1064001d  beq         $v1, $a0, . + 4 + (0x1D << 2)
label_3a4d94:
    if (ctx->pc == 0x3A4D94u) {
        ctx->pc = 0x3A4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D90u;
        // 0x3a4d94: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4D98u;
        goto label_3a4d98;
    }
    ctx->pc = 0x3A4D90u;
    {
        const bool branch_taken_0x3a4d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3A4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D90u;
        // 0x3a4d94: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4d90) {
            ctx->pc = 0x3A4E08u;
            goto label_3a4e08;
        }
    }
    ctx->pc = 0x3A4D98u;
label_3a4d98:
    // 0x3a4d98: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_3a4d9c:
    if (ctx->pc == 0x3A4D9Cu) {
        ctx->pc = 0x3A4D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D98u;
        // 0x3a4d9c: 0x3c026d00  lui         $v0, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27904 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4DA0u;
        goto label_3a4da0;
    }
    ctx->pc = 0x3A4D98u;
    {
        const bool branch_taken_0x3a4d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4D98u;
        // 0x3a4d9c: 0x3c026d00  lui         $v0, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27904 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4d98) {
            ctx->pc = 0x3A4DD8u;
            goto label_3a4dd8;
        }
    }
    ctx->pc = 0x3A4DA0u;
label_3a4da0:
    // 0x3a4da0: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x3a4da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
label_3a4da4:
    // 0x3a4da4: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_3a4da8:
    if (ctx->pc == 0x3A4DA8u) {
        ctx->pc = 0x3A4DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DA4u;
        // 0x3a4da8: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4DACu;
        goto label_3a4dac;
    }
    ctx->pc = 0x3A4DA4u;
    {
        const bool branch_taken_0x3a4da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DA4u;
        // 0x3a4da8: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4da4) {
            ctx->pc = 0x3A4DFCu;
            goto label_3a4dfc;
        }
    }
    ctx->pc = 0x3A4DACu;
label_3a4dac:
    // 0x3a4dac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3a4db0:
    if (ctx->pc == 0x3A4DB0u) {
        ctx->pc = 0x3A4DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DACu;
        // 0x3a4db0: 0x3c026500  lui         $v0, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25856 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4DB4u;
        goto label_3a4db4;
    }
    ctx->pc = 0x3A4DACu;
    {
        const bool branch_taken_0x3a4dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DACu;
        // 0x3a4db0: 0x3c026500  lui         $v0, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25856 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4dac) {
            ctx->pc = 0x3A4DC8u;
            goto label_3a4dc8;
        }
    }
    ctx->pc = 0x3A4DB4u;
label_3a4db4:
    // 0x3a4db4: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x3a4db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
label_3a4db8:
    // 0x3a4db8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_3a4dbc:
    if (ctx->pc == 0x3A4DBCu) {
        ctx->pc = 0x3A4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DB8u;
        // 0x3a4dbc: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4DC0u;
        goto label_3a4dc0;
    }
    ctx->pc = 0x3A4DB8u;
    {
        const bool branch_taken_0x3a4db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DB8u;
        // 0x3a4dbc: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4db8) {
            ctx->pc = 0x3A4DF0u;
            goto label_3a4df0;
        }
    }
    ctx->pc = 0x3A4DC0u;
label_3a4dc0:
    // 0x3a4dc0: 0x10000016  b           . + 4 + (0x16 << 2)
label_3a4dc4:
    if (ctx->pc == 0x3A4DC4u) {
        ctx->pc = 0x3A4DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DC0u;
        // 0x3a4dc4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4DC8u;
        goto label_3a4dc8;
    }
    ctx->pc = 0x3A4DC0u;
    {
        const bool branch_taken_0x3a4dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DC0u;
        // 0x3a4dc4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4dc0) {
            ctx->pc = 0x3A4E1Cu;
            goto label_3a4e1c;
        }
    }
    ctx->pc = 0x3A4DC8u;
label_3a4dc8:
    // 0x3a4dc8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_3a4dcc:
    if (ctx->pc == 0x3A4DCCu) {
        ctx->pc = 0x3A4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DC8u;
        // 0x3a4dcc: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4DD0u;
        goto label_3a4dd0;
    }
    ctx->pc = 0x3A4DC8u;
    {
        const bool branch_taken_0x3a4dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DC8u;
        // 0x3a4dcc: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4dc8) {
            ctx->pc = 0x3A4DF0u;
            goto label_3a4df0;
        }
    }
    ctx->pc = 0x3A4DD0u;
label_3a4dd0:
    // 0x3a4dd0: 0x10000012  b           . + 4 + (0x12 << 2)
label_3a4dd4:
    if (ctx->pc == 0x3A4DD4u) {
        ctx->pc = 0x3A4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DD0u;
        // 0x3a4dd4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4DD8u;
        goto label_3a4dd8;
    }
    ctx->pc = 0x3A4DD0u;
    {
        const bool branch_taken_0x3a4dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DD0u;
        // 0x3a4dd4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4dd0) {
            ctx->pc = 0x3A4E1Cu;
            goto label_3a4e1c;
        }
    }
    ctx->pc = 0x3A4DD8u;
label_3a4dd8:
    // 0x3a4dd8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_3a4ddc:
    if (ctx->pc == 0x3A4DDCu) {
        ctx->pc = 0x3A4DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DD8u;
        // 0x3a4ddc: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4DE0u;
        goto label_3a4de0;
    }
    ctx->pc = 0x3A4DD8u;
    {
        const bool branch_taken_0x3a4dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DD8u;
        // 0x3a4ddc: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4dd8) {
            ctx->pc = 0x3A4DFCu;
            goto label_3a4dfc;
        }
    }
    ctx->pc = 0x3A4DE0u;
label_3a4de0:
    // 0x3a4de0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3a4de4:
    if (ctx->pc == 0x3A4DE4u) {
        ctx->pc = 0x3A4DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DE0u;
        // 0x3a4de4: 0x3c026e00  lui         $v0, 0x6E00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4DE8u;
        goto label_3a4de8;
    }
    ctx->pc = 0x3A4DE0u;
    {
        const bool branch_taken_0x3a4de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DE0u;
        // 0x3a4de4: 0x3c026e00  lui         $v0, 0x6E00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4de0) {
            ctx->pc = 0x3A4E14u;
            goto label_3a4e14;
        }
    }
    ctx->pc = 0x3A4DE8u;
label_3a4de8:
    // 0x3a4de8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_3a4dec:
    if (ctx->pc == 0x3A4DECu) {
        ctx->pc = 0x3A4DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DE8u;
        // 0x3a4dec: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4DF0u;
        goto label_3a4df0;
    }
    ctx->pc = 0x3A4DE8u;
    {
        const bool branch_taken_0x3a4de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A4DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DE8u;
        // 0x3a4dec: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4de8) {
            ctx->pc = 0x3A4E18u;
            goto label_3a4e18;
        }
    }
    ctx->pc = 0x3A4DF0u;
label_3a4df0:
    // 0x3a4df0: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x3a4df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_3a4df4:
    // 0x3a4df4: 0x10000009  b           . + 4 + (0x9 << 2)
label_3a4df8:
    if (ctx->pc == 0x3A4DF8u) {
        ctx->pc = 0x3A4DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DF4u;
        // 0x3a4df8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4DFCu;
        goto label_3a4dfc;
    }
    ctx->pc = 0x3A4DF4u;
    {
        const bool branch_taken_0x3a4df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4DF4u;
        // 0x3a4df8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4df4) {
            ctx->pc = 0x3A4E1Cu;
            goto label_3a4e1c;
        }
    }
    ctx->pc = 0x3A4DFCu;
label_3a4dfc:
    // 0x3a4dfc: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x3a4dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_3a4e00:
    // 0x3a4e00: 0x10000006  b           . + 4 + (0x6 << 2)
label_3a4e04:
    if (ctx->pc == 0x3A4E04u) {
        ctx->pc = 0x3A4E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E00u;
        // 0x3a4e04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4E08u;
        goto label_3a4e08;
    }
    ctx->pc = 0x3A4E00u;
    {
        const bool branch_taken_0x3a4e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E00u;
        // 0x3a4e04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e00) {
            ctx->pc = 0x3A4E1Cu;
            goto label_3a4e1c;
        }
    }
    ctx->pc = 0x3A4E08u;
label_3a4e08:
    // 0x3a4e08: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x3a4e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_3a4e0c:
    // 0x3a4e0c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3a4e10:
    if (ctx->pc == 0x3A4E10u) {
        ctx->pc = 0x3A4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E0Cu;
        // 0x3a4e10: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4E14u;
        goto label_3a4e14;
    }
    ctx->pc = 0x3A4E0Cu;
    {
        const bool branch_taken_0x3a4e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E0Cu;
        // 0x3a4e10: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e0c) {
            ctx->pc = 0x3A4E1Cu;
            goto label_3a4e1c;
        }
    }
    ctx->pc = 0x3A4E14u;
label_3a4e14:
    // 0x3a4e14: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x3a4e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_3a4e18:
    // 0x3a4e18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a4e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a4e1c:
    // 0x3a4e1c: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x3a4e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_3a4e20:
    // 0x3a4e20: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x3a4e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3a4e24:
    // 0x3a4e24: 0x30620006  andi        $v0, $v1, 0x6
    ctx->pc = 0x3a4e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
label_3a4e28:
    // 0x3a4e28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3a4e2c:
    if (ctx->pc == 0x3A4E2Cu) {
        ctx->pc = 0x3A4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E28u;
        // 0x3a4e2c: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4E30u;
        goto label_3a4e30;
    }
    ctx->pc = 0x3A4E28u;
    {
        const bool branch_taken_0x3a4e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E28u;
        // 0x3a4e2c: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e28) {
            ctx->pc = 0x3A4E58u;
            goto label_3a4e58;
        }
    }
    ctx->pc = 0x3A4E30u;
label_3a4e30:
    // 0x3a4e30: 0x144000ad  bnez        $v0, . + 4 + (0xAD << 2)
label_3a4e34:
    if (ctx->pc == 0x3A4E34u) {
        ctx->pc = 0x3A4E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E30u;
        // 0x3a4e34: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4E38u;
        goto label_3a4e38;
    }
    ctx->pc = 0x3A4E30u;
    {
        const bool branch_taken_0x3a4e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E30u;
        // 0x3a4e34: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e30) {
            ctx->pc = 0x3A50E8u;
            goto label_3a50e8;
        }
    }
    ctx->pc = 0x3A4E38u;
label_3a4e38:
    // 0x3a4e38: 0x920200b5  lbu         $v0, 0xB5($s0)
    ctx->pc = 0x3a4e38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 181)));
label_3a4e3c:
    // 0x3a4e3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a4e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a4e40:
    // 0x3a4e40: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3a4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3a4e44:
    // 0x3a4e44: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x3a4e44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
label_3a4e48:
    // 0x3a4e48: 0x920300b5  lbu         $v1, 0xB5($s0)
    ctx->pc = 0x3a4e48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 181)));
label_3a4e4c:
    // 0x3a4e4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a4e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3a4e50:
    // 0x3a4e50: 0x1000008b  b           . + 4 + (0x8B << 2)
label_3a4e54:
    if (ctx->pc == 0x3A4E54u) {
        ctx->pc = 0x3A4E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E50u;
        // 0x3a4e54: 0xa20300b5  sb          $v1, 0xB5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 181), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4E58u;
        goto label_3a4e58;
    }
    ctx->pc = 0x3A4E50u;
    {
        const bool branch_taken_0x3a4e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E50u;
        // 0x3a4e54: 0xa20300b5  sb          $v1, 0xB5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 181), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e50) {
            ctx->pc = 0x3A5080u;
            goto label_3a5080;
        }
    }
    ctx->pc = 0x3A4E58u;
label_3a4e58:
    // 0x3a4e58: 0x2d020006  sltiu       $v0, $t0, 0x6
    ctx->pc = 0x3a4e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3a4e5c:
    // 0x3a4e5c: 0x504000a8  beql        $v0, $zero, . + 4 + (0xA8 << 2)
label_3a4e60:
    if (ctx->pc == 0x3A4E60u) {
        ctx->pc = 0x3A4E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E5Cu;
        // 0x3a4e60: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4E64u;
        goto label_3a4e64;
    }
    ctx->pc = 0x3A4E5Cu;
    {
        const bool branch_taken_0x3a4e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4e5c) {
            ctx->pc = 0x3A4E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4E5Cu;
            // 0x3a4e60: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5100u;
            goto label_3a5100;
        }
    }
    ctx->pc = 0x3A4E64u;
label_3a4e64:
    // 0x3a4e64: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x3a4e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_3a4e68:
    // 0x3a4e68: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
label_3a4e6c:
    if (ctx->pc == 0x3A4E6Cu) {
        ctx->pc = 0x3A4E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E68u;
        // 0x3a4e6c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4E70u;
        goto label_3a4e70;
    }
    ctx->pc = 0x3A4E68u;
    {
        const bool branch_taken_0x3a4e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E68u;
        // 0x3a4e6c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e68) {
            ctx->pc = 0x3A5080u;
            goto label_3a5080;
        }
    }
    ctx->pc = 0x3A4E70u;
label_3a4e70:
    // 0x3a4e70: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3a4e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a4e74:
    // 0x3a4e74: 0x8c62e944  lw          $v0, -0x16BC($v1)
    ctx->pc = 0x3a4e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961476)));
label_3a4e78:
    // 0x3a4e78: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3a4e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3a4e7c:
    // 0x3a4e7c: 0x24a5bdf0  addiu       $a1, $a1, -0x4210
    ctx->pc = 0x3a4e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950384));
label_3a4e80:
    // 0x3a4e80: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_3a4e84:
    if (ctx->pc == 0x3A4E84u) {
        ctx->pc = 0x3A4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E80u;
        // 0x3a4e84: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4E88u;
        goto label_3a4e88;
    }
    ctx->pc = 0x3A4E80u;
    {
        const bool branch_taken_0x3a4e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E80u;
        // 0x3a4e84: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e80) {
            ctx->pc = 0x3A5114u;
            goto label_3a5114;
        }
    }
    ctx->pc = 0x3A4E88u;
label_3a4e88:
    // 0x3a4e88: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x3a4e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_3a4e8c:
    // 0x3a4e8c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_3a4e90:
    if (ctx->pc == 0x3A4E90u) {
        ctx->pc = 0x3A4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E8Cu;
        // 0x3a4e90: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4E94u;
        goto label_3a4e94;
    }
    ctx->pc = 0x3A4E8Cu;
    {
        const bool branch_taken_0x3a4e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E8Cu;
        // 0x3a4e90: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e8c) {
            ctx->pc = 0x3A4F4Cu;
            goto label_3a4f4c;
        }
    }
    ctx->pc = 0x3A4E94u;
label_3a4e94:
    // 0x3a4e94: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x3a4e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
label_3a4e98:
    // 0x3a4e98: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x3a4e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3a4e9c:
    // 0x3a4e9c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3a4e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a4ea0:
    // 0x3a4ea0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3a4ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_3a4ea4:
    // 0x3a4ea4: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x3a4ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
label_3a4ea8:
    // 0x3a4ea8: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_3a4eac:
    if (ctx->pc == 0x3A4EACu) {
        ctx->pc = 0x3A4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EA8u;
        // 0x3a4eac: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4EB0u;
        goto label_3a4eb0;
    }
    ctx->pc = 0x3A4EA8u;
    {
        const bool branch_taken_0x3a4ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EA8u;
        // 0x3a4eac: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ea8) {
            ctx->pc = 0x3A4F2Cu;
            goto label_3a4f2c;
        }
    }
    ctx->pc = 0x3A4EB0u;
label_3a4eb0:
    // 0x3a4eb0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3a4eb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3a4eb4:
    // 0x3a4eb4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_3a4eb8:
    if (ctx->pc == 0x3A4EB8u) {
        ctx->pc = 0x3A4EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EB4u;
        // 0x3a4eb8: 0x3c026d00  lui         $v0, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27904 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4EBCu;
        goto label_3a4ebc;
    }
    ctx->pc = 0x3A4EB4u;
    {
        const bool branch_taken_0x3a4eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EB4u;
        // 0x3a4eb8: 0x3c026d00  lui         $v0, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27904 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4eb4) {
            ctx->pc = 0x3A4EF4u;
            goto label_3a4ef4;
        }
    }
    ctx->pc = 0x3A4EBCu;
label_3a4ebc:
    // 0x3a4ebc: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x3a4ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
label_3a4ec0:
    // 0x3a4ec0: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_3a4ec4:
    if (ctx->pc == 0x3A4EC4u) {
        ctx->pc = 0x3A4EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EC0u;
        // 0x3a4ec4: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4EC8u;
        goto label_3a4ec8;
    }
    ctx->pc = 0x3A4EC0u;
    {
        const bool branch_taken_0x3a4ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EC0u;
        // 0x3a4ec4: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ec0) {
            ctx->pc = 0x3A4F1Cu;
            goto label_3a4f1c;
        }
    }
    ctx->pc = 0x3A4EC8u;
label_3a4ec8:
    // 0x3a4ec8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3a4ecc:
    if (ctx->pc == 0x3A4ECCu) {
        ctx->pc = 0x3A4ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EC8u;
        // 0x3a4ecc: 0x3c026500  lui         $v0, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25856 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4ED0u;
        goto label_3a4ed0;
    }
    ctx->pc = 0x3A4EC8u;
    {
        const bool branch_taken_0x3a4ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EC8u;
        // 0x3a4ecc: 0x3c026500  lui         $v0, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25856 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ec8) {
            ctx->pc = 0x3A4EE4u;
            goto label_3a4ee4;
        }
    }
    ctx->pc = 0x3A4ED0u;
label_3a4ed0:
    // 0x3a4ed0: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x3a4ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
label_3a4ed4:
    // 0x3a4ed4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_3a4ed8:
    if (ctx->pc == 0x3A4ED8u) {
        ctx->pc = 0x3A4ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4ED4u;
        // 0x3a4ed8: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4EDCu;
        goto label_3a4edc;
    }
    ctx->pc = 0x3A4ED4u;
    {
        const bool branch_taken_0x3a4ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4ED4u;
        // 0x3a4ed8: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ed4) {
            ctx->pc = 0x3A4F0Cu;
            goto label_3a4f0c;
        }
    }
    ctx->pc = 0x3A4EDCu;
label_3a4edc:
    // 0x3a4edc: 0x10000019  b           . + 4 + (0x19 << 2)
label_3a4ee0:
    if (ctx->pc == 0x3A4EE0u) {
        ctx->pc = 0x3A4EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EDCu;
        // 0x3a4ee0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4EE4u;
        goto label_3a4ee4;
    }
    ctx->pc = 0x3A4EDCu;
    {
        const bool branch_taken_0x3a4edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EDCu;
        // 0x3a4ee0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4edc) {
            ctx->pc = 0x3A4F44u;
            goto label_3a4f44;
        }
    }
    ctx->pc = 0x3A4EE4u;
label_3a4ee4:
    // 0x3a4ee4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_3a4ee8:
    if (ctx->pc == 0x3A4EE8u) {
        ctx->pc = 0x3A4EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EE4u;
        // 0x3a4ee8: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4EECu;
        goto label_3a4eec;
    }
    ctx->pc = 0x3A4EE4u;
    {
        const bool branch_taken_0x3a4ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EE4u;
        // 0x3a4ee8: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ee4) {
            ctx->pc = 0x3A4F0Cu;
            goto label_3a4f0c;
        }
    }
    ctx->pc = 0x3A4EECu;
label_3a4eec:
    // 0x3a4eec: 0x10000015  b           . + 4 + (0x15 << 2)
label_3a4ef0:
    if (ctx->pc == 0x3A4EF0u) {
        ctx->pc = 0x3A4EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EECu;
        // 0x3a4ef0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4EF4u;
        goto label_3a4ef4;
    }
    ctx->pc = 0x3A4EECu;
    {
        const bool branch_taken_0x3a4eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EECu;
        // 0x3a4ef0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4eec) {
            ctx->pc = 0x3A4F44u;
            goto label_3a4f44;
        }
    }
    ctx->pc = 0x3A4EF4u;
label_3a4ef4:
    // 0x3a4ef4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_3a4ef8:
    if (ctx->pc == 0x3A4EF8u) {
        ctx->pc = 0x3A4EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EF4u;
        // 0x3a4ef8: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4EFCu;
        goto label_3a4efc;
    }
    ctx->pc = 0x3A4EF4u;
    {
        const bool branch_taken_0x3a4ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A4EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EF4u;
        // 0x3a4ef8: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ef4) {
            ctx->pc = 0x3A4F1Cu;
            goto label_3a4f1c;
        }
    }
    ctx->pc = 0x3A4EFCu;
label_3a4efc:
    // 0x3a4efc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3a4f00:
    if (ctx->pc == 0x3A4F00u) {
        ctx->pc = 0x3A4F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EFCu;
        // 0x3a4f00: 0x3c026e00  lui         $v0, 0x6E00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4F04u;
        goto label_3a4f04;
    }
    ctx->pc = 0x3A4EFCu;
    {
        const bool branch_taken_0x3a4efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EFCu;
        // 0x3a4f00: 0x3c026e00  lui         $v0, 0x6E00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4efc) {
            ctx->pc = 0x3A4F3Cu;
            goto label_3a4f3c;
        }
    }
    ctx->pc = 0x3A4F04u;
label_3a4f04:
    // 0x3a4f04: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_3a4f08:
    if (ctx->pc == 0x3A4F08u) {
        ctx->pc = 0x3A4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F04u;
        // 0x3a4f08: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4F0Cu;
        goto label_3a4f0c;
    }
    ctx->pc = 0x3A4F04u;
    {
        const bool branch_taken_0x3a4f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F04u;
        // 0x3a4f08: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4f04) {
            ctx->pc = 0x3A4F40u;
            goto label_3a4f40;
        }
    }
    ctx->pc = 0x3A4F0Cu;
label_3a4f0c:
    // 0x3a4f0c: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x3a4f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_3a4f10:
    // 0x3a4f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a4f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a4f14:
    // 0x3a4f14: 0x1000005a  b           . + 4 + (0x5A << 2)
label_3a4f18:
    if (ctx->pc == 0x3A4F18u) {
        ctx->pc = 0x3A4F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F14u;
        // 0x3a4f18: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4F1Cu;
        goto label_3a4f1c;
    }
    ctx->pc = 0x3A4F14u;
    {
        const bool branch_taken_0x3a4f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F14u;
        // 0x3a4f18: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4f14) {
            ctx->pc = 0x3A5080u;
            goto label_3a5080;
        }
    }
    ctx->pc = 0x3A4F1Cu;
label_3a4f1c:
    // 0x3a4f1c: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x3a4f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_3a4f20:
    // 0x3a4f20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a4f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a4f24:
    // 0x3a4f24: 0x10000056  b           . + 4 + (0x56 << 2)
label_3a4f28:
    if (ctx->pc == 0x3A4F28u) {
        ctx->pc = 0x3A4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F24u;
        // 0x3a4f28: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4F2Cu;
        goto label_3a4f2c;
    }
    ctx->pc = 0x3A4F24u;
    {
        const bool branch_taken_0x3a4f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F24u;
        // 0x3a4f28: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4f24) {
            ctx->pc = 0x3A5080u;
            goto label_3a5080;
        }
    }
    ctx->pc = 0x3A4F2Cu;
label_3a4f2c:
    // 0x3a4f2c: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x3a4f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_3a4f30:
    // 0x3a4f30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a4f34:
    // 0x3a4f34: 0x10000052  b           . + 4 + (0x52 << 2)
label_3a4f38:
    if (ctx->pc == 0x3A4F38u) {
        ctx->pc = 0x3A4F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F34u;
        // 0x3a4f38: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4F3Cu;
        goto label_3a4f3c;
    }
    ctx->pc = 0x3A4F34u;
    {
        const bool branch_taken_0x3a4f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F34u;
        // 0x3a4f38: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4f34) {
            ctx->pc = 0x3A5080u;
            goto label_3a5080;
        }
    }
    ctx->pc = 0x3A4F3Cu;
label_3a4f3c:
    // 0x3a4f3c: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x3a4f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_3a4f40:
    // 0x3a4f40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a4f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a4f44:
    // 0x3a4f44: 0x1000004e  b           . + 4 + (0x4E << 2)
label_3a4f48:
    if (ctx->pc == 0x3A4F48u) {
        ctx->pc = 0x3A4F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F44u;
        // 0x3a4f48: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4F4Cu;
        goto label_3a4f4c;
    }
    ctx->pc = 0x3A4F44u;
    {
        const bool branch_taken_0x3a4f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F44u;
        // 0x3a4f48: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4f44) {
            ctx->pc = 0x3A5080u;
            goto label_3a5080;
        }
    }
    ctx->pc = 0x3A4F4Cu;
label_3a4f4c:
    // 0x3a4f4c: 0x2d02000a  sltiu       $v0, $t0, 0xA
    ctx->pc = 0x3a4f4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3a4f50:
    // 0x3a4f50: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_3a4f54:
    if (ctx->pc == 0x3A4F54u) {
        ctx->pc = 0x3A4F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F50u;
        // 0x3a4f54: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4F58u;
        goto label_3a4f58;
    }
    ctx->pc = 0x3A4F50u;
    {
        const bool branch_taken_0x3a4f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F50u;
        // 0x3a4f54: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4f50) {
            ctx->pc = 0x3A5048u;
            goto label_3a5048;
        }
    }
    ctx->pc = 0x3A4F58u;
label_3a4f58:
    // 0x3a4f58: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3a4f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3a4f5c:
    // 0x3a4f5c: 0x2442bf10  addiu       $v0, $v0, -0x40F0
    ctx->pc = 0x3a4f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950672));
label_3a4f60:
    // 0x3a4f60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3a4f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a4f64:
    // 0x3a4f64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a4f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a4f68:
    // 0x3a4f68: 0x600008  jr          $v1
label_3a4f6c:
    if (ctx->pc == 0x3A4F6Cu) {
        ctx->pc = 0x3A4F70u;
        goto label_3a4f70;
    }
    ctx->pc = 0x3A4F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A4F70u: goto label_3a4f70;
            case 0x3A4F80u: goto label_3a4f80;
            case 0x3A4F90u: goto label_3a4f90;
            case 0x3A4FACu: goto label_3a4fac;
            case 0x3A4FBCu: goto label_3a4fbc;
            case 0x3A4FD8u: goto label_3a4fd8;
            case 0x3A4FFCu: goto label_3a4ffc;
            case 0x3A500Cu: goto label_3a500c;
            case 0x3A501Cu: goto label_3a501c;
            case 0x3A502Cu: goto label_3a502c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4F68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A4F70u;
label_3a4f70:
    // 0x3a4f70: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3a4f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3a4f74:
    // 0x3a4f74: 0x8c4399a8  lw          $v1, -0x6658($v0)
    ctx->pc = 0x3a4f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941096)));
label_3a4f78:
    // 0x3a4f78: 0x10000038  b           . + 4 + (0x38 << 2)
label_3a4f7c:
    if (ctx->pc == 0x3A4F7Cu) {
        ctx->pc = 0x3A4F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F78u;
        // 0x3a4f7c: 0xafa30500  sw          $v1, 0x500($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4F80u;
        goto label_3a4f80;
    }
    ctx->pc = 0x3A4F78u;
    {
        const bool branch_taken_0x3a4f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F78u;
        // 0x3a4f7c: 0xafa30500  sw          $v1, 0x500($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4f78) {
            ctx->pc = 0x3A505Cu;
            goto label_3a505c;
        }
    }
    ctx->pc = 0x3A4F80u;
label_3a4f80:
    // 0x3a4f80: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3a4f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3a4f84:
    // 0x3a4f84: 0x244399b0  addiu       $v1, $v0, -0x6650
    ctx->pc = 0x3a4f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941104));
label_3a4f88:
    // 0x3a4f88: 0x1000000f  b           . + 4 + (0xF << 2)
label_3a4f8c:
    if (ctx->pc == 0x3A4F8Cu) {
        ctx->pc = 0x3A4F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F88u;
        // 0x3a4f8c: 0x8c4499b0  lw          $a0, -0x6650($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4F90u;
        goto label_3a4f90;
    }
    ctx->pc = 0x3A4F88u;
    {
        const bool branch_taken_0x3a4f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F88u;
        // 0x3a4f8c: 0x8c4499b0  lw          $a0, -0x6650($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4f88) {
            ctx->pc = 0x3A4FC8u;
            goto label_3a4fc8;
        }
    }
    ctx->pc = 0x3A4F90u;
label_3a4f90:
    // 0x3a4f90: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3a4f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3a4f94:
    // 0x3a4f94: 0x244399b8  addiu       $v1, $v0, -0x6648
    ctx->pc = 0x3a4f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941112));
label_3a4f98:
    // 0x3a4f98: 0x944499b8  lhu         $a0, -0x6648($v0)
    ctx->pc = 0x3a4f98u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294941112)));
label_3a4f9c:
    // 0x3a4f9c: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x3a4f9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_3a4fa0:
    // 0x3a4fa0: 0xa7a40500  sh          $a0, 0x500($sp)
    ctx->pc = 0x3a4fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 1280), (uint16_t)GPR_U32(ctx, 4));
label_3a4fa4:
    // 0x3a4fa4: 0x1000002d  b           . + 4 + (0x2D << 2)
label_3a4fa8:
    if (ctx->pc == 0x3A4FA8u) {
        ctx->pc = 0x3A4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4FA4u;
        // 0x3a4fa8: 0xa3a50502  sb          $a1, 0x502($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1282), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4FACu;
        goto label_3a4fac;
    }
    ctx->pc = 0x3A4FA4u;
    {
        const bool branch_taken_0x3a4fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4FA4u;
        // 0x3a4fa8: 0xa3a50502  sb          $a1, 0x502($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1282), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4fa4) {
            ctx->pc = 0x3A505Cu;
            goto label_3a505c;
        }
    }
    ctx->pc = 0x3A4FACu;
label_3a4fac:
    // 0x3a4fac: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3a4facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3a4fb0:
    // 0x3a4fb0: 0x8c4399c0  lw          $v1, -0x6640($v0)
    ctx->pc = 0x3a4fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941120)));
label_3a4fb4:
    // 0x3a4fb4: 0x10000029  b           . + 4 + (0x29 << 2)
label_3a4fb8:
    if (ctx->pc == 0x3A4FB8u) {
        ctx->pc = 0x3A4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4FB4u;
        // 0x3a4fb8: 0xafa30500  sw          $v1, 0x500($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4FBCu;
        goto label_3a4fbc;
    }
    ctx->pc = 0x3A4FB4u;
    {
        const bool branch_taken_0x3a4fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4FB4u;
        // 0x3a4fb8: 0xafa30500  sw          $v1, 0x500($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4fb4) {
            ctx->pc = 0x3A505Cu;
            goto label_3a505c;
        }
    }
    ctx->pc = 0x3A4FBCu;
label_3a4fbc:
    // 0x3a4fbc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3a4fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3a4fc0:
    // 0x3a4fc0: 0x244399c8  addiu       $v1, $v0, -0x6638
    ctx->pc = 0x3a4fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941128));
label_3a4fc4:
    // 0x3a4fc4: 0x8c4499c8  lw          $a0, -0x6638($v0)
    ctx->pc = 0x3a4fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941128)));
label_3a4fc8:
    // 0x3a4fc8: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x3a4fc8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_3a4fcc:
    // 0x3a4fcc: 0xafa40500  sw          $a0, 0x500($sp)
    ctx->pc = 0x3a4fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 4));
label_3a4fd0:
    // 0x3a4fd0: 0x10000022  b           . + 4 + (0x22 << 2)
label_3a4fd4:
    if (ctx->pc == 0x3A4FD4u) {
        ctx->pc = 0x3A4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4FD0u;
        // 0x3a4fd4: 0xa3a50504  sb          $a1, 0x504($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1284), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4FD8u;
        goto label_3a4fd8;
    }
    ctx->pc = 0x3A4FD0u;
    {
        const bool branch_taken_0x3a4fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4FD0u;
        // 0x3a4fd4: 0xa3a50504  sb          $a1, 0x504($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1284), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4fd0) {
            ctx->pc = 0x3A505Cu;
            goto label_3a505c;
        }
    }
    ctx->pc = 0x3A4FD8u;
label_3a4fd8:
    // 0x3a4fd8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3a4fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3a4fdc:
    // 0x3a4fdc: 0x244399d0  addiu       $v1, $v0, -0x6630
    ctx->pc = 0x3a4fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941136));
label_3a4fe0:
    // 0x3a4fe0: 0x8c4499d0  lw          $a0, -0x6630($v0)
    ctx->pc = 0x3a4fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941136)));
label_3a4fe4:
    // 0x3a4fe4: 0x90650006  lbu         $a1, 0x6($v1)
    ctx->pc = 0x3a4fe4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
label_3a4fe8:
    // 0x3a4fe8: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x3a4fe8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_3a4fec:
    // 0x3a4fec: 0xafa40500  sw          $a0, 0x500($sp)
    ctx->pc = 0x3a4fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 4));
label_3a4ff0:
    // 0x3a4ff0: 0xa7a20504  sh          $v0, 0x504($sp)
    ctx->pc = 0x3a4ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 1284), (uint16_t)GPR_U32(ctx, 2));
label_3a4ff4:
    // 0x3a4ff4: 0x10000019  b           . + 4 + (0x19 << 2)
label_3a4ff8:
    if (ctx->pc == 0x3A4FF8u) {
        ctx->pc = 0x3A4FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4FF4u;
        // 0x3a4ff8: 0xa3a50506  sb          $a1, 0x506($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1286), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4FFCu;
        goto label_3a4ffc;
    }
    ctx->pc = 0x3A4FF4u;
    {
        const bool branch_taken_0x3a4ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4FF4u;
        // 0x3a4ff8: 0xa3a50506  sb          $a1, 0x506($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1286), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ff4) {
            ctx->pc = 0x3A505Cu;
            goto label_3a505c;
        }
    }
    ctx->pc = 0x3A4FFCu;
label_3a4ffc:
    // 0x3a4ffc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3a4ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3a5000:
    // 0x3a5000: 0x244399d8  addiu       $v1, $v0, -0x6628
    ctx->pc = 0x3a5000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941144));
label_3a5004:
    // 0x3a5004: 0x1000000c  b           . + 4 + (0xC << 2)
label_3a5008:
    if (ctx->pc == 0x3A5008u) {
        ctx->pc = 0x3A5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5004u;
        // 0x3a5008: 0x8c4499d8  lw          $a0, -0x6628($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A500Cu;
        goto label_3a500c;
    }
    ctx->pc = 0x3A5004u;
    {
        const bool branch_taken_0x3a5004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5004u;
        // 0x3a5008: 0x8c4499d8  lw          $a0, -0x6628($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5004) {
            ctx->pc = 0x3A5038u;
            goto label_3a5038;
        }
    }
    ctx->pc = 0x3A500Cu;
label_3a500c:
    // 0x3a500c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3a500cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3a5010:
    // 0x3a5010: 0x244399e0  addiu       $v1, $v0, -0x6620
    ctx->pc = 0x3a5010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941152));
label_3a5014:
    // 0x3a5014: 0x10000008  b           . + 4 + (0x8 << 2)
label_3a5018:
    if (ctx->pc == 0x3A5018u) {
        ctx->pc = 0x3A5018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5014u;
        // 0x3a5018: 0x8c4499e0  lw          $a0, -0x6620($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A501Cu;
        goto label_3a501c;
    }
    ctx->pc = 0x3A5014u;
    {
        const bool branch_taken_0x3a5014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5014u;
        // 0x3a5018: 0x8c4499e0  lw          $a0, -0x6620($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5014) {
            ctx->pc = 0x3A5038u;
            goto label_3a5038;
        }
    }
    ctx->pc = 0x3A501Cu;
label_3a501c:
    // 0x3a501c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3a501cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3a5020:
    // 0x3a5020: 0x244399e8  addiu       $v1, $v0, -0x6618
    ctx->pc = 0x3a5020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941160));
label_3a5024:
    // 0x3a5024: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a5028:
    if (ctx->pc == 0x3A5028u) {
        ctx->pc = 0x3A5028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5024u;
        // 0x3a5028: 0x8c4499e8  lw          $a0, -0x6618($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A502Cu;
        goto label_3a502c;
    }
    ctx->pc = 0x3A5024u;
    {
        const bool branch_taken_0x3a5024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5024u;
        // 0x3a5028: 0x8c4499e8  lw          $a0, -0x6618($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5024) {
            ctx->pc = 0x3A5038u;
            goto label_3a5038;
        }
    }
    ctx->pc = 0x3A502Cu;
label_3a502c:
    // 0x3a502c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3a502cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3a5030:
    // 0x3a5030: 0x244399f0  addiu       $v1, $v0, -0x6610
    ctx->pc = 0x3a5030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
label_3a5034:
    // 0x3a5034: 0x8c4499f0  lw          $a0, -0x6610($v0)
    ctx->pc = 0x3a5034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941168)));
label_3a5038:
    // 0x3a5038: 0x94650004  lhu         $a1, 0x4($v1)
    ctx->pc = 0x3a5038u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_3a503c:
    // 0x3a503c: 0xafa40500  sw          $a0, 0x500($sp)
    ctx->pc = 0x3a503cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1280), GPR_U32(ctx, 4));
label_3a5040:
    // 0x3a5040: 0x10000006  b           . + 4 + (0x6 << 2)
label_3a5044:
    if (ctx->pc == 0x3A5044u) {
        ctx->pc = 0x3A5044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5040u;
        // 0x3a5044: 0xa7a50504  sh          $a1, 0x504($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 1284), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5048u;
        goto label_3a5048;
    }
    ctx->pc = 0x3A5040u;
    {
        const bool branch_taken_0x3a5040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5040u;
        // 0x3a5044: 0xa7a50504  sh          $a1, 0x504($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 1284), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5040) {
            ctx->pc = 0x3A505Cu;
            goto label_3a505c;
        }
    }
    ctx->pc = 0x3A5048u;
label_3a5048:
    // 0x3a5048: 0x2443beb8  addiu       $v1, $v0, -0x4148
    ctx->pc = 0x3a5048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950584));
label_3a504c:
    // 0x3a504c: 0xdc44beb8  ld          $a0, -0x4148($v0)
    ctx->pc = 0x3a504cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294950584)));
label_3a5050:
    // 0x3a5050: 0x94650008  lhu         $a1, 0x8($v1)
    ctx->pc = 0x3a5050u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_3a5054:
    // 0x3a5054: 0xffa40500  sd          $a0, 0x500($sp)
    ctx->pc = 0x3a5054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1280), GPR_U64(ctx, 4));
label_3a5058:
    // 0x3a5058: 0xa7a50508  sh          $a1, 0x508($sp)
    ctx->pc = 0x3a5058u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 1288), (uint16_t)GPR_U32(ctx, 5));
label_3a505c:
    // 0x3a505c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a505cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3a5060:
    // 0x3a5060: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3a5060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3a5064:
    // 0x3a5064: 0x8c62e944  lw          $v0, -0x16BC($v1)
    ctx->pc = 0x3a5064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961476)));
label_3a5068:
    // 0x3a5068: 0x24a5bec8  addiu       $a1, $a1, -0x4138
    ctx->pc = 0x3a5068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950600));
label_3a506c:
    // 0x3a506c: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x3a506cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_3a5070:
    // 0x3a5070: 0x10000028  b           . + 4 + (0x28 << 2)
label_3a5074:
    if (ctx->pc == 0x3A5074u) {
        ctx->pc = 0x3A5074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5070u;
        // 0x3a5074: 0x27a60500  addiu       $a2, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5078u;
        goto label_3a5078;
    }
    ctx->pc = 0x3A5070u;
    {
        const bool branch_taken_0x3a5070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5070u;
        // 0x3a5074: 0x27a60500  addiu       $a2, $sp, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5070) {
            ctx->pc = 0x3A5114u;
            goto label_3a5114;
        }
    }
    ctx->pc = 0x3A5078u;
label_3a5078:
    // 0x3a5078: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3a5078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3a507c:
    // 0x3a507c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x3a507cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_3a5080:
    // 0x3a5080: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a5080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3a5084:
    // 0x3a5084: 0x2d02000a  sltiu       $v0, $t0, 0xA
    ctx->pc = 0x3a5084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3a5088:
    // 0x3a5088: 0x1440ff2f  bnez        $v0, . + 4 + (-0xD1 << 2)
label_3a508c:
    if (ctx->pc == 0x3A508Cu) {
        ctx->pc = 0x3A508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5088u;
        // 0x3a508c: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5090u;
        goto label_3a5090;
    }
    ctx->pc = 0x3A5088u;
    {
        const bool branch_taken_0x3a5088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5088u;
        // 0x3a508c: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5088) {
            ctx->pc = 0x3A4D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4d48;
        }
    }
    ctx->pc = 0x3A5090u;
label_3a5090:
    // 0x3a5090: 0x10000008  b           . + 4 + (0x8 << 2)
label_3a5094:
    if (ctx->pc == 0x3A5094u) {
        ctx->pc = 0x3A5098u;
        goto label_3a5098;
    }
    ctx->pc = 0x3A5090u;
    {
        const bool branch_taken_0x3a5090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5090) {
            ctx->pc = 0x3A50B4u;
            goto label_3a50b4;
        }
    }
    ctx->pc = 0x3A5098u;
label_3a5098:
    // 0x3a5098: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x3a5098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3a509c:
    // 0x3a509c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x3a509cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3a50a0:
    // 0x3a50a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3a50a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a50a4:
    // 0x3a50a4: 0xa20200b6  sb          $v0, 0xB6($s0)
    ctx->pc = 0x3a50a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 182), (uint8_t)GPR_U32(ctx, 2));
label_3a50a8:
    // 0x3a50a8: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x3a50a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
label_3a50ac:
    // 0x3a50ac: 0xae0401f4  sw          $a0, 0x1F4($s0)
    ctx->pc = 0x3a50acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 4));
label_3a50b0:
    // 0x3a50b0: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x3a50b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_3a50b4:
    // 0x3a50b4: 0x1120001d  beqz        $t1, . + 4 + (0x1D << 2)
label_3a50b8:
    if (ctx->pc == 0x3A50B8u) {
        ctx->pc = 0x3A50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A50B4u;
        // 0x3a50b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A50BCu;
        goto label_3a50bc;
    }
    ctx->pc = 0x3A50B4u;
    {
        const bool branch_taken_0x3a50b4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A50B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A50B4u;
        // 0x3a50b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a50b4) {
            ctx->pc = 0x3A512Cu;
            goto label_3a512c;
        }
    }
    ctx->pc = 0x3A50BCu;
label_3a50bc:
    // 0x3a50bc: 0x16200019  bnez        $s1, . + 4 + (0x19 << 2)
label_3a50c0:
    if (ctx->pc == 0x3A50C0u) {
        ctx->pc = 0x3A50C4u;
        goto label_3a50c4;
    }
    ctx->pc = 0x3A50BCu;
    {
        const bool branch_taken_0x3a50bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a50bc) {
            ctx->pc = 0x3A5124u;
            goto label_3a5124;
        }
    }
    ctx->pc = 0x3A50C4u;
label_3a50c4:
    // 0x3a50c4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3a50c8:
    if (ctx->pc == 0x3A50C8u) {
        ctx->pc = 0x3A50C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A50C4u;
        // 0x3a50c8: 0x7bb00540  lq          $s0, 0x540($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A50CCu;
        goto label_3a50cc;
    }
    ctx->pc = 0x3A50C4u;
    {
        const bool branch_taken_0x3a50c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A50C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A50C4u;
        // 0x3a50c8: 0x7bb00540  lq          $s0, 0x540($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a50c4) {
            ctx->pc = 0x3A5130u;
            goto label_3a5130;
        }
    }
    ctx->pc = 0x3A50CCu;
label_3a50cc:
    // 0x3a50cc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a50ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3a50d0:
    // 0x3a50d0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3a50d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a50d4:
    // 0x3a50d4: 0x8c62e944  lw          $v0, -0x16BC($v1)
    ctx->pc = 0x3a50d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961476)));
label_3a50d8:
    // 0x3a50d8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3a50d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3a50dc:
    // 0x3a50dc: 0x24a5bc50  addiu       $a1, $a1, -0x43B0
    ctx->pc = 0x3a50dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949968));
label_3a50e0:
    // 0x3a50e0: 0x1000000c  b           . + 4 + (0xC << 2)
label_3a50e4:
    if (ctx->pc == 0x3A50E4u) {
        ctx->pc = 0x3A50E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A50E0u;
        // 0x3a50e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A50E8u;
        goto label_3a50e8;
    }
    ctx->pc = 0x3A50E0u;
    {
        const bool branch_taken_0x3a50e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A50E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A50E0u;
        // 0x3a50e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a50e0) {
            ctx->pc = 0x3A5114u;
            goto label_3a5114;
        }
    }
    ctx->pc = 0x3A50E8u;
label_3a50e8:
    // 0x3a50e8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3a50e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a50ec:
    // 0x3a50ec: 0x8c62e944  lw          $v0, -0x16BC($v1)
    ctx->pc = 0x3a50ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961476)));
label_3a50f0:
    // 0x3a50f0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3a50f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3a50f4:
    // 0x3a50f4: 0x24a5bcd0  addiu       $a1, $a1, -0x4330
    ctx->pc = 0x3a50f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950096));
label_3a50f8:
    // 0x3a50f8: 0x10000006  b           . + 4 + (0x6 << 2)
label_3a50fc:
    if (ctx->pc == 0x3A50FCu) {
        ctx->pc = 0x3A50FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A50F8u;
        // 0x3a50fc: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5100u;
        goto label_3a5100;
    }
    ctx->pc = 0x3A50F8u;
    {
        const bool branch_taken_0x3a50f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A50FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A50F8u;
        // 0x3a50fc: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a50f8) {
            ctx->pc = 0x3A5114u;
            goto label_3a5114;
        }
    }
    ctx->pc = 0x3A5100u;
label_3a5100:
    // 0x3a5100: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3a5100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3a5104:
    // 0x3a5104: 0x8c62e944  lw          $v0, -0x16BC($v1)
    ctx->pc = 0x3a5104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961476)));
label_3a5108:
    // 0x3a5108: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3a5108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3a510c:
    // 0x3a510c: 0x24a5bd60  addiu       $a1, $a1, -0x42A0
    ctx->pc = 0x3a510cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950240));
label_3a5110:
    // 0x3a5110: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x3a5110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_3a5114:
    // 0x3a5114: 0x40f809  jalr        $v0
label_3a5118:
    if (ctx->pc == 0x3A5118u) {
        ctx->pc = 0x3A511Cu;
        goto label_3a511c;
    }
    ctx->pc = 0x3A5114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A511Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5114u, 0x3A511Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A511Cu;
label_3a511c:
    // 0x3a511c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3a5120:
    if (ctx->pc == 0x3A5120u) {
        ctx->pc = 0x3A5120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A511Cu;
        // 0x3a5120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5124u;
        goto label_3a5124;
    }
    ctx->pc = 0x3A511Cu;
    {
        const bool branch_taken_0x3a511c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A511Cu;
        // 0x3a5120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a511c) {
            ctx->pc = 0x3A512Cu;
            goto label_3a512c;
        }
    }
    ctx->pc = 0x3A5124u;
label_3a5124:
    // 0x3a5124: 0xc0e794a  jal         func_39E528
label_3a5128:
    if (ctx->pc == 0x3A5128u) {
        ctx->pc = 0x3A5128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5124u;
        // 0x3a5128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A512Cu;
        goto label_3a512c;
    }
    ctx->pc = 0x3A5124u;
    SET_GPR_U32(ctx, 31, 0x3A512Cu);
    ctx->pc = 0x3A5128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5124u;
    // 0x3a5128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E528u, 0x3A5124u, 0x3A512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A512Cu;
label_3a512c:
    // 0x3a512c: 0x7bb00540  lq          $s0, 0x540($sp)
    ctx->pc = 0x3a512cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_3a5130:
    // 0x3a5130: 0x7bb10530  lq          $s1, 0x530($sp)
    ctx->pc = 0x3a5130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_3a5134:
    // 0x3a5134: 0xdfbf0520  ld          $ra, 0x520($sp)
    ctx->pc = 0x3a5134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1312)));
label_3a5138:
    // 0x3a5138: 0x3e00008  jr          $ra
label_3a513c:
    if (ctx->pc == 0x3A513Cu) {
        ctx->pc = 0x3A513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5138u;
        // 0x3a513c: 0x27bd0550  addiu       $sp, $sp, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5140u;
        goto label_fallthrough_0x3a5138;
    }
    ctx->pc = 0x3A5138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5138u;
        // 0x3a513c: 0x27bd0550  addiu       $sp, $sp, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a5138:
    ctx->pc = 0x3A5140u;
}
