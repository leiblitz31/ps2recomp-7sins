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

// Function: sub_00424BA0
// Address: 0x424ba0 - 0x425080
void sub_00424BA0_0x424ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424BA0_0x424ba0");
#endif

    switch (ctx->pc) {
        case 0x424ba0u: goto label_424ba0;
        case 0x424ba4u: goto label_424ba4;
        case 0x424ba8u: goto label_424ba8;
        case 0x424bacu: goto label_424bac;
        case 0x424bb0u: goto label_424bb0;
        case 0x424bb4u: goto label_424bb4;
        case 0x424bb8u: goto label_424bb8;
        case 0x424bbcu: goto label_424bbc;
        case 0x424bc0u: goto label_424bc0;
        case 0x424bc4u: goto label_424bc4;
        case 0x424bc8u: goto label_424bc8;
        case 0x424bccu: goto label_424bcc;
        case 0x424bd0u: goto label_424bd0;
        case 0x424bd4u: goto label_424bd4;
        case 0x424bd8u: goto label_424bd8;
        case 0x424bdcu: goto label_424bdc;
        case 0x424be0u: goto label_424be0;
        case 0x424be4u: goto label_424be4;
        case 0x424be8u: goto label_424be8;
        case 0x424becu: goto label_424bec;
        case 0x424bf0u: goto label_424bf0;
        case 0x424bf4u: goto label_424bf4;
        case 0x424bf8u: goto label_424bf8;
        case 0x424bfcu: goto label_424bfc;
        case 0x424c00u: goto label_424c00;
        case 0x424c04u: goto label_424c04;
        case 0x424c08u: goto label_424c08;
        case 0x424c0cu: goto label_424c0c;
        case 0x424c10u: goto label_424c10;
        case 0x424c14u: goto label_424c14;
        case 0x424c18u: goto label_424c18;
        case 0x424c1cu: goto label_424c1c;
        case 0x424c20u: goto label_424c20;
        case 0x424c24u: goto label_424c24;
        case 0x424c28u: goto label_424c28;
        case 0x424c2cu: goto label_424c2c;
        case 0x424c30u: goto label_424c30;
        case 0x424c34u: goto label_424c34;
        case 0x424c38u: goto label_424c38;
        case 0x424c3cu: goto label_424c3c;
        case 0x424c40u: goto label_424c40;
        case 0x424c44u: goto label_424c44;
        case 0x424c48u: goto label_424c48;
        case 0x424c4cu: goto label_424c4c;
        case 0x424c50u: goto label_424c50;
        case 0x424c54u: goto label_424c54;
        case 0x424c58u: goto label_424c58;
        case 0x424c5cu: goto label_424c5c;
        case 0x424c60u: goto label_424c60;
        case 0x424c64u: goto label_424c64;
        case 0x424c68u: goto label_424c68;
        case 0x424c6cu: goto label_424c6c;
        case 0x424c70u: goto label_424c70;
        case 0x424c74u: goto label_424c74;
        case 0x424c78u: goto label_424c78;
        case 0x424c7cu: goto label_424c7c;
        case 0x424c80u: goto label_424c80;
        case 0x424c84u: goto label_424c84;
        case 0x424c88u: goto label_424c88;
        case 0x424c8cu: goto label_424c8c;
        case 0x424c90u: goto label_424c90;
        case 0x424c94u: goto label_424c94;
        case 0x424c98u: goto label_424c98;
        case 0x424c9cu: goto label_424c9c;
        case 0x424ca0u: goto label_424ca0;
        case 0x424ca4u: goto label_424ca4;
        case 0x424ca8u: goto label_424ca8;
        case 0x424cacu: goto label_424cac;
        case 0x424cb0u: goto label_424cb0;
        case 0x424cb4u: goto label_424cb4;
        case 0x424cb8u: goto label_424cb8;
        case 0x424cbcu: goto label_424cbc;
        case 0x424cc0u: goto label_424cc0;
        case 0x424cc4u: goto label_424cc4;
        case 0x424cc8u: goto label_424cc8;
        case 0x424cccu: goto label_424ccc;
        case 0x424cd0u: goto label_424cd0;
        case 0x424cd4u: goto label_424cd4;
        case 0x424cd8u: goto label_424cd8;
        case 0x424cdcu: goto label_424cdc;
        case 0x424ce0u: goto label_424ce0;
        case 0x424ce4u: goto label_424ce4;
        case 0x424ce8u: goto label_424ce8;
        case 0x424cecu: goto label_424cec;
        case 0x424cf0u: goto label_424cf0;
        case 0x424cf4u: goto label_424cf4;
        case 0x424cf8u: goto label_424cf8;
        case 0x424cfcu: goto label_424cfc;
        case 0x424d00u: goto label_424d00;
        case 0x424d04u: goto label_424d04;
        case 0x424d08u: goto label_424d08;
        case 0x424d0cu: goto label_424d0c;
        case 0x424d10u: goto label_424d10;
        case 0x424d14u: goto label_424d14;
        case 0x424d18u: goto label_424d18;
        case 0x424d1cu: goto label_424d1c;
        case 0x424d20u: goto label_424d20;
        case 0x424d24u: goto label_424d24;
        case 0x424d28u: goto label_424d28;
        case 0x424d2cu: goto label_424d2c;
        case 0x424d30u: goto label_424d30;
        case 0x424d34u: goto label_424d34;
        case 0x424d38u: goto label_424d38;
        case 0x424d3cu: goto label_424d3c;
        case 0x424d40u: goto label_424d40;
        case 0x424d44u: goto label_424d44;
        case 0x424d48u: goto label_424d48;
        case 0x424d4cu: goto label_424d4c;
        case 0x424d50u: goto label_424d50;
        case 0x424d54u: goto label_424d54;
        case 0x424d58u: goto label_424d58;
        case 0x424d5cu: goto label_424d5c;
        case 0x424d60u: goto label_424d60;
        case 0x424d64u: goto label_424d64;
        case 0x424d68u: goto label_424d68;
        case 0x424d6cu: goto label_424d6c;
        case 0x424d70u: goto label_424d70;
        case 0x424d74u: goto label_424d74;
        case 0x424d78u: goto label_424d78;
        case 0x424d7cu: goto label_424d7c;
        case 0x424d80u: goto label_424d80;
        case 0x424d84u: goto label_424d84;
        case 0x424d88u: goto label_424d88;
        case 0x424d8cu: goto label_424d8c;
        case 0x424d90u: goto label_424d90;
        case 0x424d94u: goto label_424d94;
        case 0x424d98u: goto label_424d98;
        case 0x424d9cu: goto label_424d9c;
        case 0x424da0u: goto label_424da0;
        case 0x424da4u: goto label_424da4;
        case 0x424da8u: goto label_424da8;
        case 0x424dacu: goto label_424dac;
        case 0x424db0u: goto label_424db0;
        case 0x424db4u: goto label_424db4;
        case 0x424db8u: goto label_424db8;
        case 0x424dbcu: goto label_424dbc;
        case 0x424dc0u: goto label_424dc0;
        case 0x424dc4u: goto label_424dc4;
        case 0x424dc8u: goto label_424dc8;
        case 0x424dccu: goto label_424dcc;
        case 0x424dd0u: goto label_424dd0;
        case 0x424dd4u: goto label_424dd4;
        case 0x424dd8u: goto label_424dd8;
        case 0x424ddcu: goto label_424ddc;
        case 0x424de0u: goto label_424de0;
        case 0x424de4u: goto label_424de4;
        case 0x424de8u: goto label_424de8;
        case 0x424decu: goto label_424dec;
        case 0x424df0u: goto label_424df0;
        case 0x424df4u: goto label_424df4;
        case 0x424df8u: goto label_424df8;
        case 0x424dfcu: goto label_424dfc;
        case 0x424e00u: goto label_424e00;
        case 0x424e04u: goto label_424e04;
        case 0x424e08u: goto label_424e08;
        case 0x424e0cu: goto label_424e0c;
        case 0x424e10u: goto label_424e10;
        case 0x424e14u: goto label_424e14;
        case 0x424e18u: goto label_424e18;
        case 0x424e1cu: goto label_424e1c;
        case 0x424e20u: goto label_424e20;
        case 0x424e24u: goto label_424e24;
        case 0x424e28u: goto label_424e28;
        case 0x424e2cu: goto label_424e2c;
        case 0x424e30u: goto label_424e30;
        case 0x424e34u: goto label_424e34;
        case 0x424e38u: goto label_424e38;
        case 0x424e3cu: goto label_424e3c;
        case 0x424e40u: goto label_424e40;
        case 0x424e44u: goto label_424e44;
        case 0x424e48u: goto label_424e48;
        case 0x424e4cu: goto label_424e4c;
        case 0x424e50u: goto label_424e50;
        case 0x424e54u: goto label_424e54;
        case 0x424e58u: goto label_424e58;
        case 0x424e5cu: goto label_424e5c;
        case 0x424e60u: goto label_424e60;
        case 0x424e64u: goto label_424e64;
        case 0x424e68u: goto label_424e68;
        case 0x424e6cu: goto label_424e6c;
        case 0x424e70u: goto label_424e70;
        case 0x424e74u: goto label_424e74;
        case 0x424e78u: goto label_424e78;
        case 0x424e7cu: goto label_424e7c;
        case 0x424e80u: goto label_424e80;
        case 0x424e84u: goto label_424e84;
        case 0x424e88u: goto label_424e88;
        case 0x424e8cu: goto label_424e8c;
        case 0x424e90u: goto label_424e90;
        case 0x424e94u: goto label_424e94;
        case 0x424e98u: goto label_424e98;
        case 0x424e9cu: goto label_424e9c;
        case 0x424ea0u: goto label_424ea0;
        case 0x424ea4u: goto label_424ea4;
        case 0x424ea8u: goto label_424ea8;
        case 0x424eacu: goto label_424eac;
        case 0x424eb0u: goto label_424eb0;
        case 0x424eb4u: goto label_424eb4;
        case 0x424eb8u: goto label_424eb8;
        case 0x424ebcu: goto label_424ebc;
        case 0x424ec0u: goto label_424ec0;
        case 0x424ec4u: goto label_424ec4;
        case 0x424ec8u: goto label_424ec8;
        case 0x424eccu: goto label_424ecc;
        case 0x424ed0u: goto label_424ed0;
        case 0x424ed4u: goto label_424ed4;
        case 0x424ed8u: goto label_424ed8;
        case 0x424edcu: goto label_424edc;
        case 0x424ee0u: goto label_424ee0;
        case 0x424ee4u: goto label_424ee4;
        case 0x424ee8u: goto label_424ee8;
        case 0x424eecu: goto label_424eec;
        case 0x424ef0u: goto label_424ef0;
        case 0x424ef4u: goto label_424ef4;
        case 0x424ef8u: goto label_424ef8;
        case 0x424efcu: goto label_424efc;
        case 0x424f00u: goto label_424f00;
        case 0x424f04u: goto label_424f04;
        case 0x424f08u: goto label_424f08;
        case 0x424f0cu: goto label_424f0c;
        case 0x424f10u: goto label_424f10;
        case 0x424f14u: goto label_424f14;
        case 0x424f18u: goto label_424f18;
        case 0x424f1cu: goto label_424f1c;
        case 0x424f20u: goto label_424f20;
        case 0x424f24u: goto label_424f24;
        case 0x424f28u: goto label_424f28;
        case 0x424f2cu: goto label_424f2c;
        case 0x424f30u: goto label_424f30;
        case 0x424f34u: goto label_424f34;
        case 0x424f38u: goto label_424f38;
        case 0x424f3cu: goto label_424f3c;
        case 0x424f40u: goto label_424f40;
        case 0x424f44u: goto label_424f44;
        case 0x424f48u: goto label_424f48;
        case 0x424f4cu: goto label_424f4c;
        case 0x424f50u: goto label_424f50;
        case 0x424f54u: goto label_424f54;
        case 0x424f58u: goto label_424f58;
        case 0x424f5cu: goto label_424f5c;
        case 0x424f60u: goto label_424f60;
        case 0x424f64u: goto label_424f64;
        case 0x424f68u: goto label_424f68;
        case 0x424f6cu: goto label_424f6c;
        case 0x424f70u: goto label_424f70;
        case 0x424f74u: goto label_424f74;
        case 0x424f78u: goto label_424f78;
        case 0x424f7cu: goto label_424f7c;
        case 0x424f80u: goto label_424f80;
        case 0x424f84u: goto label_424f84;
        case 0x424f88u: goto label_424f88;
        case 0x424f8cu: goto label_424f8c;
        case 0x424f90u: goto label_424f90;
        case 0x424f94u: goto label_424f94;
        case 0x424f98u: goto label_424f98;
        case 0x424f9cu: goto label_424f9c;
        case 0x424fa0u: goto label_424fa0;
        case 0x424fa4u: goto label_424fa4;
        case 0x424fa8u: goto label_424fa8;
        case 0x424facu: goto label_424fac;
        case 0x424fb0u: goto label_424fb0;
        case 0x424fb4u: goto label_424fb4;
        case 0x424fb8u: goto label_424fb8;
        case 0x424fbcu: goto label_424fbc;
        case 0x424fc0u: goto label_424fc0;
        case 0x424fc4u: goto label_424fc4;
        case 0x424fc8u: goto label_424fc8;
        case 0x424fccu: goto label_424fcc;
        case 0x424fd0u: goto label_424fd0;
        case 0x424fd4u: goto label_424fd4;
        case 0x424fd8u: goto label_424fd8;
        case 0x424fdcu: goto label_424fdc;
        case 0x424fe0u: goto label_424fe0;
        case 0x424fe4u: goto label_424fe4;
        case 0x424fe8u: goto label_424fe8;
        case 0x424fecu: goto label_424fec;
        case 0x424ff0u: goto label_424ff0;
        case 0x424ff4u: goto label_424ff4;
        case 0x424ff8u: goto label_424ff8;
        case 0x424ffcu: goto label_424ffc;
        case 0x425000u: goto label_425000;
        case 0x425004u: goto label_425004;
        case 0x425008u: goto label_425008;
        case 0x42500cu: goto label_42500c;
        case 0x425010u: goto label_425010;
        case 0x425014u: goto label_425014;
        case 0x425018u: goto label_425018;
        case 0x42501cu: goto label_42501c;
        case 0x425020u: goto label_425020;
        case 0x425024u: goto label_425024;
        case 0x425028u: goto label_425028;
        case 0x42502cu: goto label_42502c;
        case 0x425030u: goto label_425030;
        case 0x425034u: goto label_425034;
        case 0x425038u: goto label_425038;
        case 0x42503cu: goto label_42503c;
        case 0x425040u: goto label_425040;
        case 0x425044u: goto label_425044;
        case 0x425048u: goto label_425048;
        case 0x42504cu: goto label_42504c;
        case 0x425050u: goto label_425050;
        case 0x425054u: goto label_425054;
        case 0x425058u: goto label_425058;
        case 0x42505cu: goto label_42505c;
        case 0x425060u: goto label_425060;
        case 0x425064u: goto label_425064;
        case 0x425068u: goto label_425068;
        case 0x42506cu: goto label_42506c;
        case 0x425070u: goto label_425070;
        case 0x425074u: goto label_425074;
        case 0x425078u: goto label_425078;
        case 0x42507cu: goto label_42507c;
        default: break;
    }

    ctx->pc = 0x424ba0u;

