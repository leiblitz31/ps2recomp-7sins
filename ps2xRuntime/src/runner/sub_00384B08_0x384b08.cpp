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

// Function: sub_00384B08
// Address: 0x384b08 - 0x384fd0
void sub_00384B08_0x384b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384B08_0x384b08");
#endif

    switch (ctx->pc) {
        case 0x384b08u: goto label_384b08;
        case 0x384b0cu: goto label_384b0c;
        case 0x384b10u: goto label_384b10;
        case 0x384b14u: goto label_384b14;
        case 0x384b18u: goto label_384b18;
        case 0x384b1cu: goto label_384b1c;
        case 0x384b20u: goto label_384b20;
        case 0x384b24u: goto label_384b24;
        case 0x384b28u: goto label_384b28;
        case 0x384b2cu: goto label_384b2c;
        case 0x384b30u: goto label_384b30;
        case 0x384b34u: goto label_384b34;
        case 0x384b38u: goto label_384b38;
        case 0x384b3cu: goto label_384b3c;
        case 0x384b40u: goto label_384b40;
        case 0x384b44u: goto label_384b44;
        case 0x384b48u: goto label_384b48;
        case 0x384b4cu: goto label_384b4c;
        case 0x384b50u: goto label_384b50;
        case 0x384b54u: goto label_384b54;
        case 0x384b58u: goto label_384b58;
        case 0x384b5cu: goto label_384b5c;
        case 0x384b60u: goto label_384b60;
        case 0x384b64u: goto label_384b64;
        case 0x384b68u: goto label_384b68;
        case 0x384b6cu: goto label_384b6c;
        case 0x384b70u: goto label_384b70;
        case 0x384b74u: goto label_384b74;
        case 0x384b78u: goto label_384b78;
        case 0x384b7cu: goto label_384b7c;
        case 0x384b80u: goto label_384b80;
        case 0x384b84u: goto label_384b84;
        case 0x384b88u: goto label_384b88;
        case 0x384b8cu: goto label_384b8c;
        case 0x384b90u: goto label_384b90;
        case 0x384b94u: goto label_384b94;
        case 0x384b98u: goto label_384b98;
        case 0x384b9cu: goto label_384b9c;
        case 0x384ba0u: goto label_384ba0;
        case 0x384ba4u: goto label_384ba4;
        case 0x384ba8u: goto label_384ba8;
        case 0x384bacu: goto label_384bac;
        case 0x384bb0u: goto label_384bb0;
        case 0x384bb4u: goto label_384bb4;
        case 0x384bb8u: goto label_384bb8;
        case 0x384bbcu: goto label_384bbc;
        case 0x384bc0u: goto label_384bc0;
        case 0x384bc4u: goto label_384bc4;
        case 0x384bc8u: goto label_384bc8;
        case 0x384bccu: goto label_384bcc;
        case 0x384bd0u: goto label_384bd0;
        case 0x384bd4u: goto label_384bd4;
        case 0x384bd8u: goto label_384bd8;
        case 0x384bdcu: goto label_384bdc;
        case 0x384be0u: goto label_384be0;
        case 0x384be4u: goto label_384be4;
        case 0x384be8u: goto label_384be8;
        case 0x384becu: goto label_384bec;
        case 0x384bf0u: goto label_384bf0;
        case 0x384bf4u: goto label_384bf4;
        case 0x384bf8u: goto label_384bf8;
        case 0x384bfcu: goto label_384bfc;
        case 0x384c00u: goto label_384c00;
        case 0x384c04u: goto label_384c04;
        case 0x384c08u: goto label_384c08;
        case 0x384c0cu: goto label_384c0c;
        case 0x384c10u: goto label_384c10;
        case 0x384c14u: goto label_384c14;
        case 0x384c18u: goto label_384c18;
        case 0x384c1cu: goto label_384c1c;
        case 0x384c20u: goto label_384c20;
        case 0x384c24u: goto label_384c24;
        case 0x384c28u: goto label_384c28;
        case 0x384c2cu: goto label_384c2c;
        case 0x384c30u: goto label_384c30;
        case 0x384c34u: goto label_384c34;
        case 0x384c38u: goto label_384c38;
        case 0x384c3cu: goto label_384c3c;
        case 0x384c40u: goto label_384c40;
        case 0x384c44u: goto label_384c44;
        case 0x384c48u: goto label_384c48;
        case 0x384c4cu: goto label_384c4c;
        case 0x384c50u: goto label_384c50;
        case 0x384c54u: goto label_384c54;
        case 0x384c58u: goto label_384c58;
        case 0x384c5cu: goto label_384c5c;
        case 0x384c60u: goto label_384c60;
        case 0x384c64u: goto label_384c64;
        case 0x384c68u: goto label_384c68;
        case 0x384c6cu: goto label_384c6c;
        case 0x384c70u: goto label_384c70;
        case 0x384c74u: goto label_384c74;
        case 0x384c78u: goto label_384c78;
        case 0x384c7cu: goto label_384c7c;
        case 0x384c80u: goto label_384c80;
        case 0x384c84u: goto label_384c84;
        case 0x384c88u: goto label_384c88;
        case 0x384c8cu: goto label_384c8c;
        case 0x384c90u: goto label_384c90;
        case 0x384c94u: goto label_384c94;
        case 0x384c98u: goto label_384c98;
        case 0x384c9cu: goto label_384c9c;
        case 0x384ca0u: goto label_384ca0;
        case 0x384ca4u: goto label_384ca4;
        case 0x384ca8u: goto label_384ca8;
        case 0x384cacu: goto label_384cac;
        case 0x384cb0u: goto label_384cb0;
        case 0x384cb4u: goto label_384cb4;
        case 0x384cb8u: goto label_384cb8;
        case 0x384cbcu: goto label_384cbc;
        case 0x384cc0u: goto label_384cc0;
        case 0x384cc4u: goto label_384cc4;
        case 0x384cc8u: goto label_384cc8;
        case 0x384cccu: goto label_384ccc;
        case 0x384cd0u: goto label_384cd0;
        case 0x384cd4u: goto label_384cd4;
        case 0x384cd8u: goto label_384cd8;
        case 0x384cdcu: goto label_384cdc;
        case 0x384ce0u: goto label_384ce0;
        case 0x384ce4u: goto label_384ce4;
        case 0x384ce8u: goto label_384ce8;
        case 0x384cecu: goto label_384cec;
        case 0x384cf0u: goto label_384cf0;
        case 0x384cf4u: goto label_384cf4;
        case 0x384cf8u: goto label_384cf8;
        case 0x384cfcu: goto label_384cfc;
        case 0x384d00u: goto label_384d00;
        case 0x384d04u: goto label_384d04;
        case 0x384d08u: goto label_384d08;
        case 0x384d0cu: goto label_384d0c;
        case 0x384d10u: goto label_384d10;
        case 0x384d14u: goto label_384d14;
        case 0x384d18u: goto label_384d18;
        case 0x384d1cu: goto label_384d1c;
        case 0x384d20u: goto label_384d20;
        case 0x384d24u: goto label_384d24;
        case 0x384d28u: goto label_384d28;
        case 0x384d2cu: goto label_384d2c;
        case 0x384d30u: goto label_384d30;
        case 0x384d34u: goto label_384d34;
        case 0x384d38u: goto label_384d38;
        case 0x384d3cu: goto label_384d3c;
        case 0x384d40u: goto label_384d40;
        case 0x384d44u: goto label_384d44;
        case 0x384d48u: goto label_384d48;
        case 0x384d4cu: goto label_384d4c;
        case 0x384d50u: goto label_384d50;
        case 0x384d54u: goto label_384d54;
        case 0x384d58u: goto label_384d58;
        case 0x384d5cu: goto label_384d5c;
        case 0x384d60u: goto label_384d60;
        case 0x384d64u: goto label_384d64;
        case 0x384d68u: goto label_384d68;
        case 0x384d6cu: goto label_384d6c;
        case 0x384d70u: goto label_384d70;
        case 0x384d74u: goto label_384d74;
        case 0x384d78u: goto label_384d78;
        case 0x384d7cu: goto label_384d7c;
        case 0x384d80u: goto label_384d80;
        case 0x384d84u: goto label_384d84;
        case 0x384d88u: goto label_384d88;
        case 0x384d8cu: goto label_384d8c;
        case 0x384d90u: goto label_384d90;
        case 0x384d94u: goto label_384d94;
        case 0x384d98u: goto label_384d98;
        case 0x384d9cu: goto label_384d9c;
        case 0x384da0u: goto label_384da0;
        case 0x384da4u: goto label_384da4;
        case 0x384da8u: goto label_384da8;
        case 0x384dacu: goto label_384dac;
        case 0x384db0u: goto label_384db0;
        case 0x384db4u: goto label_384db4;
        case 0x384db8u: goto label_384db8;
        case 0x384dbcu: goto label_384dbc;
        case 0x384dc0u: goto label_384dc0;
        case 0x384dc4u: goto label_384dc4;
        case 0x384dc8u: goto label_384dc8;
        case 0x384dccu: goto label_384dcc;
        case 0x384dd0u: goto label_384dd0;
        case 0x384dd4u: goto label_384dd4;
        case 0x384dd8u: goto label_384dd8;
        case 0x384ddcu: goto label_384ddc;
        case 0x384de0u: goto label_384de0;
        case 0x384de4u: goto label_384de4;
        case 0x384de8u: goto label_384de8;
        case 0x384decu: goto label_384dec;
        case 0x384df0u: goto label_384df0;
        case 0x384df4u: goto label_384df4;
        case 0x384df8u: goto label_384df8;
        case 0x384dfcu: goto label_384dfc;
        case 0x384e00u: goto label_384e00;
        case 0x384e04u: goto label_384e04;
        case 0x384e08u: goto label_384e08;
        case 0x384e0cu: goto label_384e0c;
        case 0x384e10u: goto label_384e10;
        case 0x384e14u: goto label_384e14;
        case 0x384e18u: goto label_384e18;
        case 0x384e1cu: goto label_384e1c;
        case 0x384e20u: goto label_384e20;
        case 0x384e24u: goto label_384e24;
        case 0x384e28u: goto label_384e28;
        case 0x384e2cu: goto label_384e2c;
        case 0x384e30u: goto label_384e30;
        case 0x384e34u: goto label_384e34;
        case 0x384e38u: goto label_384e38;
        case 0x384e3cu: goto label_384e3c;
        case 0x384e40u: goto label_384e40;
        case 0x384e44u: goto label_384e44;
        case 0x384e48u: goto label_384e48;
        case 0x384e4cu: goto label_384e4c;
        case 0x384e50u: goto label_384e50;
        case 0x384e54u: goto label_384e54;
        case 0x384e58u: goto label_384e58;
        case 0x384e5cu: goto label_384e5c;
        case 0x384e60u: goto label_384e60;
        case 0x384e64u: goto label_384e64;
        case 0x384e68u: goto label_384e68;
        case 0x384e6cu: goto label_384e6c;
        case 0x384e70u: goto label_384e70;
        case 0x384e74u: goto label_384e74;
        case 0x384e78u: goto label_384e78;
        case 0x384e7cu: goto label_384e7c;
        case 0x384e80u: goto label_384e80;
        case 0x384e84u: goto label_384e84;
        case 0x384e88u: goto label_384e88;
        case 0x384e8cu: goto label_384e8c;
        case 0x384e90u: goto label_384e90;
        case 0x384e94u: goto label_384e94;
        case 0x384e98u: goto label_384e98;
        case 0x384e9cu: goto label_384e9c;
        case 0x384ea0u: goto label_384ea0;
        case 0x384ea4u: goto label_384ea4;
        case 0x384ea8u: goto label_384ea8;
        case 0x384eacu: goto label_384eac;
        case 0x384eb0u: goto label_384eb0;
        case 0x384eb4u: goto label_384eb4;
        case 0x384eb8u: goto label_384eb8;
        case 0x384ebcu: goto label_384ebc;
        case 0x384ec0u: goto label_384ec0;
        case 0x384ec4u: goto label_384ec4;
        case 0x384ec8u: goto label_384ec8;
        case 0x384eccu: goto label_384ecc;
        case 0x384ed0u: goto label_384ed0;
        case 0x384ed4u: goto label_384ed4;
        case 0x384ed8u: goto label_384ed8;
        case 0x384edcu: goto label_384edc;
        case 0x384ee0u: goto label_384ee0;
        case 0x384ee4u: goto label_384ee4;
        case 0x384ee8u: goto label_384ee8;
        case 0x384eecu: goto label_384eec;
        case 0x384ef0u: goto label_384ef0;
        case 0x384ef4u: goto label_384ef4;
        case 0x384ef8u: goto label_384ef8;
        case 0x384efcu: goto label_384efc;
        case 0x384f00u: goto label_384f00;
        case 0x384f04u: goto label_384f04;
        case 0x384f08u: goto label_384f08;
        case 0x384f0cu: goto label_384f0c;
        case 0x384f10u: goto label_384f10;
        case 0x384f14u: goto label_384f14;
        case 0x384f18u: goto label_384f18;
        case 0x384f1cu: goto label_384f1c;
        case 0x384f20u: goto label_384f20;
        case 0x384f24u: goto label_384f24;
        case 0x384f28u: goto label_384f28;
        case 0x384f2cu: goto label_384f2c;
        case 0x384f30u: goto label_384f30;
        case 0x384f34u: goto label_384f34;
        case 0x384f38u: goto label_384f38;
        case 0x384f3cu: goto label_384f3c;
        case 0x384f40u: goto label_384f40;
        case 0x384f44u: goto label_384f44;
        case 0x384f48u: goto label_384f48;
        case 0x384f4cu: goto label_384f4c;
        case 0x384f50u: goto label_384f50;
        case 0x384f54u: goto label_384f54;
        case 0x384f58u: goto label_384f58;
        case 0x384f5cu: goto label_384f5c;
        case 0x384f60u: goto label_384f60;
        case 0x384f64u: goto label_384f64;
        case 0x384f68u: goto label_384f68;
        case 0x384f6cu: goto label_384f6c;
        case 0x384f70u: goto label_384f70;
        case 0x384f74u: goto label_384f74;
        case 0x384f78u: goto label_384f78;
        case 0x384f7cu: goto label_384f7c;
        case 0x384f80u: goto label_384f80;
        case 0x384f84u: goto label_384f84;
        case 0x384f88u: goto label_384f88;
        case 0x384f8cu: goto label_384f8c;
        case 0x384f90u: goto label_384f90;
        case 0x384f94u: goto label_384f94;
        case 0x384f98u: goto label_384f98;
        case 0x384f9cu: goto label_384f9c;
        case 0x384fa0u: goto label_384fa0;
        case 0x384fa4u: goto label_384fa4;
        case 0x384fa8u: goto label_384fa8;
        case 0x384facu: goto label_384fac;
        case 0x384fb0u: goto label_384fb0;
        case 0x384fb4u: goto label_384fb4;
        case 0x384fb8u: goto label_384fb8;
        case 0x384fbcu: goto label_384fbc;
        case 0x384fc0u: goto label_384fc0;
        case 0x384fc4u: goto label_384fc4;
        case 0x384fc8u: goto label_384fc8;
        case 0x384fccu: goto label_384fcc;
        default: break;
    }

    ctx->pc = 0x384b08u;

