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

// Function: sub_004A7CF0
// Address: 0x4a7cf0 - 0x4a8178
void sub_004A7CF0_0x4a7cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A7CF0_0x4a7cf0");
#endif

    switch (ctx->pc) {
        case 0x4a7cf0u: goto label_4a7cf0;
        case 0x4a7cf4u: goto label_4a7cf4;
        case 0x4a7cf8u: goto label_4a7cf8;
        case 0x4a7cfcu: goto label_4a7cfc;
        case 0x4a7d00u: goto label_4a7d00;
        case 0x4a7d04u: goto label_4a7d04;
        case 0x4a7d08u: goto label_4a7d08;
        case 0x4a7d0cu: goto label_4a7d0c;
        case 0x4a7d10u: goto label_4a7d10;
        case 0x4a7d14u: goto label_4a7d14;
        case 0x4a7d18u: goto label_4a7d18;
        case 0x4a7d1cu: goto label_4a7d1c;
        case 0x4a7d20u: goto label_4a7d20;
        case 0x4a7d24u: goto label_4a7d24;
        case 0x4a7d28u: goto label_4a7d28;
        case 0x4a7d2cu: goto label_4a7d2c;
        case 0x4a7d30u: goto label_4a7d30;
        case 0x4a7d34u: goto label_4a7d34;
        case 0x4a7d38u: goto label_4a7d38;
        case 0x4a7d3cu: goto label_4a7d3c;
        case 0x4a7d40u: goto label_4a7d40;
        case 0x4a7d44u: goto label_4a7d44;
        case 0x4a7d48u: goto label_4a7d48;
        case 0x4a7d4cu: goto label_4a7d4c;
        case 0x4a7d50u: goto label_4a7d50;
        case 0x4a7d54u: goto label_4a7d54;
        case 0x4a7d58u: goto label_4a7d58;
        case 0x4a7d5cu: goto label_4a7d5c;
        case 0x4a7d60u: goto label_4a7d60;
        case 0x4a7d64u: goto label_4a7d64;
        case 0x4a7d68u: goto label_4a7d68;
        case 0x4a7d6cu: goto label_4a7d6c;
        case 0x4a7d70u: goto label_4a7d70;
        case 0x4a7d74u: goto label_4a7d74;
        case 0x4a7d78u: goto label_4a7d78;
        case 0x4a7d7cu: goto label_4a7d7c;
        case 0x4a7d80u: goto label_4a7d80;
        case 0x4a7d84u: goto label_4a7d84;
        case 0x4a7d88u: goto label_4a7d88;
        case 0x4a7d8cu: goto label_4a7d8c;
        case 0x4a7d90u: goto label_4a7d90;
        case 0x4a7d94u: goto label_4a7d94;
        case 0x4a7d98u: goto label_4a7d98;
        case 0x4a7d9cu: goto label_4a7d9c;
        case 0x4a7da0u: goto label_4a7da0;
        case 0x4a7da4u: goto label_4a7da4;
        case 0x4a7da8u: goto label_4a7da8;
        case 0x4a7dacu: goto label_4a7dac;
        case 0x4a7db0u: goto label_4a7db0;
        case 0x4a7db4u: goto label_4a7db4;
        case 0x4a7db8u: goto label_4a7db8;
        case 0x4a7dbcu: goto label_4a7dbc;
        case 0x4a7dc0u: goto label_4a7dc0;
        case 0x4a7dc4u: goto label_4a7dc4;
        case 0x4a7dc8u: goto label_4a7dc8;
        case 0x4a7dccu: goto label_4a7dcc;
        case 0x4a7dd0u: goto label_4a7dd0;
        case 0x4a7dd4u: goto label_4a7dd4;
        case 0x4a7dd8u: goto label_4a7dd8;
        case 0x4a7ddcu: goto label_4a7ddc;
        case 0x4a7de0u: goto label_4a7de0;
        case 0x4a7de4u: goto label_4a7de4;
        case 0x4a7de8u: goto label_4a7de8;
        case 0x4a7decu: goto label_4a7dec;
        case 0x4a7df0u: goto label_4a7df0;
        case 0x4a7df4u: goto label_4a7df4;
        case 0x4a7df8u: goto label_4a7df8;
        case 0x4a7dfcu: goto label_4a7dfc;
        case 0x4a7e00u: goto label_4a7e00;
        case 0x4a7e04u: goto label_4a7e04;
        case 0x4a7e08u: goto label_4a7e08;
        case 0x4a7e0cu: goto label_4a7e0c;
        case 0x4a7e10u: goto label_4a7e10;
        case 0x4a7e14u: goto label_4a7e14;
        case 0x4a7e18u: goto label_4a7e18;
        case 0x4a7e1cu: goto label_4a7e1c;
        case 0x4a7e20u: goto label_4a7e20;
        case 0x4a7e24u: goto label_4a7e24;
        case 0x4a7e28u: goto label_4a7e28;
        case 0x4a7e2cu: goto label_4a7e2c;
        case 0x4a7e30u: goto label_4a7e30;
        case 0x4a7e34u: goto label_4a7e34;
        case 0x4a7e38u: goto label_4a7e38;
        case 0x4a7e3cu: goto label_4a7e3c;
        case 0x4a7e40u: goto label_4a7e40;
        case 0x4a7e44u: goto label_4a7e44;
        case 0x4a7e48u: goto label_4a7e48;
        case 0x4a7e4cu: goto label_4a7e4c;
        case 0x4a7e50u: goto label_4a7e50;
        case 0x4a7e54u: goto label_4a7e54;
        case 0x4a7e58u: goto label_4a7e58;
        case 0x4a7e5cu: goto label_4a7e5c;
        case 0x4a7e60u: goto label_4a7e60;
        case 0x4a7e64u: goto label_4a7e64;
        case 0x4a7e68u: goto label_4a7e68;
        case 0x4a7e6cu: goto label_4a7e6c;
        case 0x4a7e70u: goto label_4a7e70;
        case 0x4a7e74u: goto label_4a7e74;
        case 0x4a7e78u: goto label_4a7e78;
        case 0x4a7e7cu: goto label_4a7e7c;
        case 0x4a7e80u: goto label_4a7e80;
        case 0x4a7e84u: goto label_4a7e84;
        case 0x4a7e88u: goto label_4a7e88;
        case 0x4a7e8cu: goto label_4a7e8c;
        case 0x4a7e90u: goto label_4a7e90;
        case 0x4a7e94u: goto label_4a7e94;
        case 0x4a7e98u: goto label_4a7e98;
        case 0x4a7e9cu: goto label_4a7e9c;
        case 0x4a7ea0u: goto label_4a7ea0;
        case 0x4a7ea4u: goto label_4a7ea4;
        case 0x4a7ea8u: goto label_4a7ea8;
        case 0x4a7eacu: goto label_4a7eac;
        case 0x4a7eb0u: goto label_4a7eb0;
        case 0x4a7eb4u: goto label_4a7eb4;
        case 0x4a7eb8u: goto label_4a7eb8;
        case 0x4a7ebcu: goto label_4a7ebc;
        case 0x4a7ec0u: goto label_4a7ec0;
        case 0x4a7ec4u: goto label_4a7ec4;
        case 0x4a7ec8u: goto label_4a7ec8;
        case 0x4a7eccu: goto label_4a7ecc;
        case 0x4a7ed0u: goto label_4a7ed0;
        case 0x4a7ed4u: goto label_4a7ed4;
        case 0x4a7ed8u: goto label_4a7ed8;
        case 0x4a7edcu: goto label_4a7edc;
        case 0x4a7ee0u: goto label_4a7ee0;
        case 0x4a7ee4u: goto label_4a7ee4;
        case 0x4a7ee8u: goto label_4a7ee8;
        case 0x4a7eecu: goto label_4a7eec;
        case 0x4a7ef0u: goto label_4a7ef0;
        case 0x4a7ef4u: goto label_4a7ef4;
        case 0x4a7ef8u: goto label_4a7ef8;
        case 0x4a7efcu: goto label_4a7efc;
        case 0x4a7f00u: goto label_4a7f00;
        case 0x4a7f04u: goto label_4a7f04;
        case 0x4a7f08u: goto label_4a7f08;
        case 0x4a7f0cu: goto label_4a7f0c;
        case 0x4a7f10u: goto label_4a7f10;
        case 0x4a7f14u: goto label_4a7f14;
        case 0x4a7f18u: goto label_4a7f18;
        case 0x4a7f1cu: goto label_4a7f1c;
        case 0x4a7f20u: goto label_4a7f20;
        case 0x4a7f24u: goto label_4a7f24;
        case 0x4a7f28u: goto label_4a7f28;
        case 0x4a7f2cu: goto label_4a7f2c;
        case 0x4a7f30u: goto label_4a7f30;
        case 0x4a7f34u: goto label_4a7f34;
        case 0x4a7f38u: goto label_4a7f38;
        case 0x4a7f3cu: goto label_4a7f3c;
        case 0x4a7f40u: goto label_4a7f40;
        case 0x4a7f44u: goto label_4a7f44;
        case 0x4a7f48u: goto label_4a7f48;
        case 0x4a7f4cu: goto label_4a7f4c;
        case 0x4a7f50u: goto label_4a7f50;
        case 0x4a7f54u: goto label_4a7f54;
        case 0x4a7f58u: goto label_4a7f58;
        case 0x4a7f5cu: goto label_4a7f5c;
        case 0x4a7f60u: goto label_4a7f60;
        case 0x4a7f64u: goto label_4a7f64;
        case 0x4a7f68u: goto label_4a7f68;
        case 0x4a7f6cu: goto label_4a7f6c;
        case 0x4a7f70u: goto label_4a7f70;
        case 0x4a7f74u: goto label_4a7f74;
        case 0x4a7f78u: goto label_4a7f78;
        case 0x4a7f7cu: goto label_4a7f7c;
        case 0x4a7f80u: goto label_4a7f80;
        case 0x4a7f84u: goto label_4a7f84;
        case 0x4a7f88u: goto label_4a7f88;
        case 0x4a7f8cu: goto label_4a7f8c;
        case 0x4a7f90u: goto label_4a7f90;
        case 0x4a7f94u: goto label_4a7f94;
        case 0x4a7f98u: goto label_4a7f98;
        case 0x4a7f9cu: goto label_4a7f9c;
        case 0x4a7fa0u: goto label_4a7fa0;
        case 0x4a7fa4u: goto label_4a7fa4;
        case 0x4a7fa8u: goto label_4a7fa8;
        case 0x4a7facu: goto label_4a7fac;
        case 0x4a7fb0u: goto label_4a7fb0;
        case 0x4a7fb4u: goto label_4a7fb4;
        case 0x4a7fb8u: goto label_4a7fb8;
        case 0x4a7fbcu: goto label_4a7fbc;
        case 0x4a7fc0u: goto label_4a7fc0;
        case 0x4a7fc4u: goto label_4a7fc4;
        case 0x4a7fc8u: goto label_4a7fc8;
        case 0x4a7fccu: goto label_4a7fcc;
        case 0x4a7fd0u: goto label_4a7fd0;
        case 0x4a7fd4u: goto label_4a7fd4;
        case 0x4a7fd8u: goto label_4a7fd8;
        case 0x4a7fdcu: goto label_4a7fdc;
        case 0x4a7fe0u: goto label_4a7fe0;
        case 0x4a7fe4u: goto label_4a7fe4;
        case 0x4a7fe8u: goto label_4a7fe8;
        case 0x4a7fecu: goto label_4a7fec;
        case 0x4a7ff0u: goto label_4a7ff0;
        case 0x4a7ff4u: goto label_4a7ff4;
        case 0x4a7ff8u: goto label_4a7ff8;
        case 0x4a7ffcu: goto label_4a7ffc;
        case 0x4a8000u: goto label_4a8000;
        case 0x4a8004u: goto label_4a8004;
        case 0x4a8008u: goto label_4a8008;
        case 0x4a800cu: goto label_4a800c;
        case 0x4a8010u: goto label_4a8010;
        case 0x4a8014u: goto label_4a8014;
        case 0x4a8018u: goto label_4a8018;
        case 0x4a801cu: goto label_4a801c;
        case 0x4a8020u: goto label_4a8020;
        case 0x4a8024u: goto label_4a8024;
        case 0x4a8028u: goto label_4a8028;
        case 0x4a802cu: goto label_4a802c;
        case 0x4a8030u: goto label_4a8030;
        case 0x4a8034u: goto label_4a8034;
        case 0x4a8038u: goto label_4a8038;
        case 0x4a803cu: goto label_4a803c;
        case 0x4a8040u: goto label_4a8040;
        case 0x4a8044u: goto label_4a8044;
        case 0x4a8048u: goto label_4a8048;
        case 0x4a804cu: goto label_4a804c;
        case 0x4a8050u: goto label_4a8050;
        case 0x4a8054u: goto label_4a8054;
        case 0x4a8058u: goto label_4a8058;
        case 0x4a805cu: goto label_4a805c;
        case 0x4a8060u: goto label_4a8060;
        case 0x4a8064u: goto label_4a8064;
        case 0x4a8068u: goto label_4a8068;
        case 0x4a806cu: goto label_4a806c;
        case 0x4a8070u: goto label_4a8070;
        case 0x4a8074u: goto label_4a8074;
        case 0x4a8078u: goto label_4a8078;
        case 0x4a807cu: goto label_4a807c;
        case 0x4a8080u: goto label_4a8080;
        case 0x4a8084u: goto label_4a8084;
        case 0x4a8088u: goto label_4a8088;
        case 0x4a808cu: goto label_4a808c;
        case 0x4a8090u: goto label_4a8090;
        case 0x4a8094u: goto label_4a8094;
        case 0x4a8098u: goto label_4a8098;
        case 0x4a809cu: goto label_4a809c;
        case 0x4a80a0u: goto label_4a80a0;
        case 0x4a80a4u: goto label_4a80a4;
        case 0x4a80a8u: goto label_4a80a8;
        case 0x4a80acu: goto label_4a80ac;
        case 0x4a80b0u: goto label_4a80b0;
        case 0x4a80b4u: goto label_4a80b4;
        case 0x4a80b8u: goto label_4a80b8;
        case 0x4a80bcu: goto label_4a80bc;
        case 0x4a80c0u: goto label_4a80c0;
        case 0x4a80c4u: goto label_4a80c4;
        case 0x4a80c8u: goto label_4a80c8;
        case 0x4a80ccu: goto label_4a80cc;
        case 0x4a80d0u: goto label_4a80d0;
        case 0x4a80d4u: goto label_4a80d4;
        case 0x4a80d8u: goto label_4a80d8;
        case 0x4a80dcu: goto label_4a80dc;
        case 0x4a80e0u: goto label_4a80e0;
        case 0x4a80e4u: goto label_4a80e4;
        case 0x4a80e8u: goto label_4a80e8;
        case 0x4a80ecu: goto label_4a80ec;
        case 0x4a80f0u: goto label_4a80f0;
        case 0x4a80f4u: goto label_4a80f4;
        case 0x4a80f8u: goto label_4a80f8;
        case 0x4a80fcu: goto label_4a80fc;
        case 0x4a8100u: goto label_4a8100;
        case 0x4a8104u: goto label_4a8104;
        case 0x4a8108u: goto label_4a8108;
        case 0x4a810cu: goto label_4a810c;
        case 0x4a8110u: goto label_4a8110;
        case 0x4a8114u: goto label_4a8114;
        case 0x4a8118u: goto label_4a8118;
        case 0x4a811cu: goto label_4a811c;
        case 0x4a8120u: goto label_4a8120;
        case 0x4a8124u: goto label_4a8124;
        case 0x4a8128u: goto label_4a8128;
        case 0x4a812cu: goto label_4a812c;
        case 0x4a8130u: goto label_4a8130;
        case 0x4a8134u: goto label_4a8134;
        case 0x4a8138u: goto label_4a8138;
        case 0x4a813cu: goto label_4a813c;
        case 0x4a8140u: goto label_4a8140;
        case 0x4a8144u: goto label_4a8144;
        case 0x4a8148u: goto label_4a8148;
        case 0x4a814cu: goto label_4a814c;
        case 0x4a8150u: goto label_4a8150;
        case 0x4a8154u: goto label_4a8154;
        case 0x4a8158u: goto label_4a8158;
        case 0x4a815cu: goto label_4a815c;
        case 0x4a8160u: goto label_4a8160;
        case 0x4a8164u: goto label_4a8164;
        case 0x4a8168u: goto label_4a8168;
        case 0x4a816cu: goto label_4a816c;
        case 0x4a8170u: goto label_4a8170;
        case 0x4a8174u: goto label_4a8174;
        default: break;
    }

    ctx->pc = 0x4a7cf0u;

