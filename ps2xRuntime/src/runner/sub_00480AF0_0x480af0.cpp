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

// Function: sub_00480AF0
// Address: 0x480af0 - 0x480fc0
void sub_00480AF0_0x480af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00480AF0_0x480af0");
#endif

    switch (ctx->pc) {
        case 0x480af0u: goto label_480af0;
        case 0x480af4u: goto label_480af4;
        case 0x480af8u: goto label_480af8;
        case 0x480afcu: goto label_480afc;
        case 0x480b00u: goto label_480b00;
        case 0x480b04u: goto label_480b04;
        case 0x480b08u: goto label_480b08;
        case 0x480b0cu: goto label_480b0c;
        case 0x480b10u: goto label_480b10;
        case 0x480b14u: goto label_480b14;
        case 0x480b18u: goto label_480b18;
        case 0x480b1cu: goto label_480b1c;
        case 0x480b20u: goto label_480b20;
        case 0x480b24u: goto label_480b24;
        case 0x480b28u: goto label_480b28;
        case 0x480b2cu: goto label_480b2c;
        case 0x480b30u: goto label_480b30;
        case 0x480b34u: goto label_480b34;
        case 0x480b38u: goto label_480b38;
        case 0x480b3cu: goto label_480b3c;
        case 0x480b40u: goto label_480b40;
        case 0x480b44u: goto label_480b44;
        case 0x480b48u: goto label_480b48;
        case 0x480b4cu: goto label_480b4c;
        case 0x480b50u: goto label_480b50;
        case 0x480b54u: goto label_480b54;
        case 0x480b58u: goto label_480b58;
        case 0x480b5cu: goto label_480b5c;
        case 0x480b60u: goto label_480b60;
        case 0x480b64u: goto label_480b64;
        case 0x480b68u: goto label_480b68;
        case 0x480b6cu: goto label_480b6c;
        case 0x480b70u: goto label_480b70;
        case 0x480b74u: goto label_480b74;
        case 0x480b78u: goto label_480b78;
        case 0x480b7cu: goto label_480b7c;
        case 0x480b80u: goto label_480b80;
        case 0x480b84u: goto label_480b84;
        case 0x480b88u: goto label_480b88;
        case 0x480b8cu: goto label_480b8c;
        case 0x480b90u: goto label_480b90;
        case 0x480b94u: goto label_480b94;
        case 0x480b98u: goto label_480b98;
        case 0x480b9cu: goto label_480b9c;
        case 0x480ba0u: goto label_480ba0;
        case 0x480ba4u: goto label_480ba4;
        case 0x480ba8u: goto label_480ba8;
        case 0x480bacu: goto label_480bac;
        case 0x480bb0u: goto label_480bb0;
        case 0x480bb4u: goto label_480bb4;
        case 0x480bb8u: goto label_480bb8;
        case 0x480bbcu: goto label_480bbc;
        case 0x480bc0u: goto label_480bc0;
        case 0x480bc4u: goto label_480bc4;
        case 0x480bc8u: goto label_480bc8;
        case 0x480bccu: goto label_480bcc;
        case 0x480bd0u: goto label_480bd0;
        case 0x480bd4u: goto label_480bd4;
        case 0x480bd8u: goto label_480bd8;
        case 0x480bdcu: goto label_480bdc;
        case 0x480be0u: goto label_480be0;
        case 0x480be4u: goto label_480be4;
        case 0x480be8u: goto label_480be8;
        case 0x480becu: goto label_480bec;
        case 0x480bf0u: goto label_480bf0;
        case 0x480bf4u: goto label_480bf4;
        case 0x480bf8u: goto label_480bf8;
        case 0x480bfcu: goto label_480bfc;
        case 0x480c00u: goto label_480c00;
        case 0x480c04u: goto label_480c04;
        case 0x480c08u: goto label_480c08;
        case 0x480c0cu: goto label_480c0c;
        case 0x480c10u: goto label_480c10;
        case 0x480c14u: goto label_480c14;
        case 0x480c18u: goto label_480c18;
        case 0x480c1cu: goto label_480c1c;
        case 0x480c20u: goto label_480c20;
        case 0x480c24u: goto label_480c24;
        case 0x480c28u: goto label_480c28;
        case 0x480c2cu: goto label_480c2c;
        case 0x480c30u: goto label_480c30;
        case 0x480c34u: goto label_480c34;
        case 0x480c38u: goto label_480c38;
        case 0x480c3cu: goto label_480c3c;
        case 0x480c40u: goto label_480c40;
        case 0x480c44u: goto label_480c44;
        case 0x480c48u: goto label_480c48;
        case 0x480c4cu: goto label_480c4c;
        case 0x480c50u: goto label_480c50;
        case 0x480c54u: goto label_480c54;
        case 0x480c58u: goto label_480c58;
        case 0x480c5cu: goto label_480c5c;
        case 0x480c60u: goto label_480c60;
        case 0x480c64u: goto label_480c64;
        case 0x480c68u: goto label_480c68;
        case 0x480c6cu: goto label_480c6c;
        case 0x480c70u: goto label_480c70;
        case 0x480c74u: goto label_480c74;
        case 0x480c78u: goto label_480c78;
        case 0x480c7cu: goto label_480c7c;
        case 0x480c80u: goto label_480c80;
        case 0x480c84u: goto label_480c84;
        case 0x480c88u: goto label_480c88;
        case 0x480c8cu: goto label_480c8c;
        case 0x480c90u: goto label_480c90;
        case 0x480c94u: goto label_480c94;
        case 0x480c98u: goto label_480c98;
        case 0x480c9cu: goto label_480c9c;
        case 0x480ca0u: goto label_480ca0;
        case 0x480ca4u: goto label_480ca4;
        case 0x480ca8u: goto label_480ca8;
        case 0x480cacu: goto label_480cac;
        case 0x480cb0u: goto label_480cb0;
        case 0x480cb4u: goto label_480cb4;
        case 0x480cb8u: goto label_480cb8;
        case 0x480cbcu: goto label_480cbc;
        case 0x480cc0u: goto label_480cc0;
        case 0x480cc4u: goto label_480cc4;
        case 0x480cc8u: goto label_480cc8;
        case 0x480cccu: goto label_480ccc;
        case 0x480cd0u: goto label_480cd0;
        case 0x480cd4u: goto label_480cd4;
        case 0x480cd8u: goto label_480cd8;
        case 0x480cdcu: goto label_480cdc;
        case 0x480ce0u: goto label_480ce0;
        case 0x480ce4u: goto label_480ce4;
        case 0x480ce8u: goto label_480ce8;
        case 0x480cecu: goto label_480cec;
        case 0x480cf0u: goto label_480cf0;
        case 0x480cf4u: goto label_480cf4;
        case 0x480cf8u: goto label_480cf8;
        case 0x480cfcu: goto label_480cfc;
        case 0x480d00u: goto label_480d00;
        case 0x480d04u: goto label_480d04;
        case 0x480d08u: goto label_480d08;
        case 0x480d0cu: goto label_480d0c;
        case 0x480d10u: goto label_480d10;
        case 0x480d14u: goto label_480d14;
        case 0x480d18u: goto label_480d18;
        case 0x480d1cu: goto label_480d1c;
        case 0x480d20u: goto label_480d20;
        case 0x480d24u: goto label_480d24;
        case 0x480d28u: goto label_480d28;
        case 0x480d2cu: goto label_480d2c;
        case 0x480d30u: goto label_480d30;
        case 0x480d34u: goto label_480d34;
        case 0x480d38u: goto label_480d38;
        case 0x480d3cu: goto label_480d3c;
        case 0x480d40u: goto label_480d40;
        case 0x480d44u: goto label_480d44;
        case 0x480d48u: goto label_480d48;
        case 0x480d4cu: goto label_480d4c;
        case 0x480d50u: goto label_480d50;
        case 0x480d54u: goto label_480d54;
        case 0x480d58u: goto label_480d58;
        case 0x480d5cu: goto label_480d5c;
        case 0x480d60u: goto label_480d60;
        case 0x480d64u: goto label_480d64;
        case 0x480d68u: goto label_480d68;
        case 0x480d6cu: goto label_480d6c;
        case 0x480d70u: goto label_480d70;
        case 0x480d74u: goto label_480d74;
        case 0x480d78u: goto label_480d78;
        case 0x480d7cu: goto label_480d7c;
        case 0x480d80u: goto label_480d80;
        case 0x480d84u: goto label_480d84;
        case 0x480d88u: goto label_480d88;
        case 0x480d8cu: goto label_480d8c;
        case 0x480d90u: goto label_480d90;
        case 0x480d94u: goto label_480d94;
        case 0x480d98u: goto label_480d98;
        case 0x480d9cu: goto label_480d9c;
        case 0x480da0u: goto label_480da0;
        case 0x480da4u: goto label_480da4;
        case 0x480da8u: goto label_480da8;
        case 0x480dacu: goto label_480dac;
        case 0x480db0u: goto label_480db0;
        case 0x480db4u: goto label_480db4;
        case 0x480db8u: goto label_480db8;
        case 0x480dbcu: goto label_480dbc;
        case 0x480dc0u: goto label_480dc0;
        case 0x480dc4u: goto label_480dc4;
        case 0x480dc8u: goto label_480dc8;
        case 0x480dccu: goto label_480dcc;
        case 0x480dd0u: goto label_480dd0;
        case 0x480dd4u: goto label_480dd4;
        case 0x480dd8u: goto label_480dd8;
        case 0x480ddcu: goto label_480ddc;
        case 0x480de0u: goto label_480de0;
        case 0x480de4u: goto label_480de4;
        case 0x480de8u: goto label_480de8;
        case 0x480decu: goto label_480dec;
        case 0x480df0u: goto label_480df0;
        case 0x480df4u: goto label_480df4;
        case 0x480df8u: goto label_480df8;
        case 0x480dfcu: goto label_480dfc;
        case 0x480e00u: goto label_480e00;
        case 0x480e04u: goto label_480e04;
        case 0x480e08u: goto label_480e08;
        case 0x480e0cu: goto label_480e0c;
        case 0x480e10u: goto label_480e10;
        case 0x480e14u: goto label_480e14;
        case 0x480e18u: goto label_480e18;
        case 0x480e1cu: goto label_480e1c;
        case 0x480e20u: goto label_480e20;
        case 0x480e24u: goto label_480e24;
        case 0x480e28u: goto label_480e28;
        case 0x480e2cu: goto label_480e2c;
        case 0x480e30u: goto label_480e30;
        case 0x480e34u: goto label_480e34;
        case 0x480e38u: goto label_480e38;
        case 0x480e3cu: goto label_480e3c;
        case 0x480e40u: goto label_480e40;
        case 0x480e44u: goto label_480e44;
        case 0x480e48u: goto label_480e48;
        case 0x480e4cu: goto label_480e4c;
        case 0x480e50u: goto label_480e50;
        case 0x480e54u: goto label_480e54;
        case 0x480e58u: goto label_480e58;
        case 0x480e5cu: goto label_480e5c;
        case 0x480e60u: goto label_480e60;
        case 0x480e64u: goto label_480e64;
        case 0x480e68u: goto label_480e68;
        case 0x480e6cu: goto label_480e6c;
        case 0x480e70u: goto label_480e70;
        case 0x480e74u: goto label_480e74;
        case 0x480e78u: goto label_480e78;
        case 0x480e7cu: goto label_480e7c;
        case 0x480e80u: goto label_480e80;
        case 0x480e84u: goto label_480e84;
        case 0x480e88u: goto label_480e88;
        case 0x480e8cu: goto label_480e8c;
        case 0x480e90u: goto label_480e90;
        case 0x480e94u: goto label_480e94;
        case 0x480e98u: goto label_480e98;
        case 0x480e9cu: goto label_480e9c;
        case 0x480ea0u: goto label_480ea0;
        case 0x480ea4u: goto label_480ea4;
        case 0x480ea8u: goto label_480ea8;
        case 0x480eacu: goto label_480eac;
        case 0x480eb0u: goto label_480eb0;
        case 0x480eb4u: goto label_480eb4;
        case 0x480eb8u: goto label_480eb8;
        case 0x480ebcu: goto label_480ebc;
        case 0x480ec0u: goto label_480ec0;
        case 0x480ec4u: goto label_480ec4;
        case 0x480ec8u: goto label_480ec8;
        case 0x480eccu: goto label_480ecc;
        case 0x480ed0u: goto label_480ed0;
        case 0x480ed4u: goto label_480ed4;
        case 0x480ed8u: goto label_480ed8;
        case 0x480edcu: goto label_480edc;
        case 0x480ee0u: goto label_480ee0;
        case 0x480ee4u: goto label_480ee4;
        case 0x480ee8u: goto label_480ee8;
        case 0x480eecu: goto label_480eec;
        case 0x480ef0u: goto label_480ef0;
        case 0x480ef4u: goto label_480ef4;
        case 0x480ef8u: goto label_480ef8;
        case 0x480efcu: goto label_480efc;
        case 0x480f00u: goto label_480f00;
        case 0x480f04u: goto label_480f04;
        case 0x480f08u: goto label_480f08;
        case 0x480f0cu: goto label_480f0c;
        case 0x480f10u: goto label_480f10;
        case 0x480f14u: goto label_480f14;
        case 0x480f18u: goto label_480f18;
        case 0x480f1cu: goto label_480f1c;
        case 0x480f20u: goto label_480f20;
        case 0x480f24u: goto label_480f24;
        case 0x480f28u: goto label_480f28;
        case 0x480f2cu: goto label_480f2c;
        case 0x480f30u: goto label_480f30;
        case 0x480f34u: goto label_480f34;
        case 0x480f38u: goto label_480f38;
        case 0x480f3cu: goto label_480f3c;
        case 0x480f40u: goto label_480f40;
        case 0x480f44u: goto label_480f44;
        case 0x480f48u: goto label_480f48;
        case 0x480f4cu: goto label_480f4c;
        case 0x480f50u: goto label_480f50;
        case 0x480f54u: goto label_480f54;
        case 0x480f58u: goto label_480f58;
        case 0x480f5cu: goto label_480f5c;
        case 0x480f60u: goto label_480f60;
        case 0x480f64u: goto label_480f64;
        case 0x480f68u: goto label_480f68;
        case 0x480f6cu: goto label_480f6c;
        case 0x480f70u: goto label_480f70;
        case 0x480f74u: goto label_480f74;
        case 0x480f78u: goto label_480f78;
        case 0x480f7cu: goto label_480f7c;
        case 0x480f80u: goto label_480f80;
        case 0x480f84u: goto label_480f84;
        case 0x480f88u: goto label_480f88;
        case 0x480f8cu: goto label_480f8c;
        case 0x480f90u: goto label_480f90;
        case 0x480f94u: goto label_480f94;
        case 0x480f98u: goto label_480f98;
        case 0x480f9cu: goto label_480f9c;
        case 0x480fa0u: goto label_480fa0;
        case 0x480fa4u: goto label_480fa4;
        case 0x480fa8u: goto label_480fa8;
        case 0x480facu: goto label_480fac;
        case 0x480fb0u: goto label_480fb0;
        case 0x480fb4u: goto label_480fb4;
        case 0x480fb8u: goto label_480fb8;
        case 0x480fbcu: goto label_480fbc;
        default: break;
    }

    ctx->pc = 0x480af0u;