label_384b08:
    // 0x384b08: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x384b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_384b0c:
    // 0x384b0c: 0x8f82bd00  lw          $v0, -0x4300($gp)
    ctx->pc = 0x384b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950144)));
label_384b10:
    // 0x384b10: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x384b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_384b14:
    // 0x384b14: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x384b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_384b18:
    // 0x384b18: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x384b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_384b1c:
    // 0x384b1c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x384b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_384b20:
    // 0x384b20: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x384b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
label_384b24:
    // 0x384b24: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x384b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_384b28:
    // 0x384b28: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x384b28u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_384b2c:
    // 0x384b2c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x384b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_384b30:
    // 0x384b30: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x384b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_384b34:
    // 0x384b34: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x384b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_384b38:
    // 0x384b38: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x384b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_384b3c:
    // 0x384b3c: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x384b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_384b40:
    // 0x384b40: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x384b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_384b44:
    // 0x384b44: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x384b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_384b48:
    // 0x384b48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x384b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_384b4c:
    // 0x384b4c: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x384b4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_384b50:
    // 0x384b50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x384b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_384b54:
    // 0x384b54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x384b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_384b58:
    // 0x384b58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x384b58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_384b5c:
    // 0x384b5c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x384b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_384b60:
    // 0x384b60: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_384b64:
    if (ctx->pc == 0x384B64u) {
        ctx->pc = 0x384B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B60u;
        // 0x384b64: 0x27c50008  addiu       $a1, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384B68u;
        goto label_384b68;
    }
    ctx->pc = 0x384B60u;
    {
        const bool branch_taken_0x384b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x384B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B60u;
        // 0x384b64: 0x27c50008  addiu       $a1, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384b60) {
            ctx->pc = 0x384BA8u;
            goto label_384ba8;
        }
    }
    ctx->pc = 0x384B68u;