label_4a7cf0:
    // 0x4a7cf0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x4a7cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_4a7cf4:
    // 0x4a7cf4: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x4a7cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_4a7cf8:
    // 0x4a7cf8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x4a7cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_4a7cfc:
    // 0x4a7cfc: 0x24910004  addiu       $s1, $a0, 0x4
    ctx->pc = 0x4a7cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4a7d00:
    // 0x4a7d00: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x4a7d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_4a7d04:
    // 0x4a7d04: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x4a7d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_4a7d08:
    // 0x4a7d08: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4a7d08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a7d0c:
    // 0x4a7d0c: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x4a7d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_4a7d10:
    // 0x4a7d10: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x4a7d10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4a7d14:
    // 0x4a7d14: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x4a7d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_4a7d18:
    // 0x4a7d18: 0x149103  sra         $s2, $s4, 4
    ctx->pc = 0x4a7d18u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 20), 4));
label_4a7d1c:
    // 0x4a7d1c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4a7d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4a7d20:
    // 0x4a7d20: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4a7d20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a7d24:
    // 0x4a7d24: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x4a7d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_4a7d28:
    // 0x4a7d28: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x4a7d28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a7d2c:
    // 0x4a7d2c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x4a7d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_4a7d30:
    // 0x4a7d30: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x4a7d30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7d34:
    // 0x4a7d34: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4a7d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4a7d38:
    // 0x4a7d38: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4a7d38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7d3c:
    // 0x4a7d3c: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x4a7d3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_4a7d40:
    // 0x4a7d40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a7d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a7d44:
    // 0x4a7d44: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x4a7d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_4a7d48:
    // 0x4a7d48: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_4a7d4c:
    if (ctx->pc == 0x4A7D4Cu) {
        ctx->pc = 0x4A7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7D48u;
        // 0x4a7d4c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7D50u;
        goto label_4a7d50;
    }
    ctx->pc = 0x4A7D48u;
    {
        const bool branch_taken_0x4a7d48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7D48u;
        // 0x4a7d4c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7d48) {
            ctx->pc = 0x4A7D5Cu;
            goto label_4a7d5c;
        }
    }
    ctx->pc = 0x4A7D50u;