label_480af0:
    // 0x480af0: 0x27bdfa80  addiu       $sp, $sp, -0x580
    ctx->pc = 0x480af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965888));
label_480af4:
    // 0x480af4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x480af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_480af8:
    // 0x480af8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x480af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_480afc:
    // 0x480afc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x480afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_480b00:
    // 0x480b00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x480b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_480b04:
    // 0x480b04: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x480b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_480b08:
    // 0x480b08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x480b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_480b0c:
    // 0x480b0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x480b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_480b10:
    // 0x480b10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x480b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_480b14:
    // 0x480b14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x480b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_480b18:
    // 0x480b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x480b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_480b1c:
    // 0x480b1c: 0xafa40560  sw          $a0, 0x560($sp)
    ctx->pc = 0x480b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1376), GPR_U32(ctx, 4));
label_480b20:
    // 0x480b20: 0xafa50570  sw          $a1, 0x570($sp)
    ctx->pc = 0x480b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1392), GPR_U32(ctx, 5));
label_480b24:
    // 0x480b24: 0xc0f53aa  jal         func_3D4EA8
label_480b28:
    if (ctx->pc == 0x480B28u) {
        ctx->pc = 0x480B2Cu;
        goto label_480b2c;
    }
    ctx->pc = 0x480B24u;
    SET_GPR_U32(ctx, 31, 0x480B2Cu);
    ctx->pc = 0x3D4EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4EA8u, 0x480B24u, 0x480B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480B2Cu;