label_384b68:
    // 0x384b68: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x384b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_384b6c:
    // 0x384b6c: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x384b6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_384b70:
    // 0x384b70: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x384b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_384b74:
    // 0x384b74: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x384b74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_384b78:
    // 0x384b78: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x384b78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_384b7c:
    // 0x384b7c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x384b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_384b80:
    // 0x384b80: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x384b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_384b84:
    // 0x384b84: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x384b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_384b88:
    // 0x384b88: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x384b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_384b8c:
    // 0x384b8c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x384b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_384b90:
    // 0x384b90: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x384b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_384b94:
    // 0x384b94: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x384b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_384b98:
    // 0x384b98: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x384b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_384b9c:
    // 0x384b9c: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x384b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_384ba0:
    // 0x384ba0: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x384ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_384ba4:
    // 0x384ba4: 0x0  nop
    ctx->pc = 0x384ba4u;
    // NOP
label_384ba8:
    // 0x384ba8: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x384ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_384bac:
    // 0x384bac: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
label_384bb0:
    if (ctx->pc == 0x384BB0u) {
        ctx->pc = 0x384BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384BACu;
        // 0x384bb0: 0xafa50058  sw          $a1, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384BB4u;
        goto label_384bb4;
    }
    ctx->pc = 0x384BACu;
    {
        const bool branch_taken_0x384bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x384bac) {
            ctx->pc = 0x384BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384BACu;
            // 0x384bb0: 0xafa50058  sw          $a1, 0x58($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384BF8u;
            goto label_384bf8;
        }
    }
    ctx->pc = 0x384BB4u;
label_384bb4:
    // 0x384bb4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x384bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_384bb8:
    // 0x384bb8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x384bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_384bbc:
    // 0x384bbc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x384bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_384bc0:
    // 0x384bc0: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x384bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_384bc4:
    // 0x384bc4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x384bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_384bc8:
    // 0x384bc8: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x384bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_384bcc:
    // 0x384bcc: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x384bccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_384bd0:
    // 0x384bd0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x384bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_384bd4:
    // 0x384bd4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x384bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_384bd8:
    // 0x384bd8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x384bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_384bdc:
    // 0x384bdc: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x384bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_384be0:
    // 0x384be0: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x384be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_384be4:
    // 0x384be4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x384be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_384be8:
    // 0x384be8: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x384be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_384bec:
    // 0x384bec: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x384becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_384bf0:
    // 0x384bf0: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x384bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_384bf4:
    // 0x384bf4: 0x0  nop
    ctx->pc = 0x384bf4u;
    // NOP