label_4a7d50:
    // 0x4a7d50: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4a7d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4a7d54:
    // 0x4a7d54: 0xc12ac8e  jal         func_4AB238
label_4a7d58:
    if (ctx->pc == 0x4A7D58u) {
        ctx->pc = 0x4A7D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7D54u;
        // 0x4a7d58: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7D5Cu;
        goto label_4a7d5c;
    }
    ctx->pc = 0x4A7D54u;
    SET_GPR_U32(ctx, 31, 0x4A7D5Cu);
    ctx->pc = 0x4A7D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7D54u;
    // 0x4a7d58: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB238u, 0x4A7D54u, 0x4A7D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7D5Cu;
label_4a7d5c:
    // 0x4a7d5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a7d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a7d60:
    // 0x4a7d60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a7d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a7d64:
    // 0x4a7d64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a7d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7d68:
    // 0x4a7d68: 0xc129624  jal         func_4A5890
label_4a7d6c:
    if (ctx->pc == 0x4A7D6Cu) {
        ctx->pc = 0x4A7D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7D68u;
        // 0x4a7d6c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7D70u;
        goto label_4a7d70;
    }
    ctx->pc = 0x4A7D68u;
    SET_GPR_U32(ctx, 31, 0x4A7D70u);
    ctx->pc = 0x4A7D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7D68u;
    // 0x4a7d6c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5890u, 0x4A7D68u, 0x4A7D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7D70u;
label_4a7d70:
    // 0x4a7d70: 0xc129844  jal         func_4A6110
label_4a7d74:
    if (ctx->pc == 0x4A7D74u) {
        ctx->pc = 0x4A7D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7D70u;
        // 0x4a7d74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7D78u;
        goto label_4a7d78;
    }
    ctx->pc = 0x4A7D70u;
    SET_GPR_U32(ctx, 31, 0x4A7D78u);
    ctx->pc = 0x4A7D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7D70u;
    // 0x4a7d74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6110u, 0x4A7D70u, 0x4A7D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7D78u;
label_4a7d78:
    // 0x4a7d78: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x4a7d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4a7d7c:
    // 0x4a7d7c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x4a7d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4a7d80:
    // 0x4a7d80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a7d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a7d84:
    // 0x4a7d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a7d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a7d88:
    // 0x4a7d88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a7d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7d8c:
    // 0x4a7d8c: 0xc129624  jal         func_4A5890
label_4a7d90:
    if (ctx->pc == 0x4A7D90u) {
        ctx->pc = 0x4A7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7D8Cu;
        // 0x4a7d90: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7D94u;
        goto label_4a7d94;
    }
    ctx->pc = 0x4A7D8Cu;
    SET_GPR_U32(ctx, 31, 0x4A7D94u);
    ctx->pc = 0x4A7D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7D8Cu;
    // 0x4a7d90: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5890u, 0x4A7D8Cu, 0x4A7D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7D94u;
label_4a7d94:
    // 0x4a7d94: 0xc129844  jal         func_4A6110
label_4a7d98:
    if (ctx->pc == 0x4A7D98u) {
        ctx->pc = 0x4A7D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7D94u;
        // 0x4a7d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7D9Cu;
        goto label_4a7d9c;
    }
    ctx->pc = 0x4A7D94u;
    SET_GPR_U32(ctx, 31, 0x4A7D9Cu);
    ctx->pc = 0x4A7D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7D94u;
    // 0x4a7d98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6110u, 0x4A7D94u, 0x4A7D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7D9Cu;
label_4a7d9c:
    // 0x4a7d9c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x4a7d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4a7da0:
    // 0x4a7da0: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x4a7da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_4a7da4:
    // 0x4a7da4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4a7da8:
    if (ctx->pc == 0x4A7DA8u) {
        ctx->pc = 0x4A7DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7DA4u;
        // 0x4a7da8: 0x141043  sra         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7DACu;
        goto label_4a7dac;
    }
    ctx->pc = 0x4A7DA4u;
    {
        const bool branch_taken_0x4a7da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7DA4u;
        // 0x4a7da8: 0x141043  sra         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7da4) {
            ctx->pc = 0x4A7DB8u;
            goto label_4a7db8;
        }
    }
    ctx->pc = 0x4A7DACu;
label_4a7dac:
    // 0x4a7dac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a7dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4a7db0:
    // 0x4a7db0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4a7db4:
    if (ctx->pc == 0x4A7DB4u) {
        ctx->pc = 0x4A7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7DB0u;
        // 0x4a7db4: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7DB8u;
        goto label_4a7db8;
    }
    ctx->pc = 0x4A7DB0u;
    {
        const bool branch_taken_0x4a7db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7DB0u;
        // 0x4a7db4: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7db0) {
            ctx->pc = 0x4A7DD0u;
            goto label_4a7dd0;
        }
    }
    ctx->pc = 0x4A7DB8u;
label_4a7db8:
    // 0x4a7db8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4a7db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a7dbc:
    // 0x4a7dbc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_4a7dc0:
    if (ctx->pc == 0x4A7DC0u) {
        ctx->pc = 0x4A7DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7DBCu;
        // 0x4a7dc0: 0xafa30058  sw          $v1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7DC4u;
        goto label_4a7dc4;
    }
    ctx->pc = 0x4A7DBCu;
    {
        const bool branch_taken_0x4a7dbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7DBCu;
        // 0x4a7dc0: 0xafa30058  sw          $v1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7dbc) {
            ctx->pc = 0x4A7DD0u;
            goto label_4a7dd0;
        }
    }
    ctx->pc = 0x4A7DC4u;
label_4a7dc4:
    // 0x4a7dc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a7dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a7dc8:
    // 0x4a7dc8: 0xc12ac8e  jal         func_4AB238
