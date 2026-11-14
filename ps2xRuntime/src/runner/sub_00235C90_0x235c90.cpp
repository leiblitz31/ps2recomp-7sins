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

// Function: sub_00235C90
// Address: 0x235c90 - 0x2360e0
void sub_00235C90_0x235c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235C90_0x235c90");
#endif

    switch (ctx->pc) {
        case 0x235c90u: goto label_235c90;
        case 0x235c94u: goto label_235c94;
        case 0x235c98u: goto label_235c98;
        case 0x235c9cu: goto label_235c9c;
        case 0x235ca0u: goto label_235ca0;
        case 0x235ca4u: goto label_235ca4;
        case 0x235ca8u: goto label_235ca8;
        case 0x235cacu: goto label_235cac;
        case 0x235cb0u: goto label_235cb0;
        case 0x235cb4u: goto label_235cb4;
        case 0x235cb8u: goto label_235cb8;
        case 0x235cbcu: goto label_235cbc;
        case 0x235cc0u: goto label_235cc0;
        case 0x235cc4u: goto label_235cc4;
        case 0x235cc8u: goto label_235cc8;
        case 0x235cccu: goto label_235ccc;
        case 0x235cd0u: goto label_235cd0;
        case 0x235cd4u: goto label_235cd4;
        case 0x235cd8u: goto label_235cd8;
        case 0x235cdcu: goto label_235cdc;
        case 0x235ce0u: goto label_235ce0;
        case 0x235ce4u: goto label_235ce4;
        case 0x235ce8u: goto label_235ce8;
        case 0x235cecu: goto label_235cec;
        case 0x235cf0u: goto label_235cf0;
        case 0x235cf4u: goto label_235cf4;
        case 0x235cf8u: goto label_235cf8;
        case 0x235cfcu: goto label_235cfc;
        case 0x235d00u: goto label_235d00;
        case 0x235d04u: goto label_235d04;
        case 0x235d08u: goto label_235d08;
        case 0x235d0cu: goto label_235d0c;
        case 0x235d10u: goto label_235d10;
        case 0x235d14u: goto label_235d14;
        case 0x235d18u: goto label_235d18;
        case 0x235d1cu: goto label_235d1c;
        case 0x235d20u: goto label_235d20;
        case 0x235d24u: goto label_235d24;
        case 0x235d28u: goto label_235d28;
        case 0x235d2cu: goto label_235d2c;
        case 0x235d30u: goto label_235d30;
        case 0x235d34u: goto label_235d34;
        case 0x235d38u: goto label_235d38;
        case 0x235d3cu: goto label_235d3c;
        case 0x235d40u: goto label_235d40;
        case 0x235d44u: goto label_235d44;
        case 0x235d48u: goto label_235d48;
        case 0x235d4cu: goto label_235d4c;
        case 0x235d50u: goto label_235d50;
        case 0x235d54u: goto label_235d54;
        case 0x235d58u: goto label_235d58;
        case 0x235d5cu: goto label_235d5c;
        case 0x235d60u: goto label_235d60;
        case 0x235d64u: goto label_235d64;
        case 0x235d68u: goto label_235d68;
        case 0x235d6cu: goto label_235d6c;
        case 0x235d70u: goto label_235d70;
        case 0x235d74u: goto label_235d74;
        case 0x235d78u: goto label_235d78;
        case 0x235d7cu: goto label_235d7c;
        case 0x235d80u: goto label_235d80;
        case 0x235d84u: goto label_235d84;
        case 0x235d88u: goto label_235d88;
        case 0x235d8cu: goto label_235d8c;
        case 0x235d90u: goto label_235d90;
        case 0x235d94u: goto label_235d94;
        case 0x235d98u: goto label_235d98;
        case 0x235d9cu: goto label_235d9c;
        case 0x235da0u: goto label_235da0;
        case 0x235da4u: goto label_235da4;
        case 0x235da8u: goto label_235da8;
        case 0x235dacu: goto label_235dac;
        case 0x235db0u: goto label_235db0;
        case 0x235db4u: goto label_235db4;
        case 0x235db8u: goto label_235db8;
        case 0x235dbcu: goto label_235dbc;
        case 0x235dc0u: goto label_235dc0;
        case 0x235dc4u: goto label_235dc4;
        case 0x235dc8u: goto label_235dc8;
        case 0x235dccu: goto label_235dcc;
        case 0x235dd0u: goto label_235dd0;
        case 0x235dd4u: goto label_235dd4;
        case 0x235dd8u: goto label_235dd8;
        case 0x235ddcu: goto label_235ddc;
        case 0x235de0u: goto label_235de0;
        case 0x235de4u: goto label_235de4;
        case 0x235de8u: goto label_235de8;
        case 0x235decu: goto label_235dec;
        case 0x235df0u: goto label_235df0;
        case 0x235df4u: goto label_235df4;
        case 0x235df8u: goto label_235df8;
        case 0x235dfcu: goto label_235dfc;
        case 0x235e00u: goto label_235e00;
        case 0x235e04u: goto label_235e04;
        case 0x235e08u: goto label_235e08;
        case 0x235e0cu: goto label_235e0c;
        case 0x235e10u: goto label_235e10;
        case 0x235e14u: goto label_235e14;
        case 0x235e18u: goto label_235e18;
        case 0x235e1cu: goto label_235e1c;
        case 0x235e20u: goto label_235e20;
        case 0x235e24u: goto label_235e24;
        case 0x235e28u: goto label_235e28;
        case 0x235e2cu: goto label_235e2c;
        case 0x235e30u: goto label_235e30;
        case 0x235e34u: goto label_235e34;
        case 0x235e38u: goto label_235e38;
        case 0x235e3cu: goto label_235e3c;
        case 0x235e40u: goto label_235e40;
        case 0x235e44u: goto label_235e44;
        case 0x235e48u: goto label_235e48;
        case 0x235e4cu: goto label_235e4c;
        case 0x235e50u: goto label_235e50;
        case 0x235e54u: goto label_235e54;
        case 0x235e58u: goto label_235e58;
        case 0x235e5cu: goto label_235e5c;
        case 0x235e60u: goto label_235e60;
        case 0x235e64u: goto label_235e64;
        case 0x235e68u: goto label_235e68;
        case 0x235e6cu: goto label_235e6c;
        case 0x235e70u: goto label_235e70;
        case 0x235e74u: goto label_235e74;
        case 0x235e78u: goto label_235e78;
        case 0x235e7cu: goto label_235e7c;
        case 0x235e80u: goto label_235e80;
        case 0x235e84u: goto label_235e84;
        case 0x235e88u: goto label_235e88;
        case 0x235e8cu: goto label_235e8c;
        case 0x235e90u: goto label_235e90;
        case 0x235e94u: goto label_235e94;
        case 0x235e98u: goto label_235e98;
        case 0x235e9cu: goto label_235e9c;
        case 0x235ea0u: goto label_235ea0;
        case 0x235ea4u: goto label_235ea4;
        case 0x235ea8u: goto label_235ea8;
        case 0x235eacu: goto label_235eac;
        case 0x235eb0u: goto label_235eb0;
        case 0x235eb4u: goto label_235eb4;
        case 0x235eb8u: goto label_235eb8;
        case 0x235ebcu: goto label_235ebc;
        case 0x235ec0u: goto label_235ec0;
        case 0x235ec4u: goto label_235ec4;
        case 0x235ec8u: goto label_235ec8;
        case 0x235eccu: goto label_235ecc;
        case 0x235ed0u: goto label_235ed0;
        case 0x235ed4u: goto label_235ed4;
        case 0x235ed8u: goto label_235ed8;
        case 0x235edcu: goto label_235edc;
        case 0x235ee0u: goto label_235ee0;
        case 0x235ee4u: goto label_235ee4;
        case 0x235ee8u: goto label_235ee8;
        case 0x235eecu: goto label_235eec;
        case 0x235ef0u: goto label_235ef0;
        case 0x235ef4u: goto label_235ef4;
        case 0x235ef8u: goto label_235ef8;
        case 0x235efcu: goto label_235efc;
        case 0x235f00u: goto label_235f00;
        case 0x235f04u: goto label_235f04;
        case 0x235f08u: goto label_235f08;
        case 0x235f0cu: goto label_235f0c;
        case 0x235f10u: goto label_235f10;
        case 0x235f14u: goto label_235f14;
        case 0x235f18u: goto label_235f18;
        case 0x235f1cu: goto label_235f1c;
        case 0x235f20u: goto label_235f20;
        case 0x235f24u: goto label_235f24;
        case 0x235f28u: goto label_235f28;
        case 0x235f2cu: goto label_235f2c;
        case 0x235f30u: goto label_235f30;
        case 0x235f34u: goto label_235f34;
        case 0x235f38u: goto label_235f38;
        case 0x235f3cu: goto label_235f3c;
        case 0x235f40u: goto label_235f40;
        case 0x235f44u: goto label_235f44;
        case 0x235f48u: goto label_235f48;
        case 0x235f4cu: goto label_235f4c;
        case 0x235f50u: goto label_235f50;
        case 0x235f54u: goto label_235f54;
        case 0x235f58u: goto label_235f58;
        case 0x235f5cu: goto label_235f5c;
        case 0x235f60u: goto label_235f60;
        case 0x235f64u: goto label_235f64;
        case 0x235f68u: goto label_235f68;
        case 0x235f6cu: goto label_235f6c;
        case 0x235f70u: goto label_235f70;
        case 0x235f74u: goto label_235f74;
        case 0x235f78u: goto label_235f78;
        case 0x235f7cu: goto label_235f7c;
        case 0x235f80u: goto label_235f80;
        case 0x235f84u: goto label_235f84;
        case 0x235f88u: goto label_235f88;
        case 0x235f8cu: goto label_235f8c;
        case 0x235f90u: goto label_235f90;
        case 0x235f94u: goto label_235f94;
        case 0x235f98u: goto label_235f98;
        case 0x235f9cu: goto label_235f9c;
        case 0x235fa0u: goto label_235fa0;
        case 0x235fa4u: goto label_235fa4;
        case 0x235fa8u: goto label_235fa8;
        case 0x235facu: goto label_235fac;
        case 0x235fb0u: goto label_235fb0;
        case 0x235fb4u: goto label_235fb4;
        case 0x235fb8u: goto label_235fb8;
        case 0x235fbcu: goto label_235fbc;
        case 0x235fc0u: goto label_235fc0;
        case 0x235fc4u: goto label_235fc4;
        case 0x235fc8u: goto label_235fc8;
        case 0x235fccu: goto label_235fcc;
        case 0x235fd0u: goto label_235fd0;
        case 0x235fd4u: goto label_235fd4;
        case 0x235fd8u: goto label_235fd8;
        case 0x235fdcu: goto label_235fdc;
        case 0x235fe0u: goto label_235fe0;
        case 0x235fe4u: goto label_235fe4;
        case 0x235fe8u: goto label_235fe8;
        case 0x235fecu: goto label_235fec;
        case 0x235ff0u: goto label_235ff0;
        case 0x235ff4u: goto label_235ff4;
        case 0x235ff8u: goto label_235ff8;
        case 0x235ffcu: goto label_235ffc;
        case 0x236000u: goto label_236000;
        case 0x236004u: goto label_236004;
        case 0x236008u: goto label_236008;
        case 0x23600cu: goto label_23600c;
        case 0x236010u: goto label_236010;
        case 0x236014u: goto label_236014;
        case 0x236018u: goto label_236018;
        case 0x23601cu: goto label_23601c;
        case 0x236020u: goto label_236020;
        case 0x236024u: goto label_236024;
        case 0x236028u: goto label_236028;
        case 0x23602cu: goto label_23602c;
        case 0x236030u: goto label_236030;
        case 0x236034u: goto label_236034;
        case 0x236038u: goto label_236038;
        case 0x23603cu: goto label_23603c;
        case 0x236040u: goto label_236040;
        case 0x236044u: goto label_236044;
        case 0x236048u: goto label_236048;
        case 0x23604cu: goto label_23604c;
        case 0x236050u: goto label_236050;
        case 0x236054u: goto label_236054;
        case 0x236058u: goto label_236058;
        case 0x23605cu: goto label_23605c;
        case 0x236060u: goto label_236060;
        case 0x236064u: goto label_236064;
        case 0x236068u: goto label_236068;
        case 0x23606cu: goto label_23606c;
        case 0x236070u: goto label_236070;
        case 0x236074u: goto label_236074;
        case 0x236078u: goto label_236078;
        case 0x23607cu: goto label_23607c;
        case 0x236080u: goto label_236080;
        case 0x236084u: goto label_236084;
        case 0x236088u: goto label_236088;
        case 0x23608cu: goto label_23608c;
        case 0x236090u: goto label_236090;
        case 0x236094u: goto label_236094;
        case 0x236098u: goto label_236098;
        case 0x23609cu: goto label_23609c;
        case 0x2360a0u: goto label_2360a0;
        case 0x2360a4u: goto label_2360a4;
        case 0x2360a8u: goto label_2360a8;
        case 0x2360acu: goto label_2360ac;
        case 0x2360b0u: goto label_2360b0;
        case 0x2360b4u: goto label_2360b4;
        case 0x2360b8u: goto label_2360b8;
        case 0x2360bcu: goto label_2360bc;
        case 0x2360c0u: goto label_2360c0;
        case 0x2360c4u: goto label_2360c4;
        case 0x2360c8u: goto label_2360c8;
        case 0x2360ccu: goto label_2360cc;
        case 0x2360d0u: goto label_2360d0;
        case 0x2360d4u: goto label_2360d4;
        case 0x2360d8u: goto label_2360d8;
        case 0x2360dcu: goto label_2360dc;
        default: break;
    }

    ctx->pc = 0x235c90u;