label_384bf8:
    // 0x384bf8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x384bf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384bfc:
    // 0x384bfc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x384bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_384c00:
    // 0x384c00: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x384c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_384c04:
    // 0x384c04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x384c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_384c08:
    // 0x384c08: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x384c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_384c0c:
    // 0x384c0c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x384c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_384c10:
    // 0x384c10: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x384c10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_384c14:
    // 0x384c14: 0x12200070  beqz        $s1, . + 4 + (0x70 << 2)
label_384c18:
    if (ctx->pc == 0x384C18u) {
        ctx->pc = 0x384C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C14u;
        // 0x384c18: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384C1Cu;
        goto label_384c1c;
    }
    ctx->pc = 0x384C14u;
    {
        const bool branch_taken_0x384c14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x384C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C14u;
        // 0x384c18: 0x8fa3005c  lw          $v1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384c14) {
            ctx->pc = 0x384DD8u;
            goto label_384dd8;
        }
    }
    ctx->pc = 0x384C1Cu;
label_384c1c:
    // 0x384c1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x384c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_384c20:
    // 0x384c20: 0x2636004c  addiu       $s6, $s1, 0x4C
    ctx->pc = 0x384c20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_384c24:
    // 0x384c24: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x384c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_384c28:
    // 0x384c28: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x384c28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384c2c:
    // 0x384c2c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x384c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_384c30:
    // 0x384c30: 0x8e370024  lw          $s7, 0x24($s1)
    ctx->pc = 0x384c30u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_384c34:
    // 0x384c34: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x384c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_384c38:
    // 0x384c38: 0x18800066  blez        $a0, . + 4 + (0x66 << 2)
label_384c3c:
    if (ctx->pc == 0x384C3Cu) {
        ctx->pc = 0x384C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C38u;
        // 0x384c3c: 0x8e34003c  lw          $s4, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384C40u;
        goto label_384c40;
    }
    ctx->pc = 0x384C38u;
    {
        const bool branch_taken_0x384c38 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x384C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C38u;
        // 0x384c3c: 0x8e34003c  lw          $s4, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384c38) {
            ctx->pc = 0x384DD4u;
            goto label_384dd4;
        }
    }
    ctx->pc = 0x384C40u;
label_384c40:
    // 0x384c40: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x384c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_384c44:
    // 0x384c44: 0xc7948154  lwc1        $f20, -0x7EAC($gp)
    ctx->pc = 0x384c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_384c48:
    // 0x384c48: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x384c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_384c4c:
    // 0x384c4c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x384c4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_384c50:
    // 0x384c50: 0x26300054  addiu       $s0, $s1, 0x54
    ctx->pc = 0x384c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_384c54:
    // 0x384c54: 0x0  nop
    ctx->pc = 0x384c54u;
    // NOP
label_384c58:
    // 0x384c58: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x384c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_384c5c:
    // 0x384c5c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x384c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_384c60:
    // 0x384c60: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_384c64:
    if (ctx->pc == 0x384C64u) {
        ctx->pc = 0x384C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C60u;
        // 0x384c64: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384C68u;
        goto label_384c68;
    }
    ctx->pc = 0x384C60u;
    {
        const bool branch_taken_0x384c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C60u;
        // 0x384c64: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384c60) {
            ctx->pc = 0x384DC0u;
            goto label_384dc0;
        }
    }
    ctx->pc = 0x384C68u;
label_384c68:
    // 0x384c68: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x384c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_384c6c:
    // 0x384c6c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x384c6cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_384c70:
    // 0x384c70: 0x12400053  beqz        $s2, . + 4 + (0x53 << 2)
label_384c74:
    if (ctx->pc == 0x384C74u) {
        ctx->pc = 0x384C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C70u;
        // 0x384c74: 0x3c060038  lui         $a2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384C78u;
        goto label_384c78;
    }
    ctx->pc = 0x384C70u;
    {
        const bool branch_taken_0x384c70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x384C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C70u;
        // 0x384c74: 0x3c060038  lui         $a2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384c70) {
            ctx->pc = 0x384DC0u;
            goto label_384dc0;
        }
    }
    ctx->pc = 0x384C78u;
label_384c78:
    // 0x384c78: 0x24c64038  addiu       $a2, $a2, 0x4038
    ctx->pc = 0x384c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16440));
label_384c7c:
    // 0x384c7c: 0x16860018  bne         $s4, $a2, . + 4 + (0x18 << 2)
label_384c80:
    if (ctx->pc == 0x384C80u) {
        ctx->pc = 0x384C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C7Cu;
        // 0x384c80: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384C84u;
        goto label_384c84;
    }
    ctx->pc = 0x384C7Cu;
    {
        const bool branch_taken_0x384c7c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 6));
        ctx->pc = 0x384C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C7Cu;
        // 0x384c80: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384c7c) {
            ctx->pc = 0x384CE0u;
            goto label_384ce0;
        }
    }
    ctx->pc = 0x384C84u;
label_384c84:
    // 0x384c84: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x384c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_384c88:
    // 0x384c88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x384c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_384c8c:
    // 0x384c8c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x384c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_384c90:
    // 0x384c90: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x384c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_384c94:
    // 0x384c94: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x384c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_384c98:
    // 0x384c98: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x384c98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_384c9c:
    // 0x384c9c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x384c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_384ca0:
    // 0x384ca0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x384ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_384ca4:
    // 0x384ca4: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x384ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_384ca8:
    // 0x384ca8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x384ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_384cac:
    // 0x384cac: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x384cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_384cb0:
    // 0x384cb0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x384cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_384cb4:
    // 0x384cb4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x384cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_384cb8:
    // 0x384cb8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x384cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_384cbc:
    // 0x384cbc: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x384cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_384cc0:
    // 0x384cc0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x384cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_384cc4:
    // 0x384cc4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x384cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_384cc8:
    // 0x384cc8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x384cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_384ccc:
    // 0x384ccc: 0xc103eb2  jal         func_40FAC8
label_384cd0:
    if (ctx->pc == 0x384CD0u) {
        ctx->pc = 0x384CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384CCCu;
        // 0x384cd0: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x384CD4u;
        goto label_384cd4;
    }
    ctx->pc = 0x384CCCu;
    SET_GPR_U32(ctx, 31, 0x384CD4u);
    ctx->pc = 0x384CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384CCCu;
    // 0x384cd0: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAC8u, 0x384CCCu, 0x384CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384CD4u;
label_384cd4:
    // 0x384cd4: 0x10000035  b           . + 4 + (0x35 << 2)