label_4a7dcc:
    if (ctx->pc == 0x4A7DCCu) {
        ctx->pc = 0x4A7DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7DC8u;
        // 0x4a7dcc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7DD0u;
        goto label_4a7dd0;
    }
    ctx->pc = 0x4A7DC8u;
    SET_GPR_U32(ctx, 31, 0x4A7DD0u);
    ctx->pc = 0x4A7DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7DC8u;
    // 0x4a7dcc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB238u, 0x4A7DC8u, 0x4A7DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7DD0u;
label_4a7dd0:
    // 0x4a7dd0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4a7dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_4a7dd4:
    // 0x4a7dd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a7dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4a7dd8:
    // 0x4a7dd8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4a7ddc:
    if (ctx->pc == 0x4A7DDCu) {
        ctx->pc = 0x4A7DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7DD8u;
        // 0x4a7ddc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7DE0u;
        goto label_4a7de0;
    }
    ctx->pc = 0x4A7DD8u;
    {
        const bool branch_taken_0x4a7dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7DD8u;
        // 0x4a7ddc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7dd8) {
            ctx->pc = 0x4A7E04u;
            goto label_4a7e04;
        }
    }
    ctx->pc = 0x4A7DE0u;
label_4a7de0:
    // 0x4a7de0: 0x32820008  andi        $v0, $s4, 0x8
    ctx->pc = 0x4a7de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_4a7de4:
    // 0x4a7de4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_4a7de8:
    if (ctx->pc == 0x4A7DE8u) {
        ctx->pc = 0x4A7DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7DE4u;
        // 0x4a7de8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7DECu;
        goto label_4a7dec;
    }
    ctx->pc = 0x4A7DE4u;
    {
        const bool branch_taken_0x4a7de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7de4) {
            ctx->pc = 0x4A7DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7DE4u;
            // 0x4a7de8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7E04u;
            goto label_4a7e04;
        }
    }
    ctx->pc = 0x4A7DECu;
label_4a7dec:
    // 0x4a7dec: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x4a7decu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a7df0:
    // 0x4a7df0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a7df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a7df4:
    // 0x4a7df4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4a7df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4a7df8:
    // 0x4a7df8: 0xc12a4d4  jal         func_4A9350
label_4a7dfc:
    if (ctx->pc == 0x4A7DFCu) {
        ctx->pc = 0x4A7DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7DF8u;
        // 0x4a7dfc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7E00u;
        goto label_4a7e00;
    }
    ctx->pc = 0x4A7DF8u;
    SET_GPR_U32(ctx, 31, 0x4A7E00u);
    ctx->pc = 0x4A7DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7DF8u;
    // 0x4a7dfc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9350u, 0x4A7DF8u, 0x4A7E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7E00u;
label_4a7e00:
    // 0x4a7e00: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x4a7e00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4a7e04:
    // 0x4a7e04: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4a7e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_4a7e08:
    // 0x4a7e08: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4a7e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_4a7e0c:
    // 0x4a7e0c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_4a7e10:
    if (ctx->pc == 0x4A7E10u) {
        ctx->pc = 0x4A7E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E0Cu;
        // 0x4a7e10: 0x32830004  andi        $v1, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7E14u;
        goto label_4a7e14;
    }
    ctx->pc = 0x4A7E0Cu;
    {
        const bool branch_taken_0x4a7e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E0Cu;
        // 0x4a7e10: 0x32830004  andi        $v1, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7e0c) {
            ctx->pc = 0x4A7E40u;
            goto label_4a7e40;
        }
    }
    ctx->pc = 0x4A7E14u;
label_4a7e14:
    // 0x4a7e14: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x4a7e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_4a7e18:
    // 0x4a7e18: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x4a7e18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a7e1c:
    // 0x4a7e1c: 0x8c82e974  lw          $v0, -0x168C($a0)
    ctx->pc = 0x4a7e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961524)));
label_4a7e20:
    // 0x4a7e20: 0x3b00b  movn        $s6, $zero, $v1
    ctx->pc = 0x4a7e20u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_4a7e24:
    // 0x4a7e24: 0x40f809  jalr        $v0
label_4a7e28:
    if (ctx->pc == 0x4A7E28u) {
        ctx->pc = 0x4A7E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E24u;
        // 0x4a7e28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7E2Cu;
        goto label_4a7e2c;
    }
    ctx->pc = 0x4A7E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A7E2Cu);
        ctx->pc = 0x4A7E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E24u;
        // 0x4a7e28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A7E24u, 0x4A7E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A7E2Cu;
label_4a7e2c:
    // 0x4a7e2c: 0x8f83c1e8  lw          $v1, -0x3E18($gp)
    ctx->pc = 0x4a7e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951400)));
label_4a7e30:
    // 0x4a7e30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a7e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a7e34:
    // 0x4a7e34: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4a7e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_4a7e38:
    // 0x4a7e38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a7e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4a7e3c:
    // 0x4a7e3c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x4a7e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4a7e40:
    // 0x4a7e40: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4a7e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_4a7e44:
    // 0x4a7e44: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x4a7e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_4a7e48:
    // 0x4a7e48: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
label_4a7e4c:
    if (ctx->pc == 0x4A7E4Cu) {
        ctx->pc = 0x4A7E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E48u;
        // 0x4a7e4c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7E50u;
        goto label_4a7e50;
    }
    ctx->pc = 0x4A7E48u;
    {
        const bool branch_taken_0x4a7e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7e48) {
            ctx->pc = 0x4A7E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7E48u;
            // 0x4a7e4c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7F20u;
            goto label_4a7f20;
        }
    }
    ctx->pc = 0x4A7E50u;
label_4a7e50:
    // 0x4a7e50: 0x56600032  bnel        $s3, $zero, . + 4 + (0x32 << 2)
label_4a7e54:
    if (ctx->pc == 0x4A7E54u) {
        ctx->pc = 0x4A7E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E50u;
        // 0x4a7e54: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7E58u;
        goto label_4a7e58;
    }
    ctx->pc = 0x4A7E50u;
    {
        const bool branch_taken_0x4a7e50 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7e50) {
            ctx->pc = 0x4A7E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7E50u;
            // 0x4a7e54: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7F1Cu;
            goto label_4a7f1c;
        }
    }
    ctx->pc = 0x4A7E58u;
label_4a7e58:
    // 0x4a7e58: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_4a7e5c:
    if (ctx->pc == 0x4A7E5Cu) {
        ctx->pc = 0x4A7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E58u;
        // 0x4a7e5c: 0x3c06004a  lui         $a2, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7E60u;
        goto label_4a7e60;
    }
    ctx->pc = 0x4A7E58u;
    {
        const bool branch_taken_0x4a7e58 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E58u;
        // 0x4a7e5c: 0x3c06004a  lui         $a2, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7e58) {
            ctx->pc = 0x4A7E94u;
            goto label_4a7e94;
        }
    }
    ctx->pc = 0x4A7E60u;
label_4a7e60:
    // 0x4a7e60: 0xafb50040  sw          $s5, 0x40($sp)
    ctx->pc = 0x4a7e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 21));
label_4a7e64:
    // 0x4a7e64: 0x24c66960  addiu       $a2, $a2, 0x6960
    ctx->pc = 0x4a7e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26976));
label_4a7e68:
    // 0x4a7e68: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x4a7e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_4a7e6c:
    // 0x4a7e6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4a7e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7e70:
    // 0x4a7e70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a7e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7e74:
    // 0x4a7e74: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x4a7e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4a7e78:
    // 0x4a7e78: 0xc1269c6  jal         func_49A718
label_4a7e7c:
    if (ctx->pc == 0x4A7E7Cu) {
        ctx->pc = 0x4A7E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E78u;
        // 0x4a7e7c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7E80u;
        goto label_4a7e80;
    }
    ctx->pc = 0x4A7E78u;
    SET_GPR_U32(ctx, 31, 0x4A7E80u);
    ctx->pc = 0x4A7E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7E78u;
    // 0x4a7e7c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A718u, 0x4A7E78u, 0x4A7E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7E80u;
label_4a7e80:
    // 0x4a7e80: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x4a7e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_4a7e84:
    // 0x4a7e84: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_4a7e88:
    if (ctx->pc == 0x4A7E88u) {
        ctx->pc = 0x4A7E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E84u;
        // 0x4a7e88: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7E8Cu;
        goto label_4a7e8c;
    }
    ctx->pc = 0x4A7E84u;
    {
        const bool branch_taken_0x4a7e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E84u;
        // 0x4a7e88: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7e84) {
            ctx->pc = 0x4A80CCu;
            goto label_4a80cc;
        }
    }
    ctx->pc = 0x4A7E8Cu;