label_235c90:
    // 0x235c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_235c94:
    // 0x235c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_235c98:
    // 0x235c98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x235c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_235c9c:
    // 0x235c9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x235c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_235ca0:
    // 0x235ca0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_235ca4:
    // 0x235ca4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_235ca8:
    if (ctx->pc == 0x235CA8u) {
        ctx->pc = 0x235CACu;
        goto label_235cac;
    }
    ctx->pc = 0x235CA4u;
    {
        const bool branch_taken_0x235ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235ca4) {
            ctx->pc = 0x235D18u;
            goto label_235d18;
        }
    }
    ctx->pc = 0x235CACu;
label_235cac:
    // 0x235cac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x235cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_235cb0:
    // 0x235cb0: 0x24635520  addiu       $v1, $v1, 0x5520
    ctx->pc = 0x235cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21792));
label_235cb4:
    // 0x235cb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_235cb8:
    // 0x235cb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x235cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_235cbc:
    // 0x235cbc: 0xaf80bbb4  sw          $zero, -0x444C($gp)
    ctx->pc = 0x235cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949812), GPR_U32(ctx, 0));
label_235cc0:
    // 0x235cc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_235cc4:
    // 0x235cc4: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x235cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_235cc8:
    // 0x235cc8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x235cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_235ccc:
    // 0x235ccc: 0xc0402d4  jal         func_100B50