label_384cd8:
    if (ctx->pc == 0x384CD8u) {
        ctx->pc = 0x384CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384CD4u;
        // 0x384cd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384CDCu;
        goto label_384cdc;
    }
    ctx->pc = 0x384CD4u;
    {
        const bool branch_taken_0x384cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384CD4u;
        // 0x384cd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384cd4) {
            ctx->pc = 0x384DACu;
            goto label_384dac;
        }
    }
    ctx->pc = 0x384CDCu;
label_384cdc:
    // 0x384cdc: 0x0  nop
    ctx->pc = 0x384cdcu;
    // NOP
label_384ce0:
    // 0x384ce0: 0x244242e0  addiu       $v0, $v0, 0x42E0
    ctx->pc = 0x384ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17120));
label_384ce4:
    // 0x384ce4: 0x1682002e  bne         $s4, $v0, . + 4 + (0x2E << 2)
label_384ce8:
    if (ctx->pc == 0x384CE8u) {
        ctx->pc = 0x384CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384CE4u;
        // 0x384ce8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384CECu;
        goto label_384cec;
    }
    ctx->pc = 0x384CE4u;
    {
        const bool branch_taken_0x384ce4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x384CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384CE4u;
        // 0x384ce8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384ce4) {
            ctx->pc = 0x384DA0u;
            goto label_384da0;
        }
    }
    ctx->pc = 0x384CECu;
label_384cec:
    // 0x384cec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x384cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_384cf0:
    // 0x384cf0: 0x2462ba40  addiu       $v0, $v1, -0x45C0
    ctx->pc = 0x384cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949440));
label_384cf4:
    // 0x384cf4: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x384cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_384cf8:
    // 0x384cf8: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x384cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_384cfc:
    // 0x384cfc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x384cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_384d00:
    // 0x384d00: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x384d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_384d04:
    // 0x384d04: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x384d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_384d08:
    // 0x384d08: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x384d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_384d0c:
    // 0x384d0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x384d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_384d10:
    // 0x384d10: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x384d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_384d14:
    // 0x384d14: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x384d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_384d18:
    // 0x384d18: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x384d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_384d1c:
    // 0x384d1c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x384d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_384d20:
    // 0x384d20: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x384d20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_384d24:
    // 0x384d24: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x384d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_384d28:
    // 0x384d28: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x384d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_384d2c:
    // 0x384d2c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x384d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_384d30:
    // 0x384d30: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x384d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_384d34:
    // 0x384d34: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x384d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_384d38:
    // 0x384d38: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x384d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_384d3c:
    // 0x384d3c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x384d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_384d40:
    // 0x384d40: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x384d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_384d44:
    // 0x384d44: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x384d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_384d48:
    // 0x384d48: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x384d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_384d4c:
    // 0x384d4c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x384d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_384d50:
    // 0x384d50: 0xc103eb2  jal         func_40FAC8
label_384d54:
    if (ctx->pc == 0x384D54u) {
        ctx->pc = 0x384D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D50u;
        // 0x384d54: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x384D58u;
        goto label_384d58;
    }
    ctx->pc = 0x384D50u;
    SET_GPR_U32(ctx, 31, 0x384D58u);
    ctx->pc = 0x384D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384D50u;
    // 0x384d54: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAC8u, 0x384D50u, 0x384D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384D58u;
label_384d58:
    // 0x384d58: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x384d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_384d5c:
    // 0x384d5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x384d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_384d60:
    // 0x384d60: 0x2465ba20  addiu       $a1, $v1, -0x45E0
    ctx->pc = 0x384d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949408));
label_384d64:
    // 0x384d64: 0xc103d16  jal         func_40F458
label_384d68:
    if (ctx->pc == 0x384D68u) {
        ctx->pc = 0x384D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D64u;
        // 0x384d68: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384D6Cu;
        goto label_384d6c;
    }
    ctx->pc = 0x384D64u;
    SET_GPR_U32(ctx, 31, 0x384D6Cu);
    ctx->pc = 0x384D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384D64u;
    // 0x384d68: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x384D64u, 0x384D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384D6Cu;
label_384d6c:
    // 0x384d6c: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x384d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_384d70:
    // 0x384d70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x384d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_384d74:
    // 0x384d74: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x384d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_384d78:
    // 0x384d78: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x384d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_384d7c:
    // 0x384d7c: 0xc103e6c  jal         func_40F9B0
label_384d80:
    if (ctx->pc == 0x384D80u) {
        ctx->pc = 0x384D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D7Cu;
        // 0x384d80: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x384D84u;
        goto label_384d84;
    }
    ctx->pc = 0x384D7Cu;
    SET_GPR_U32(ctx, 31, 0x384D84u);
    ctx->pc = 0x384D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384D7Cu;
    // 0x384d80: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x384D7Cu, 0x384D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384D84u;
label_384d84:
    // 0x384d84: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x384d84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_384d88:
    // 0x384d88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x384d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_384d8c:
    // 0x384d8c: 0x24c5ba30  addiu       $a1, $a2, -0x45D0
    ctx->pc = 0x384d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949424));
label_384d90:
    // 0x384d90: 0xc103d16  jal         func_40F458
label_384d94:
    if (ctx->pc == 0x384D94u) {
        ctx->pc = 0x384D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D90u;
        // 0x384d94: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384D98u;
        goto label_384d98;
    }
    ctx->pc = 0x384D90u;
    SET_GPR_U32(ctx, 31, 0x384D98u);
    ctx->pc = 0x384D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384D90u;
    // 0x384d94: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x384D90u, 0x384D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384D98u;
label_384d98:
    // 0x384d98: 0x10000004  b           . + 4 + (0x4 << 2)
label_384d9c:
    if (ctx->pc == 0x384D9Cu) {
        ctx->pc = 0x384D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D98u;
        // 0x384d9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384DA0u;
        goto label_384da0;
    }
    ctx->pc = 0x384D98u;
    {
        const bool branch_taken_0x384d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D98u;
        // 0x384d9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384d98) {
            ctx->pc = 0x384DACu;
            goto label_384dac;
        }
    }
    ctx->pc = 0x384DA0u;
label_384da0:
    // 0x384da0: 0x280f809  jalr        $s4
label_384da4:
    if (ctx->pc == 0x384DA4u) {
        ctx->pc = 0x384DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DA0u;
        // 0x384da4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384DA8u;
        goto label_384da8;
    }
    ctx->pc = 0x384DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x384DA8u);
        ctx->pc = 0x384DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DA0u;
        // 0x384da4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384DA0u, 0x384DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384DA8u;
