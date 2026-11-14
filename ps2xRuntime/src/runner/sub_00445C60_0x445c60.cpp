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

// Function: sub_00445C60
// Address: 0x445c60 - 0x446280
void sub_00445C60_0x445c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00445C60_0x445c60");
#endif

    switch (ctx->pc) {
        case 0x445c60u: goto label_445c60;
        case 0x445c64u: goto label_445c64;
        case 0x445c68u: goto label_445c68;
        case 0x445c6cu: goto label_445c6c;
        case 0x445c70u: goto label_445c70;
        case 0x445c74u: goto label_445c74;
        case 0x445c78u: goto label_445c78;
        case 0x445c7cu: goto label_445c7c;
        case 0x445c80u: goto label_445c80;
        case 0x445c84u: goto label_445c84;
        case 0x445c88u: goto label_445c88;
        case 0x445c8cu: goto label_445c8c;
        case 0x445c90u: goto label_445c90;
        case 0x445c94u: goto label_445c94;
        case 0x445c98u: goto label_445c98;
        case 0x445c9cu: goto label_445c9c;
        case 0x445ca0u: goto label_445ca0;
        case 0x445ca4u: goto label_445ca4;
        case 0x445ca8u: goto label_445ca8;
        case 0x445cacu: goto label_445cac;
        case 0x445cb0u: goto label_445cb0;
        case 0x445cb4u: goto label_445cb4;
        case 0x445cb8u: goto label_445cb8;
        case 0x445cbcu: goto label_445cbc;
        case 0x445cc0u: goto label_445cc0;
        case 0x445cc4u: goto label_445cc4;
        case 0x445cc8u: goto label_445cc8;
        case 0x445cccu: goto label_445ccc;
        case 0x445cd0u: goto label_445cd0;
        case 0x445cd4u: goto label_445cd4;
        case 0x445cd8u: goto label_445cd8;
        case 0x445cdcu: goto label_445cdc;
        case 0x445ce0u: goto label_445ce0;
        case 0x445ce4u: goto label_445ce4;
        case 0x445ce8u: goto label_445ce8;
        case 0x445cecu: goto label_445cec;
        case 0x445cf0u: goto label_445cf0;
        case 0x445cf4u: goto label_445cf4;
        case 0x445cf8u: goto label_445cf8;
        case 0x445cfcu: goto label_445cfc;
        case 0x445d00u: goto label_445d00;
        case 0x445d04u: goto label_445d04;
        case 0x445d08u: goto label_445d08;
        case 0x445d0cu: goto label_445d0c;
        case 0x445d10u: goto label_445d10;
        case 0x445d14u: goto label_445d14;
        case 0x445d18u: goto label_445d18;
        case 0x445d1cu: goto label_445d1c;
        case 0x445d20u: goto label_445d20;
        case 0x445d24u: goto label_445d24;
        case 0x445d28u: goto label_445d28;
        case 0x445d2cu: goto label_445d2c;
        case 0x445d30u: goto label_445d30;
        case 0x445d34u: goto label_445d34;
        case 0x445d38u: goto label_445d38;
        case 0x445d3cu: goto label_445d3c;
        case 0x445d40u: goto label_445d40;
        case 0x445d44u: goto label_445d44;
        case 0x445d48u: goto label_445d48;
        case 0x445d4cu: goto label_445d4c;
        case 0x445d50u: goto label_445d50;
        case 0x445d54u: goto label_445d54;
        case 0x445d58u: goto label_445d58;
        case 0x445d5cu: goto label_445d5c;
        case 0x445d60u: goto label_445d60;
        case 0x445d64u: goto label_445d64;
        case 0x445d68u: goto label_445d68;
        case 0x445d6cu: goto label_445d6c;
        case 0x445d70u: goto label_445d70;
        case 0x445d74u: goto label_445d74;
        case 0x445d78u: goto label_445d78;
        case 0x445d7cu: goto label_445d7c;
        case 0x445d80u: goto label_445d80;
        case 0x445d84u: goto label_445d84;
        case 0x445d88u: goto label_445d88;
        case 0x445d8cu: goto label_445d8c;
        case 0x445d90u: goto label_445d90;
        case 0x445d94u: goto label_445d94;
        case 0x445d98u: goto label_445d98;
        case 0x445d9cu: goto label_445d9c;
        case 0x445da0u: goto label_445da0;
        case 0x445da4u: goto label_445da4;
        case 0x445da8u: goto label_445da8;
        case 0x445dacu: goto label_445dac;
        case 0x445db0u: goto label_445db0;
        case 0x445db4u: goto label_445db4;
        case 0x445db8u: goto label_445db8;
        case 0x445dbcu: goto label_445dbc;
        case 0x445dc0u: goto label_445dc0;
        case 0x445dc4u: goto label_445dc4;
        case 0x445dc8u: goto label_445dc8;
        case 0x445dccu: goto label_445dcc;
        case 0x445dd0u: goto label_445dd0;
        case 0x445dd4u: goto label_445dd4;
        case 0x445dd8u: goto label_445dd8;
        case 0x445ddcu: goto label_445ddc;
        case 0x445de0u: goto label_445de0;
        case 0x445de4u: goto label_445de4;
        case 0x445de8u: goto label_445de8;
        case 0x445decu: goto label_445dec;
        case 0x445df0u: goto label_445df0;
        case 0x445df4u: goto label_445df4;
        case 0x445df8u: goto label_445df8;
        case 0x445dfcu: goto label_445dfc;
        case 0x445e00u: goto label_445e00;
        case 0x445e04u: goto label_445e04;
        case 0x445e08u: goto label_445e08;
        case 0x445e0cu: goto label_445e0c;
        case 0x445e10u: goto label_445e10;
        case 0x445e14u: goto label_445e14;
        case 0x445e18u: goto label_445e18;
        case 0x445e1cu: goto label_445e1c;
        case 0x445e20u: goto label_445e20;
        case 0x445e24u: goto label_445e24;
        case 0x445e28u: goto label_445e28;
        case 0x445e2cu: goto label_445e2c;
        case 0x445e30u: goto label_445e30;
        case 0x445e34u: goto label_445e34;
        case 0x445e38u: goto label_445e38;
        case 0x445e3cu: goto label_445e3c;
        case 0x445e40u: goto label_445e40;
        case 0x445e44u: goto label_445e44;
        case 0x445e48u: goto label_445e48;
        case 0x445e4cu: goto label_445e4c;
        case 0x445e50u: goto label_445e50;
        case 0x445e54u: goto label_445e54;
        case 0x445e58u: goto label_445e58;
        case 0x445e5cu: goto label_445e5c;
        case 0x445e60u: goto label_445e60;
        case 0x445e64u: goto label_445e64;
        case 0x445e68u: goto label_445e68;
        case 0x445e6cu: goto label_445e6c;
        case 0x445e70u: goto label_445e70;
        case 0x445e74u: goto label_445e74;
        case 0x445e78u: goto label_445e78;
        case 0x445e7cu: goto label_445e7c;
        case 0x445e80u: goto label_445e80;
        case 0x445e84u: goto label_445e84;
        case 0x445e88u: goto label_445e88;
        case 0x445e8cu: goto label_445e8c;
        case 0x445e90u: goto label_445e90;
        case 0x445e94u: goto label_445e94;
        case 0x445e98u: goto label_445e98;
        case 0x445e9cu: goto label_445e9c;
        case 0x445ea0u: goto label_445ea0;
        case 0x445ea4u: goto label_445ea4;
        case 0x445ea8u: goto label_445ea8;
        case 0x445eacu: goto label_445eac;
        case 0x445eb0u: goto label_445eb0;
        case 0x445eb4u: goto label_445eb4;
        case 0x445eb8u: goto label_445eb8;
        case 0x445ebcu: goto label_445ebc;
        case 0x445ec0u: goto label_445ec0;
        case 0x445ec4u: goto label_445ec4;
        case 0x445ec8u: goto label_445ec8;
        case 0x445eccu: goto label_445ecc;
        case 0x445ed0u: goto label_445ed0;
        case 0x445ed4u: goto label_445ed4;
        case 0x445ed8u: goto label_445ed8;
        case 0x445edcu: goto label_445edc;
        case 0x445ee0u: goto label_445ee0;
        case 0x445ee4u: goto label_445ee4;
        case 0x445ee8u: goto label_445ee8;
        case 0x445eecu: goto label_445eec;
        case 0x445ef0u: goto label_445ef0;
        case 0x445ef4u: goto label_445ef4;
        case 0x445ef8u: goto label_445ef8;
        case 0x445efcu: goto label_445efc;
        case 0x445f00u: goto label_445f00;
        case 0x445f04u: goto label_445f04;
        case 0x445f08u: goto label_445f08;
        case 0x445f0cu: goto label_445f0c;
        case 0x445f10u: goto label_445f10;
        case 0x445f14u: goto label_445f14;
        case 0x445f18u: goto label_445f18;
        case 0x445f1cu: goto label_445f1c;
        case 0x445f20u: goto label_445f20;
        case 0x445f24u: goto label_445f24;
        case 0x445f28u: goto label_445f28;
        case 0x445f2cu: goto label_445f2c;
        case 0x445f30u: goto label_445f30;
        case 0x445f34u: goto label_445f34;
        case 0x445f38u: goto label_445f38;
        case 0x445f3cu: goto label_445f3c;
        case 0x445f40u: goto label_445f40;
        case 0x445f44u: goto label_445f44;
        case 0x445f48u: goto label_445f48;
        case 0x445f4cu: goto label_445f4c;
        case 0x445f50u: goto label_445f50;
        case 0x445f54u: goto label_445f54;
        case 0x445f58u: goto label_445f58;
        case 0x445f5cu: goto label_445f5c;
        case 0x445f60u: goto label_445f60;
        case 0x445f64u: goto label_445f64;
        case 0x445f68u: goto label_445f68;
        case 0x445f6cu: goto label_445f6c;
        case 0x445f70u: goto label_445f70;
        case 0x445f74u: goto label_445f74;
        case 0x445f78u: goto label_445f78;
        case 0x445f7cu: goto label_445f7c;
        case 0x445f80u: goto label_445f80;
        case 0x445f84u: goto label_445f84;
        case 0x445f88u: goto label_445f88;
        case 0x445f8cu: goto label_445f8c;
        case 0x445f90u: goto label_445f90;
        case 0x445f94u: goto label_445f94;
        case 0x445f98u: goto label_445f98;
        case 0x445f9cu: goto label_445f9c;
        case 0x445fa0u: goto label_445fa0;
        case 0x445fa4u: goto label_445fa4;
        case 0x445fa8u: goto label_445fa8;
        case 0x445facu: goto label_445fac;
        case 0x445fb0u: goto label_445fb0;
        case 0x445fb4u: goto label_445fb4;
        case 0x445fb8u: goto label_445fb8;
        case 0x445fbcu: goto label_445fbc;
        case 0x445fc0u: goto label_445fc0;
        case 0x445fc4u: goto label_445fc4;
        case 0x445fc8u: goto label_445fc8;
        case 0x445fccu: goto label_445fcc;
        case 0x445fd0u: goto label_445fd0;
        case 0x445fd4u: goto label_445fd4;
        case 0x445fd8u: goto label_445fd8;
        case 0x445fdcu: goto label_445fdc;
        case 0x445fe0u: goto label_445fe0;
        case 0x445fe4u: goto label_445fe4;
        case 0x445fe8u: goto label_445fe8;
        case 0x445fecu: goto label_445fec;
        case 0x445ff0u: goto label_445ff0;
        case 0x445ff4u: goto label_445ff4;
        case 0x445ff8u: goto label_445ff8;
        case 0x445ffcu: goto label_445ffc;
        case 0x446000u: goto label_446000;
        case 0x446004u: goto label_446004;
        case 0x446008u: goto label_446008;
        case 0x44600cu: goto label_44600c;
        case 0x446010u: goto label_446010;
        case 0x446014u: goto label_446014;
        case 0x446018u: goto label_446018;
        case 0x44601cu: goto label_44601c;
        case 0x446020u: goto label_446020;
        case 0x446024u: goto label_446024;
        case 0x446028u: goto label_446028;
        case 0x44602cu: goto label_44602c;
        case 0x446030u: goto label_446030;
        case 0x446034u: goto label_446034;
        case 0x446038u: goto label_446038;
        case 0x44603cu: goto label_44603c;
        case 0x446040u: goto label_446040;
        case 0x446044u: goto label_446044;
        case 0x446048u: goto label_446048;
        case 0x44604cu: goto label_44604c;
        case 0x446050u: goto label_446050;
        case 0x446054u: goto label_446054;
        case 0x446058u: goto label_446058;
        case 0x44605cu: goto label_44605c;
        case 0x446060u: goto label_446060;
        case 0x446064u: goto label_446064;
        case 0x446068u: goto label_446068;
        case 0x44606cu: goto label_44606c;
        case 0x446070u: goto label_446070;
        case 0x446074u: goto label_446074;
        case 0x446078u: goto label_446078;
        case 0x44607cu: goto label_44607c;
        case 0x446080u: goto label_446080;
        case 0x446084u: goto label_446084;
        case 0x446088u: goto label_446088;
        case 0x44608cu: goto label_44608c;
        case 0x446090u: goto label_446090;
        case 0x446094u: goto label_446094;
        case 0x446098u: goto label_446098;
        case 0x44609cu: goto label_44609c;
        case 0x4460a0u: goto label_4460a0;
        case 0x4460a4u: goto label_4460a4;
        case 0x4460a8u: goto label_4460a8;
        case 0x4460acu: goto label_4460ac;
        case 0x4460b0u: goto label_4460b0;
        case 0x4460b4u: goto label_4460b4;
        case 0x4460b8u: goto label_4460b8;
        case 0x4460bcu: goto label_4460bc;
        case 0x4460c0u: goto label_4460c0;
        case 0x4460c4u: goto label_4460c4;
        case 0x4460c8u: goto label_4460c8;
        case 0x4460ccu: goto label_4460cc;
        case 0x4460d0u: goto label_4460d0;
        case 0x4460d4u: goto label_4460d4;
        case 0x4460d8u: goto label_4460d8;
        case 0x4460dcu: goto label_4460dc;
        case 0x4460e0u: goto label_4460e0;
        case 0x4460e4u: goto label_4460e4;
        case 0x4460e8u: goto label_4460e8;
        case 0x4460ecu: goto label_4460ec;
        case 0x4460f0u: goto label_4460f0;
        case 0x4460f4u: goto label_4460f4;
        case 0x4460f8u: goto label_4460f8;
        case 0x4460fcu: goto label_4460fc;
        case 0x446100u: goto label_446100;
        case 0x446104u: goto label_446104;
        case 0x446108u: goto label_446108;
        case 0x44610cu: goto label_44610c;
        case 0x446110u: goto label_446110;
        case 0x446114u: goto label_446114;
        case 0x446118u: goto label_446118;
        case 0x44611cu: goto label_44611c;
        case 0x446120u: goto label_446120;
        case 0x446124u: goto label_446124;
        case 0x446128u: goto label_446128;
        case 0x44612cu: goto label_44612c;
        case 0x446130u: goto label_446130;
        case 0x446134u: goto label_446134;
        case 0x446138u: goto label_446138;
        case 0x44613cu: goto label_44613c;
        case 0x446140u: goto label_446140;
        case 0x446144u: goto label_446144;
        case 0x446148u: goto label_446148;
        case 0x44614cu: goto label_44614c;
        case 0x446150u: goto label_446150;
        case 0x446154u: goto label_446154;
        case 0x446158u: goto label_446158;
        case 0x44615cu: goto label_44615c;
        case 0x446160u: goto label_446160;
        case 0x446164u: goto label_446164;
        case 0x446168u: goto label_446168;
        case 0x44616cu: goto label_44616c;
        case 0x446170u: goto label_446170;
        case 0x446174u: goto label_446174;
        case 0x446178u: goto label_446178;
        case 0x44617cu: goto label_44617c;
        case 0x446180u: goto label_446180;
        case 0x446184u: goto label_446184;
        case 0x446188u: goto label_446188;
        case 0x44618cu: goto label_44618c;
        case 0x446190u: goto label_446190;
        case 0x446194u: goto label_446194;
        case 0x446198u: goto label_446198;
        case 0x44619cu: goto label_44619c;
        case 0x4461a0u: goto label_4461a0;
        case 0x4461a4u: goto label_4461a4;
        case 0x4461a8u: goto label_4461a8;
        case 0x4461acu: goto label_4461ac;
        case 0x4461b0u: goto label_4461b0;
        case 0x4461b4u: goto label_4461b4;
        case 0x4461b8u: goto label_4461b8;
        case 0x4461bcu: goto label_4461bc;
        case 0x4461c0u: goto label_4461c0;
        case 0x4461c4u: goto label_4461c4;
        case 0x4461c8u: goto label_4461c8;
        case 0x4461ccu: goto label_4461cc;
        case 0x4461d0u: goto label_4461d0;
        case 0x4461d4u: goto label_4461d4;
        case 0x4461d8u: goto label_4461d8;
        case 0x4461dcu: goto label_4461dc;
        case 0x4461e0u: goto label_4461e0;
        case 0x4461e4u: goto label_4461e4;
        case 0x4461e8u: goto label_4461e8;
        case 0x4461ecu: goto label_4461ec;
        case 0x4461f0u: goto label_4461f0;
        case 0x4461f4u: goto label_4461f4;
        case 0x4461f8u: goto label_4461f8;
        case 0x4461fcu: goto label_4461fc;
        case 0x446200u: goto label_446200;
        case 0x446204u: goto label_446204;
        case 0x446208u: goto label_446208;
        case 0x44620cu: goto label_44620c;
        case 0x446210u: goto label_446210;
        case 0x446214u: goto label_446214;
        case 0x446218u: goto label_446218;
        case 0x44621cu: goto label_44621c;
        case 0x446220u: goto label_446220;
        case 0x446224u: goto label_446224;
        case 0x446228u: goto label_446228;
        case 0x44622cu: goto label_44622c;
        case 0x446230u: goto label_446230;
        case 0x446234u: goto label_446234;
        case 0x446238u: goto label_446238;
        case 0x44623cu: goto label_44623c;
        case 0x446240u: goto label_446240;
        case 0x446244u: goto label_446244;
        case 0x446248u: goto label_446248;
        case 0x44624cu: goto label_44624c;
        case 0x446250u: goto label_446250;
        case 0x446254u: goto label_446254;
        case 0x446258u: goto label_446258;
        case 0x44625cu: goto label_44625c;
        case 0x446260u: goto label_446260;
        case 0x446264u: goto label_446264;
        case 0x446268u: goto label_446268;
        case 0x44626cu: goto label_44626c;
        case 0x446270u: goto label_446270;
        case 0x446274u: goto label_446274;
        case 0x446278u: goto label_446278;
        case 0x44627cu: goto label_44627c;
        default: break;
    }

    ctx->pc = 0x445c60u;