label_4a7e8c:
    // 0x4a7e8c: 0x10000023  b           . + 4 + (0x23 << 2)
label_4a7e90:
    if (ctx->pc == 0x4A7E90u) {
        ctx->pc = 0x4A7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E8Cu;
        // 0x4a7e90: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7E94u;
        goto label_4a7e94;
    }
    ctx->pc = 0x4A7E8Cu;
    {
        const bool branch_taken_0x4a7e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E8Cu;
        // 0x4a7e90: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7e8c) {
            ctx->pc = 0x4A7F1Cu;
            goto label_4a7f1c;
        }
    }
    ctx->pc = 0x4A7E94u;
label_4a7e94:
    // 0x4a7e94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a7e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a7e98:
    // 0x4a7e98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a7e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a7e9c:
    // 0x4a7e9c: 0xc12a4d4  jal         func_4A9350
label_4a7ea0:
    if (ctx->pc == 0x4A7EA0u) {
        ctx->pc = 0x4A7EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E9Cu;
        // 0x4a7ea0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7EA4u;
        goto label_4a7ea4;
    }
    ctx->pc = 0x4A7E9Cu;
    SET_GPR_U32(ctx, 31, 0x4A7EA4u);
    ctx->pc = 0x4A7EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7E9Cu;
    // 0x4a7ea0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9350u, 0x4A7E9Cu, 0x4A7EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7EA4u;
label_4a7ea4:
    // 0x4a7ea4: 0xc12992a  jal         func_4A64A8
label_4a7ea8:
    if (ctx->pc == 0x4A7EA8u) {
        ctx->pc = 0x4A7EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7EA4u;
        // 0x4a7ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7EACu;
        goto label_4a7eac;
    }
    ctx->pc = 0x4A7EA4u;
    SET_GPR_U32(ctx, 31, 0x4A7EACu);
    ctx->pc = 0x4A7EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7EA4u;
    // 0x4a7ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A64A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A64A8u, 0x4A7EA4u, 0x4A7EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7EACu;
label_4a7eac:
    // 0x4a7eac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4a7eacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a7eb0:
    // 0x4a7eb0: 0x12600086  beqz        $s3, . + 4 + (0x86 << 2)
label_4a7eb4:
    if (ctx->pc == 0x4A7EB4u) {
        ctx->pc = 0x4A7EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7EB0u;
        // 0x4a7eb4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7EB8u;
        goto label_4a7eb8;
    }
    ctx->pc = 0x4A7EB0u;
    {
        const bool branch_taken_0x4a7eb0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7EB0u;
        // 0x4a7eb4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7eb0) {
            ctx->pc = 0x4A80CCu;
            goto label_4a80cc;
        }
    }
    ctx->pc = 0x4A7EB8u;
label_4a7eb8:
    // 0x4a7eb8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4a7eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a7ebc:
    // 0x4a7ebc: 0xc12a3ec  jal         func_4A8FB0
label_4a7ec0:
    if (ctx->pc == 0x4A7EC0u) {
        ctx->pc = 0x4A7EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7EBCu;
        // 0x4a7ec0: 0x24a52c48  addiu       $a1, $a1, 0x2C48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7EC4u;
        goto label_4a7ec4;
    }
    ctx->pc = 0x4A7EBCu;
    SET_GPR_U32(ctx, 31, 0x4A7EC4u);
    ctx->pc = 0x4A7EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7EBCu;
    // 0x4a7ec0: 0x24a52c48  addiu       $a1, $a1, 0x2C48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A7EBCu, 0x4A7EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7EC4u;
label_4a7ec4:
    // 0x4a7ec4: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_4a7ec8:
    if (ctx->pc == 0x4A7EC8u) {
        ctx->pc = 0x4A7EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7EC4u;
        // 0x4a7ec8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7ECCu;
        goto label_4a7ecc;
    }
    ctx->pc = 0x4A7EC4u;
    {
        const bool branch_taken_0x4a7ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7ec4) {
            ctx->pc = 0x4A7EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7EC4u;
            // 0x4a7ec8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7F1Cu;
            goto label_4a7f1c;
        }
    }
    ctx->pc = 0x4A7ECCu;
label_4a7ecc:
    // 0x4a7ecc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x4a7eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_4a7ed0:
    // 0x4a7ed0: 0xc12992a  jal         func_4A64A8
label_4a7ed4:
    if (ctx->pc == 0x4A7ED4u) {
        ctx->pc = 0x4A7ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7ED0u;
        // 0x4a7ed4: 0x24842f08  addiu       $a0, $a0, 0x2F08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7ED8u;
        goto label_4a7ed8;
    }
    ctx->pc = 0x4A7ED0u;
    SET_GPR_U32(ctx, 31, 0x4A7ED8u);
    ctx->pc = 0x4A7ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7ED0u;
    // 0x4a7ed4: 0x24842f08  addiu       $a0, $a0, 0x2F08 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A64A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A64A8u, 0x4A7ED0u, 0x4A7ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7ED8u;
label_4a7ed8:
    // 0x4a7ed8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4a7ed8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a7edc:
    // 0x4a7edc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4a7edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4a7ee0:
    // 0x4a7ee0: 0xc129984  jal         func_4A6610
label_4a7ee4:
    if (ctx->pc == 0x4A7EE4u) {
        ctx->pc = 0x4A7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7EE0u;
        // 0x4a7ee4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7EE8u;
        goto label_4a7ee8;
    }
    ctx->pc = 0x4A7EE0u;
    SET_GPR_U32(ctx, 31, 0x4A7EE8u);
    ctx->pc = 0x4A7EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7EE0u;
    // 0x4a7ee4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6610u, 0x4A7EE0u, 0x4A7EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7EE8u;
label_4a7ee8:
    // 0x4a7ee8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_4a7eec:
    if (ctx->pc == 0x4A7EECu) {
        ctx->pc = 0x4A7EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7EE8u;
        // 0x4a7eec: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7EF0u;
        goto label_4a7ef0;
    }
    ctx->pc = 0x4A7EE8u;
    {
        const bool branch_taken_0x4a7ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7ee8) {
            ctx->pc = 0x4A7EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7EE8u;
            // 0x4a7eec: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7F1Cu;
            goto label_4a7f1c;
        }
    }
    ctx->pc = 0x4A7EF0u;
label_4a7ef0:
    // 0x4a7ef0: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x4a7ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_4a7ef4:
    // 0x4a7ef4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_4a7ef8:
    if (ctx->pc == 0x4A7EF8u) {
        ctx->pc = 0x4A7EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7EF4u;
        // 0x4a7ef8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7EFCu;
        goto label_4a7efc;
    }
    ctx->pc = 0x4A7EF4u;
    {
        const bool branch_taken_0x4a7ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7EF4u;
        // 0x4a7ef8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7ef4) {
            ctx->pc = 0x4A7F0Cu;
            goto label_4a7f0c;
        }
    }
    ctx->pc = 0x4A7EFCu;
label_4a7efc:
    // 0x4a7efc: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x4a7efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_4a7f00:
    // 0x4a7f00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a7f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4a7f04:
    // 0x4a7f04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a7f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a7f08:
    // 0x4a7f08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4a7f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a7f0c:
    // 0x4a7f0c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x4a7f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4a7f10:
    // 0x4a7f10: 0xc1297da  jal         func_4A5F68
label_4a7f14:
    if (ctx->pc == 0x4A7F14u) {
        ctx->pc = 0x4A7F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F10u;
        // 0x4a7f14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7F18u;
        goto label_4a7f18;
    }
    ctx->pc = 0x4A7F10u;
    SET_GPR_U32(ctx, 31, 0x4A7F18u);
    ctx->pc = 0x4A7F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7F10u;
    // 0x4a7f14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5F68u, 0x4A7F10u, 0x4A7F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7F18u;
label_4a7f18:
    // 0x4a7f18: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x4a7f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4a7f1c:
    // 0x4a7f1c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4a7f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4a7f20:
    // 0x4a7f20: 0x97b80a  movz        $s7, $a0, $s7
    ctx->pc = 0x4a7f20u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 4));