label_384da8:
    // 0x384da8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x384da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_384dac:
    // 0x384dac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x384dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_384db0:
    // 0x384db0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x384db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_384db4:
    // 0x384db4: 0xc103df4  jal         func_40F7D0
label_384db8:
    if (ctx->pc == 0x384DB8u) {
        ctx->pc = 0x384DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DB4u;
        // 0x384db8: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384DBCu;
        goto label_384dbc;
    }
    ctx->pc = 0x384DB4u;
    SET_GPR_U32(ctx, 31, 0x384DBCu);
    ctx->pc = 0x384DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384DB4u;
    // 0x384db8: 0x2178021  addu        $s0, $s0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F7D0u, 0x384DB4u, 0x384DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384DBCu;
label_384dbc:
    // 0x384dbc: 0x2d7b021  addu        $s6, $s6, $s7
    ctx->pc = 0x384dbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
label_384dc0:
    // 0x384dc0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x384dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_384dc4:
    // 0x384dc4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x384dc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_384dc8:
    // 0x384dc8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x384dc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_384dcc:
    // 0x384dcc: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
label_384dd0:
    if (ctx->pc == 0x384DD0u) {
        ctx->pc = 0x384DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DCCu;
        // 0x384dd0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384DD4u;
        goto label_384dd4;
    }
    ctx->pc = 0x384DCCu;
    {
        const bool branch_taken_0x384dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DCCu;
        // 0x384dd0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384dcc) {
            ctx->pc = 0x384C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384c58;
        }
    }
    ctx->pc = 0x384DD4u;
label_384dd4:
    // 0x384dd4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x384dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_384dd8:
    // 0x384dd8: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x384dd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_384ddc:
    // 0x384ddc: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
label_384de0:
    if (ctx->pc == 0x384DE0u) {
        ctx->pc = 0x384DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DDCu;
        // 0x384de0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384DE4u;
        goto label_384de4;
    }
    ctx->pc = 0x384DDCu;
    {
        const bool branch_taken_0x384ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DDCu;
        // 0x384de0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384ddc) {
            ctx->pc = 0x384C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384c00;
        }
    }
    ctx->pc = 0x384DE4u;
label_384de4:
    // 0x384de4: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x384de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_384de8:
    // 0x384de8: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x384de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_384dec:
    // 0x384dec: 0xc0c9966  jal         func_326598
label_384df0:
    if (ctx->pc == 0x384DF0u) {
        ctx->pc = 0x384DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384DECu;
        // 0x384df0: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384DF4u;
        goto label_384df4;
    }
    ctx->pc = 0x384DECu;
    SET_GPR_U32(ctx, 31, 0x384DF4u);
    ctx->pc = 0x384DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384DECu;
    // 0x384df0: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326598u, 0x384DECu, 0x384DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384DF4u;
label_384df4:
    // 0x384df4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x384df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_384df8:
    // 0x384df8: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x384df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_384dfc:
    // 0x384dfc: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x384dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_384e00:
    // 0x384e00: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x384e00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_384e04:
    // 0x384e04: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x384e04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_384e08:
    // 0x384e08: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x384e08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_384e0c:
    // 0x384e0c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x384e0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_384e10:
    // 0x384e10: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x384e10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_384e14:
    // 0x384e14: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x384e14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_384e18:
    // 0x384e18: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x384e18u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_384e1c:
    // 0x384e1c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x384e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_384e20:
    // 0x384e20: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x384e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_384e24:
    // 0x384e24: 0x3e00008  jr          $ra
label_384e28:
    if (ctx->pc == 0x384E28u) {
        ctx->pc = 0x384E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E24u;
        // 0x384e28: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384E2Cu;
        goto label_384e2c;
    }
    ctx->pc = 0x384E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E24u;
        // 0x384e28: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384E2Cu;
label_384e2c:
    // 0x384e2c: 0x0  nop
    ctx->pc = 0x384e2cu;
    // NOP
label_384e30:
    // 0x384e30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x384e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_384e34:
    // 0x384e34: 0x8f82bd00  lw          $v0, -0x4300($gp)
    ctx->pc = 0x384e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950144)));
label_384e38:
    // 0x384e38: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x384e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_384e3c:
    // 0x384e3c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x384e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_384e40:
    // 0x384e40: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x384e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_384e44:
    // 0x384e44: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x384e44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_384e48:
    // 0x384e48: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x384e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_384e4c:
    // 0x384e4c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x384e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_384e50:
    // 0x384e50: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x384e50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_384e54:
    // 0x384e54: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x384e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_384e58:
    // 0x384e58: 0x2c29021  addu        $s2, $s6, $v0
    ctx->pc = 0x384e58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_384e5c:
    // 0x384e5c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x384e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_384e60:
    // 0x384e60: 0x246a821  addu        $s5, $s2, $a2
    ctx->pc = 0x384e60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_384e64:
    // 0x384e64: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x384e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_384e68:
    // 0x384e68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x384e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_384e6c:
    // 0x384e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x384e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_384e70:
    // 0x384e70: 0xc0ef360  jal         func_3BCD80
label_384e74:
    if (ctx->pc == 0x384E74u) {
        ctx->pc = 0x384E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E70u;
        // 0x384e74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384E78u;
        goto label_384e78;
    }
    ctx->pc = 0x384E70u;
    SET_GPR_U32(ctx, 31, 0x384E78u);
    ctx->pc = 0x384E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384E70u;
    // 0x384e74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCD80u, 0x384E70u, 0x384E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E78u;
label_384e78:
    // 0x384e78: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x384e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_384e7c:
    // 0x384e7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x384e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384e80:
    // 0x384e80: 0xc0ef372  jal         func_3BCDC8
label_384e84:
    if (ctx->pc == 0x384E84u) {
        ctx->pc = 0x384E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E80u;
        // 0x384e84: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384E88u;
        goto label_384e88;
    }
    ctx->pc = 0x384E80u;
    SET_GPR_U32(ctx, 31, 0x384E88u);
    ctx->pc = 0x384E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384E80u;
    // 0x384e84: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCDC8u, 0x384E80u, 0x384E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E88u;
label_384e88:
    // 0x384e88: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_384e8c:
    if (ctx->pc == 0x384E8Cu) {
        ctx->pc = 0x384E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E88u;
        // 0x384e8c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384E90u;
        goto label_384e90;
    }
    ctx->pc = 0x384E88u;
    {
        const bool branch_taken_0x384e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E88u;
        // 0x384e8c: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384e88) {
            ctx->pc = 0x384FA4u;
            goto label_384fa4;
        }
    }
    ctx->pc = 0x384E90u;
label_384e90:
    // 0x384e90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x384e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384e94:
    // 0x384e94: 0xc0eee8c  jal         func_3BBA30