label_445c60:
    // 0x445c60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x445c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_445c64:
    // 0x445c64: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x445c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_445c68:
    // 0x445c68: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x445c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_445c6c:
    // 0x445c6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x445c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_445c70:
    // 0x445c70: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x445c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_445c74:
    // 0x445c74: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x445c74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_445c78:
    // 0x445c78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x445c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_445c7c:
    // 0x445c7c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_445c80:
    if (ctx->pc == 0x445C80u) {
        ctx->pc = 0x445C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445C7Cu;
        // 0x445c80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445C84u;
        goto label_445c84;
    }
    ctx->pc = 0x445C7Cu;
    {
        const bool branch_taken_0x445c7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x445C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445C7Cu;
        // 0x445c80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445c7c) {
            ctx->pc = 0x445C9Cu;
            goto label_445c9c;
        }
    }
    ctx->pc = 0x445C84u;
label_445c84:
    // 0x445c84: 0x8f84af20  lw          $a0, -0x50E0($gp)
    ctx->pc = 0x445c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
label_445c88:
    // 0x445c88: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x445c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_445c8c:
    // 0x445c8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_445c90:
    if (ctx->pc == 0x445C90u) {
        ctx->pc = 0x445C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445C8Cu;
        // 0x445c90: 0x3c120062  lui         $s2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445C94u;
        goto label_445c94;
    }
    ctx->pc = 0x445C8Cu;
    {
        const bool branch_taken_0x445c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x445C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445C8Cu;
        // 0x445c90: 0x3c120062  lui         $s2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445c8c) {
            ctx->pc = 0x445CA0u;
            goto label_445ca0;
        }
    }
    ctx->pc = 0x445C94u;