label_4a7f24:
    // 0x4a7f24: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x4a7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4a7f28:
    // 0x4a7f28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4a7f2c:
    if (ctx->pc == 0x4A7F2Cu) {
        ctx->pc = 0x4A7F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F28u;
        // 0x4a7f2c: 0x32820020  andi        $v0, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7F30u;
        goto label_4a7f30;
    }
    ctx->pc = 0x4A7F28u;
    {
        const bool branch_taken_0x4a7f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F28u;
        // 0x4a7f2c: 0x32820020  andi        $v0, $s4, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7f28) {
            ctx->pc = 0x4A7F38u;
            goto label_4a7f38;
        }
    }
    ctx->pc = 0x4A7F30u;
label_4a7f30:
    // 0x4a7f30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4a7f34:
    if (ctx->pc == 0x4A7F34u) {
        ctx->pc = 0x4A7F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F30u;
        // 0x4a7f34: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7F38u;
        goto label_4a7f38;
    }
    ctx->pc = 0x4A7F30u;
    {
        const bool branch_taken_0x4a7f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F30u;
        // 0x4a7f34: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7f30) {
            ctx->pc = 0x4A7F44u;
            goto label_4a7f44;
        }
    }
    ctx->pc = 0x4A7F38u;
label_4a7f38:
    // 0x4a7f38: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4a7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4a7f3c:
    // 0x4a7f3c: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x4a7f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_4a7f40:
    // 0x4a7f40: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4a7f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_4a7f44:
    // 0x4a7f44: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x4a7f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_4a7f48:
    // 0x4a7f48: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_4a7f4c:
    if (ctx->pc == 0x4A7F4Cu) {
        ctx->pc = 0x4A7F50u;
        goto label_4a7f50;
    }
    ctx->pc = 0x4A7F48u;
    {
        const bool branch_taken_0x4a7f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a7f48) {
            ctx->pc = 0x4A7F94u;
            goto label_4a7f94;
        }
    }
    ctx->pc = 0x4A7F50u;
label_4a7f50:
    // 0x4a7f50: 0x56a0001b  bnel        $s5, $zero, . + 4 + (0x1B << 2)
label_4a7f54:
    if (ctx->pc == 0x4A7F54u) {
        ctx->pc = 0x4A7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F50u;
        // 0x4a7f54: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7F58u;
        goto label_4a7f58;
    }
    ctx->pc = 0x4A7F50u;
    {
        const bool branch_taken_0x4a7f50 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7f50) {
            ctx->pc = 0x4A7F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7F50u;
            // 0x4a7f54: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7FC0u;
            goto label_4a7fc0;
        }
    }
    ctx->pc = 0x4A7F58u;
label_4a7f58:
    // 0x4a7f58: 0x5660000d  bnel        $s3, $zero, . + 4 + (0xD << 2)
label_4a7f5c:
    if (ctx->pc == 0x4A7F5Cu) {
        ctx->pc = 0x4A7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F58u;
        // 0x4a7f5c: 0x8e650030  lw          $a1, 0x30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7F60u;
        goto label_4a7f60;
    }
    ctx->pc = 0x4A7F58u;
    {
        const bool branch_taken_0x4a7f58 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7f58) {
            ctx->pc = 0x4A7F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7F58u;
            // 0x4a7f5c: 0x8e650030  lw          $a1, 0x30($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7F90u;
            goto label_4a7f90;
        }
    }
    ctx->pc = 0x4A7F60u;
label_4a7f60:
    // 0x4a7f60: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a7f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a7f64:
    // 0x4a7f64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a7f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a7f68:
    // 0x4a7f68: 0xc12a4d4  jal         func_4A9350
label_4a7f6c:
    if (ctx->pc == 0x4A7F6Cu) {
        ctx->pc = 0x4A7F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F68u;
        // 0x4a7f6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7F70u;
        goto label_4a7f70;
    }
    ctx->pc = 0x4A7F68u;
    SET_GPR_U32(ctx, 31, 0x4A7F70u);
    ctx->pc = 0x4A7F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7F68u;
    // 0x4a7f6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9350u, 0x4A7F68u, 0x4A7F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7F70u;
label_4a7f70:
    // 0x4a7f70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a7f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a7f74:
    // 0x4a7f74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4a7f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a7f78:
    // 0x4a7f78: 0xc126852  jal         func_49A148
label_4a7f7c:
    if (ctx->pc == 0x4A7F7Cu) {
        ctx->pc = 0x4A7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F78u;
        // 0x4a7f7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7F80u;
        goto label_4a7f80;
    }
    ctx->pc = 0x4A7F78u;
    SET_GPR_U32(ctx, 31, 0x4A7F80u);
    ctx->pc = 0x4A7F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7F78u;
    // 0x4a7f7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A148u, 0x4A7F78u, 0x4A7F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7F80u;
label_4a7f80:
    // 0x4a7f80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4a7f84:
    if (ctx->pc == 0x4A7F84u) {
        ctx->pc = 0x4A7F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F80u;
        // 0x4a7f84: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7F88u;
        goto label_4a7f88;
    }
    ctx->pc = 0x4A7F80u;
    {
        const bool branch_taken_0x4a7f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A7F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F80u;
        // 0x4a7f84: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7f80) {
            ctx->pc = 0x4A7F94u;
            goto label_4a7f94;
        }
    }
    ctx->pc = 0x4A7F88u;
label_4a7f88:
    // 0x4a7f88: 0x10000051  b           . + 4 + (0x51 << 2)
label_4a7f8c:
    if (ctx->pc == 0x4A7F8Cu) {
        ctx->pc = 0x4A7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F88u;
        // 0x4a7f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7F90u;
        goto label_4a7f90;
    }
    ctx->pc = 0x4A7F88u;
    {
        const bool branch_taken_0x4a7f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F88u;
        // 0x4a7f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7f88) {
            ctx->pc = 0x4A80D0u;
            goto label_4a80d0;
        }
    }
    ctx->pc = 0x4A7F90u;
label_4a7f90:
    // 0x4a7f90: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x4a7f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_4a7f94:
    // 0x4a7f94: 0x56a0000a  bnel        $s5, $zero, . + 4 + (0xA << 2)
label_4a7f98:
    if (ctx->pc == 0x4A7F98u) {
        ctx->pc = 0x4A7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F94u;
        // 0x4a7f98: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7F9Cu;
        goto label_4a7f9c;
    }
    ctx->pc = 0x4A7F94u;
    {
        const bool branch_taken_0x4a7f94 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7f94) {
            ctx->pc = 0x4A7F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7F94u;
            // 0x4a7f98: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A7FC0u;
            goto label_4a7fc0;
        }
    }
    ctx->pc = 0x4A7F9Cu;
label_4a7f9c:
    // 0x4a7f9c: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x4a7f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_4a7fa0:
    // 0x4a7fa0: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x4a7fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_4a7fa4:
    // 0x4a7fa4: 0x2484c2d8  addiu       $a0, $a0, -0x3D28
    ctx->pc = 0x4a7fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951640));
label_4a7fa8:
    // 0x4a7fa8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x4a7fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_4a7fac:
    // 0x4a7fac: 0xafa60044  sw          $a2, 0x44($sp)
    ctx->pc = 0x4a7facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
label_4a7fb0:
    // 0x4a7fb0: 0xc12709c  jal         func_49C270
label_4a7fb4:
    if (ctx->pc == 0x4A7FB4u) {
        ctx->pc = 0x4A7FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7FB0u;
        // 0x4a7fb4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7FB8u;
        goto label_4a7fb8;
    }
    ctx->pc = 0x4A7FB0u;
    SET_GPR_U32(ctx, 31, 0x4A7FB8u);
    ctx->pc = 0x4A7FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7FB0u;
    // 0x4a7fb4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49C270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C270u, 0x4A7FB0u, 0x4A7FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7FB8u;
label_4a7fb8:
    // 0x4a7fb8: 0x8fb50040  lw          $s5, 0x40($sp)
    ctx->pc = 0x4a7fb8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4a7fbc:
    // 0x4a7fbc: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x4a7fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_4a7fc0:
    // 0x4a7fc0: 0x2451005c  addiu       $s1, $v0, 0x5C
    ctx->pc = 0x4a7fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_4a7fc4:
    // 0x4a7fc4: 0x2454006c  addiu       $s4, $v0, 0x6C
    ctx->pc = 0x4a7fc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