label_424ba0:
    // 0x424ba0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x424ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_424ba4:
    // 0x424ba4: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x424ba4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_424ba8:
    // 0x424ba8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x424ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_424bac:
    // 0x424bac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x424bacu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_424bb0:
    // 0x424bb0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x424bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_424bb4:
    // 0x424bb4: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x424bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_424bb8:
    // 0x424bb8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x424bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_424bbc:
    // 0x424bbc: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x424bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_424bc0:
    // 0x424bc0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x424bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_424bc4:
    // 0x424bc4: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x424bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_424bc8:
    // 0x424bc8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x424bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_424bcc:
    // 0x424bcc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x424bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_424bd0:
    // 0x424bd0: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x424bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_424bd4:
    // 0x424bd4: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x424bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_424bd8:
    // 0x424bd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x424bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_424bdc:
    // 0x424bdc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x424bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_424be0:
    // 0x424be0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x424be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_424be4:
    // 0x424be4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x424be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_424be8:
    // 0x424be8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x424be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_424bec:
    // 0x424bec: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x424becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_424bf0:
    // 0x424bf0: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x424bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_424bf4:
    // 0x424bf4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x424bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_424bf8:
    // 0x424bf8: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x424bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_424bfc:
    // 0x424bfc: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_424c00:
    if (ctx->pc == 0x424C00u) {
        ctx->pc = 0x424C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424BFCu;
        // 0x424c00: 0x8c940008  lw          $s4, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424C04u;
        goto label_424c04;
    }
    ctx->pc = 0x424BFCu;
    {
        const bool branch_taken_0x424bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x424C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424BFCu;
        // 0x424c00: 0x8c940008  lw          $s4, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424bfc) {
            ctx->pc = 0x424C34u;
            goto label_424c34;
        }
    }
    ctx->pc = 0x424C04u;