label_445c94:
    // 0x445c94: 0xc113224  jal         func_44C890
label_445c98:
    if (ctx->pc == 0x445C98u) {
        ctx->pc = 0x445C9Cu;
        goto label_445c9c;
    }
    ctx->pc = 0x445C94u;
    SET_GPR_U32(ctx, 31, 0x445C9Cu);
    ctx->pc = 0x44C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C890u, 0x445C94u, 0x445C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445C9Cu;
label_445c9c:
    // 0x445c9c: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x445c9cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
label_445ca0:
    // 0x445ca0: 0x8f83af20  lw          $v1, -0x50E0($gp)
    ctx->pc = 0x445ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
label_445ca4:
    // 0x445ca4: 0x26514080  addiu       $s1, $s2, 0x4080
    ctx->pc = 0x445ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16512));
label_445ca8:
    // 0x445ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x445ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_445cac:
    // 0x445cac: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x445cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_445cb0:
    // 0x445cb0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x445cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_445cb4:
    // 0x445cb4: 0xae330010  sw          $s3, 0x10($s1)
    ctx->pc = 0x445cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 19));
label_445cb8:
    // 0x445cb8: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x445cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_445cbc:
    // 0x445cbc: 0xae504080  sw          $s0, 0x4080($s2)
    ctx->pc = 0x445cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16512), GPR_U32(ctx, 16));
label_445cc0:
    // 0x445cc0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x445cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_445cc4:
    // 0x445cc4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x445cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_445cc8:
    // 0x445cc8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x445cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_445ccc:
    // 0x445ccc: 0x40f809  jalr        $v0
label_445cd0:
    if (ctx->pc == 0x445CD0u) {
        ctx->pc = 0x445CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445CCCu;
        // 0x445cd0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445CD4u;
        goto label_445cd4;
    }
    ctx->pc = 0x445CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x445CD4u);
        ctx->pc = 0x445CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445CCCu;
        // 0x445cd0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445CCCu, 0x445CD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x445CD4u;
label_445cd4:
    // 0x445cd4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_445cd8:
    if (ctx->pc == 0x445CD8u) {
        ctx->pc = 0x445CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445CD4u;
        // 0x445cd8: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445CDCu;
        goto label_445cdc;
    }
    ctx->pc = 0x445CD4u;
    {
        const bool branch_taken_0x445cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x445cd4) {
            ctx->pc = 0x445CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x445CD4u;
            // 0x445cd8: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445CE0u;
            goto label_445ce0;
        }
    }
    ctx->pc = 0x445CDCu;
label_445cdc:
    // 0x445cdc: 0x0  nop
    ctx->pc = 0x445cdcu;
    // NOP
label_445ce0:
    // 0x445ce0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x445ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_445ce4:
    // 0x445ce4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x445ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_445ce8:
    // 0x445ce8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_445cec:
    if (ctx->pc == 0x445CECu) {
        ctx->pc = 0x445CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445CE8u;
        // 0x445cec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445CF0u;
        goto label_445cf0;
    }
    ctx->pc = 0x445CE8u;
    {
        const bool branch_taken_0x445ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x445CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445CE8u;
        // 0x445cec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445ce8) {
            ctx->pc = 0x445CFCu;
            goto label_445cfc;
        }
    }
    ctx->pc = 0x445CF0u;
label_445cf0:
    // 0x445cf0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x445cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_445cf4:
    // 0x445cf4: 0xc111448  jal         func_445120
label_445cf8:
    if (ctx->pc == 0x445CF8u) {
        ctx->pc = 0x445CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445CF4u;
        // 0x445cf8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445CFCu;
        goto label_445cfc;
    }
    ctx->pc = 0x445CF4u;
    SET_GPR_U32(ctx, 31, 0x445CFCu);
    ctx->pc = 0x445CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445CF4u;
    // 0x445cf8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445120u, 0x445CF4u, 0x445CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445CFCu;
label_445cfc:
    // 0x445cfc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x445cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_445d00:
    // 0x445d00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x445d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_445d04:
    // 0x445d04: 0xae404080  sw          $zero, 0x4080($s2)
    ctx->pc = 0x445d04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16512), GPR_U32(ctx, 0));
label_445d08:
    // 0x445d08: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x445d08u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
label_445d0c:
    // 0x445d0c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x445d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_445d10:
    // 0x445d10: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x445d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_445d14:
    // 0x445d14: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x445d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_445d18:
    // 0x445d18: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x445d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_445d1c:
    // 0x445d1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x445d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_445d20:
    // 0x445d20: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x445d20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_445d24:
    // 0x445d24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x445d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_445d28:
    // 0x445d28: 0x3e00008  jr          $ra