label_480b2c:
    // 0x480b2c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x480b2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_480b30:
    // 0x480b30: 0x8fa20560  lw          $v0, 0x560($sp)
    ctx->pc = 0x480b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1376)));
label_480b34:
    // 0x480b34: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x480b34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_480b38:
    // 0x480b38: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x480b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_480b3c:
    // 0x480b3c: 0xc0bc60c  jal         func_2F1830
label_480b40:
    if (ctx->pc == 0x480B40u) {
        ctx->pc = 0x480B44u;
        goto label_480b44;
    }
    ctx->pc = 0x480B3Cu;
    SET_GPR_U32(ctx, 31, 0x480B44u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x480B3Cu, 0x480B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480B44u;
label_480b44:
    // 0x480b44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x480b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_480b48:
    // 0x480b48: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x480b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_480b4c:
    // 0x480b4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x480b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_480b50:
    // 0x480b50: 0xc0bc710  jal         func_2F1C40
label_480b54:
    if (ctx->pc == 0x480B54u) {
        ctx->pc = 0x480B58u;
        goto label_480b58;
    }
    ctx->pc = 0x480B50u;
    SET_GPR_U32(ctx, 31, 0x480B58u);
    ctx->pc = 0x2F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C40u, 0x480B50u, 0x480B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480B58u;
label_480b58:
    // 0x480b58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_480b5c:
    if (ctx->pc == 0x480B5Cu) {
        ctx->pc = 0x480B60u;
        goto label_480b60;
    }
    ctx->pc = 0x480B58u;
    {
        const bool branch_taken_0x480b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480b58) {
            ctx->pc = 0x480B6Cu;
            goto label_480b6c;
        }
    }
    ctx->pc = 0x480B60u;
label_480b60:
    // 0x480b60: 0x8fa20560  lw          $v0, 0x560($sp)
    ctx->pc = 0x480b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1376)));
label_480b64:
    // 0x480b64: 0x10000107  b           . + 4 + (0x107 << 2)
label_480b68:
    if (ctx->pc == 0x480B68u) {
        ctx->pc = 0x480B6Cu;
        goto label_480b6c;
    }
    ctx->pc = 0x480B64u;
    {
        const bool branch_taken_0x480b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x480b64) {
            ctx->pc = 0x480F84u;
            goto label_480f84;
        }
    }
    ctx->pc = 0x480B6Cu;
label_480b6c:
    // 0x480b6c: 0x8fb40570  lw          $s4, 0x570($sp)
    ctx->pc = 0x480b6cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1392)));
label_480b70:
    // 0x480b70: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x480b70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_480b74:
    // 0x480b74: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_480b78:
    if (ctx->pc == 0x480B78u) {
        ctx->pc = 0x480B7Cu;
        goto label_480b7c;
    }
    ctx->pc = 0x480B74u;
    {
        const bool branch_taken_0x480b74 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x480b74) {
            ctx->pc = 0x480B8Cu;
            goto label_480b8c;
        }
    }
    ctx->pc = 0x480B7Cu;
label_480b7c:
    // 0x480b7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x480b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_480b80:
    // 0x480b80: 0xc0bc60c  jal         func_2F1830
label_480b84:
    if (ctx->pc == 0x480B84u) {
        ctx->pc = 0x480B88u;
        goto label_480b88;
    }
    ctx->pc = 0x480B80u;
    SET_GPR_U32(ctx, 31, 0x480B88u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x480B80u, 0x480B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480B88u;
label_480b88:
    // 0x480b88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x480b88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_480b8c:
    // 0x480b8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x480b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_480b90:
    // 0x480b90: 0xc0bc60c  jal         func_2F1830
label_480b94:
    if (ctx->pc == 0x480B94u) {
        ctx->pc = 0x480B98u;
        goto label_480b98;
    }
    ctx->pc = 0x480B90u;
    SET_GPR_U32(ctx, 31, 0x480B98u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x480B90u, 0x480B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480B98u;
label_480b98:
    // 0x480b98: 0xafa2055c  sw          $v0, 0x55C($sp)
    ctx->pc = 0x480b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1372), GPR_U32(ctx, 2));
label_480b9c:
    // 0x480b9c: 0x2796b578  addiu       $s6, $gp, -0x4A88
    ctx->pc = 0x480b9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948216));
label_480ba0:
    // 0x480ba0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x480ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_480ba4:
    // 0x480ba4: 0xc0bc60c  jal         func_2F1830