label_384e98:
    if (ctx->pc == 0x384E98u) {
        ctx->pc = 0x384E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384E94u;
        // 0x384e98: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384E9Cu;
        goto label_384e9c;
    }
    ctx->pc = 0x384E94u;
    SET_GPR_U32(ctx, 31, 0x384E9Cu);
    ctx->pc = 0x384E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384E94u;
    // 0x384e98: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBA30u, 0x384E94u, 0x384E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384E9Cu;
label_384e9c:
    // 0x384e9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x384e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384ea0:
    // 0x384ea0: 0x26530008  addiu       $s3, $s2, 0x8
    ctx->pc = 0x384ea0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_384ea4:
    // 0x384ea4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x384ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_384ea8:
    // 0x384ea8: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x384ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_384eac:
    // 0x384eac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384eb0:
    // 0x384eb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x384eb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384eb4:
    // 0x384eb4: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_384eb8:
    if (ctx->pc == 0x384EB8u) {
        ctx->pc = 0x384EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EB4u;
        // 0x384eb8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384EBCu;
        goto label_384ebc;
    }
    ctx->pc = 0x384EB4u;
    {
        const bool branch_taken_0x384eb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x384EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EB4u;
        // 0x384eb8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384eb4) {
            ctx->pc = 0x384EF0u;
            goto label_384ef0;
        }
    }
    ctx->pc = 0x384EBCu;
label_384ebc:
    // 0x384ebc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x384ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_384ec0:
    // 0x384ec0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x384ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_384ec4:
    // 0x384ec4: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x384ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_384ec8:
    // 0x384ec8: 0x12240018  beq         $s1, $a0, . + 4 + (0x18 << 2)
label_384ecc:
    if (ctx->pc == 0x384ECCu) {
        ctx->pc = 0x384ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EC8u;
        // 0x384ecc: 0x8e080000  lw          $t0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384ED0u;
        goto label_384ed0;
    }
    ctx->pc = 0x384EC8u;
    {
        const bool branch_taken_0x384ec8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x384ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EC8u;
        // 0x384ecc: 0x8e080000  lw          $t0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384ec8) {
            ctx->pc = 0x384F2Cu;
            goto label_384f2c;
        }
    }
    ctx->pc = 0x384ED0u;
label_384ed0:
    // 0x384ed0: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x384ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_384ed4:
    // 0x384ed4: 0x0  nop
    ctx->pc = 0x384ed4u;
    // NOP
label_384ed8:
    // 0x384ed8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x384ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_384edc:
    // 0x384edc: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x384edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_384ee0:
    // 0x384ee0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_384ee4:
    if (ctx->pc == 0x384EE4u) {
        ctx->pc = 0x384EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EE0u;
        // 0x384ee4: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x384EE8u;
        goto label_384ee8;
    }
    ctx->pc = 0x384EE0u;
    {
        const bool branch_taken_0x384ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EE0u;
        // 0x384ee4: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x384ee0) {
            ctx->pc = 0x384EFCu;
            goto label_384efc;
        }
    }
    ctx->pc = 0x384EE8u;
label_384ee8:
    // 0x384ee8: 0x10000002  b           . + 4 + (0x2 << 2)
label_384eec:
    if (ctx->pc == 0x384EECu) {
        ctx->pc = 0x384EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EE8u;
        // 0x384eec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384EF0u;
        goto label_384ef0;
    }
    ctx->pc = 0x384EE8u;
    {
        const bool branch_taken_0x384ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EE8u;
        // 0x384eec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384ee8) {
            ctx->pc = 0x384EF4u;
            goto label_384ef4;
        }
    }
    ctx->pc = 0x384EF0u;
label_384ef0:
    // 0x384ef0: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x384ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_384ef4:
    // 0x384ef4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x384ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_384ef8:
    // 0x384ef8: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x384ef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_384efc:
    // 0x384efc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_384f00:
    if (ctx->pc == 0x384F00u) {
        ctx->pc = 0x384F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EFCu;
        // 0x384f00: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384F04u;
        goto label_384f04;
    }
    ctx->pc = 0x384EFCu;
    {
        const bool branch_taken_0x384efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384EFCu;
        // 0x384f00: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384efc) {
            ctx->pc = 0x384F30u;
            goto label_384f30;
        }
    }
    ctx->pc = 0x384F04u;
label_384f04:
    // 0x384f04: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x384f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_384f08:
    // 0x384f08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x384f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_384f0c:
    // 0x384f0c: 0x10a0fff8  beqz        $a1, . + 4 + (-0x8 << 2)
label_384f10:
    if (ctx->pc == 0x384F10u) {
        ctx->pc = 0x384F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F0Cu;
        // 0x384f10: 0x72080  sll         $a0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384F14u;
        goto label_384f14;
    }
    ctx->pc = 0x384F0Cu;
    {
        const bool branch_taken_0x384f0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x384F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F0Cu;
        // 0x384f10: 0x72080  sll         $a0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384f0c) {
            ctx->pc = 0x384EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384ef0;
        }
    }
    ctx->pc = 0x384F14u;
label_384f14:
    // 0x384f14: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x384f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_384f18:
    // 0x384f18: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x384f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_384f1c:
    // 0x384f1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x384f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_384f20:
    // 0x384f20: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x384f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_384f24:
    // 0x384f24: 0x5623ffec  bnel        $s1, $v1, . + 4 + (-0x14 << 2)
label_384f28:
    if (ctx->pc == 0x384F28u) {
        ctx->pc = 0x384F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F24u;
        // 0x384f28: 0x8ca2002c  lw          $v0, 0x2C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384F2Cu;
        goto label_384f2c;
    }
    ctx->pc = 0x384F24u;
    {
        const bool branch_taken_0x384f24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x384f24) {
            ctx->pc = 0x384F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384F24u;
            // 0x384f28: 0x8ca2002c  lw          $v0, 0x2C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384ed8;
        }
    }
    ctx->pc = 0x384F2Cu;
label_384f2c:
    // 0x384f2c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x384f2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_384f30:
    // 0x384f30: 0x11200009  beqz        $t1, . + 4 + (0x9 << 2)
label_384f34:
    if (ctx->pc == 0x384F34u) {
        ctx->pc = 0x384F38u;
        goto label_384f38;
    }
    ctx->pc = 0x384F30u;
    {
        const bool branch_taken_0x384f30 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x384f30) {
            ctx->pc = 0x384F58u;
            goto label_384f58;
        }
    }
    ctx->pc = 0x384F38u;
label_384f38:
    // 0x384f38: 0x5500000d  bnel        $t0, $zero, . + 4 + (0xD << 2)