label_445d2c:
    if (ctx->pc == 0x445D2Cu) {
        ctx->pc = 0x445D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445D28u;
        // 0x445d2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445D30u;
        goto label_445d30;
    }
    ctx->pc = 0x445D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445D28u;
        // 0x445d2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x445D30u;
label_445d30:
    // 0x445d30: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x445d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_445d34:
    // 0x445d34: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x445d34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_445d38:
    // 0x445d38: 0x8c464080  lw          $a2, 0x4080($v0)
    ctx->pc = 0x445d38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16512)));
label_445d3c:
    // 0x445d3c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x445d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_445d40:
    // 0x445d40: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x445d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_445d44:
    // 0x445d44: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x445d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_445d48:
    // 0x445d48: 0xacc80010  sw          $t0, 0x10($a2)
    ctx->pc = 0x445d48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 8));
label_445d4c:
    // 0x445d4c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x445d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_445d50:
    // 0x445d50: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x445d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_445d54:
    // 0x445d54: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x445d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
label_445d58:
    // 0x445d58: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x445d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_445d5c:
    // 0x445d5c: 0x3e00008  jr          $ra
label_445d60:
    if (ctx->pc == 0x445D60u) {
        ctx->pc = 0x445D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445D5Cu;
        // 0x445d60: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445D64u;
        goto label_445d64;
    }
    ctx->pc = 0x445D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445D5Cu;
        // 0x445d60: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x445D64u;
label_445d64:
    // 0x445d64: 0x0  nop
    ctx->pc = 0x445d64u;
    // NOP
label_445d68:
    // 0x445d68: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x445d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_445d6c:
    // 0x445d6c: 0x3e00008  jr          $ra
label_445d70:
    if (ctx->pc == 0x445D70u) {
        ctx->pc = 0x445D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445D6Cu;
        // 0x445d70: 0xa4450002  sh          $a1, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445D74u;
        goto label_445d74;
    }
    ctx->pc = 0x445D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445D6Cu;
        // 0x445d70: 0xa4450002  sh          $a1, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x445D74u;
label_445d74:
    // 0x445d74: 0x0  nop
    ctx->pc = 0x445d74u;
    // NOP
label_445d78:
    // 0x445d78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x445d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_445d7c:
    // 0x445d7c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x445d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_445d80:
    // 0x445d80: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x445d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_445d84:
    // 0x445d84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x445d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_445d88:
    // 0x445d88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x445d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_445d8c:
    // 0x445d8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x445d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_445d90:
    // 0x445d90: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x445d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_445d94:
    // 0x445d94: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x445d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_445d98:
    // 0x445d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x445d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_445d9c:
    // 0x445d9c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x445d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_445da0:
    // 0x445da0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_445da4:
    if (ctx->pc == 0x445DA4u) {
        ctx->pc = 0x445DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445DA0u;
        // 0x445da4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445DA8u;
        goto label_445da8;
    }
    ctx->pc = 0x445DA0u;
    {
        const bool branch_taken_0x445da0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x445DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445DA0u;
        // 0x445da4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445da0) {
            ctx->pc = 0x445DCCu;
            goto label_445dcc;
        }
    }
    ctx->pc = 0x445DA8u;
label_445da8:
    // 0x445da8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x445da8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_445dac:
    // 0x445dac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x445dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_445db0:
    // 0x445db0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_445db4:
    if (ctx->pc == 0x445DB4u) {
        ctx->pc = 0x445DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445DB0u;
        // 0x445db4: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445DB8u;
        goto label_445db8;
    }
    ctx->pc = 0x445DB0u;
    {
        const bool branch_taken_0x445db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x445db0) {
            ctx->pc = 0x445DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x445DB0u;
            // 0x445db4: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445DD0u;
            goto label_445dd0;
        }
    }
    ctx->pc = 0x445DB8u;
label_445db8:
    // 0x445db8: 0x50b10005  beql        $a1, $s1, . + 4 + (0x5 << 2)
label_445dbc:
    if (ctx->pc == 0x445DBCu) {
        ctx->pc = 0x445DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445DB8u;
        // 0x445dbc: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445DC0u;
        goto label_445dc0;
    }
    ctx->pc = 0x445DB8u;
    {
        const bool branch_taken_0x445db8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        if (branch_taken_0x445db8) {
            ctx->pc = 0x445DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x445DB8u;
            // 0x445dbc: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445DD0u;
            goto label_445dd0;
        }
    }
    ctx->pc = 0x445DC0u;
label_445dc0:
    // 0x445dc0: 0xc112fc8  jal         func_44BF20
label_445dc4:
    if (ctx->pc == 0x445DC4u) {
        ctx->pc = 0x445DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445DC0u;
        // 0x445dc4: 0x8f84af20  lw          $a0, -0x50E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445DC8u;
        goto label_445dc8;
    }
    ctx->pc = 0x445DC0u;
    SET_GPR_U32(ctx, 31, 0x445DC8u);
    ctx->pc = 0x445DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445DC0u;
    // 0x445dc4: 0x8f84af20  lw          $a0, -0x50E0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BF20u, 0x445DC0u, 0x445DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445DC8u;
label_445dc8:
    // 0x445dc8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x445dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_445dcc:
    // 0x445dcc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x445dccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_445dd0:
    // 0x445dd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x445dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_445dd4:
    // 0x445dd4: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x445dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_445dd8:
    // 0x445dd8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x445dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_445ddc:
    // 0x445ddc: 0xa6130002  sh          $s3, 0x2($s0)
    ctx->pc = 0x445ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 19));
label_445de0:
    // 0x445de0: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x445de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
label_445de4:
    // 0x445de4: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x445de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_445de8:
    // 0x445de8: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x445de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_445dec:
    // 0x445dec: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x445decu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_445df0:
    // 0x445df0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x445df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_445df4:
    // 0x445df4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x445df4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_445df8:
    // 0x445df8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x445df8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_445dfc:
    // 0x445dfc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x445dfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_445e00:
    // 0x445e00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x445e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_445e04:
    // 0x445e04: 0x3e00008  jr          $ra
label_445e08:
    if (ctx->pc == 0x445E08u) {
        ctx->pc = 0x445E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445E04u;
        // 0x445e08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445E0Cu;
        goto label_445e0c;
    }
    ctx->pc = 0x445E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445E04u;
        // 0x445e08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x445E0Cu;
label_445e0c:
    // 0x445e0c: 0x0  nop
    ctx->pc = 0x445e0cu;
    // NOP
label_445e10:
    // 0x445e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x445e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_445e14:
    // 0x445e14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x445e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_445e18:
    // 0x445e18: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x445e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_445e1c:
    // 0x445e1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x445e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_445e20:
    // 0x445e20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x445e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_445e24:
    // 0x445e24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x445e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_445e28:
    // 0x445e28: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x445e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_445e2c:
    // 0x445e2c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x445e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_445e30:
    // 0x445e30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x445e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_445e34:
    // 0x445e34: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x445e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_445e38:
    // 0x445e38: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_445e3c:
    if (ctx->pc == 0x445E3Cu) {
        ctx->pc = 0x445E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445E38u;
        // 0x445e3c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445E40u;
        goto label_445e40;
    }
    ctx->pc = 0x445E38u;
    {
        const bool branch_taken_0x445e38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x445E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445E38u;
        // 0x445e3c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445e38) {
            ctx->pc = 0x445E64u;
            goto label_445e64;
        }
    }
    ctx->pc = 0x445E40u;
label_445e40:
    // 0x445e40: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x445e40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_445e44:
    // 0x445e44: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x445e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_445e48:
    // 0x445e48: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_445e4c:
    if (ctx->pc == 0x445E4Cu) {
        ctx->pc = 0x445E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445E48u;
        // 0x445e4c: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445E50u;
        goto label_445e50;
    }
    ctx->pc = 0x445E48u;
    {
        const bool branch_taken_0x445e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x445e48) {
            ctx->pc = 0x445E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x445E48u;
            // 0x445e4c: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445E68u;
            goto label_445e68;
        }
    }
    ctx->pc = 0x445E50u;
label_445e50:
    // 0x445e50: 0x50b10005  beql        $a1, $s1, . + 4 + (0x5 << 2)
label_445e54:
    if (ctx->pc == 0x445E54u) {
        ctx->pc = 0x445E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445E50u;
        // 0x445e54: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445E58u;
        goto label_445e58;
    }
    ctx->pc = 0x445E50u;
    {
        const bool branch_taken_0x445e50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        if (branch_taken_0x445e50) {
            ctx->pc = 0x445E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x445E50u;
            // 0x445e54: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445E68u;
            goto label_445e68;
        }
    }
    ctx->pc = 0x445E58u;