label_480ba8:
    if (ctx->pc == 0x480BA8u) {
        ctx->pc = 0x480BACu;
        goto label_480bac;
    }
    ctx->pc = 0x480BA4u;
    SET_GPR_U32(ctx, 31, 0x480BACu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x480BA4u, 0x480BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480BACu;
label_480bac:
    // 0x480bac: 0x8fa3055c  lw          $v1, 0x55C($sp)
    ctx->pc = 0x480bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1372)));
label_480bb0:
    // 0x480bb0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x480bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_480bb4:
    // 0x480bb4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x480bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_480bb8:
    // 0x480bb8: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x480bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_480bbc:
    // 0x480bbc: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x480bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
label_480bc0:
    // 0x480bc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x480bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_480bc4:
    // 0x480bc4: 0xc120408  jal         func_481020
label_480bc8:
    if (ctx->pc == 0x480BC8u) {
        ctx->pc = 0x480BCCu;
        goto label_480bcc;
    }
    ctx->pc = 0x480BC4u;
    SET_GPR_U32(ctx, 31, 0x480BCCu);
    ctx->pc = 0x481020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481020u, 0x480BC4u, 0x480BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480BCCu;
label_480bcc:
    // 0x480bcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x480bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_480bd0:
    // 0x480bd0: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
label_480bd4:
    if (ctx->pc == 0x480BD4u) {
        ctx->pc = 0x480BD8u;
        goto label_480bd8;
    }
    ctx->pc = 0x480BD0u;
    {
        const bool branch_taken_0x480bd0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x480bd0) {
            ctx->pc = 0x480BF0u;
            goto label_480bf0;
        }
    }
    ctx->pc = 0x480BD8u;
label_480bd8:
    // 0x480bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x480bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_480bdc:
    // 0x480bdc: 0x2785b580  addiu       $a1, $gp, -0x4A80
    ctx->pc = 0x480bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948224));
label_480be0:
    // 0x480be0: 0xc0bc5c6  jal         func_2F1718
label_480be4:
    if (ctx->pc == 0x480BE4u) {
        ctx->pc = 0x480BE8u;
        goto label_480be8;
    }
    ctx->pc = 0x480BE0u;
    SET_GPR_U32(ctx, 31, 0x480BE8u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x480BE0u, 0x480BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480BE8u;
label_480be8:
    // 0x480be8: 0x10000005  b           . + 4 + (0x5 << 2)
label_480bec:
    if (ctx->pc == 0x480BECu) {
        ctx->pc = 0x480BF0u;
        goto label_480bf0;
    }
    ctx->pc = 0x480BE8u;
    {
        const bool branch_taken_0x480be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x480be8) {
            ctx->pc = 0x480C00u;
            goto label_480c00;
        }
    }
    ctx->pc = 0x480BF0u;
label_480bf0:
    // 0x480bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x480bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_480bf4:
    // 0x480bf4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x480bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_480bf8:
    // 0x480bf8: 0xc0bc5c6  jal         func_2F1718
label_480bfc:
    if (ctx->pc == 0x480BFCu) {
        ctx->pc = 0x480C00u;
        goto label_480c00;
    }
    ctx->pc = 0x480BF8u;
    SET_GPR_U32(ctx, 31, 0x480C00u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x480BF8u, 0x480C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480C00u;
label_480c00:
    // 0x480c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x480c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_480c04:
    // 0x480c04: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x480c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_480c08:
    // 0x480c08: 0xc0bc4c4  jal         func_2F1310
label_480c0c:
    if (ctx->pc == 0x480C0Cu) {
        ctx->pc = 0x480C10u;
        goto label_480c10;
    }
    ctx->pc = 0x480C08u;
    SET_GPR_U32(ctx, 31, 0x480C10u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x480C08u, 0x480C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480C10u;
label_480c10:
    // 0x480c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x480c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_480c14:
    // 0x480c14: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x480c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_480c18:
    // 0x480c18: 0xc0bc4c4  jal         func_2F1310
label_480c1c:
    if (ctx->pc == 0x480C1Cu) {
        ctx->pc = 0x480C20u;
        goto label_480c20;
    }
    ctx->pc = 0x480C18u;
    SET_GPR_U32(ctx, 31, 0x480C20u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x480C18u, 0x480C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480C20u;
label_480c20:
    // 0x480c20: 0x8fa20560  lw          $v0, 0x560($sp)
    ctx->pc = 0x480c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1376)));
label_480c24:
    // 0x480c24: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x480c24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_480c28:
    // 0x480c28: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x480c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_480c2c:
    // 0x480c2c: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x480c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_480c30:
    // 0x480c30: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x480c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_480c34:
    // 0x480c34: 0xc107034  jal         func_41C0D0
label_480c38:
    if (ctx->pc == 0x480C38u) {
        ctx->pc = 0x480C3Cu;
        goto label_480c3c;
    }
    ctx->pc = 0x480C34u;
    SET_GPR_U32(ctx, 31, 0x480C3Cu);
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x480C34u, 0x480C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480C3Cu;
label_480c3c:
    // 0x480c3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x480c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_480c40:
    // 0x480c40: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x480c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_480c44:
    // 0x480c44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x480c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_480c48:
    // 0x480c48: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_480c4c:
    if (ctx->pc == 0x480C4Cu) {
        ctx->pc = 0x480C50u;
        goto label_480c50;
    }
    ctx->pc = 0x480C48u;
    {
        const bool branch_taken_0x480c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x480c48) {
            ctx->pc = 0x480CF8u;
            goto label_480cf8;
        }
    }
    ctx->pc = 0x480C50u;
label_480c50:
    // 0x480c50: 0x8f82b568  lw          $v0, -0x4A98($gp)
    ctx->pc = 0x480c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948200)));
label_480c54:
    // 0x480c54: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_480c58:
    if (ctx->pc == 0x480C58u) {
        ctx->pc = 0x480C5Cu;
        goto label_480c5c;
    }
    ctx->pc = 0x480C54u;
    {
        const bool branch_taken_0x480c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480c54) {
            ctx->pc = 0x480CF8u;
            goto label_480cf8;
        }
    }
    ctx->pc = 0x480C5Cu;
label_480c5c:
    // 0x480c5c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x480c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_480c60:
    // 0x480c60: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x480c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_480c64:
    // 0x480c64: 0x27a60550  addiu       $a2, $sp, 0x550
    ctx->pc = 0x480c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
label_480c68:
    // 0x480c68: 0xc115ee8  jal         func_457BA0
label_480c6c:
    if (ctx->pc == 0x480C6Cu) {
        ctx->pc = 0x480C70u;
        goto label_480c70;
    }
    ctx->pc = 0x480C68u;
    SET_GPR_U32(ctx, 31, 0x480C70u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x480C68u, 0x480C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480C70u;
label_480c70:
    // 0x480c70: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_480c74:
    if (ctx->pc == 0x480C74u) {
        ctx->pc = 0x480C78u;
        goto label_480c78;
    }
    ctx->pc = 0x480C70u;
    {
        const bool branch_taken_0x480c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480c70) {
            ctx->pc = 0x480CF8u;
            goto label_480cf8;
        }
    }
    ctx->pc = 0x480C78u;