label_235cd0:
    if (ctx->pc == 0x235CD0u) {
        ctx->pc = 0x235CD4u;
        goto label_235cd4;
    }
    ctx->pc = 0x235CCCu;
    SET_GPR_U32(ctx, 31, 0x235CD4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x235CCCu, 0x235CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235CD4u;
label_235cd4:
    // 0x235cd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_235cd8:
    // 0x235cd8: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x235cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_235cdc:
    // 0x235cdc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x235cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_235ce0:
    // 0x235ce0: 0xc0402d4  jal         func_100B50
label_235ce4:
    if (ctx->pc == 0x235CE4u) {
        ctx->pc = 0x235CE8u;
        goto label_235ce8;
    }
    ctx->pc = 0x235CE0u;
    SET_GPR_U32(ctx, 31, 0x235CE8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x235CE0u, 0x235CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235CE8u;
label_235ce8:
    // 0x235ce8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x235ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_235cec:
    // 0x235cec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x235cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235cf0:
    // 0x235cf0: 0xc08ec24  jal         func_23B090
label_235cf4:
    if (ctx->pc == 0x235CF4u) {
        ctx->pc = 0x235CF8u;
        goto label_235cf8;
    }
    ctx->pc = 0x235CF0u;
    SET_GPR_U32(ctx, 31, 0x235CF8u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x235CF0u, 0x235CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235CF8u;
label_235cf8:
    // 0x235cf8: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x235cf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_235cfc:
    // 0x235cfc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x235cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_235d00:
    // 0x235d00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x235d00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_235d04:
    // 0x235d04: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_235d08:
    if (ctx->pc == 0x235D08u) {
        ctx->pc = 0x235D0Cu;
        goto label_235d0c;
    }
    ctx->pc = 0x235D04u;
    {
        const bool branch_taken_0x235d04 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x235d04) {
            ctx->pc = 0x235D18u;
            goto label_235d18;
        }
    }
    ctx->pc = 0x235D0Cu;
label_235d0c:
    // 0x235d0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x235d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_235d10:
    // 0x235d10: 0xc0ba070  jal         func_2E81C0
label_235d14:
    if (ctx->pc == 0x235D14u) {
        ctx->pc = 0x235D18u;
        goto label_235d18;
    }
    ctx->pc = 0x235D10u;
    SET_GPR_U32(ctx, 31, 0x235D18u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x235D10u, 0x235D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D18u;
label_235d18:
    // 0x235d18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_235d1c:
    // 0x235d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235d20:
    // 0x235d20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x235d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_235d24:
    // 0x235d24: 0x3e00008  jr          $ra
label_235d28:
    if (ctx->pc == 0x235D28u) {
        ctx->pc = 0x235D2Cu;
        goto label_235d2c;
    }
    ctx->pc = 0x235D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235D2Cu;
label_235d2c:
    // 0x235d2c: 0x0  nop
    ctx->pc = 0x235d2cu;
    // NOP
label_235d30:
    // 0x235d30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x235d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_235d34:
    // 0x235d34: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x235d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_235d38:
    // 0x235d38: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x235d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_235d3c:
    // 0x235d3c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x235d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_235d40:
    // 0x235d40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x235d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_235d44:
    // 0x235d44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x235d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_235d48:
    // 0x235d48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x235d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_235d4c:
    // 0x235d4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x235d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_235d50:
    // 0x235d50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x235d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_235d54:
    // 0x235d54: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x235d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_235d58:
    // 0x235d58: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x235d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_235d5c:
    // 0x235d5c: 0xc08ec3c  jal         func_23B0F0
label_235d60:
    if (ctx->pc == 0x235D60u) {
        ctx->pc = 0x235D64u;
        goto label_235d64;
    }
    ctx->pc = 0x235D5Cu;
    SET_GPR_U32(ctx, 31, 0x235D64u);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x235D5Cu, 0x235D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D64u;
label_235d64:
    // 0x235d64: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x235d64u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_235d68:
    // 0x235d68: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x235d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_235d6c:
    // 0x235d6c: 0xc119b68  jal         func_466DA0
label_235d70:
    if (ctx->pc == 0x235D70u) {
        ctx->pc = 0x235D74u;
        goto label_235d74;
    }
    ctx->pc = 0x235D6Cu;
    SET_GPR_U32(ctx, 31, 0x235D74u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x235D6Cu, 0x235D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D74u;
label_235d74:
    // 0x235d74: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x235d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_235d78:
    // 0x235d78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x235d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235d7c:
    // 0x235d7c: 0xc0400e0  jal         func_100380
label_235d80:
    if (ctx->pc == 0x235D80u) {
        ctx->pc = 0x235D84u;
        goto label_235d84;
    }
    ctx->pc = 0x235D7Cu;
    SET_GPR_U32(ctx, 31, 0x235D84u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x235D7Cu, 0x235D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D84u;
label_235d84:
    // 0x235d84: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x235d84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235d88:
    // 0x235d88: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_235d8c:
    if (ctx->pc == 0x235D8Cu) {
        ctx->pc = 0x235D90u;
        goto label_235d90;
    }
    ctx->pc = 0x235D88u;
    {
        const bool branch_taken_0x235d88 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x235d88) {
            ctx->pc = 0x235DA0u;
            goto label_235da0;
        }
    }
    ctx->pc = 0x235D90u;
label_235d90:
    // 0x235d90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x235d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_235d94:
    // 0x235d94: 0xc08d6bc  jal         func_235AF0
label_235d98:
    if (ctx->pc == 0x235D98u) {
        ctx->pc = 0x235D9Cu;
        goto label_235d9c;
    }
    ctx->pc = 0x235D94u;
    SET_GPR_U32(ctx, 31, 0x235D9Cu);
    ctx->pc = 0x235AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235AF0u, 0x235D94u, 0x235D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235D9Cu;
label_235d9c:
    // 0x235d9c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x235d9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235da0:
    // 0x235da0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x235da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_235da4:
    // 0x235da4: 0xac550050  sw          $s5, 0x50($v0)
    ctx->pc = 0x235da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 21));
label_235da8:
    // 0x235da8: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x235da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_235dac:
    // 0x235dac: 0xc119b68  jal         func_466DA0
label_235db0:
    if (ctx->pc == 0x235DB0u) {
        ctx->pc = 0x235DB4u;
        goto label_235db4;
    }
    ctx->pc = 0x235DACu;
    SET_GPR_U32(ctx, 31, 0x235DB4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x235DACu, 0x235DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DB4u;
label_235db4:
    // 0x235db4: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x235db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_235db8:
    // 0x235db8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x235db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235dbc:
    // 0x235dbc: 0xc0400e0  jal         func_100380
label_235dc0:
    if (ctx->pc == 0x235DC0u) {
        ctx->pc = 0x235DC4u;
        goto label_235dc4;
    }
    ctx->pc = 0x235DBCu;
    SET_GPR_U32(ctx, 31, 0x235DC4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x235DBCu, 0x235DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DC4u;
label_235dc4:
    // 0x235dc4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x235dc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235dc8:
    // 0x235dc8: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_235dcc:
    if (ctx->pc == 0x235DCCu) {
        ctx->pc = 0x235DD0u;
        goto label_235dd0;
    }
    ctx->pc = 0x235DC8u;
    {
        const bool branch_taken_0x235dc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x235dc8) {
            ctx->pc = 0x235DE0u;
            goto label_235de0;
        }
    }
    ctx->pc = 0x235DD0u;
label_235dd0:
    // 0x235dd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x235dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_235dd4:
    // 0x235dd4: 0xc08d560  jal         func_235580
label_235dd8:
    if (ctx->pc == 0x235DD8u) {
        ctx->pc = 0x235DDCu;
        goto label_235ddc;
    }
    ctx->pc = 0x235DD4u;
    SET_GPR_U32(ctx, 31, 0x235DDCu);
    ctx->pc = 0x235580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235580u, 0x235DD4u, 0x235DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DDCu;
label_235ddc:
    // 0x235ddc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x235ddcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235de0:
    // 0x235de0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x235de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_235de4:
    // 0x235de4: 0xac54004c  sw          $s4, 0x4C($v0)
    ctx->pc = 0x235de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 20));
label_235de8:
    // 0x235de8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x235de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_235dec:
    // 0x235dec: 0xc119b68  jal         func_466DA0
label_235df0:
    if (ctx->pc == 0x235DF0u) {
        ctx->pc = 0x235DF4u;
        goto label_235df4;
    }
    ctx->pc = 0x235DECu;
    SET_GPR_U32(ctx, 31, 0x235DF4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x235DECu, 0x235DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DF4u;
label_235df4:
    // 0x235df4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x235df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_235df8:
    // 0x235df8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x235df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235dfc:
    // 0x235dfc: 0xc0400e0  jal         func_100380
label_235e00:
    if (ctx->pc == 0x235E00u) {
        ctx->pc = 0x235E04u;
        goto label_235e04;
    }
    ctx->pc = 0x235DFCu;
    SET_GPR_U32(ctx, 31, 0x235E04u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x235DFCu, 0x235E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E04u;
label_235e04:
    // 0x235e04: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x235e04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235e08:
    // 0x235e08: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_235e0c:
    if (ctx->pc == 0x235E0Cu) {
        ctx->pc = 0x235E10u;
        goto label_235e10;
    }
    ctx->pc = 0x235E08u;
    {
        const bool branch_taken_0x235e08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x235e08) {
            ctx->pc = 0x235E20u;
            goto label_235e20;
        }
    }
    ctx->pc = 0x235E10u;
label_235e10:
    // 0x235e10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x235e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_235e14:
    // 0x235e14: 0xc088560  jal         func_221580
label_235e18:
    if (ctx->pc == 0x235E18u) {
        ctx->pc = 0x235E1Cu;
        goto label_235e1c;
    }
    ctx->pc = 0x235E14u;
    SET_GPR_U32(ctx, 31, 0x235E1Cu);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x235E14u, 0x235E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E1Cu;
label_235e1c:
    // 0x235e1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x235e1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235e20:
    // 0x235e20: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x235e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_235e24:
    // 0x235e24: 0xac530054  sw          $s3, 0x54($v0)
    ctx->pc = 0x235e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 19));