label_445e58:
    // 0x445e58: 0xc112fc8  jal         func_44BF20
label_445e5c:
    if (ctx->pc == 0x445E5Cu) {
        ctx->pc = 0x445E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445E58u;
        // 0x445e5c: 0x8f84af20  lw          $a0, -0x50E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445E60u;
        goto label_445e60;
    }
    ctx->pc = 0x445E58u;
    SET_GPR_U32(ctx, 31, 0x445E60u);
    ctx->pc = 0x445E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445E58u;
    // 0x445e5c: 0x8f84af20  lw          $a0, -0x50E0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BF20u, 0x445E58u, 0x445E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445E60u;
label_445e60:
    // 0x445e60: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x445e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_445e64:
    // 0x445e64: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x445e64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_445e68:
    // 0x445e68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x445e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_445e6c:
    // 0x445e6c: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x445e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_445e70:
    // 0x445e70: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x445e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_445e74:
    // 0x445e74: 0xa6130002  sh          $s3, 0x2($s0)
    ctx->pc = 0x445e74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 19));
label_445e78:
    // 0x445e78: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x445e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
label_445e7c:
    // 0x445e7c: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x445e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_445e80:
    // 0x445e80: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x445e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_445e84:
    // 0x445e84: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x445e84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_445e88:
    // 0x445e88: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x445e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_445e8c:
    // 0x445e8c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x445e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_445e90:
    // 0x445e90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x445e90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_445e94:
    // 0x445e94: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x445e94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_445e98:
    // 0x445e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x445e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_445e9c:
    // 0x445e9c: 0x3e00008  jr          $ra
label_445ea0:
    if (ctx->pc == 0x445EA0u) {
        ctx->pc = 0x445EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445E9Cu;
        // 0x445ea0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445EA4u;
        goto label_445ea4;
    }
    ctx->pc = 0x445E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445E9Cu;
        // 0x445ea0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x445EA4u;
label_445ea4:
    // 0x445ea4: 0x0  nop
    ctx->pc = 0x445ea4u;
    // NOP
label_445ea8:
    // 0x445ea8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x445ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_445eac:
    // 0x445eac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x445eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_445eb0:
    // 0x445eb0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x445eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_445eb4:
    // 0x445eb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x445eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_445eb8:
    // 0x445eb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x445eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_445ebc:
    // 0x445ebc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x445ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_445ec0:
    // 0x445ec0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x445ec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_445ec4:
    // 0x445ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x445ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_445ec8:
    // 0x445ec8: 0x30d3ffff  andi        $s3, $a2, 0xFFFF
    ctx->pc = 0x445ec8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_445ecc:
    // 0x445ecc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x445eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_445ed0:
    // 0x445ed0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_445ed4:
    if (ctx->pc == 0x445ED4u) {
        ctx->pc = 0x445ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445ED0u;
        // 0x445ed4: 0x2538818  mult        $s1, $s2, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x445ED8u;
        goto label_445ed8;
    }
    ctx->pc = 0x445ED0u;
    {
        const bool branch_taken_0x445ed0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x445ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445ED0u;
        // 0x445ed4: 0x2538818  mult        $s1, $s2, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x445ed0) {
            ctx->pc = 0x445EF0u;
            goto label_445ef0;
        }
    }
    ctx->pc = 0x445ED8u;
label_445ed8:
    // 0x445ed8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x445ed8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_445edc:
    // 0x445edc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x445edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_445ee0:
    // 0x445ee0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_445ee4:
    if (ctx->pc == 0x445EE4u) {
        ctx->pc = 0x445EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445EE0u;
        // 0x445ee4: 0x8f84af20  lw          $a0, -0x50E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445EE8u;
        goto label_445ee8;
    }
    ctx->pc = 0x445EE0u;
    {
        const bool branch_taken_0x445ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x445EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445EE0u;
        // 0x445ee4: 0x8f84af20  lw          $a0, -0x50E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445ee0) {
            ctx->pc = 0x445EF4u;
            goto label_445ef4;
        }
    }
    ctx->pc = 0x445EE8u;
label_445ee8:
    // 0x445ee8: 0xc112fc8  jal         func_44BF20
label_445eec:
    if (ctx->pc == 0x445EECu) {
        ctx->pc = 0x445EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445EE8u;
        // 0x445eec: 0x8f84af20  lw          $a0, -0x50E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445EF0u;
        goto label_445ef0;
    }
    ctx->pc = 0x445EE8u;
    SET_GPR_U32(ctx, 31, 0x445EF0u);
    ctx->pc = 0x445EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445EE8u;
    // 0x445eec: 0x8f84af20  lw          $a0, -0x50E0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BF20u, 0x445EE8u, 0x445EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445EF0u;
label_445ef0:
    // 0x445ef0: 0x8f84af20  lw          $a0, -0x50E0($gp)
    ctx->pc = 0x445ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
label_445ef4:
    // 0x445ef4: 0xc113084  jal         func_44C210
label_445ef8:
    if (ctx->pc == 0x445EF8u) {
        ctx->pc = 0x445EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445EF4u;
        // 0x445ef8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445EFCu;
        goto label_445efc;
    }
    ctx->pc = 0x445EF4u;
    SET_GPR_U32(ctx, 31, 0x445EFCu);
    ctx->pc = 0x445EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445EF4u;
    // 0x445ef8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C210u, 0x445EF4u, 0x445EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445EFCu;
label_445efc:
    // 0x445efc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x445efcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_445f00:
    // 0x445f00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x445f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_445f04:
    // 0x445f04: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x445f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_445f08:
    // 0x445f08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x445f08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_445f0c:
    // 0x445f0c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x445f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_445f10:
    // 0x445f10: 0xa6130002  sh          $s3, 0x2($s0)
    ctx->pc = 0x445f10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 19));
label_445f14:
    // 0x445f14: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x445f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_445f18:
    // 0x445f18: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x445f18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_445f1c:
    // 0x445f1c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x445f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_445f20:
    // 0x445f20: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x445f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_445f24:
    // 0x445f24: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x445f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_445f28:
    // 0x445f28: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x445f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_445f2c:
    // 0x445f2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x445f2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_445f30:
    // 0x445f30: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x445f30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_445f34:
    // 0x445f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x445f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_445f38:
    // 0x445f38: 0x3e00008  jr          $ra
label_445f3c:
    if (ctx->pc == 0x445F3Cu) {
        ctx->pc = 0x445F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445F38u;
        // 0x445f3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445F40u;
        goto label_445f40;
    }
    ctx->pc = 0x445F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445F38u;
        // 0x445f3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x445F40u;
label_445f40:
    // 0x445f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x445f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_445f44:
    // 0x445f44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x445f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_445f48:
    // 0x445f48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x445f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_445f4c:
    // 0x445f4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x445f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_445f50:
    // 0x445f50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x445f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_445f54:
    // 0x445f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x445f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_445f58:
    // 0x445f58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x445f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_445f5c:
    // 0x445f5c: 0x8f84af20  lw          $a0, -0x50E0($gp)
    ctx->pc = 0x445f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
label_445f60:
    // 0x445f60: 0x96060002  lhu         $a2, 0x2($s0)
    ctx->pc = 0x445f60u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_445f64:
    // 0x445f64: 0x2260018  mult        $zero, $s1, $a2
    ctx->pc = 0x445f64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_445f68:
    // 0x445f68: 0x3012  mflo        $a2
    ctx->pc = 0x445f68u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_445f6c:
    // 0x445f6c: 0xc113250  jal         func_44C940
label_445f70:
    if (ctx->pc == 0x445F70u) {
        ctx->pc = 0x445F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445F6Cu;
        // 0x445f70: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445F74u;
        goto label_445f74;
    }
    ctx->pc = 0x445F6Cu;
    SET_GPR_U32(ctx, 31, 0x445F74u);
    ctx->pc = 0x445F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445F6Cu;
    // 0x445f70: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44C940u, 0x445F6Cu, 0x445F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445F74u;