label_384f3c:
    if (ctx->pc == 0x384F3Cu) {
        ctx->pc = 0x384F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F38u;
        // 0x384f3c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384F40u;
        goto label_384f40;
    }
    ctx->pc = 0x384F38u;
    {
        const bool branch_taken_0x384f38 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x384f38) {
            ctx->pc = 0x384F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384F38u;
            // 0x384f3c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384F70u;
            goto label_384f70;
        }
    }
    ctx->pc = 0x384F40u;
label_384f40:
    // 0x384f40: 0xc103db0  jal         func_40F6C0
label_384f44:
    if (ctx->pc == 0x384F44u) {
        ctx->pc = 0x384F48u;
        goto label_384f48;
    }
    ctx->pc = 0x384F40u;
    SET_GPR_U32(ctx, 31, 0x384F48u);
    ctx->pc = 0x40F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F6C0u, 0x384F40u, 0x384F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384F48u;
label_384f48:
    // 0x384f48: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_384f4c:
    if (ctx->pc == 0x384F4Cu) {
        ctx->pc = 0x384F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F48u;
        // 0x384f4c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384F50u;
        goto label_384f50;
    }
    ctx->pc = 0x384F48u;
    {
        const bool branch_taken_0x384f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F48u;
        // 0x384f4c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384f48) {
            ctx->pc = 0x384F6Cu;
            goto label_384f6c;
        }
    }
    ctx->pc = 0x384F50u;
label_384f50:
    // 0x384f50: 0x1000000b  b           . + 4 + (0xB << 2)
label_384f54:
    if (ctx->pc == 0x384F54u) {
        ctx->pc = 0x384F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F50u;
        // 0x384f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384F58u;
        goto label_384f58;
    }
    ctx->pc = 0x384F50u;
    {
        const bool branch_taken_0x384f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F50u;
        // 0x384f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384f50) {
            ctx->pc = 0x384F80u;
            goto label_384f80;
        }
    }
    ctx->pc = 0x384F58u;
label_384f58:
    // 0x384f58: 0x51000005  beql        $t0, $zero, . + 4 + (0x5 << 2)
label_384f5c:
    if (ctx->pc == 0x384F5Cu) {
        ctx->pc = 0x384F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F58u;
        // 0x384f5c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384F60u;
        goto label_384f60;
    }
    ctx->pc = 0x384F58u;
    {
        const bool branch_taken_0x384f58 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x384f58) {
            ctx->pc = 0x384F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384F58u;
            // 0x384f5c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384F70u;
            goto label_384f70;
        }
    }
    ctx->pc = 0x384F60u;
label_384f60:
    // 0x384f60: 0xc103da2  jal         func_40F688
label_384f64:
    if (ctx->pc == 0x384F64u) {
        ctx->pc = 0x384F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F60u;
        // 0x384f64: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384F68u;
        goto label_384f68;
    }
    ctx->pc = 0x384F60u;
    SET_GPR_U32(ctx, 31, 0x384F68u);
    ctx->pc = 0x384F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384F60u;
    // 0x384f64: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x384F60u, 0x384F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384F68u;
label_384f68:
    // 0x384f68: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x384f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_384f6c:
    // 0x384f6c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x384f6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_384f70:
    // 0x384f70: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x384f70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_384f74:
    // 0x384f74: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_384f78:
    if (ctx->pc == 0x384F78u) {
        ctx->pc = 0x384F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F74u;
        // 0x384f78: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384F7Cu;
        goto label_384f7c;
    }
    ctx->pc = 0x384F74u;
    {
        const bool branch_taken_0x384f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F74u;
        // 0x384f78: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384f74) {
            ctx->pc = 0x384EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384ea8;
        }
    }
    ctx->pc = 0x384F7Cu;
label_384f7c:
    // 0x384f7c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x384f7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_384f80:
    // 0x384f80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_384f84:
    if (ctx->pc == 0x384F84u) {
        ctx->pc = 0x384F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F80u;
        // 0x384f84: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384F88u;
        goto label_384f88;
    }
    ctx->pc = 0x384F80u;
    {
        const bool branch_taken_0x384f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x384F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F80u;
        // 0x384f84: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384f80) {
            ctx->pc = 0x384F9Cu;
            goto label_384f9c;
        }
    }
    ctx->pc = 0x384F88u;
label_384f88:
    // 0x384f88: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x384f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_384f8c:
    // 0x384f8c: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x384f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_384f90:
    // 0x384f90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x384f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_384f94:
    // 0x384f94: 0x10000004  b           . + 4 + (0x4 << 2)
label_384f98:
    if (ctx->pc == 0x384F98u) {
        ctx->pc = 0x384F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F94u;
        // 0x384f98: 0xac830040  sw          $v1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384F9Cu;
        goto label_384f9c;
    }
    ctx->pc = 0x384F94u;
    {
        const bool branch_taken_0x384f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F94u;
        // 0x384f98: 0xac830040  sw          $v1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384f94) {
            ctx->pc = 0x384FA8u;
            goto label_384fa8;
        }
    }
    ctx->pc = 0x384F9Cu;
label_384f9c:
    // 0x384f9c: 0xc0ef39c  jal         func_3BCE70
label_384fa0:
    if (ctx->pc == 0x384FA0u) {
        ctx->pc = 0x384FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384F9Cu;
        // 0x384fa0: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384FA4u;
        goto label_384fa4;
    }
    ctx->pc = 0x384F9Cu;
    SET_GPR_U32(ctx, 31, 0x384FA4u);
    ctx->pc = 0x384FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384F9Cu;
    // 0x384fa0: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCE70u, 0x384F9Cu, 0x384FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384FA4u;
label_384fa4:
    // 0x384fa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x384fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384fa8:
    // 0x384fa8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x384fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_384fac:
    // 0x384fac: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x384facu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_384fb0:
    // 0x384fb0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x384fb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_384fb4:
    // 0x384fb4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x384fb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_384fb8:
    // 0x384fb8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x384fb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_384fbc:
    // 0x384fbc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x384fbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_384fc0:
    // 0x384fc0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x384fc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_384fc4:
    // 0x384fc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x384fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_384fc8:
    // 0x384fc8: 0x3e00008  jr          $ra
label_384fcc:
    if (ctx->pc == 0x384FCCu) {
        ctx->pc = 0x384FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384FC8u;
        // 0x384fcc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384FD0u;
        goto label_fallthrough_0x384fc8;
    }
    ctx->pc = 0x384FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384FC8u;
        // 0x384fcc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x384fc8:
    ctx->pc = 0x384FD0u;
}