label_235e28:
    // 0x235e28: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x235e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_235e2c:
    // 0x235e2c: 0xc119b68  jal         func_466DA0
label_235e30:
    if (ctx->pc == 0x235E30u) {
        ctx->pc = 0x235E34u;
        goto label_235e34;
    }
    ctx->pc = 0x235E2Cu;
    SET_GPR_U32(ctx, 31, 0x235E34u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x235E2Cu, 0x235E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E34u;
label_235e34:
    // 0x235e34: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x235e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_235e38:
    // 0x235e38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x235e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235e3c:
    // 0x235e3c: 0xc0400e0  jal         func_100380
label_235e40:
    if (ctx->pc == 0x235E40u) {
        ctx->pc = 0x235E44u;
        goto label_235e44;
    }
    ctx->pc = 0x235E3Cu;
    SET_GPR_U32(ctx, 31, 0x235E44u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x235E3Cu, 0x235E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E44u;
label_235e44:
    // 0x235e44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x235e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235e48:
    // 0x235e48: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_235e4c:
    if (ctx->pc == 0x235E4Cu) {
        ctx->pc = 0x235E50u;
        goto label_235e50;
    }
    ctx->pc = 0x235E48u;
    {
        const bool branch_taken_0x235e48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x235e48) {
            ctx->pc = 0x235E60u;
            goto label_235e60;
        }
    }
    ctx->pc = 0x235E50u;
label_235e50:
    // 0x235e50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x235e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_235e54:
    // 0x235e54: 0xc088560  jal         func_221580
label_235e58:
    if (ctx->pc == 0x235E58u) {
        ctx->pc = 0x235E5Cu;
        goto label_235e5c;
    }
    ctx->pc = 0x235E54u;
    SET_GPR_U32(ctx, 31, 0x235E5Cu);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x235E54u, 0x235E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E5Cu;
label_235e5c:
    // 0x235e5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x235e5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235e60:
    // 0x235e60: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x235e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_235e64:
    // 0x235e64: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x235e64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
label_235e68:
    // 0x235e68: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x235e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_235e6c:
    // 0x235e6c: 0xc119b68  jal         func_466DA0
label_235e70:
    if (ctx->pc == 0x235E70u) {
        ctx->pc = 0x235E74u;
        goto label_235e74;
    }
    ctx->pc = 0x235E6Cu;
    SET_GPR_U32(ctx, 31, 0x235E74u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x235E6Cu, 0x235E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E74u;
label_235e74:
    // 0x235e74: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x235e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_235e78:
    // 0x235e78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x235e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235e7c:
    // 0x235e7c: 0xc0400e0  jal         func_100380
label_235e80:
    if (ctx->pc == 0x235E80u) {
        ctx->pc = 0x235E84u;
        goto label_235e84;
    }
    ctx->pc = 0x235E7Cu;
    SET_GPR_U32(ctx, 31, 0x235E84u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x235E7Cu, 0x235E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E84u;
label_235e84:
    // 0x235e84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x235e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235e88:
    // 0x235e88: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_235e8c:
    if (ctx->pc == 0x235E8Cu) {
        ctx->pc = 0x235E90u;
        goto label_235e90;
    }
    ctx->pc = 0x235E88u;
    {
        const bool branch_taken_0x235e88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x235e88) {
            ctx->pc = 0x235EA0u;
            goto label_235ea0;
        }
    }
    ctx->pc = 0x235E90u;
label_235e90:
    // 0x235e90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x235e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235e94:
    // 0x235e94: 0xc08cfd8  jal         func_233F60
label_235e98:
    if (ctx->pc == 0x235E98u) {
        ctx->pc = 0x235E9Cu;
        goto label_235e9c;
    }
    ctx->pc = 0x235E94u;
    SET_GPR_U32(ctx, 31, 0x235E9Cu);
    ctx->pc = 0x233F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233F60u, 0x235E94u, 0x235E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E9Cu;
label_235e9c:
    // 0x235e9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x235e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235ea0:
    // 0x235ea0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x235ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_235ea4:
    // 0x235ea4: 0xac510058  sw          $s1, 0x58($v0)
    ctx->pc = 0x235ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 17));