label_424c04:
    // 0x424c04: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x424c04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_424c08:
    // 0x424c08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_424c0c:
    if (ctx->pc == 0x424C0Cu) {
        ctx->pc = 0x424C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C08u;
        // 0x424c0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424C10u;
        goto label_424c10;
    }
    ctx->pc = 0x424C08u;
    {
        const bool branch_taken_0x424c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x424C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C08u;
        // 0x424c0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424c08) {
            ctx->pc = 0x424C20u;
            goto label_424c20;
        }
    }
    ctx->pc = 0x424C10u;
label_424c10:
    // 0x424c10: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_424c14:
    if (ctx->pc == 0x424C14u) {
        ctx->pc = 0x424C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C10u;
        // 0x424c14: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424C18u;
        goto label_424c18;
    }
    ctx->pc = 0x424C10u;
    {
        const bool branch_taken_0x424c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x424C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C10u;
        // 0x424c14: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424c10) {
            ctx->pc = 0x424C34u;
            goto label_424c34;
        }
    }
    ctx->pc = 0x424C18u;
label_424c18:
    // 0x424c18: 0x1000010d  b           . + 4 + (0x10D << 2)
label_424c1c:
    if (ctx->pc == 0x424C1Cu) {
        ctx->pc = 0x424C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C18u;
        // 0x424c1c: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424C20u;
        goto label_424c20;
    }
    ctx->pc = 0x424C18u;
    {
        const bool branch_taken_0x424c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x424C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C18u;
        // 0x424c1c: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424c18) {
            ctx->pc = 0x425050u;
            goto label_425050;
        }
    }
    ctx->pc = 0x424C20u;
label_424c20:
    // 0x424c20: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x424c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_424c24:
    // 0x424c24: 0x10620088  beq         $v1, $v0, . + 4 + (0x88 << 2)
label_424c28:
    if (ctx->pc == 0x424C28u) {
        ctx->pc = 0x424C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C24u;
        // 0x424c28: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424C2Cu;
        goto label_424c2c;
    }
    ctx->pc = 0x424C24u;
    {
        const bool branch_taken_0x424c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x424C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C24u;
        // 0x424c28: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424c24) {
            ctx->pc = 0x424E48u;
            goto label_424e48;
        }
    }
    ctx->pc = 0x424C2Cu;