label_480c78:
    // 0x480c78: 0x8fa20558  lw          $v0, 0x558($sp)
    ctx->pc = 0x480c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1368)));
label_480c7c:
    // 0x480c7c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_480c80:
    if (ctx->pc == 0x480C80u) {
        ctx->pc = 0x480C84u;
        goto label_480c84;
    }
    ctx->pc = 0x480C7Cu;
    {
        const bool branch_taken_0x480c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480c7c) {
            ctx->pc = 0x480CF8u;
            goto label_480cf8;
        }
    }
    ctx->pc = 0x480C84u;
label_480c84:
    // 0x480c84: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x480c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_480c88:
    // 0x480c88: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x480c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_480c8c:
    // 0x480c8c: 0x8fa60554  lw          $a2, 0x554($sp)
    ctx->pc = 0x480c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1364)));
label_480c90:
    // 0x480c90: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x480c90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_480c94:
    // 0x480c94: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x480c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_480c98:
    // 0x480c98: 0x24080283  addiu       $t0, $zero, 0x283
    ctx->pc = 0x480c98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 643));
label_480c9c:
    // 0x480c9c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x480c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_480ca0:
    // 0x480ca0: 0x25291c10  addiu       $t1, $t1, 0x1C10
    ctx->pc = 0x480ca0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 7184));
label_480ca4:
    // 0x480ca4: 0xc113940  jal         func_44E500
label_480ca8:
    if (ctx->pc == 0x480CA8u) {
        ctx->pc = 0x480CACu;
        goto label_480cac;
    }
    ctx->pc = 0x480CA4u;
    SET_GPR_U32(ctx, 31, 0x480CACu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x480CA4u, 0x480CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480CACu;
label_480cac:
    // 0x480cac: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x480cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_480cb0:
    // 0x480cb0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x480cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_480cb4:
    // 0x480cb4: 0x24a51c28  addiu       $a1, $a1, 0x1C28
    ctx->pc = 0x480cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7208));
label_480cb8:
    // 0x480cb8: 0xc115c24  jal         func_457090
label_480cbc:
    if (ctx->pc == 0x480CBCu) {
        ctx->pc = 0x480CC0u;
        goto label_480cc0;
    }
    ctx->pc = 0x480CB8u;
    SET_GPR_U32(ctx, 31, 0x480CC0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x480CB8u, 0x480CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480CC0u;
label_480cc0:
    // 0x480cc0: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x480cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_480cc4:
    // 0x480cc4: 0x8fa20558  lw          $v0, 0x558($sp)
    ctx->pc = 0x480cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1368)));
label_480cc8:
    // 0x480cc8: 0x40f809  jalr        $v0
label_480ccc:
    if (ctx->pc == 0x480CCCu) {
        ctx->pc = 0x480CD0u;
        goto label_480cd0;
    }
    ctx->pc = 0x480CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x480CD0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480CC8u, 0x480CD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x480CD0u;
label_480cd0:
    // 0x480cd0: 0xaf82b568  sw          $v0, -0x4A98($gp)
    ctx->pc = 0x480cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948200), GPR_U32(ctx, 2));
label_480cd4:
    // 0x480cd4: 0x8fa20400  lw          $v0, 0x400($sp)
    ctx->pc = 0x480cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
label_480cd8:
    // 0x480cd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_480cdc:
    if (ctx->pc == 0x480CDCu) {
        ctx->pc = 0x480CE0u;
        goto label_480ce0;
    }
    ctx->pc = 0x480CD8u;
    {
        const bool branch_taken_0x480cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480cd8) {
            ctx->pc = 0x480CE8u;
            goto label_480ce8;
        }
    }
    ctx->pc = 0x480CE0u;
label_480ce0:
    // 0x480ce0: 0xd  break       0
    ctx->pc = 0x480ce0u;
    runtime->handleBreak(rdram, ctx);
label_480ce4:
    // 0x480ce4: 0x0  nop
    ctx->pc = 0x480ce4u;
    // NOP
label_480ce8:
    // 0x480ce8: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x480ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_480cec:
    // 0x480cec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x480cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_480cf0:
    // 0x480cf0: 0xc11392c  jal         func_44E4B0
label_480cf4:
    if (ctx->pc == 0x480CF4u) {
        ctx->pc = 0x480CF8u;
        goto label_480cf8;
    }
    ctx->pc = 0x480CF0u;
    SET_GPR_U32(ctx, 31, 0x480CF8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x480CF0u, 0x480CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480CF8u;
label_480cf8:
    // 0x480cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x480cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_480cfc:
    // 0x480cfc: 0xc107078  jal         func_41C1E0
label_480d00:
    if (ctx->pc == 0x480D00u) {
        ctx->pc = 0x480D04u;
        goto label_480d04;
    }
    ctx->pc = 0x480CFCu;
    SET_GPR_U32(ctx, 31, 0x480D04u);
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x480CFCu, 0x480D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480D04u;
label_480d04:
    // 0x480d04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x480d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_480d08:
    // 0x480d08: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x480d08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_480d0c:
    // 0x480d0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x480d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_480d10:
    // 0x480d10: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_480d14:
    if (ctx->pc == 0x480D14u) {
        ctx->pc = 0x480D18u;
        goto label_480d18;
    }
    ctx->pc = 0x480D10u;
    {
        const bool branch_taken_0x480d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x480d10) {
            ctx->pc = 0x480DC0u;
            goto label_480dc0;
        }
    }
    ctx->pc = 0x480D18u;
label_480d18:
    // 0x480d18: 0x8f82b56c  lw          $v0, -0x4A94($gp)
    ctx->pc = 0x480d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948204)));
label_480d1c:
    // 0x480d1c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_480d20:
    if (ctx->pc == 0x480D20u) {
        ctx->pc = 0x480D24u;
        goto label_480d24;
    }
    ctx->pc = 0x480D1Cu;
    {
        const bool branch_taken_0x480d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480d1c) {
            ctx->pc = 0x480DC0u;
            goto label_480dc0;
        }
    }
    ctx->pc = 0x480D24u;
label_480d24:
    // 0x480d24: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x480d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_480d28:
    // 0x480d28: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x480d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_480d2c:
    // 0x480d2c: 0x27a60540  addiu       $a2, $sp, 0x540
    ctx->pc = 0x480d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_480d30:
    // 0x480d30: 0xc115ee8  jal         func_457BA0
label_480d34:
    if (ctx->pc == 0x480D34u) {
        ctx->pc = 0x480D38u;
        goto label_480d38;
    }
    ctx->pc = 0x480D30u;
    SET_GPR_U32(ctx, 31, 0x480D38u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x480D30u, 0x480D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480D38u;
label_480d38:
    // 0x480d38: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_480d3c:
    if (ctx->pc == 0x480D3Cu) {
        ctx->pc = 0x480D40u;
        goto label_480d40;
    }
    ctx->pc = 0x480D38u;
    {
        const bool branch_taken_0x480d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480d38) {
            ctx->pc = 0x480DC0u;
            goto label_480dc0;
        }
    }
    ctx->pc = 0x480D40u;