label_235ea8:
    // 0x235ea8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x235ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_235eac:
    // 0x235eac: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x235eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_235eb0:
    // 0x235eb0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x235eb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_235eb4:
    // 0x235eb4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x235eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_235eb8:
    // 0x235eb8: 0x320f809  jalr        $t9
label_235ebc:
    if (ctx->pc == 0x235EBCu) {
        ctx->pc = 0x235EC0u;
        goto label_235ec0;
    }
    ctx->pc = 0x235EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x235EC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235EB8u, 0x235EC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235EC0u;
label_235ec0:
    // 0x235ec0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x235ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_235ec4:
    // 0x235ec4: 0xc119b68  jal         func_466DA0
label_235ec8:
    if (ctx->pc == 0x235EC8u) {
        ctx->pc = 0x235ECCu;
        goto label_235ecc;
    }
    ctx->pc = 0x235EC4u;
    SET_GPR_U32(ctx, 31, 0x235ECCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x235EC4u, 0x235ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235ECCu;
label_235ecc:
    // 0x235ecc: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x235eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_235ed0:
    // 0x235ed0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x235ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235ed4:
    // 0x235ed4: 0xc0400e0  jal         func_100380
label_235ed8:
    if (ctx->pc == 0x235ED8u) {
        ctx->pc = 0x235EDCu;
        goto label_235edc;
    }
    ctx->pc = 0x235ED4u;
    SET_GPR_U32(ctx, 31, 0x235EDCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x235ED4u, 0x235EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235EDCu;
label_235edc:
    // 0x235edc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235ee0:
    // 0x235ee0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_235ee4:
    if (ctx->pc == 0x235EE4u) {
        ctx->pc = 0x235EE8u;
        goto label_235ee8;
    }
    ctx->pc = 0x235EE0u;
    {
        const bool branch_taken_0x235ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x235ee0) {
            ctx->pc = 0x235EF8u;
            goto label_235ef8;
        }
    }
    ctx->pc = 0x235EE8u;
label_235ee8:
    // 0x235ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235eec:
    // 0x235eec: 0xc08cd60  jal         func_233580
label_235ef0:
    if (ctx->pc == 0x235EF0u) {
        ctx->pc = 0x235EF4u;
        goto label_235ef4;
    }
    ctx->pc = 0x235EECu;
    SET_GPR_U32(ctx, 31, 0x235EF4u);
    ctx->pc = 0x233580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233580u, 0x235EECu, 0x235EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235EF4u;
label_235ef4:
    // 0x235ef4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235ef8:
    // 0x235ef8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x235ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_235efc:
    // 0x235efc: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x235efcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
label_235f00:
    // 0x235f00: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x235f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_235f04:
    // 0x235f04: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x235f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_235f08:
    // 0x235f08: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x235f08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_235f0c:
    // 0x235f0c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x235f0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_235f10:
    // 0x235f10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x235f10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_235f14:
    // 0x235f14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x235f14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_235f18:
    // 0x235f18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x235f18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_235f1c:
    // 0x235f1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x235f1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_235f20:
    // 0x235f20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x235f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_235f24:
    // 0x235f24: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x235f24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_235f28:
    // 0x235f28: 0x3e00008  jr          $ra
label_235f2c:
    if (ctx->pc == 0x235F2Cu) {
        ctx->pc = 0x235F30u;
        goto label_235f30;
    }
    ctx->pc = 0x235F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235F30u;
label_235f30:
    // 0x235f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_235f34:
    // 0x235f34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_235f38:
    // 0x235f38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x235f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_235f3c:
    // 0x235f3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x235f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_235f40:
    // 0x235f40: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x235f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_235f44:
    // 0x235f44: 0xc08ec48  jal         func_23B120
label_235f48:
    if (ctx->pc == 0x235F48u) {
        ctx->pc = 0x235F4Cu;
        goto label_235f4c;
    }
    ctx->pc = 0x235F44u;
    SET_GPR_U32(ctx, 31, 0x235F4Cu);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x235F44u, 0x235F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F4Cu;
label_235f4c:
    // 0x235f4c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x235f4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_235f50:
    // 0x235f50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x235f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_235f54:
    // 0x235f54: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x235f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_235f58:
    // 0x235f58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_235f5c:
    if (ctx->pc == 0x235F5Cu) {
        ctx->pc = 0x235F60u;
        goto label_235f60;
    }
    ctx->pc = 0x235F58u;
    {
        const bool branch_taken_0x235f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235f58) {
            ctx->pc = 0x235F88u;
            goto label_235f88;
        }
    }
    ctx->pc = 0x235F60u;