label_424c2c:
    // 0x424c2c: 0x10000108  b           . + 4 + (0x108 << 2)
label_424c30:
    if (ctx->pc == 0x424C30u) {
        ctx->pc = 0x424C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C2Cu;
        // 0x424c30: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424C34u;
        goto label_424c34;
    }
    ctx->pc = 0x424C2Cu;
    {
        const bool branch_taken_0x424c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x424C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C2Cu;
        // 0x424c30: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424c2c) {
            ctx->pc = 0x425050u;
            goto label_425050;
        }
    }
    ctx->pc = 0x424C34u;
label_424c34:
    // 0x424c34: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x424c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_424c38:
    // 0x424c38: 0x10400103  beqz        $v0, . + 4 + (0x103 << 2)
label_424c3c:
    if (ctx->pc == 0x424C3Cu) {
        ctx->pc = 0x424C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C38u;
        // 0x424c3c: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424C40u;
        goto label_424c40;
    }
    ctx->pc = 0x424C38u;
    {
        const bool branch_taken_0x424c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x424C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C38u;
        // 0x424c3c: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424c38) {
            ctx->pc = 0x425048u;
            goto label_425048;
        }
    }
    ctx->pc = 0x424C40u;
label_424c40:
    // 0x424c40: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x424c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_424c44:
    // 0x424c44: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x424c44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_424c48:
    // 0x424c48: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x424c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_424c4c:
    // 0x424c4c: 0x2684ffff  addiu       $a0, $s4, -0x1
    ctx->pc = 0x424c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_424c50:
    // 0x424c50: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x424c50u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_424c54:
    // 0x424c54: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x424c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_424c58:
    // 0x424c58: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x424c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_424c5c:
    // 0x424c5c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x424c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_424c60:
    // 0x424c60: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x424c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_424c64:
    // 0x424c64: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
label_424c68:
    if (ctx->pc == 0x424C68u) {
        ctx->pc = 0x424C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C64u;
        // 0x424c68: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424C6Cu;
        goto label_424c6c;
    }
    ctx->pc = 0x424C64u;
    {
        const bool branch_taken_0x424c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x424C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C64u;
        // 0x424c68: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424c64) {
            ctx->pc = 0x424E30u;
            goto label_424e30;
        }
    }
    ctx->pc = 0x424C6Cu;
label_424c6c:
    // 0x424c6c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x424c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_424c70:
    // 0x424c70: 0x24492970  addiu       $t1, $v0, 0x2970
    ctx->pc = 0x424c70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 10608));
label_424c74:
    // 0x424c74: 0x0  nop
    ctx->pc = 0x424c74u;
    // NOP
label_424c78:
    // 0x424c78: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x424c78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_424c7c:
    // 0x424c7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x424c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_424c80:
    // 0x424c80: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x424c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_424c84:
    // 0x424c84: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x424c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
label_424c88:
    // 0x424c88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x424c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_424c8c:
    // 0x424c8c: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x424c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_424c90:
    // 0x424c90: 0x8f85add0  lw          $a1, -0x5230($gp)
    ctx->pc = 0x424c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
label_424c94:
    // 0x424c94: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x424c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_424c98:
    // 0x424c98: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x424c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_424c9c:
    // 0x424c9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x424c9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_424ca0:
    // 0x424ca0: 0x8c884000  lw          $t0, 0x4000($a0)
    ctx->pc = 0x424ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16384)));
label_424ca4:
    // 0x424ca4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x424ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_424ca8:
    // 0x424ca8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x424ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_424cac:
    // 0x424cac: 0x853823  subu        $a3, $a0, $a1
    ctx->pc = 0x424cacu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_424cb0:
    // 0x424cb0: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x424cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_424cb4:
    // 0x424cb4: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x424cb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_424cb8:
    // 0x424cb8: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x424cb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_424cbc:
    // 0x424cbc: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x424cbcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
label_424cc0:
    // 0x424cc0: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x424cc0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
label_424cc4:
    // 0x424cc4: 0x92260003  lbu         $a2, 0x3($s1)
    ctx->pc = 0x424cc4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_424cc8:
    // 0x424cc8: 0xe52807  srav        $a1, $a1, $a3
    ctx->pc = 0x424cc8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
label_424ccc:
    // 0x424ccc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x424cccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_424cd0:
    // 0x424cd0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x424cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_424cd4:
    // 0x424cd4: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x424cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_424cd8:
    // 0x424cd8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x424cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_424cdc:
    // 0x424cdc: 0xe63007  srav        $a2, $a2, $a3
    ctx->pc = 0x424cdcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
label_424ce0:
    // 0x424ce0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x424ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_424ce4:
    // 0x424ce4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x424ce4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_424ce8:
    // 0x424ce8: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x424ce8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_424cec:
    // 0x424cec: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x424cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_424cf0:
    // 0x424cf0: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x424cf0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_424cf4:
    // 0x424cf4: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x424cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_424cf8:
    // 0x424cf8: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x424cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
label_424cfc:
    // 0x424cfc: 0x738b8  dsll        $a3, $a3, 2
    ctx->pc = 0x424cfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 2);
label_424d00:
    // 0x424d00: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x424d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_424d04:
    // 0x424d04: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x424d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
label_424d08:
    // 0x424d08: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x424d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_424d0c:
    // 0x424d0c: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x424d0cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_424d10:
    // 0x424d10: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x424d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_424d14:
    // 0x424d14: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x424d14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_424d18:
    // 0x424d18: 0x1240003b  beqz        $s2, . + 4 + (0x3B << 2)
label_424d1c:
    if (ctx->pc == 0x424D1Cu) {
        ctx->pc = 0x424D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424D18u;
        // 0x424d1c: 0x3082000f  andi        $v0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x424D20u;
        goto label_424d20;
    }
    ctx->pc = 0x424D18u;
    {
        const bool branch_taken_0x424d18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x424D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424D18u;
        // 0x424d1c: 0x3082000f  andi        $v0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x424d18) {
            ctx->pc = 0x424E08u;
            goto label_424e08;
        }
    }
    ctx->pc = 0x424D20u;
label_424d20:
    // 0x424d20: 0x2503001c  addiu       $v1, $t0, 0x1C
    ctx->pc = 0x424d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