label_4a7fc8:
    // 0x4a7fc8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x4a7fc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a7fcc:
    // 0x4a7fcc: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
label_4a7fd0:
    if (ctx->pc == 0x4A7FD0u) {
        ctx->pc = 0x4A7FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7FCCu;
        // 0x4a7fd0: 0x29e880b  movn        $s1, $s4, $fp (Delay Slot)
        if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7FD4u;
        goto label_4a7fd4;
    }
    ctx->pc = 0x4A7FCCu;
    {
        const bool branch_taken_0x4a7fcc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7FCCu;
        // 0x4a7fd0: 0x29e880b  movn        $s1, $s4, $fp (Delay Slot)
        if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7fcc) {
            ctx->pc = 0x4A7FECu;
            goto label_4a7fec;
        }
    }
    ctx->pc = 0x4A7FD4u;
label_4a7fd4:
    // 0x4a7fd4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4a7fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_4a7fd8:
    // 0x4a7fd8: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x4a7fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_4a7fdc:
    // 0x4a7fdc: 0x40f809  jalr        $v0
label_4a7fe0:
    if (ctx->pc == 0x4A7FE0u) {
        ctx->pc = 0x4A7FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7FDCu;
        // 0x4a7fe0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7FE4u;
        goto label_4a7fe4;
    }
    ctx->pc = 0x4A7FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A7FE4u);
        ctx->pc = 0x4A7FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7FDCu;
        // 0x4a7fe0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A7FDCu, 0x4A7FE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A7FE4u;
label_4a7fe4:
    // 0x4a7fe4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x4a7fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4a7fe8:
    // 0x4a7fe8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x4a7fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a7fec:
    // 0x4a7fec: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a7fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4a7ff0:
    // 0x4a7ff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a7ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a7ff4:
    // 0x4a7ff4: 0xc127ca4  jal         func_49F290
label_4a7ff8:
    if (ctx->pc == 0x4A7FF8u) {
        ctx->pc = 0x4A7FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7FF4u;
        // 0x4a7ff8: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A7FFCu;
        goto label_4a7ffc;
    }
    ctx->pc = 0x4A7FF4u;
    SET_GPR_U32(ctx, 31, 0x4A7FFCu);
    ctx->pc = 0x4A7FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7FF4u;
    // 0x4a7ff8: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4A7FF4u, 0x4A7FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7FFCu;
label_4a7ffc:
    // 0x4a7ffc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a7ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a8000:
    // 0x4a8000: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
label_4a8004:
    if (ctx->pc == 0x4A8004u) {
        ctx->pc = 0x4A8004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8000u;
        // 0x4a8004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8008u;
        goto label_4a8008;
    }
    ctx->pc = 0x4A8000u;
    {
        const bool branch_taken_0x4a8000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8000u;
        // 0x4a8004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8000) {
            ctx->pc = 0x4A80D0u;
            goto label_4a80d0;
        }
    }
    ctx->pc = 0x4A8008u;
label_4a8008:
    // 0x4a8008: 0x13c0000b  beqz        $fp, . + 4 + (0xB << 2)
label_4a800c:
    if (ctx->pc == 0x4A800Cu) {
        ctx->pc = 0x4A800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8008u;
        // 0x4a800c: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8010u;
        goto label_4a8010;
    }
    ctx->pc = 0x4A8008u;
    {
        const bool branch_taken_0x4a8008 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8008u;
        // 0x4a800c: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8008) {
            ctx->pc = 0x4A8038u;
            goto label_4a8038;
        }
    }
    ctx->pc = 0x4A8010u;
label_4a8010:
    // 0x4a8010: 0x6bc30007  ldl         $v1, 0x7($fp)
    ctx->pc = 0x4a8010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4a8014:
    // 0x4a8014: 0x6fc30000  ldr         $v1, 0x0($fp)
    ctx->pc = 0x4a8014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4a8018:
    // 0x4a8018: 0x6bc4000f  ldl         $a0, 0xF($fp)
    ctx->pc = 0x4a8018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4a801c:
    // 0x4a801c: 0x6fc40008  ldr         $a0, 0x8($fp)
    ctx->pc = 0x4a801cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4a8020:
    // 0x4a8020: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x4a8020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8024:
    // 0x4a8024: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x4a8024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8028:
    // 0x4a8028: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x4a8028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a802c:
    // 0x4a802c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x4a802cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a8030:
    // 0x4a8030: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x4a8030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a8034:
    // 0x4a8034: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x4a8034u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a8038:
    // 0x4a8038: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
label_4a803c:
    if (ctx->pc == 0x4A803Cu) {
        ctx->pc = 0x4A803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8038u;
        // 0x4a803c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8040u;
        goto label_4a8040;
    }
    ctx->pc = 0x4A8038u;
    {
        const bool branch_taken_0x4a8038 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8038u;
        // 0x4a803c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8038) {
            ctx->pc = 0x4A8058u;
            goto label_4a8058;
        }
    }
    ctx->pc = 0x4A8040u;
label_4a8040:
    // 0x4a8040: 0x2123021  addu        $a2, $s0, $s2
    ctx->pc = 0x4a8040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_4a8044:
    // 0x4a8044: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4a8044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4a8048:
    // 0x4a8048: 0x8c62e94c  lw          $v0, -0x16B4($v1)
    ctx->pc = 0x4a8048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961484)));
label_4a804c:
    // 0x4a804c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4a804cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a8050:
    // 0x4a8050: 0x40f809  jalr        $v0
label_4a8054:
    if (ctx->pc == 0x4A8054u) {
        ctx->pc = 0x4A8054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8050u;
        // 0x4a8054: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8058u;
        goto label_4a8058;
    }
    ctx->pc = 0x4A8050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A8058u);
        ctx->pc = 0x4A8054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8050u;
        // 0x4a8054: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8050u, 0x4A8058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A8058u;
label_4a8058:
    // 0x4a8058: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x4a8058u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_4a805c:
    // 0x4a805c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x4a805cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a8060:
    // 0x4a8060: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a8060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a8064:
    // 0x4a8064: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4a8064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a8068:
    // 0x4a8068: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x4a8068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4a806c:
    // 0x4a806c: 0xc129a9c  jal         func_4A6A70
label_4a8070:
    if (ctx->pc == 0x4A8070u) {
        ctx->pc = 0x4A8070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A806Cu;
        // 0x4a8070: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8074u;
        goto label_4a8074;
    }
    ctx->pc = 0x4A806Cu;
    SET_GPR_U32(ctx, 31, 0x4A8074u);
    ctx->pc = 0x4A8070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A806Cu;
    // 0x4a8070: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6A70u, 0x4A806Cu, 0x4A8074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8074u;
label_4a8074:
    // 0x4a8074: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a8074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a8078:
    // 0x4a8078: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_4a807c:
    if (ctx->pc == 0x4A807Cu) {
        ctx->pc = 0x4A807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8078u;
        // 0x4a807c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8080u;
        goto label_4a8080;
    }
    ctx->pc = 0x4A8078u;
    {
        const bool branch_taken_0x4a8078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8078u;
        // 0x4a807c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8078) {
            ctx->pc = 0x4A80D0u;
            goto label_4a80d0;
        }
    }
    ctx->pc = 0x4A8080u;
label_4a8080:
    // 0x4a8080: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_4a8084:
    if (ctx->pc == 0x4A8084u) {
        ctx->pc = 0x4A8084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8080u;
        // 0x4a8084: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8088u;
        goto label_4a8088;
    }
    ctx->pc = 0x4A8080u;
    {
        const bool branch_taken_0x4a8080 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8080u;
        // 0x4a8084: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8080) {
            ctx->pc = 0x4A80D0u;
            goto label_4a80d0;
        }
    }
    ctx->pc = 0x4A8088u;
label_4a8088:
    // 0x4a8088: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x4a8088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_4a808c:
    // 0x4a808c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a808cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4a8090:
    // 0x4a8090: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x4a8090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
label_4a8094:
    // 0x4a8094: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a8094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a8098:
    // 0x4a8098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a8098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a809c:
    // 0x4a809c: 0xc12a47e  jal         func_4A91F8