label_445f74:
    // 0x445f74: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x445f74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_445f78:
    // 0x445f78: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x445f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_445f7c:
    // 0x445f7c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x445f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_445f80:
    // 0x445f80: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x445f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_445f84:
    // 0x445f84: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x445f84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_445f88:
    // 0x445f88: 0x224202b  sltu        $a0, $s1, $a0
    ctx->pc = 0x445f88u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_445f8c:
    // 0x445f8c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_445f90:
    if (ctx->pc == 0x445F90u) {
        ctx->pc = 0x445F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445F8Cu;
        // 0x445f90: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445F94u;
        goto label_445f94;
    }
    ctx->pc = 0x445F8Cu;
    {
        const bool branch_taken_0x445f8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x445F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445F8Cu;
        // 0x445f90: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445f8c) {
            ctx->pc = 0x445F98u;
            goto label_445f98;
        }
    }
    ctx->pc = 0x445F94u;
label_445f94:
    // 0x445f94: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x445f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
label_445f98:
    // 0x445f98: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x445f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_445f9c:
    // 0x445f9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x445f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_445fa0:
    // 0x445fa0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x445fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_445fa4:
    // 0x445fa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x445fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_445fa8:
    // 0x445fa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x445fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_445fac:
    // 0x445fac: 0x3e00008  jr          $ra
label_445fb0:
    if (ctx->pc == 0x445FB0u) {
        ctx->pc = 0x445FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445FACu;
        // 0x445fb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445FB4u;
        goto label_445fb4;
    }
    ctx->pc = 0x445FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445FACu;
        // 0x445fb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445FACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x445FB4u;
label_445fb4:
    // 0x445fb4: 0x0  nop
    ctx->pc = 0x445fb4u;
    // NOP
label_445fb8:
    // 0x445fb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x445fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_445fbc:
    // 0x445fbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x445fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_445fc0:
    // 0x445fc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x445fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_445fc4:
    // 0x445fc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x445fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_445fc8:
    // 0x445fc8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x445fc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_445fcc:
    // 0x445fcc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x445fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_445fd0:
    // 0x445fd0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_445fd4:
    if (ctx->pc == 0x445FD4u) {
        ctx->pc = 0x445FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445FD0u;
        // 0x445fd4: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445FD8u;
        goto label_445fd8;
    }
    ctx->pc = 0x445FD0u;
    {
        const bool branch_taken_0x445fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x445fd0) {
            ctx->pc = 0x445FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x445FD0u;
            // 0x445fd4: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x445FE8u;
            goto label_445fe8;
        }
    }
    ctx->pc = 0x445FD8u;
label_445fd8:
    // 0x445fd8: 0x8f84af20  lw          $a0, -0x50E0($gp)
    ctx->pc = 0x445fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946592)));
label_445fdc:
    // 0x445fdc: 0xc112fc8  jal         func_44BF20
label_445fe0:
    if (ctx->pc == 0x445FE0u) {
        ctx->pc = 0x445FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445FDCu;
        // 0x445fe0: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445FE4u;
        goto label_445fe4;
    }
    ctx->pc = 0x445FDCu;
    SET_GPR_U32(ctx, 31, 0x445FE4u);
    ctx->pc = 0x445FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445FDCu;
    // 0x445fe0: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44BF20u, 0x445FDCu, 0x445FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445FE4u;
label_445fe4:
    // 0x445fe4: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x445fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_445fe8:
    // 0x445fe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x445fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_445fec:
    // 0x445fec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x445fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_445ff0:
    // 0x445ff0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x445ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_445ff4:
    // 0x445ff4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x445ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_445ff8:
    // 0x445ff8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x445ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_445ffc:
    // 0x445ffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x445ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_446000:
    // 0x446000: 0x3e00008  jr          $ra
label_446004:
    if (ctx->pc == 0x446004u) {
        ctx->pc = 0x446004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446000u;
        // 0x446004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446008u;
        goto label_446008;
    }
    ctx->pc = 0x446000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x446004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446000u;
        // 0x446004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x446008u;
label_446008:
    // 0x446008: 0x3e00008  jr          $ra
label_44600c:
    if (ctx->pc == 0x44600Cu) {
        ctx->pc = 0x446010u;
        goto label_446010;
    }
    ctx->pc = 0x446008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x446010u;
label_446010:
    // 0x446010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x446010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_446014:
    // 0x446014: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_446018:
    if (ctx->pc == 0x446018u) {
        ctx->pc = 0x446018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446014u;
        // 0x446018: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44601Cu;
        goto label_44601c;
    }
    ctx->pc = 0x446014u;
    {
        const bool branch_taken_0x446014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x446018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446014u;
        // 0x446018: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446014) {
            ctx->pc = 0x44603Cu;
            goto label_44603c;
        }
    }
    ctx->pc = 0x44601Cu;
label_44601c:
    // 0x44601c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x44601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_446020:
    // 0x446020: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x446020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_446024:
    // 0x446024: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_446028:
    if (ctx->pc == 0x446028u) {
        ctx->pc = 0x446028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446024u;
        // 0x446028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44602Cu;
        goto label_44602c;
    }
    ctx->pc = 0x446024u;
    {
        const bool branch_taken_0x446024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x446024) {
            ctx->pc = 0x446028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446024u;
            // 0x446028: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446044u;
            goto label_446044;
        }
    }
    ctx->pc = 0x44602Cu;
label_44602c:
    // 0x44602c: 0x40f809  jalr        $v0
label_446030:
    if (ctx->pc == 0x446030u) {
        ctx->pc = 0x446034u;
        goto label_446034;
    }
    ctx->pc = 0x44602Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x446034u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44602Cu, 0x446034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x446034u;
label_446034:
    // 0x446034: 0x10000004  b           . + 4 + (0x4 << 2)
label_446038:
    if (ctx->pc == 0x446038u) {
        ctx->pc = 0x446038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446034u;
        // 0x446038: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44603Cu;
        goto label_44603c;
    }
    ctx->pc = 0x446034u;
    {
        const bool branch_taken_0x446034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446034u;
        // 0x446038: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446034) {
            ctx->pc = 0x446048u;
            goto label_446048;
        }
    }
    ctx->pc = 0x44603Cu;
label_44603c:
    // 0x44603c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x44603cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_446040:
    // 0x446040: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x446040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_446044:
    // 0x446044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x446044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_446048:
    // 0x446048: 0x3e00008  jr          $ra
label_44604c:
    if (ctx->pc == 0x44604Cu) {
        ctx->pc = 0x44604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446048u;
        // 0x44604c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446050u;
        goto label_446050;
    }
    ctx->pc = 0x446048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446048u;
        // 0x44604c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x446050u;
label_446050:
    // 0x446050: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x446050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_446054:
    // 0x446054: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x446054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_446058:
    // 0x446058: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x446058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_44605c:
    // 0x44605c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44605cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_446060:
    // 0x446060: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x446060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_446064:
    // 0x446064: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x446064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_446068:
    // 0x446068: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x446068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_44606c:
    // 0x44606c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x44606cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_446070:
    // 0x446070: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x446070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_446074:
    // 0x446074: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x446074u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_446078:
    // 0x446078: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x446078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_44607c:
    // 0x44607c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x44607cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_446080:
    // 0x446080: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
label_446084:
    if (ctx->pc == 0x446084u) {
        ctx->pc = 0x446084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446080u;
        // 0x446084: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446088u;
        goto label_446088;
    }
    ctx->pc = 0x446080u;
    {
        const bool branch_taken_0x446080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x446084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446080u;
        // 0x446084: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446080) {
            ctx->pc = 0x446128u;
            goto label_446128;
        }
    }
    ctx->pc = 0x446088u;
label_446088:
    // 0x446088: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
label_44608c:
    if (ctx->pc == 0x44608Cu) {
        ctx->pc = 0x44608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446088u;
        // 0x44608c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446090u;
        goto label_446090;
    }
    ctx->pc = 0x446088u;
    {
        const bool branch_taken_0x446088 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446088u;
        // 0x44608c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446088) {
            ctx->pc = 0x44612Cu;
            goto label_44612c;
        }
    }
    ctx->pc = 0x446090u;
label_446090:
    // 0x446090: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x446090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_446094:
    // 0x446094: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x446094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_446098:
    // 0x446098: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_44609c:
    if (ctx->pc == 0x44609Cu) {
        ctx->pc = 0x44609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446098u;
        // 0x44609c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4460A0u;
        goto label_4460a0;
    }
    ctx->pc = 0x446098u;
    {
        const bool branch_taken_0x446098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446098u;
        // 0x44609c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446098) {
            ctx->pc = 0x44612Cu;
            goto label_44612c;
        }
    }
    ctx->pc = 0x4460A0u;