label_480d40:
    // 0x480d40: 0x8fa20548  lw          $v0, 0x548($sp)
    ctx->pc = 0x480d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1352)));
label_480d44:
    // 0x480d44: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_480d48:
    if (ctx->pc == 0x480D48u) {
        ctx->pc = 0x480D4Cu;
        goto label_480d4c;
    }
    ctx->pc = 0x480D44u;
    {
        const bool branch_taken_0x480d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480d44) {
            ctx->pc = 0x480DC0u;
            goto label_480dc0;
        }
    }
    ctx->pc = 0x480D4Cu;
label_480d4c:
    // 0x480d4c: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x480d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_480d50:
    // 0x480d50: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x480d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_480d54:
    // 0x480d54: 0x8fa60544  lw          $a2, 0x544($sp)
    ctx->pc = 0x480d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1348)));
label_480d58:
    // 0x480d58: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x480d58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_480d5c:
    // 0x480d5c: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x480d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_480d60:
    // 0x480d60: 0x24080285  addiu       $t0, $zero, 0x285
    ctx->pc = 0x480d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 645));
label_480d64:
    // 0x480d64: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x480d64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_480d68:
    // 0x480d68: 0x25291c10  addiu       $t1, $t1, 0x1C10
    ctx->pc = 0x480d68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 7184));
label_480d6c:
    // 0x480d6c: 0xc113940  jal         func_44E500
label_480d70:
    if (ctx->pc == 0x480D70u) {
        ctx->pc = 0x480D74u;
        goto label_480d74;
    }
    ctx->pc = 0x480D6Cu;
    SET_GPR_U32(ctx, 31, 0x480D74u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x480D6Cu, 0x480D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480D74u;
label_480d74:
    // 0x480d74: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x480d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_480d78:
    // 0x480d78: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x480d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_480d7c:
    // 0x480d7c: 0x24a51c28  addiu       $a1, $a1, 0x1C28
    ctx->pc = 0x480d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7208));
label_480d80:
    // 0x480d80: 0xc115c24  jal         func_457090
label_480d84:
    if (ctx->pc == 0x480D84u) {
        ctx->pc = 0x480D88u;
        goto label_480d88;
    }
    ctx->pc = 0x480D80u;
    SET_GPR_U32(ctx, 31, 0x480D88u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x480D80u, 0x480D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480D88u;
label_480d88:
    // 0x480d88: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x480d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_480d8c:
    // 0x480d8c: 0x8fa20548  lw          $v0, 0x548($sp)
    ctx->pc = 0x480d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1352)));
label_480d90:
    // 0x480d90: 0x40f809  jalr        $v0
label_480d94:
    if (ctx->pc == 0x480D94u) {
        ctx->pc = 0x480D98u;
        goto label_480d98;
    }
    ctx->pc = 0x480D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x480D98u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480D90u, 0x480D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x480D98u;
label_480d98:
    // 0x480d98: 0xaf82b56c  sw          $v0, -0x4A94($gp)
    ctx->pc = 0x480d98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948204), GPR_U32(ctx, 2));
label_480d9c:
    // 0x480d9c: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x480d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_480da0:
    // 0x480da0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_480da4:
    if (ctx->pc == 0x480DA4u) {
        ctx->pc = 0x480DA8u;
        goto label_480da8;
    }
    ctx->pc = 0x480DA0u;
    {
        const bool branch_taken_0x480da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480da0) {
            ctx->pc = 0x480DB0u;
            goto label_480db0;
        }
    }
    ctx->pc = 0x480DA8u;
label_480da8:
    // 0x480da8: 0xd  break       0
    ctx->pc = 0x480da8u;
    runtime->handleBreak(rdram, ctx);
label_480dac:
    // 0x480dac: 0x0  nop
    ctx->pc = 0x480dacu;
    // NOP
label_480db0:
    // 0x480db0: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x480db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_480db4:
    // 0x480db4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x480db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_480db8:
    // 0x480db8: 0xc11392c  jal         func_44E4B0
label_480dbc:
    if (ctx->pc == 0x480DBCu) {
        ctx->pc = 0x480DC0u;
        goto label_480dc0;
    }
    ctx->pc = 0x480DB8u;
    SET_GPR_U32(ctx, 31, 0x480DC0u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x480DB8u, 0x480DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480DC0u;
label_480dc0:
    // 0x480dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x480dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_480dc4:
    // 0x480dc4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x480dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_480dc8:
    // 0x480dc8: 0xc1073a8  jal         func_41CEA0
label_480dcc:
    if (ctx->pc == 0x480DCCu) {
        ctx->pc = 0x480DD0u;
        goto label_480dd0;
    }
    ctx->pc = 0x480DC8u;
    SET_GPR_U32(ctx, 31, 0x480DD0u);
    ctx->pc = 0x41CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEA0u, 0x480DC8u, 0x480DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480DD0u;
label_480dd0:
    // 0x480dd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x480dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_480dd4:
    // 0x480dd4: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x480dd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_480dd8:
    // 0x480dd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x480dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_480ddc:
    // 0x480ddc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_480de0:
    if (ctx->pc == 0x480DE0u) {
        ctx->pc = 0x480DE4u;
        goto label_480de4;
    }
    ctx->pc = 0x480DDCu;
    {
        const bool branch_taken_0x480ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x480ddc) {
            ctx->pc = 0x480E8Cu;
            goto label_480e8c;
        }
    }
    ctx->pc = 0x480DE4u;
label_480de4:
    // 0x480de4: 0x8f82b570  lw          $v0, -0x4A90($gp)
    ctx->pc = 0x480de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948208)));
label_480de8:
    // 0x480de8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_480dec:
    if (ctx->pc == 0x480DECu) {
        ctx->pc = 0x480DF0u;
        goto label_480df0;
    }
    ctx->pc = 0x480DE8u;
    {
        const bool branch_taken_0x480de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480de8) {
            ctx->pc = 0x480E8Cu;
            goto label_480e8c;
        }
    }
    ctx->pc = 0x480DF0u;
label_480df0:
    // 0x480df0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x480df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_480df4:
    // 0x480df4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x480df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_480df8:
    // 0x480df8: 0x27a60530  addiu       $a2, $sp, 0x530
    ctx->pc = 0x480df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
label_480dfc:
    // 0x480dfc: 0xc115ee8  jal         func_457BA0
label_480e00:
    if (ctx->pc == 0x480E00u) {
        ctx->pc = 0x480E04u;
        goto label_480e04;
    }
    ctx->pc = 0x480DFCu;
    SET_GPR_U32(ctx, 31, 0x480E04u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x480DFCu, 0x480E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480E04u;
label_480e04:
    // 0x480e04: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_480e08:
    if (ctx->pc == 0x480E08u) {
        ctx->pc = 0x480E0Cu;
        goto label_480e0c;
    }
    ctx->pc = 0x480E04u;
    {
        const bool branch_taken_0x480e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480e04) {
            ctx->pc = 0x480E8Cu;
            goto label_480e8c;
        }
    }
    ctx->pc = 0x480E0Cu;