label_4a80a0:
    if (ctx->pc == 0x4A80A0u) {
        ctx->pc = 0x4A80A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A809Cu;
        // 0x4a80a0: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A80A4u;
        goto label_4a80a4;
    }
    ctx->pc = 0x4A809Cu;
    SET_GPR_U32(ctx, 31, 0x4A80A4u);
    ctx->pc = 0x4A80A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A809Cu;
    // 0x4a80a0: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x4A809Cu, 0x4A80A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A80A4u;
label_4a80a4:
    // 0x4a80a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4a80a8:
    if (ctx->pc == 0x4A80A8u) {
        ctx->pc = 0x4A80A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A80A4u;
        // 0x4a80a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A80ACu;
        goto label_4a80ac;
    }
    ctx->pc = 0x4A80A4u;
    {
        const bool branch_taken_0x4a80a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A80A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A80A4u;
        // 0x4a80a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a80a4) {
            ctx->pc = 0x4A80B4u;
            goto label_4a80b4;
        }
    }
    ctx->pc = 0x4A80ACu;
label_4a80ac:
    // 0x4a80ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_4a80b0:
    if (ctx->pc == 0x4A80B0u) {
        ctx->pc = 0x4A80B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A80ACu;
        // 0x4a80b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A80B4u;
        goto label_4a80b4;
    }
    ctx->pc = 0x4A80ACu;
    {
        const bool branch_taken_0x4a80ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A80B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A80ACu;
        // 0x4a80b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a80ac) {
            ctx->pc = 0x4A80C4u;
            goto label_4a80c4;
        }
    }
    ctx->pc = 0x4A80B4u;
label_4a80b4:
    // 0x4a80b4: 0xc12a448  jal         func_4A9120
label_4a80b8:
    if (ctx->pc == 0x4A80B8u) {
        ctx->pc = 0x4A80B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A80B4u;
        // 0x4a80b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A80BCu;
        goto label_4a80bc;
    }
    ctx->pc = 0x4A80B4u;
    SET_GPR_U32(ctx, 31, 0x4A80BCu);
    ctx->pc = 0x4A80B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A80B4u;
    // 0x4a80b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x4A80B4u, 0x4A80BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A80BCu;
label_4a80bc:
    // 0x4a80bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4a80bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a80c0:
    // 0x4a80c0: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x4a80c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
label_4a80c4:
    // 0x4a80c4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_4a80c8:
    if (ctx->pc == 0x4A80C8u) {
        ctx->pc = 0x4A80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A80C4u;
        // 0x4a80c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A80CCu;
        goto label_4a80cc;
    }
    ctx->pc = 0x4A80C4u;
    {
        const bool branch_taken_0x4a80c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A80C4u;
        // 0x4a80c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a80c4) {
            ctx->pc = 0x4A80D0u;
            goto label_4a80d0;
        }
    }
    ctx->pc = 0x4A80CCu;
label_4a80cc:
    // 0x4a80cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a80ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a80d0:
    // 0x4a80d0: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x4a80d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4a80d4:
    // 0x4a80d4: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x4a80d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4a80d8:
    // 0x4a80d8: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x4a80d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4a80dc:
    // 0x4a80dc: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x4a80dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4a80e0:
    // 0x4a80e0: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x4a80e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4a80e4:
    // 0x4a80e4: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x4a80e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4a80e8:
    // 0x4a80e8: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x4a80e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4a80ec:
    // 0x4a80ec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4a80ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a80f0:
    // 0x4a80f0: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x4a80f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a80f4:
    // 0x4a80f4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4a80f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4a80f8:
    // 0x4a80f8: 0x3e00008  jr          $ra
label_4a80fc:
    if (ctx->pc == 0x4A80FCu) {
        ctx->pc = 0x4A80FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A80F8u;
        // 0x4a80fc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8100u;
        goto label_4a8100;
    }
    ctx->pc = 0x4A80F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A80FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A80F8u;
        // 0x4a80fc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A80F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8100u;
label_4a8100:
    // 0x4a8100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a8100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4a8104:
    // 0x4a8104: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4a8104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4a8108:
    // 0x4a8108: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4a8108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4a810c:
    // 0x4a810c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a810cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a8110:
    // 0x4a8110: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a8110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4a8114:
    // 0x4a8114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a8114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a8118:
    // 0x4a8118: 0xc12821c  jal         func_4A0870
label_4a811c:
    if (ctx->pc == 0x4A811Cu) {
        ctx->pc = 0x4A811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8118u;
        // 0x4a811c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8120u;
        goto label_4a8120;
    }
    ctx->pc = 0x4A8118u;
    SET_GPR_U32(ctx, 31, 0x4A8120u);
    ctx->pc = 0x4A811Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8118u;
    // 0x4a811c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0870u, 0x4A8118u, 0x4A8120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8120u;
label_4a8120:
    // 0x4a8120: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a8120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a8124:
    // 0x4a8124: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_4a8128:
    if (ctx->pc == 0x4A8128u) {
        ctx->pc = 0x4A8128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8124u;
        // 0x4a8128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A812Cu;
        goto label_4a812c;
    }
    ctx->pc = 0x4A8124u;
    {
        const bool branch_taken_0x4a8124 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8124u;
        // 0x4a8128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8124) {
            ctx->pc = 0x4A815Cu;
            goto label_4a815c;
        }
    }
    ctx->pc = 0x4A812Cu;
label_4a812c:
    // 0x4a812c: 0x0  nop
    ctx->pc = 0x4a812cu;
    // NOP
label_4a8130:
    // 0x4a8130: 0xc128210  jal         func_4A0840
label_4a8134:
    if (ctx->pc == 0x4A8134u) {
        ctx->pc = 0x4A8134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8130u;
        // 0x4a8134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8138u;
        goto label_4a8138;
    }
    ctx->pc = 0x4A8130u;
    SET_GPR_U32(ctx, 31, 0x4A8138u);
    ctx->pc = 0x4A8134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8130u;
    // 0x4a8134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0840u, 0x4A8130u, 0x4A8138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8138u;
label_4a8138:
    // 0x4a8138: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a8138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a813c:
    // 0x4a813c: 0xc1282cc  jal         func_4A0B30
label_4a8140:
    if (ctx->pc == 0x4A8140u) {
        ctx->pc = 0x4A8140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A813Cu;
        // 0x4a8140: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8144u;
        goto label_4a8144;
    }
    ctx->pc = 0x4A813Cu;
    SET_GPR_U32(ctx, 31, 0x4A8144u);
    ctx->pc = 0x4A8140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A813Cu;
    // 0x4a8140: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0B30u, 0x4A813Cu, 0x4A8144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8144u;
label_4a8144:
    // 0x4a8144: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_4a8148:
    if (ctx->pc == 0x4A8148u) {
        ctx->pc = 0x4A8148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8144u;
        // 0x4a8148: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A814Cu;
        goto label_4a814c;
    }
    ctx->pc = 0x4A8144u;
    {
        const bool branch_taken_0x4a8144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a8144) {
            ctx->pc = 0x4A8148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8144u;
            // 0x4a8148: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8160u;
            goto label_4a8160;
        }
    }
    ctx->pc = 0x4A814Cu;
label_4a814c:
    // 0x4a814c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4a814cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4a8150:
    // 0x4a8150: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x4a8150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4a8154:
    // 0x4a8154: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_4a8158:
    if (ctx->pc == 0x4A8158u) {
        ctx->pc = 0x4A8158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8154u;
        // 0x4a8158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A815Cu;
        goto label_4a815c;
    }
    ctx->pc = 0x4A8154u;
    {
        const bool branch_taken_0x4a8154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8154u;
        // 0x4a8158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8154) {
            ctx->pc = 0x4A8130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8130;
        }
    }
    ctx->pc = 0x4A815Cu;
label_4a815c:
    // 0x4a815c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a815cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a8160:
    // 0x4a8160: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a8160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a8164:
    // 0x4a8164: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4a8164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a8168:
    // 0x4a8168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a8168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a816c:
    // 0x4a816c: 0x3e00008  jr          $ra
label_4a8170:
    if (ctx->pc == 0x4A8170u) {
        ctx->pc = 0x4A8170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A816Cu;
        // 0x4a8170: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8174u;
        goto label_4a8174;
    }
    ctx->pc = 0x4A816Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A816Cu;
        // 0x4a8170: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A816Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8174u;
label_4a8174:
    // 0x4a8174: 0x0  nop
    ctx->pc = 0x4a8174u;
    // NOP
    ctx->pc = 0x4a8178u;
}