label_235f60:
    // 0x235f60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x235f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_235f64:
    // 0x235f64: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x235f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_235f68:
    // 0x235f68: 0xc08d864  jal         func_236190
label_235f6c:
    if (ctx->pc == 0x235F6Cu) {
        ctx->pc = 0x235F70u;
        goto label_235f70;
    }
    ctx->pc = 0x235F68u;
    SET_GPR_U32(ctx, 31, 0x235F70u);
    ctx->pc = 0x236190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236190u, 0x235F68u, 0x235F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F70u;
label_235f70:
    // 0x235f70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x235f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_235f74:
    // 0x235f74: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x235f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_235f78:
    // 0x235f78: 0xc119c5c  jal         func_467170
label_235f7c:
    if (ctx->pc == 0x235F7Cu) {
        ctx->pc = 0x235F80u;
        goto label_235f80;
    }
    ctx->pc = 0x235F78u;
    SET_GPR_U32(ctx, 31, 0x235F80u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x235F78u, 0x235F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F80u;
label_235f80:
    // 0x235f80: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x235f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_235f84:
    // 0x235f84: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x235f84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_235f88:
    // 0x235f88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x235f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_235f8c:
    // 0x235f8c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x235f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_235f90:
    // 0x235f90: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_235f94:
    if (ctx->pc == 0x235F94u) {
        ctx->pc = 0x235F98u;
        goto label_235f98;
    }
    ctx->pc = 0x235F90u;
    {
        const bool branch_taken_0x235f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235f90) {
            ctx->pc = 0x235FE8u;
            goto label_235fe8;
        }
    }
    ctx->pc = 0x235F98u;