label_4460a0:
    // 0x4460a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4460a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4460a4:
    // 0x4460a4: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x4460a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4460a8:
    // 0x4460a8: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x4460a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_4460ac:
    // 0x4460ac: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x4460acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4460b0:
    // 0x4460b0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x4460b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4460b4:
    // 0x4460b4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4460b8:
    if (ctx->pc == 0x4460B8u) {
        ctx->pc = 0x4460B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4460B4u;
        // 0x4460b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4460BCu;
        goto label_4460bc;
    }
    ctx->pc = 0x4460B4u;
    {
        const bool branch_taken_0x4460b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4460B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4460B4u;
        // 0x4460b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4460b4) {
            ctx->pc = 0x44612Cu;
            goto label_44612c;
        }
    }
    ctx->pc = 0x4460BCu;
label_4460bc:
    // 0x4460bc: 0x1280001b  beqz        $s4, . + 4 + (0x1B << 2)
label_4460c0:
    if (ctx->pc == 0x4460C0u) {
        ctx->pc = 0x4460C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4460BCu;
        // 0x4460c0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4460C4u;
        goto label_4460c4;
    }
    ctx->pc = 0x4460BCu;
    {
        const bool branch_taken_0x4460bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4460C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4460BCu;
        // 0x4460c0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4460bc) {
            ctx->pc = 0x44612Cu;
            goto label_44612c;
        }
    }
    ctx->pc = 0x4460C4u;
label_4460c4:
    // 0x4460c4: 0x24160028  addiu       $s6, $zero, 0x28
    ctx->pc = 0x4460c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4460c8:
    // 0x4460c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_4460cc:
    if (ctx->pc == 0x4460CCu) {
        ctx->pc = 0x4460CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4460C8u;
        // 0x4460cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4460D0u;
        goto label_4460d0;
    }
    ctx->pc = 0x4460C8u;
    {
        const bool branch_taken_0x4460c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4460CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4460C8u;
        // 0x4460cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4460c8) {
            ctx->pc = 0x4460D8u;
            goto label_4460d8;
        }
    }
    ctx->pc = 0x4460D0u;
label_4460d0:
    // 0x4460d0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4460d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4460d4:
    // 0x4460d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4460d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4460d8:
    // 0x4460d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4460d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4460dc:
    // 0x4460dc: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x4460dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4460e0:
    // 0x4460e0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_4460e4:
    if (ctx->pc == 0x4460E4u) {
        ctx->pc = 0x4460E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4460E0u;
        // 0x4460e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4460E8u;
        goto label_4460e8;
    }
    ctx->pc = 0x4460E0u;
    {
        const bool branch_taken_0x4460e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4460E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4460E0u;
        // 0x4460e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4460e0) {
            ctx->pc = 0x44612Cu;
            goto label_44612c;
        }
    }
    ctx->pc = 0x4460E8u;
label_4460e8:
    // 0x4460e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4460e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4460ec:
    // 0x4460ec: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4460ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4460f0:
    // 0x4460f0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x4460f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4460f4:
    // 0x4460f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4460f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4460f8:
    // 0x4460f8: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x4460f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4460fc:
    // 0x4460fc: 0x1060fff4  beqz        $v1, . + 4 + (-0xC << 2)
label_446100:
    if (ctx->pc == 0x446100u) {
        ctx->pc = 0x446100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4460FCu;
        // 0x446100: 0x561018  mult        $v0, $v0, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x446104u;
        goto label_446104;
    }
    ctx->pc = 0x4460FCu;
    {
        const bool branch_taken_0x4460fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x446100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4460FCu;
        // 0x446100: 0x561018  mult        $v0, $v0, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4460fc) {
            ctx->pc = 0x4460D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4460d0;
        }
    }
    ctx->pc = 0x446104u;
label_446104:
    // 0x446104: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x446104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_446108:
    // 0x446108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x446108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44610c:
    // 0x44610c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x44610cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_446110:
    // 0x446110: 0x280f809  jalr        $s4
label_446114:
    if (ctx->pc == 0x446114u) {
        ctx->pc = 0x446114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446110u;
        // 0x446114: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446118u;
        goto label_446118;
    }
    ctx->pc = 0x446110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x446118u);
        ctx->pc = 0x446114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446110u;
        // 0x446114: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446110u, 0x446118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x446118u;
label_446118:
    // 0x446118: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_44611c:
    if (ctx->pc == 0x44611Cu) {
        ctx->pc = 0x44611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446118u;
        // 0x44611c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446120u;
        goto label_446120;
    }
    ctx->pc = 0x446118u;
    {
        const bool branch_taken_0x446118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446118u;
        // 0x44611c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446118) {
            ctx->pc = 0x4460D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4460d4;
        }
    }
    ctx->pc = 0x446120u;
label_446120:
    // 0x446120: 0x10000002  b           . + 4 + (0x2 << 2)
label_446124:
    if (ctx->pc == 0x446124u) {
        ctx->pc = 0x446124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446120u;
        // 0x446124: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446128u;
        goto label_446128;
    }
    ctx->pc = 0x446120u;
    {
        const bool branch_taken_0x446120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446120u;
        // 0x446124: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446120) {
            ctx->pc = 0x44612Cu;
            goto label_44612c;
        }
    }
    ctx->pc = 0x446128u;
label_446128:
    // 0x446128: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x446128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44612c:
    // 0x44612c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x44612cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_446130:
    // 0x446130: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x446130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_446134:
    // 0x446134: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x446134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_446138:
    // 0x446138: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x446138u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_44613c:
    // 0x44613c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x44613cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_446140:
    // 0x446140: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x446140u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_446144:
    // 0x446144: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x446144u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_446148:
    // 0x446148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x446148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44614c:
    // 0x44614c: 0x3e00008  jr          $ra
label_446150:
    if (ctx->pc == 0x446150u) {
        ctx->pc = 0x446150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44614Cu;
        // 0x446150: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446154u;
        goto label_446154;
    }
    ctx->pc = 0x44614Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x446150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44614Cu;
        // 0x446150: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44614Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x446154u;
label_446154:
    // 0x446154: 0x0  nop
    ctx->pc = 0x446154u;
    // NOP
label_446158:
    // 0x446158: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x446158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44615c:
    // 0x44615c: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_446160:
    if (ctx->pc == 0x446160u) {
        ctx->pc = 0x446160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44615Cu;
        // 0x446160: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446164u;
        goto label_446164;
    }
    ctx->pc = 0x44615Cu;
    {
        const bool branch_taken_0x44615c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x446160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44615Cu;
        // 0x446160: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44615c) {
            ctx->pc = 0x4461A0u;
            goto label_4461a0;
        }
    }
    ctx->pc = 0x446164u;
label_446164:
    // 0x446164: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x446164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_446168:
    // 0x446168: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x446168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_44616c:
    // 0x44616c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x44616cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_446170:
    // 0x446170: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_446174:
    if (ctx->pc == 0x446174u) {
        ctx->pc = 0x446174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446170u;
        // 0x446174: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446178u;
        goto label_446178;
    }
    ctx->pc = 0x446170u;
    {
        const bool branch_taken_0x446170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446170u;
        // 0x446174: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446170) {
            ctx->pc = 0x4461A0u;
            goto label_4461a0;
        }
    }
    ctx->pc = 0x446178u;
label_446178:
    // 0x446178: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x446178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_44617c:
    // 0x44617c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x44617cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_446180:
    // 0x446180: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x446180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_446184:
    // 0x446184: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x446184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_446188:
    // 0x446188: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x446188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44618c:
    // 0x44618c: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
label_446190:
    if (ctx->pc == 0x446190u) {
        ctx->pc = 0x446190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44618Cu;
        // 0x446190: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446194u;
        goto label_446194;
    }
    ctx->pc = 0x44618Cu;
    {
        const bool branch_taken_0x44618c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x446190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44618Cu;
        // 0x446190: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44618c) {
            ctx->pc = 0x4461A0u;
            goto label_4461a0;
        }
    }
    ctx->pc = 0x446194u;
label_446194:
    // 0x446194: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x446194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_446198:
    // 0x446198: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x446198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_44619c:
    // 0x44619c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x44619cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4461a0:
    // 0x4461a0: 0x3e00008  jr          $ra
label_4461a4:
    if (ctx->pc == 0x4461A4u) {
        ctx->pc = 0x4461A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4461A0u;
        // 0x4461a4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4461A8u;
        goto label_4461a8;
    }
    ctx->pc = 0x4461A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4461A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4461A0u;
        // 0x4461a4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4461A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4461A8u;