label_480e0c:
    // 0x480e0c: 0x8fa20538  lw          $v0, 0x538($sp)
    ctx->pc = 0x480e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1336)));
label_480e10:
    // 0x480e10: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_480e14:
    if (ctx->pc == 0x480E14u) {
        ctx->pc = 0x480E18u;
        goto label_480e18;
    }
    ctx->pc = 0x480E10u;
    {
        const bool branch_taken_0x480e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480e10) {
            ctx->pc = 0x480E8Cu;
            goto label_480e8c;
        }
    }
    ctx->pc = 0x480E18u;
label_480e18:
    // 0x480e18: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x480e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_480e1c:
    // 0x480e1c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x480e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_480e20:
    // 0x480e20: 0x8fa60534  lw          $a2, 0x534($sp)
    ctx->pc = 0x480e20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
label_480e24:
    // 0x480e24: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x480e24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_480e28:
    // 0x480e28: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x480e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_480e2c:
    // 0x480e2c: 0x24080287  addiu       $t0, $zero, 0x287
    ctx->pc = 0x480e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 647));
label_480e30:
    // 0x480e30: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x480e30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_480e34:
    // 0x480e34: 0x25291c10  addiu       $t1, $t1, 0x1C10
    ctx->pc = 0x480e34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 7184));
label_480e38:
    // 0x480e38: 0xc113940  jal         func_44E500
label_480e3c:
    if (ctx->pc == 0x480E3Cu) {
        ctx->pc = 0x480E40u;
        goto label_480e40;
    }
    ctx->pc = 0x480E38u;
    SET_GPR_U32(ctx, 31, 0x480E40u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x480E38u, 0x480E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480E40u;
label_480e40:
    // 0x480e40: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x480e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_480e44:
    // 0x480e44: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x480e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_480e48:
    // 0x480e48: 0x24a51c28  addiu       $a1, $a1, 0x1C28
    ctx->pc = 0x480e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7208));
label_480e4c:
    // 0x480e4c: 0xc115c24  jal         func_457090
label_480e50:
    if (ctx->pc == 0x480E50u) {
        ctx->pc = 0x480E54u;
        goto label_480e54;
    }
    ctx->pc = 0x480E4Cu;
    SET_GPR_U32(ctx, 31, 0x480E54u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x480E4Cu, 0x480E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480E54u;
label_480e54:
    // 0x480e54: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x480e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_480e58:
    // 0x480e58: 0x8fa20538  lw          $v0, 0x538($sp)
    ctx->pc = 0x480e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1336)));
label_480e5c:
    // 0x480e5c: 0x40f809  jalr        $v0
label_480e60:
    if (ctx->pc == 0x480E60u) {
        ctx->pc = 0x480E64u;
        goto label_480e64;
    }
    ctx->pc = 0x480E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x480E64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480E5Cu, 0x480E64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x480E64u;
label_480e64:
    // 0x480e64: 0xaf82b570  sw          $v0, -0x4A90($gp)
    ctx->pc = 0x480e64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948208), GPR_U32(ctx, 2));
label_480e68:
    // 0x480e68: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x480e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_480e6c:
    // 0x480e6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_480e70:
    if (ctx->pc == 0x480E70u) {
        ctx->pc = 0x480E74u;
        goto label_480e74;
    }
    ctx->pc = 0x480E6Cu;
    {
        const bool branch_taken_0x480e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480e6c) {
            ctx->pc = 0x480E7Cu;
            goto label_480e7c;
        }
    }
    ctx->pc = 0x480E74u;
label_480e74:
    // 0x480e74: 0xd  break       0
    ctx->pc = 0x480e74u;
    runtime->handleBreak(rdram, ctx);
label_480e78:
    // 0x480e78: 0x0  nop
    ctx->pc = 0x480e78u;
    // NOP
label_480e7c:
    // 0x480e7c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x480e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_480e80:
    // 0x480e80: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x480e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_480e84:
    // 0x480e84: 0xc11392c  jal         func_44E4B0
label_480e88:
    if (ctx->pc == 0x480E88u) {
        ctx->pc = 0x480E8Cu;
        goto label_480e8c;
    }
    ctx->pc = 0x480E84u;
    SET_GPR_U32(ctx, 31, 0x480E8Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x480E84u, 0x480E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480E8Cu;
label_480e8c:
    // 0x480e8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x480e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_480e90:
    // 0x480e90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x480e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_480e94:
    // 0x480e94: 0xc107118  jal         func_41C460
label_480e98:
    if (ctx->pc == 0x480E98u) {
        ctx->pc = 0x480E9Cu;
        goto label_480e9c;
    }
    ctx->pc = 0x480E94u;
    SET_GPR_U32(ctx, 31, 0x480E9Cu);
    ctx->pc = 0x41C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C460u, 0x480E94u, 0x480E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480E9Cu;
label_480e9c:
    // 0x480e9c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x480e9cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_480ea0:
    // 0x480ea0: 0x1e102b  sltu        $v0, $zero, $fp
    ctx->pc = 0x480ea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_480ea4:
    // 0x480ea4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x480ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_480ea8:
    // 0x480ea8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_480eac:
    if (ctx->pc == 0x480EACu) {
        ctx->pc = 0x480EB0u;
        goto label_480eb0;
    }
    ctx->pc = 0x480EA8u;
    {
        const bool branch_taken_0x480ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x480ea8) {
            ctx->pc = 0x480F58u;
            goto label_480f58;
        }
    }
    ctx->pc = 0x480EB0u;
label_480eb0:
    // 0x480eb0: 0x8f82b574  lw          $v0, -0x4A8C($gp)
    ctx->pc = 0x480eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948212)));
label_480eb4:
    // 0x480eb4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_480eb8:
    if (ctx->pc == 0x480EB8u) {
        ctx->pc = 0x480EBCu;
        goto label_480ebc;
    }
    ctx->pc = 0x480EB4u;
    {
        const bool branch_taken_0x480eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480eb4) {
            ctx->pc = 0x480F58u;
            goto label_480f58;
        }
    }
    ctx->pc = 0x480EBCu;
label_480ebc:
    // 0x480ebc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x480ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_480ec0:
    // 0x480ec0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x480ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_480ec4:
    // 0x480ec4: 0x27a60520  addiu       $a2, $sp, 0x520
    ctx->pc = 0x480ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_480ec8:
    // 0x480ec8: 0xc115ee8  jal         func_457BA0
label_480ecc:
    if (ctx->pc == 0x480ECCu) {
        ctx->pc = 0x480ED0u;
        goto label_480ed0;
    }
    ctx->pc = 0x480EC8u;
    SET_GPR_U32(ctx, 31, 0x480ED0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x480EC8u, 0x480ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480ED0u;
label_480ed0:
    // 0x480ed0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_480ed4:
    if (ctx->pc == 0x480ED4u) {
        ctx->pc = 0x480ED8u;
        goto label_480ed8;
    }
    ctx->pc = 0x480ED0u;
    {
        const bool branch_taken_0x480ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480ed0) {
            ctx->pc = 0x480F58u;
            goto label_480f58;
        }
    }
    ctx->pc = 0x480ED8u;