label_235f98:
    // 0x235f98: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x235f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_235f9c:
    // 0x235f9c: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x235f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_235fa0:
    // 0x235fa0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x235fa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_235fa4:
    // 0x235fa4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x235fa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_235fa8:
    // 0x235fa8: 0x320f809  jalr        $t9
label_235fac:
    if (ctx->pc == 0x235FACu) {
        ctx->pc = 0x235FB0u;
        goto label_235fb0;
    }
    ctx->pc = 0x235FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x235FB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235FA8u, 0x235FB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235FB0u;
label_235fb0:
    // 0x235fb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x235fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_235fb4:
    // 0x235fb4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x235fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_235fb8:
    // 0x235fb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_235fbc:
    if (ctx->pc == 0x235FBCu) {
        ctx->pc = 0x235FC0u;
        goto label_235fc0;
    }
    ctx->pc = 0x235FB8u;
    {
        const bool branch_taken_0x235fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235fb8) {
            ctx->pc = 0x235FE8u;
            goto label_235fe8;
        }
    }
    ctx->pc = 0x235FC0u;
label_235fc0:
    // 0x235fc0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x235fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_235fc4:
    // 0x235fc4: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x235fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_235fc8:
    // 0x235fc8: 0xc08d858  jal         func_236160
label_235fcc:
    if (ctx->pc == 0x235FCCu) {
        ctx->pc = 0x235FD0u;
        goto label_235fd0;
    }
    ctx->pc = 0x235FC8u;
    SET_GPR_U32(ctx, 31, 0x235FD0u);
    ctx->pc = 0x236160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236160u, 0x235FC8u, 0x235FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235FD0u;
label_235fd0:
    // 0x235fd0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x235fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_235fd4:
    // 0x235fd4: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x235fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_235fd8:
    // 0x235fd8: 0xc119c5c  jal         func_467170
label_235fdc:
    if (ctx->pc == 0x235FDCu) {
        ctx->pc = 0x235FE0u;
        goto label_235fe0;
    }
    ctx->pc = 0x235FD8u;
    SET_GPR_U32(ctx, 31, 0x235FE0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x235FD8u, 0x235FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235FE0u;
label_235fe0:
    // 0x235fe0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x235fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_235fe4:
    // 0x235fe4: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x235fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_235fe8:
    // 0x235fe8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x235fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_235fec:
    // 0x235fec: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x235fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_235ff0:
    // 0x235ff0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_235ff4:
    if (ctx->pc == 0x235FF4u) {
        ctx->pc = 0x235FF8u;
        goto label_235ff8;
    }
    ctx->pc = 0x235FF0u;
    {
        const bool branch_taken_0x235ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235ff0) {
            ctx->pc = 0x236020u;
            goto label_236020;
        }
    }
    ctx->pc = 0x235FF8u;
label_235ff8:
    // 0x235ff8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x235ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_235ffc:
    // 0x235ffc: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x235ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_236000:
    // 0x236000: 0xc0644f8  jal         func_1913E0
label_236004:
    if (ctx->pc == 0x236004u) {
        ctx->pc = 0x236008u;
        goto label_236008;
    }
    ctx->pc = 0x236000u;
    SET_GPR_U32(ctx, 31, 0x236008u);
    ctx->pc = 0x1913E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1913E0u, 0x236000u, 0x236008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236008u;
label_236008:
    // 0x236008: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x236008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23600c:
    // 0x23600c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x23600cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_236010:
    // 0x236010: 0xc119c5c  jal         func_467170