label_4461a8:
    // 0x4461a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4461a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4461ac:
    // 0x4461ac: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_4461b0:
    if (ctx->pc == 0x4461B0u) {
        ctx->pc = 0x4461B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4461ACu;
        // 0x4461b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4461B4u;
        goto label_4461b4;
    }
    ctx->pc = 0x4461ACu;
    {
        const bool branch_taken_0x4461ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4461B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4461ACu;
        // 0x4461b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4461ac) {
            ctx->pc = 0x4461B8u;
            goto label_4461b8;
        }
    }
    ctx->pc = 0x4461B4u;
label_4461b4:
    // 0x4461b4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4461b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4461b8:
    // 0x4461b8: 0x3e00008  jr          $ra
label_4461bc:
    if (ctx->pc == 0x4461BCu) {
        ctx->pc = 0x4461C0u;
        goto label_4461c0;
    }
    ctx->pc = 0x4461B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4461B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4461C0u;
label_4461c0:
    // 0x4461c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4461c4:
    if (ctx->pc == 0x4461C4u) {
        ctx->pc = 0x4461C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4461C0u;
        // 0x4461c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4461C8u;
        goto label_4461c8;
    }
    ctx->pc = 0x4461C0u;
    {
        const bool branch_taken_0x4461c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4461C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4461C0u;
        // 0x4461c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4461c0) {
            ctx->pc = 0x4461D0u;
            goto label_4461d0;
        }
    }
    ctx->pc = 0x4461C8u;
label_4461c8:
    // 0x4461c8: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x4461c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_4461cc:
    // 0x4461cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4461ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4461d0:
    // 0x4461d0: 0x3e00008  jr          $ra
label_4461d4:
    if (ctx->pc == 0x4461D4u) {
        ctx->pc = 0x4461D8u;
        goto label_4461d8;
    }
    ctx->pc = 0x4461D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4461D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4461D8u;
label_4461d8:
    // 0x4461d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4461d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4461dc:
    // 0x4461dc: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_4461e0:
    if (ctx->pc == 0x4461E0u) {
        ctx->pc = 0x4461E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4461DCu;
        // 0x4461e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4461E4u;
        goto label_4461e4;
    }
    ctx->pc = 0x4461DCu;
    {
        const bool branch_taken_0x4461dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4461E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4461DCu;
        // 0x4461e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4461dc) {
            ctx->pc = 0x4461E8u;
            goto label_4461e8;
        }
    }
    ctx->pc = 0x4461E4u;
label_4461e4:
    // 0x4461e4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4461e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_4461e8:
    // 0x4461e8: 0x3e00008  jr          $ra
label_4461ec:
    if (ctx->pc == 0x4461ECu) {
        ctx->pc = 0x4461F0u;
        goto label_4461f0;
    }
    ctx->pc = 0x4461E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4461E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4461F0u;
label_4461f0:
    // 0x4461f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4461f4:
    if (ctx->pc == 0x4461F4u) {
        ctx->pc = 0x4461F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4461F0u;
        // 0x4461f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4461F8u;
        goto label_4461f8;
    }
    ctx->pc = 0x4461F0u;
    {
        const bool branch_taken_0x4461f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4461F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4461F0u;
        // 0x4461f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4461f0) {
            ctx->pc = 0x446200u;
            goto label_446200;
        }
    }
    ctx->pc = 0x4461F8u;
label_4461f8:
    // 0x4461f8: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x4461f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
label_4461fc:
    // 0x4461fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4461fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_446200:
    // 0x446200: 0x3e00008  jr          $ra
label_446204:
    if (ctx->pc == 0x446204u) {
        ctx->pc = 0x446208u;
        goto label_446208;
    }
    ctx->pc = 0x446200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x446208u;
label_446208:
    // 0x446208: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_44620c:
    if (ctx->pc == 0x44620Cu) {
        ctx->pc = 0x446210u;
        goto label_446210;
    }
    ctx->pc = 0x446208u;
    {
        const bool branch_taken_0x446208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x446208) {
            ctx->pc = 0x446274u;
            goto label_446274;
        }
    }
    ctx->pc = 0x446210u;
label_446210:
    // 0x446210: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x446210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_446214:
    // 0x446214: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_446218:
    if (ctx->pc == 0x446218u) {
        ctx->pc = 0x446218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446214u;
        // 0x446218: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44621Cu;
        goto label_44621c;
    }
    ctx->pc = 0x446214u;
    {
        const bool branch_taken_0x446214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x446218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446214u;
        // 0x446218: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446214) {
            ctx->pc = 0x446274u;
            goto label_446274;
        }
    }
    ctx->pc = 0x44621Cu;
label_44621c:
    // 0x44621c: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
label_446220:
    if (ctx->pc == 0x446220u) {
        ctx->pc = 0x446220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44621Cu;
        // 0x446220: 0x30850003  andi        $a1, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x446224u;
        goto label_446224;
    }
    ctx->pc = 0x44621Cu;
    {
        const bool branch_taken_0x44621c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x446220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44621Cu;
        // 0x446220: 0x30850003  andi        $a1, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44621c) {
            ctx->pc = 0x446248u;
            goto label_446248;
        }
    }
    ctx->pc = 0x446224u;
label_446224:
    // 0x446224: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
label_446228:
    if (ctx->pc == 0x446228u) {
        ctx->pc = 0x446228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446224u;
        // 0x446228: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44622Cu;
        goto label_44622c;
    }
    ctx->pc = 0x446224u;
    {
        const bool branch_taken_0x446224 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x446224) {
            ctx->pc = 0x446228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446224u;
            // 0x446228: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446258u;
            goto label_446258;
        }
    }
    ctx->pc = 0x44622Cu;
label_44622c:
    // 0x44622c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x44622cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_446230:
    // 0x446230: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_446234:
    if (ctx->pc == 0x446234u) {
        ctx->pc = 0x446234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446230u;
        // 0x446234: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446238u;
        goto label_446238;
    }
    ctx->pc = 0x446230u;
    {
        const bool branch_taken_0x446230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x446230) {
            ctx->pc = 0x446234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446230u;
            // 0x446234: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44624Cu;
            goto label_44624c;
        }
    }
    ctx->pc = 0x446238u;
label_446238:
    // 0x446238: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x446238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_44623c:
    // 0x44623c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_446240:
    if (ctx->pc == 0x446240u) {
        ctx->pc = 0x446240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44623Cu;
        // 0x446240: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446244u;
        goto label_446244;
    }
    ctx->pc = 0x44623Cu;
    {
        const bool branch_taken_0x44623c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44623c) {
            ctx->pc = 0x446240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44623Cu;
            // 0x446240: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446244u;
            goto label_446244;
        }
    }
    ctx->pc = 0x446244u;
label_446244:
    // 0x446244: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x446244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_446248:
    // 0x446248: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x446248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_44624c:
    // 0x44624c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x44624cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_446250:
    // 0x446250: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_446254:
    if (ctx->pc == 0x446254u) {
        ctx->pc = 0x446254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446250u;
        // 0x446254: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446258u;
        goto label_446258;
    }
    ctx->pc = 0x446250u;
    {
        const bool branch_taken_0x446250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446250u;
        // 0x446254: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446250) {
            ctx->pc = 0x446274u;
            goto label_446274;
        }
    }
    ctx->pc = 0x446258u;
label_446258:
    // 0x446258: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x446258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_44625c:
    // 0x44625c: 0x0  nop
    ctx->pc = 0x44625cu;
    // NOP
label_446260:
    // 0x446260: 0x0  nop
    ctx->pc = 0x446260u;
    // NOP
label_446264:
    // 0x446264: 0x0  nop
    ctx->pc = 0x446264u;
    // NOP
label_446268:
    // 0x446268: 0x0  nop
    ctx->pc = 0x446268u;
    // NOP
label_44626c:
    // 0x44626c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_446270:
    if (ctx->pc == 0x446270u) {
        ctx->pc = 0x446270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44626Cu;
        // 0x446270: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446274u;
        goto label_446274;
    }
    ctx->pc = 0x44626Cu;
    {
        const bool branch_taken_0x44626c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x446270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44626Cu;
        // 0x446270: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44626c) {
            ctx->pc = 0x446258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_446258;
        }
    }
    ctx->pc = 0x446274u;
label_446274:
    // 0x446274: 0x3e00008  jr          $ra
label_446278:
    if (ctx->pc == 0x446278u) {
        ctx->pc = 0x44627Cu;
        goto label_44627c;
    }
    ctx->pc = 0x446274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44627Cu;
label_44627c:
    // 0x44627c: 0x0  nop
    ctx->pc = 0x44627cu;
    // NOP
    ctx->pc = 0x446280u;
}