label_424d24:
    // 0x424d24: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x424d24u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_424d28:
    // 0x424d28: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x424d28u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_424d2c:
    // 0x424d2c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x424d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_424d30:
    // 0x424d30: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x424d30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_424d34:
    // 0x424d34: 0x4a93a  dsrl        $s5, $a0, 4
    ctx->pc = 0x424d34u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) >> 4);
label_424d38:
    // 0x424d38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x424d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_424d3c:
    // 0x424d3c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x424d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_424d40:
    // 0x424d40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x424d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_424d44:
    // 0x424d44: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_424d48:
    if (ctx->pc == 0x424D48u) {
        ctx->pc = 0x424D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424D44u;
        // 0x424d48: 0x2656ffff  addiu       $s6, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424D4Cu;
        goto label_424d4c;
    }
    ctx->pc = 0x424D44u;
    {
        const bool branch_taken_0x424d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424D44u;
        // 0x424d48: 0x2656ffff  addiu       $s6, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424d44) {
            ctx->pc = 0x424DE8u;
            goto label_424de8;
        }
    }
    ctx->pc = 0x424D4Cu;
label_424d4c:
    // 0x424d4c: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x424d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_424d50:
    // 0x424d50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x424d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_424d54:
    // 0x424d54: 0x24a5e880  addiu       $a1, $a1, -0x1780
    ctx->pc = 0x424d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
label_424d58:
    // 0x424d58: 0x8ca20118  lw          $v0, 0x118($a1)
    ctx->pc = 0x424d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
label_424d5c:
    // 0x424d5c: 0x8c644004  lw          $a0, 0x4004($v1)
    ctx->pc = 0x424d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16388)));
label_424d60:
    // 0x424d60: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x424d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_424d64:
    // 0x424d64: 0x34a50411  ori         $a1, $a1, 0x411
    ctx->pc = 0x424d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
label_424d68:
    // 0x424d68: 0x40f809  jalr        $v0
label_424d6c:
    if (ctx->pc == 0x424D6Cu) {
        ctx->pc = 0x424D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424D68u;
        // 0x424d6c: 0x7fa90020  sq          $t1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424D70u;
        goto label_424d70;
    }
    ctx->pc = 0x424D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x424D70u);
        ctx->pc = 0x424D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424D68u;
        // 0x424d6c: 0x7fa90020  sq          $t1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424D68u, 0x424D70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x424D70u;
label_424d70:
    // 0x424d70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x424d70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_424d74:
    // 0x424d74: 0x24620058  addiu       $v0, $v1, 0x58
    ctx->pc = 0x424d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_424d78:
    // 0x424d78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x424d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_424d7c:
    // 0x424d7c: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x424d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
label_424d80:
    // 0x424d80: 0xac40ffc4  sw          $zero, -0x3C($v0)
    ctx->pc = 0x424d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967236), GPR_U32(ctx, 0));
label_424d84:
    // 0x424d84: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x424d84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
label_424d88:
    // 0x424d88: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x424d88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
label_424d8c:
    // 0x424d8c: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x424d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
label_424d90:
    // 0x424d90: 0xac40fff0  sw          $zero, -0x10($v0)
    ctx->pc = 0x424d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 0));
label_424d94:
    // 0x424d94: 0xac40ffec  sw          $zero, -0x14($v0)
    ctx->pc = 0x424d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967276), GPR_U32(ctx, 0));
label_424d98:
    // 0x424d98: 0xac40ffe8  sw          $zero, -0x18($v0)
    ctx->pc = 0x424d98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967272), GPR_U32(ctx, 0));
label_424d9c:
    // 0x424d9c: 0xac40ffe4  sw          $zero, -0x1C($v0)
    ctx->pc = 0x424d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967268), GPR_U32(ctx, 0));
label_424da0:
    // 0x424da0: 0xac40ffe0  sw          $zero, -0x20($v0)
    ctx->pc = 0x424da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967264), GPR_U32(ctx, 0));
label_424da4:
    // 0x424da4: 0xac40ffdc  sw          $zero, -0x24($v0)
    ctx->pc = 0x424da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967260), GPR_U32(ctx, 0));
label_424da8:
    // 0x424da8: 0xac40ffd8  sw          $zero, -0x28($v0)
    ctx->pc = 0x424da8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967256), GPR_U32(ctx, 0));
label_424dac:
    // 0x424dac: 0xac40ffd4  sw          $zero, -0x2C($v0)
    ctx->pc = 0x424dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967252), GPR_U32(ctx, 0));
label_424db0:
    // 0x424db0: 0xac40ffd0  sw          $zero, -0x30($v0)
    ctx->pc = 0x424db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967248), GPR_U32(ctx, 0));
label_424db4:
    // 0x424db4: 0xac40ffcc  sw          $zero, -0x34($v0)
    ctx->pc = 0x424db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967244), GPR_U32(ctx, 0));
label_424db8:
    // 0x424db8: 0xac40ffc8  sw          $zero, -0x38($v0)
    ctx->pc = 0x424db8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967240), GPR_U32(ctx, 0));
label_424dbc:
    // 0x424dbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x424dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_424dc0:
    // 0x424dc0: 0x16440009  bne         $s2, $a0, . + 4 + (0x9 << 2)
label_424dc4:
    if (ctx->pc == 0x424DC4u) {
        ctx->pc = 0x424DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424DC0u;
        // 0x424dc4: 0x7ba90020  lq          $t1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424DC8u;
        goto label_424dc8;
    }
    ctx->pc = 0x424DC0u;
    {
        const bool branch_taken_0x424dc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        ctx->pc = 0x424DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424DC0u;
        // 0x424dc4: 0x7ba90020  lq          $t1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424dc0) {
            ctx->pc = 0x424DE8u;
            goto label_424de8;
        }
    }
    ctx->pc = 0x424DC8u;
label_424dc8:
    // 0x424dc8: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x424dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_424dcc:
    // 0x424dcc: 0xa0600018  sb          $zero, 0x18($v1)
    ctx->pc = 0x424dccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 0));
label_424dd0:
    // 0x424dd0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x424dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_424dd4:
    // 0x424dd4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x424dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_424dd8:
    // 0x424dd8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x424dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_424ddc:
    // 0x424ddc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x424ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_424de0:
    // 0x424de0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x424de0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_424de4:
    // 0x424de4: 0x0  nop
    ctx->pc = 0x424de4u;
    // NOP
label_424de8:
    // 0x424de8: 0x17103c  dsll32      $v0, $s7, 0
    ctx->pc = 0x424de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 0));