label_480ed8:
    // 0x480ed8: 0x8fa20528  lw          $v0, 0x528($sp)
    ctx->pc = 0x480ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_480edc:
    // 0x480edc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_480ee0:
    if (ctx->pc == 0x480EE0u) {
        ctx->pc = 0x480EE4u;
        goto label_480ee4;
    }
    ctx->pc = 0x480EDCu;
    {
        const bool branch_taken_0x480edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480edc) {
            ctx->pc = 0x480F58u;
            goto label_480f58;
        }
    }
    ctx->pc = 0x480EE4u;
label_480ee4:
    // 0x480ee4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x480ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_480ee8:
    // 0x480ee8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x480ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_480eec:
    // 0x480eec: 0x8fa60524  lw          $a2, 0x524($sp)
    ctx->pc = 0x480eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1316)));
label_480ef0:
    // 0x480ef0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x480ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_480ef4:
    // 0x480ef4: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x480ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_480ef8:
    // 0x480ef8: 0x2408028a  addiu       $t0, $zero, 0x28A
    ctx->pc = 0x480ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 650));
label_480efc:
    // 0x480efc: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x480efcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_480f00:
    // 0x480f00: 0x25291c38  addiu       $t1, $t1, 0x1C38
    ctx->pc = 0x480f00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 7224));
label_480f04:
    // 0x480f04: 0xc113940  jal         func_44E500
label_480f08:
    if (ctx->pc == 0x480F08u) {
        ctx->pc = 0x480F0Cu;
        goto label_480f0c;
    }
    ctx->pc = 0x480F04u;
    SET_GPR_U32(ctx, 31, 0x480F0Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x480F04u, 0x480F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480F0Cu;
label_480f0c:
    // 0x480f0c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x480f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_480f10:
    // 0x480f10: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x480f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_480f14:
    // 0x480f14: 0x24a51c50  addiu       $a1, $a1, 0x1C50
    ctx->pc = 0x480f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7248));
label_480f18:
    // 0x480f18: 0xc115c24  jal         func_457090
label_480f1c:
    if (ctx->pc == 0x480F1Cu) {
        ctx->pc = 0x480F20u;
        goto label_480f20;
    }
    ctx->pc = 0x480F18u;
    SET_GPR_U32(ctx, 31, 0x480F20u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x480F18u, 0x480F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480F20u;
label_480f20:
    // 0x480f20: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x480f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_480f24:
    // 0x480f24: 0x8fa20528  lw          $v0, 0x528($sp)
    ctx->pc = 0x480f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_480f28:
    // 0x480f28: 0x40f809  jalr        $v0
label_480f2c:
    if (ctx->pc == 0x480F2Cu) {
        ctx->pc = 0x480F30u;
        goto label_480f30;
    }
    ctx->pc = 0x480F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x480F30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480F28u, 0x480F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x480F30u;
label_480f30:
    // 0x480f30: 0xaf82b574  sw          $v0, -0x4A8C($gp)
    ctx->pc = 0x480f30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948212), GPR_U32(ctx, 2));
label_480f34:
    // 0x480f34: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x480f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_480f38:
    // 0x480f38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_480f3c:
    if (ctx->pc == 0x480F3Cu) {
        ctx->pc = 0x480F40u;
        goto label_480f40;
    }
    ctx->pc = 0x480F38u;
    {
        const bool branch_taken_0x480f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480f38) {
            ctx->pc = 0x480F48u;
            goto label_480f48;
        }
    }
    ctx->pc = 0x480F40u;
label_480f40:
    // 0x480f40: 0xd  break       0
    ctx->pc = 0x480f40u;
    runtime->handleBreak(rdram, ctx);
label_480f44:
    // 0x480f44: 0x0  nop
    ctx->pc = 0x480f44u;
    // NOP
label_480f48:
    // 0x480f48: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x480f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_480f4c:
    // 0x480f4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x480f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_480f50:
    // 0x480f50: 0xc11392c  jal         func_44E4B0
label_480f54:
    if (ctx->pc == 0x480F54u) {
        ctx->pc = 0x480F58u;
        goto label_480f58;
    }
    ctx->pc = 0x480F50u;
    SET_GPR_U32(ctx, 31, 0x480F58u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x480F50u, 0x480F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480F58u;
label_480f58:
    // 0x480f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x480f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_480f5c:
    // 0x480f5c: 0xc10705c  jal         func_41C170
label_480f60:
    if (ctx->pc == 0x480F60u) {
        ctx->pc = 0x480F64u;
        goto label_480f64;
    }
    ctx->pc = 0x480F5Cu;
    SET_GPR_U32(ctx, 31, 0x480F64u);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x480F5Cu, 0x480F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480F64u;
label_480f64:
    // 0x480f64: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_480f68:
    if (ctx->pc == 0x480F68u) {
        ctx->pc = 0x480F6Cu;
        goto label_480f6c;
    }
    ctx->pc = 0x480F64u;
    {
        const bool branch_taken_0x480f64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x480f64) {
            ctx->pc = 0x480F80u;
            goto label_480f80;
        }
    }
    ctx->pc = 0x480F6Cu;
label_480f6c:
    // 0x480f6c: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x480f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
label_480f70:
    // 0x480f70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x480f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_480f74:
    // 0x480f74: 0xc1203f0  jal         func_480FC0
label_480f78:
    if (ctx->pc == 0x480F78u) {
        ctx->pc = 0x480F7Cu;
        goto label_480f7c;
    }
    ctx->pc = 0x480F74u;
    SET_GPR_U32(ctx, 31, 0x480F7Cu);
    ctx->pc = 0x480FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480FC0u, 0x480F74u, 0x480F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x480F7Cu;
label_480f7c:
    // 0x480f7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x480f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_480f80:
    // 0x480f80: 0x8fa20560  lw          $v0, 0x560($sp)
    ctx->pc = 0x480f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1376)));
label_480f84:
    // 0x480f84: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x480f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_480f88:
    // 0x480f88: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x480f88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_480f8c:
    // 0x480f8c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x480f8cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_480f90:
    // 0x480f90: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x480f90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_480f94:
    // 0x480f94: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x480f94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_480f98:
    // 0x480f98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x480f98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_480f9c:
    // 0x480f9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x480f9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_480fa0:
    // 0x480fa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x480fa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_480fa4:
    // 0x480fa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x480fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_480fa8:
    // 0x480fa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x480fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_480fac:
    // 0x480fac: 0x27bd0580  addiu       $sp, $sp, 0x580
    ctx->pc = 0x480facu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
label_480fb0:
    // 0x480fb0: 0x3e00008  jr          $ra
label_480fb4:
    if (ctx->pc == 0x480FB4u) {
        ctx->pc = 0x480FB8u;
        goto label_480fb8;
    }
    ctx->pc = 0x480FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x480FB8u;
label_480fb8:
    // 0x480fb8: 0x0  nop
    ctx->pc = 0x480fb8u;
    // NOP
label_480fbc:
    // 0x480fbc: 0x0  nop
    ctx->pc = 0x480fbcu;
    // NOP
    ctx->pc = 0x480fc0u;
}