label_236014:
    if (ctx->pc == 0x236014u) {
        ctx->pc = 0x236018u;
        goto label_236018;
    }
    ctx->pc = 0x236010u;
    SET_GPR_U32(ctx, 31, 0x236018u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x236010u, 0x236018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236018u;
label_236018:
    // 0x236018: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x236018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23601c:
    // 0x23601c: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x23601cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_236020:
    // 0x236020: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x236020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_236024:
    // 0x236024: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x236024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_236028:
    // 0x236028: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_23602c:
    if (ctx->pc == 0x23602Cu) {
        ctx->pc = 0x236030u;
        goto label_236030;
    }
    ctx->pc = 0x236028u;
    {
        const bool branch_taken_0x236028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236028) {
            ctx->pc = 0x236058u;
            goto label_236058;
        }
    }
    ctx->pc = 0x236030u;
label_236030:
    // 0x236030: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x236030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_236034:
    // 0x236034: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x236034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_236038:
    // 0x236038: 0xc0644f8  jal         func_1913E0
label_23603c:
    if (ctx->pc == 0x23603Cu) {
        ctx->pc = 0x236040u;
        goto label_236040;
    }
    ctx->pc = 0x236038u;
    SET_GPR_U32(ctx, 31, 0x236040u);
    ctx->pc = 0x1913E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1913E0u, 0x236038u, 0x236040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236040u;
label_236040:
    // 0x236040: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x236040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_236044:
    // 0x236044: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x236044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_236048:
    // 0x236048: 0xc119c5c  jal         func_467170
label_23604c:
    if (ctx->pc == 0x23604Cu) {
        ctx->pc = 0x236050u;
        goto label_236050;
    }
    ctx->pc = 0x236048u;
    SET_GPR_U32(ctx, 31, 0x236050u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x236048u, 0x236050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236050u;
label_236050:
    // 0x236050: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x236050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_236054:
    // 0x236054: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x236054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_236058:
    // 0x236058: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x236058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23605c:
    // 0x23605c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x23605cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_236060:
    // 0x236060: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_236064:
    if (ctx->pc == 0x236064u) {
        ctx->pc = 0x236068u;
        goto label_236068;
    }
    ctx->pc = 0x236060u;
    {
        const bool branch_taken_0x236060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236060) {
            ctx->pc = 0x236090u;
            goto label_236090;
        }
    }
    ctx->pc = 0x236068u;
label_236068:
    // 0x236068: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x236068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23606c:
    // 0x23606c: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x23606cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_236070:
    // 0x236070: 0xc08d848  jal         func_236120
label_236074:
    if (ctx->pc == 0x236074u) {
        ctx->pc = 0x236078u;
        goto label_236078;
    }
    ctx->pc = 0x236070u;
    SET_GPR_U32(ctx, 31, 0x236078u);
    ctx->pc = 0x236120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236120u, 0x236070u, 0x236078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236078u;
label_236078:
    // 0x236078: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x236078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23607c:
    // 0x23607c: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x23607cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_236080:
    // 0x236080: 0xc119c5c  jal         func_467170
label_236084:
    if (ctx->pc == 0x236084u) {
        ctx->pc = 0x236088u;
        goto label_236088;
    }
    ctx->pc = 0x236080u;
    SET_GPR_U32(ctx, 31, 0x236088u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x236080u, 0x236088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236088u;
label_236088:
    // 0x236088: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x236088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23608c:
    // 0x23608c: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x23608cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
label_236090:
    // 0x236090: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x236090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_236094:
    // 0x236094: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x236094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_236098:
    // 0x236098: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_23609c:
    if (ctx->pc == 0x23609Cu) {
        ctx->pc = 0x2360A0u;
        goto label_2360a0;
    }
    ctx->pc = 0x236098u;
    {
        const bool branch_taken_0x236098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236098) {
            ctx->pc = 0x2360C8u;
            goto label_2360c8;
        }
    }
    ctx->pc = 0x2360A0u;
label_2360a0:
    // 0x2360a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2360a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2360a4:
    // 0x2360a4: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x2360a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_2360a8:
    // 0x2360a8: 0xc08d838  jal         func_2360E0
label_2360ac:
    if (ctx->pc == 0x2360ACu) {
        ctx->pc = 0x2360B0u;
        goto label_2360b0;
    }
    ctx->pc = 0x2360A8u;
    SET_GPR_U32(ctx, 31, 0x2360B0u);
    ctx->pc = 0x2360E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2360E0u, 0x2360A8u, 0x2360B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2360B0u;
label_2360b0:
    // 0x2360b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2360b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2360b4:
    // 0x2360b4: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x2360b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_2360b8:
    // 0x2360b8: 0xc119c5c  jal         func_467170
label_2360bc:
    if (ctx->pc == 0x2360BCu) {
        ctx->pc = 0x2360C0u;
        goto label_2360c0;
    }
    ctx->pc = 0x2360B8u;
    SET_GPR_U32(ctx, 31, 0x2360C0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2360B8u, 0x2360C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2360C0u;
label_2360c0:
    // 0x2360c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2360c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2360c4:
    // 0x2360c4: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x2360c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_2360c8:
    // 0x2360c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2360c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2360cc:
    // 0x2360cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2360ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2360d0:
    // 0x2360d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2360d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2360d4:
    // 0x2360d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2360d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2360d8:
    // 0x2360d8: 0x3e00008  jr          $ra
label_2360dc:
    if (ctx->pc == 0x2360DCu) {
        ctx->pc = 0x2360E0u;
        goto label_fallthrough_0x2360d8;
    }
    ctx->pc = 0x2360D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2360D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2360d8:
    ctx->pc = 0x2360E0u;
}