label_424dec:
    // 0x424dec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x424decu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_424df0:
    // 0x424df0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x424df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_424df4:
    // 0x424df4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x424df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_424df8:
    // 0x424df8: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x424df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_424dfc:
    // 0x424dfc: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x424dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_424e00:
    // 0x424e00: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
label_424e04:
    if (ctx->pc == 0x424E04u) {
        ctx->pc = 0x424E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424E00u;
        // 0x424e04: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424E08u;
        goto label_424e08;
    }
    ctx->pc = 0x424E00u;
    {
        const bool branch_taken_0x424e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x424E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424E00u;
        // 0x424e04: 0x8c480000  lw          $t0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424e00) {
            ctx->pc = 0x424D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424d18;
        }
    }
    ctx->pc = 0x424E08u;
label_424e08:
    // 0x424e08: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x424e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
label_424e0c:
    // 0x424e0c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x424e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_424e10:
    // 0x424e10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x424e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_424e14:
    // 0x424e14: 0xc10917c  jal         func_4245F0
label_424e18:
    if (ctx->pc == 0x424E18u) {
        ctx->pc = 0x424E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424E14u;
        // 0x424e18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x424E1Cu;
        goto label_424e1c;
    }
    ctx->pc = 0x424E14u;
    SET_GPR_U32(ctx, 31, 0x424E1Cu);
    ctx->pc = 0x424E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x424E14u;
    // 0x424e18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4245F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4245F0u, 0x424E14u, 0x424E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424E1Cu;
label_424e1c:
    // 0x424e1c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x424e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_424e20:
    // 0x424e20: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x424e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_424e24:
    // 0x424e24: 0x8fb30014  lw          $s3, 0x14($sp)
    ctx->pc = 0x424e24u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_424e28:
    // 0x424e28: 0x1440ff93  bnez        $v0, . + 4 + (-0x6D << 2)
label_424e2c:
    if (ctx->pc == 0x424E2Cu) {
        ctx->pc = 0x424E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424E28u;
        // 0x424e2c: 0x7ba90020  lq          $t1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424E30u;
        goto label_424e30;
    }
    ctx->pc = 0x424E28u;
    {
        const bool branch_taken_0x424e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424E28u;
        // 0x424e2c: 0x7ba90020  lq          $t1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424e28) {
            ctx->pc = 0x424C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424c78;
        }
    }
    ctx->pc = 0x424E30u;
label_424e30:
    // 0x424e30: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x424e30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_424e34:
    // 0x424e34: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x424e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_424e38:
    // 0x424e38: 0x1440ff81  bnez        $v0, . + 4 + (-0x7F << 2)
label_424e3c:
    if (ctx->pc == 0x424E3Cu) {
        ctx->pc = 0x424E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424E38u;
        // 0x424e3c: 0x8fb40018  lw          $s4, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424E40u;
        goto label_424e40;
    }
    ctx->pc = 0x424E38u;
    {
        const bool branch_taken_0x424e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424E38u;
        // 0x424e3c: 0x8fb40018  lw          $s4, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424e38) {
            ctx->pc = 0x424C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424c40;
        }
    }
    ctx->pc = 0x424E40u;
label_424e40:
    // 0x424e40: 0x10000082  b           . + 4 + (0x82 << 2)
label_424e44:
    if (ctx->pc == 0x424E44u) {
        ctx->pc = 0x424E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424E40u;
        // 0x424e44: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424E48u;
        goto label_424e48;
    }
    ctx->pc = 0x424E40u;
    {
        const bool branch_taken_0x424e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x424E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424E40u;
        // 0x424e44: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424e40) {
            ctx->pc = 0x42504Cu;
            goto label_42504c;
        }
    }
    ctx->pc = 0x424E48u;
label_424e48:
    // 0x424e48: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x424e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_424e4c:
    // 0x424e4c: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
label_424e50:
    if (ctx->pc == 0x424E50u) {
        ctx->pc = 0x424E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424E4Cu;
        // 0x424e50: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424E54u;
        goto label_424e54;
    }
    ctx->pc = 0x424E4Cu;
    {
        const bool branch_taken_0x424e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x424E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424E4Cu;
        // 0x424e50: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424e4c) {
            ctx->pc = 0x425048u;
            goto label_425048;
        }
    }
    ctx->pc = 0x424E54u;
label_424e54:
    // 0x424e54: 0x0  nop
    ctx->pc = 0x424e54u;
    // NOP
label_424e58:
    // 0x424e58: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x424e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_424e5c:
    // 0x424e5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x424e5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_424e60:
    // 0x424e60: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x424e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_424e64:
    // 0x424e64: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x424e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_424e68:
    // 0x424e68: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x424e68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_424e6c:
    // 0x424e6c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x424e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_424e70:
    // 0x424e70: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x424e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_424e74:
    // 0x424e74: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x424e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_424e78:
    // 0x424e78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x424e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_424e7c:
    // 0x424e7c: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
label_424e80:
    if (ctx->pc == 0x424E80u) {
        ctx->pc = 0x424E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424E7Cu;
        // 0x424e80: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424E84u;
        goto label_424e84;
    }
    ctx->pc = 0x424E7Cu;
    {
        const bool branch_taken_0x424e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x424E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424E7Cu;
        // 0x424e80: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424e7c) {
            ctx->pc = 0x425038u;
            goto label_425038;
        }
    }
    ctx->pc = 0x424E84u;
label_424e84:
    // 0x424e84: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x424e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_424e88:
    // 0x424e88: 0x24a92970  addiu       $t1, $a1, 0x2970
    ctx->pc = 0x424e88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 10608));
label_424e8c:
    // 0x424e8c: 0x0  nop
    ctx->pc = 0x424e8cu;
    // NOP
label_424e90:
    // 0x424e90: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x424e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_424e94:
    // 0x424e94: 0x8f88add0  lw          $t0, -0x5230($gp)
    ctx->pc = 0x424e94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946256)));
label_424e98:
    // 0x424e98: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x424e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_424e9c:
    // 0x424e9c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x424e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_424ea0:
    // 0x424ea0: 0x883823  subu        $a3, $a0, $t0
    ctx->pc = 0x424ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_424ea4:
    // 0x424ea4: 0x264a0004  addiu       $t2, $s2, 0x4
    ctx->pc = 0x424ea4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_424ea8:
    // 0x424ea8: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x424ea8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_424eac:
    // 0x424eac: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x424eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_424eb0:
    // 0x424eb0: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x424eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_424eb4:
    // 0x424eb4: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x424eb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_424eb8:
    // 0x424eb8: 0xe52807  srav        $a1, $a1, $a3
    ctx->pc = 0x424eb8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 7) & 0x1F));
label_424ebc:
    // 0x424ebc: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x424ebcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
label_424ec0:
    // 0x424ec0: 0x92460003  lbu         $a2, 0x3($s2)
    ctx->pc = 0x424ec0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_424ec4:
    // 0x424ec4: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x424ec4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
label_424ec8:
    // 0x424ec8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x424ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_424ecc:
    // 0x424ecc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x424eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_424ed0:
    // 0x424ed0: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x424ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_424ed4:
    // 0x424ed4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x424ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_424ed8:
    // 0x424ed8: 0xe63007  srav        $a2, $a2, $a3
    ctx->pc = 0x424ed8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
label_424edc:
    // 0x424edc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x424edcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_424ee0:
    // 0x424ee0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x424ee0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_424ee4:
    // 0x424ee4: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x424ee4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_424ee8:
    // 0x424ee8: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x424ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_424eec:
    // 0x424eec: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x424eecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_424ef0:
    // 0x424ef0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x424ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_424ef4:
    // 0x424ef4: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x424ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
label_424ef8:
    // 0x424ef8: 0x738b8  dsll        $a3, $a3, 2
    ctx->pc = 0x424ef8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 2);
label_424efc:
    // 0x424efc: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x424efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
label_424f00:
    // 0x424f00: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x424f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_424f04:
    // 0x424f04: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x424f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_424f08:
    // 0x424f08: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x424f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_424f0c:
    // 0x424f0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x424f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_424f10:
    // 0x424f10: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x424f10u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_424f14:
    // 0x424f14: 0x8ca34000  lw          $v1, 0x4000($a1)
    ctx->pc = 0x424f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16384)));
label_424f18:
    // 0x424f18: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x424f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_424f1c:
    // 0x424f1c: 0x1220003c  beqz        $s1, . + 4 + (0x3C << 2)
label_424f20:
    if (ctx->pc == 0x424F20u) {
        ctx->pc = 0x424F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424F1Cu;
        // 0x424f20: 0x3082000f  andi        $v0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x424F24u;
        goto label_424f24;
    }
    ctx->pc = 0x424F1Cu;
    {
        const bool branch_taken_0x424f1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x424F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424F1Cu;
        // 0x424f20: 0x3082000f  andi        $v0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x424f1c) {
            ctx->pc = 0x425010u;
            goto label_425010;
        }
    }
    ctx->pc = 0x424F24u;
label_424f24:
    // 0x424f24: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x424f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_424f28:
    // 0x424f28: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x424f28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_424f2c:
    // 0x424f2c: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x424f2cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_424f30:
    // 0x424f30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x424f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_424f34:
    // 0x424f34: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x424f34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_424f38:
    // 0x424f38: 0x4b13a  dsrl        $s6, $a0, 4
    ctx->pc = 0x424f38u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) >> 4);
label_424f3c:
    // 0x424f3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x424f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_424f40:
    // 0x424f40: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x424f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_424f44:
    // 0x424f44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x424f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_424f48:
    // 0x424f48: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_424f4c:
    if (ctx->pc == 0x424F4Cu) {
        ctx->pc = 0x424F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424F48u;
        // 0x424f4c: 0x2635ffff  addiu       $s5, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424F50u;
        goto label_424f50;
    }
    ctx->pc = 0x424F48u;
    {
        const bool branch_taken_0x424f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424F48u;
        // 0x424f4c: 0x2635ffff  addiu       $s5, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424f48) {
            ctx->pc = 0x424FF0u;
            goto label_424ff0;
        }
    }
    ctx->pc = 0x424F50u;
label_424f50:
    // 0x424f50: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x424f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_424f54:
    // 0x424f54: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x424f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_424f58:
    // 0x424f58: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x424f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_424f5c:
    // 0x424f5c: 0x34a50411  ori         $a1, $a1, 0x411
    ctx->pc = 0x424f5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
label_424f60:
    // 0x424f60: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x424f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_424f64:
    // 0x424f64: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x424f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_424f68:
    // 0x424f68: 0x8c644004  lw          $a0, 0x4004($v1)
    ctx->pc = 0x424f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16388)));
label_424f6c:
    // 0x424f6c: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x424f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
label_424f70:
    // 0x424f70: 0x40f809  jalr        $v0
label_424f74:
    if (ctx->pc == 0x424F74u) {
        ctx->pc = 0x424F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424F70u;
        // 0x424f74: 0x7faa0030  sq          $t2, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424F78u;
        goto label_424f78;
    }
    ctx->pc = 0x424F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x424F78u);
        ctx->pc = 0x424F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424F70u;
        // 0x424f74: 0x7faa0030  sq          $t2, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424F70u, 0x424F78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x424F78u;
label_424f78:
    // 0x424f78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x424f78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_424f7c:
    // 0x424f7c: 0x24620058  addiu       $v0, $v1, 0x58
    ctx->pc = 0x424f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_424f80:
    // 0x424f80: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x424f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_424f84:
    // 0x424f84: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x424f84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
label_424f88:
    // 0x424f88: 0xac40ffc4  sw          $zero, -0x3C($v0)
    ctx->pc = 0x424f88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967236), GPR_U32(ctx, 0));
label_424f8c:
    // 0x424f8c: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x424f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
label_424f90:
    // 0x424f90: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x424f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
label_424f94:
    // 0x424f94: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x424f94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
label_424f98:
    // 0x424f98: 0xac40fff0  sw          $zero, -0x10($v0)
    ctx->pc = 0x424f98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 0));
label_424f9c:
    // 0x424f9c: 0xac40ffec  sw          $zero, -0x14($v0)
    ctx->pc = 0x424f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967276), GPR_U32(ctx, 0));
label_424fa0:
    // 0x424fa0: 0xac40ffe8  sw          $zero, -0x18($v0)
    ctx->pc = 0x424fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967272), GPR_U32(ctx, 0));
label_424fa4:
    // 0x424fa4: 0xac40ffe4  sw          $zero, -0x1C($v0)
    ctx->pc = 0x424fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967268), GPR_U32(ctx, 0));
label_424fa8:
    // 0x424fa8: 0xac40ffe0  sw          $zero, -0x20($v0)
    ctx->pc = 0x424fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967264), GPR_U32(ctx, 0));
label_424fac:
    // 0x424fac: 0xac40ffdc  sw          $zero, -0x24($v0)
    ctx->pc = 0x424facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967260), GPR_U32(ctx, 0));
label_424fb0:
    // 0x424fb0: 0xac40ffd8  sw          $zero, -0x28($v0)
    ctx->pc = 0x424fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967256), GPR_U32(ctx, 0));
label_424fb4:
    // 0x424fb4: 0xac40ffd4  sw          $zero, -0x2C($v0)
    ctx->pc = 0x424fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967252), GPR_U32(ctx, 0));
label_424fb8:
    // 0x424fb8: 0xac40ffd0  sw          $zero, -0x30($v0)
    ctx->pc = 0x424fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967248), GPR_U32(ctx, 0));
label_424fbc:
    // 0x424fbc: 0xac40ffcc  sw          $zero, -0x34($v0)
    ctx->pc = 0x424fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967244), GPR_U32(ctx, 0));
label_424fc0:
    // 0x424fc0: 0xac40ffc8  sw          $zero, -0x38($v0)
    ctx->pc = 0x424fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967240), GPR_U32(ctx, 0));
label_424fc4:
    // 0x424fc4: 0x7ba90020  lq          $t1, 0x20($sp)
    ctx->pc = 0x424fc4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_424fc8:
    // 0x424fc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x424fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_424fcc:
    // 0x424fcc: 0x16240008  bne         $s1, $a0, . + 4 + (0x8 << 2)
label_424fd0:
    if (ctx->pc == 0x424FD0u) {
        ctx->pc = 0x424FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424FCCu;
        // 0x424fd0: 0x7baa0030  lq          $t2, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424FD4u;
        goto label_424fd4;
    }
    ctx->pc = 0x424FCCu;
    {
        const bool branch_taken_0x424fcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 4));
        ctx->pc = 0x424FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424FCCu;
        // 0x424fd0: 0x7baa0030  lq          $t2, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424fcc) {
            ctx->pc = 0x424FF0u;
            goto label_424ff0;
        }
    }
    ctx->pc = 0x424FD4u;
label_424fd4:
    // 0x424fd4: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x424fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_424fd8:
    // 0x424fd8: 0xa0600018  sb          $zero, 0x18($v1)
    ctx->pc = 0x424fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 0));
label_424fdc:
    // 0x424fdc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x424fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_424fe0:
    // 0x424fe0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x424fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_424fe4:
    // 0x424fe4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x424fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_424fe8:
    // 0x424fe8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x424fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_424fec:
    // 0x424fec: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x424fecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_424ff0:
    // 0x424ff0: 0x17103c  dsll32      $v0, $s7, 0
    ctx->pc = 0x424ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 0));
label_424ff4:
    // 0x424ff4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x424ff4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_424ff8:
    // 0x424ff8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x424ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_424ffc:
    // 0x424ffc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x424ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_425000:
    // 0x425000: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x425000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_425004:
    // 0x425004: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x425004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_425008:
    // 0x425008: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
label_42500c:
    if (ctx->pc == 0x42500Cu) {
        ctx->pc = 0x42500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425008u;
        // 0x42500c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x425010u;
        goto label_425010;
    }
    ctx->pc = 0x425008u;
    {
        const bool branch_taken_0x425008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425008u;
        // 0x42500c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425008) {
            ctx->pc = 0x424F1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424f1c;
        }
    }
    ctx->pc = 0x425010u;
label_425010:
    // 0x425010: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x425010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_425014:
    // 0x425014: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x425014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
label_425018:
    // 0x425018: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x425018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_42501c:
    // 0x42501c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x42501cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_425020:
    // 0x425020: 0xc10917c  jal         func_4245F0
label_425024:
    if (ctx->pc == 0x425024u) {
        ctx->pc = 0x425024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425020u;
        // 0x425024: 0x140902d  daddu       $s2, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x425028u;
        goto label_425028;
    }
    ctx->pc = 0x425020u;
    SET_GPR_U32(ctx, 31, 0x425028u);
    ctx->pc = 0x425024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x425020u;
    // 0x425024: 0x140902d  daddu       $s2, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4245F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4245F0u, 0x425020u, 0x425028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x425028u;
label_425028:
    // 0x425028: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x425028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42502c:
    // 0x42502c: 0x7ba90020  lq          $t1, 0x20($sp)
    ctx->pc = 0x42502cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_425030:
    // 0x425030: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
label_425034:
    if (ctx->pc == 0x425034u) {
        ctx->pc = 0x425034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425030u;
        // 0x425034: 0x8fb30014  lw          $s3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x425038u;
        goto label_425038;
    }
    ctx->pc = 0x425030u;
    {
        const bool branch_taken_0x425030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x425034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425030u;
        // 0x425034: 0x8fb30014  lw          $s3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425030) {
            ctx->pc = 0x424E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424e90;
        }
    }
    ctx->pc = 0x425038u;
label_425038:
    // 0x425038: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x425038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_42503c:
    // 0x42503c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x42503cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_425040:
    // 0x425040: 0x1440ff85  bnez        $v0, . + 4 + (-0x7B << 2)
label_425044:
    if (ctx->pc == 0x425044u) {
        ctx->pc = 0x425044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425040u;
        // 0x425044: 0x8fb40018  lw          $s4, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x425048u;
        goto label_425048;
    }
    ctx->pc = 0x425040u;
    {
        const bool branch_taken_0x425040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x425044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425040u;
        // 0x425044: 0x8fb40018  lw          $s4, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x425040) {
            ctx->pc = 0x424E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424e58;
        }
    }
    ctx->pc = 0x425048u;
label_425048:
    // 0x425048: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x425048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_42504c:
    // 0x42504c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x42504cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_425050:
    // 0x425050: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x425050u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_425054:
    // 0x425054: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x425054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_425058:
    // 0x425058: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x425058u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_42505c:
    // 0x42505c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x42505cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_425060:
    // 0x425060: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x425060u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_425064:
    // 0x425064: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x425064u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_425068:
    // 0x425068: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x425068u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_42506c:
    // 0x42506c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x42506cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_425070:
    // 0x425070: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x425070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_425074:
    // 0x425074: 0x3e00008  jr          $ra
label_425078:
    if (ctx->pc == 0x425078u) {
        ctx->pc = 0x425078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425074u;
        // 0x425078: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42507Cu;
        goto label_42507c;
    }
    ctx->pc = 0x425074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x425078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x425074u;
        // 0x425078: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x425074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42507Cu;
label_42507c:
    // 0x42507c: 0x0  nop
    ctx->pc = 0x42507cu;
    // NOP
    ctx->pc = 0x425080u;
}
