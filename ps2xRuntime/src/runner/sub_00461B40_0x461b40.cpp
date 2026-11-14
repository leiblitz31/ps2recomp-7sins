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

// Function: sub_00461B40
// Address: 0x461b40 - 0x461fc0
void sub_00461B40_0x461b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00461B40_0x461b40");
#endif

    switch (ctx->pc) {
        case 0x461b40u: goto label_461b40;
        case 0x461b44u: goto label_461b44;
        case 0x461b48u: goto label_461b48;
        case 0x461b4cu: goto label_461b4c;
        case 0x461b50u: goto label_461b50;
        case 0x461b54u: goto label_461b54;
        case 0x461b58u: goto label_461b58;
        case 0x461b5cu: goto label_461b5c;
        case 0x461b60u: goto label_461b60;
        case 0x461b64u: goto label_461b64;
        case 0x461b68u: goto label_461b68;
        case 0x461b6cu: goto label_461b6c;
        case 0x461b70u: goto label_461b70;
        case 0x461b74u: goto label_461b74;
        case 0x461b78u: goto label_461b78;
        case 0x461b7cu: goto label_461b7c;
        case 0x461b80u: goto label_461b80;
        case 0x461b84u: goto label_461b84;
        case 0x461b88u: goto label_461b88;
        case 0x461b8cu: goto label_461b8c;
        case 0x461b90u: goto label_461b90;
        case 0x461b94u: goto label_461b94;
        case 0x461b98u: goto label_461b98;
        case 0x461b9cu: goto label_461b9c;
        case 0x461ba0u: goto label_461ba0;
        case 0x461ba4u: goto label_461ba4;
        case 0x461ba8u: goto label_461ba8;
        case 0x461bacu: goto label_461bac;
        case 0x461bb0u: goto label_461bb0;
        case 0x461bb4u: goto label_461bb4;
        case 0x461bb8u: goto label_461bb8;
        case 0x461bbcu: goto label_461bbc;
        case 0x461bc0u: goto label_461bc0;
        case 0x461bc4u: goto label_461bc4;
        case 0x461bc8u: goto label_461bc8;
        case 0x461bccu: goto label_461bcc;
        case 0x461bd0u: goto label_461bd0;
        case 0x461bd4u: goto label_461bd4;
        case 0x461bd8u: goto label_461bd8;
        case 0x461bdcu: goto label_461bdc;
        case 0x461be0u: goto label_461be0;
        case 0x461be4u: goto label_461be4;
        case 0x461be8u: goto label_461be8;
        case 0x461becu: goto label_461bec;
        case 0x461bf0u: goto label_461bf0;
        case 0x461bf4u: goto label_461bf4;
        case 0x461bf8u: goto label_461bf8;
        case 0x461bfcu: goto label_461bfc;
        case 0x461c00u: goto label_461c00;
        case 0x461c04u: goto label_461c04;
        case 0x461c08u: goto label_461c08;
        case 0x461c0cu: goto label_461c0c;
        case 0x461c10u: goto label_461c10;
        case 0x461c14u: goto label_461c14;
        case 0x461c18u: goto label_461c18;
        case 0x461c1cu: goto label_461c1c;
        case 0x461c20u: goto label_461c20;
        case 0x461c24u: goto label_461c24;
        case 0x461c28u: goto label_461c28;
        case 0x461c2cu: goto label_461c2c;
        case 0x461c30u: goto label_461c30;
        case 0x461c34u: goto label_461c34;
        case 0x461c38u: goto label_461c38;
        case 0x461c3cu: goto label_461c3c;
        case 0x461c40u: goto label_461c40;
        case 0x461c44u: goto label_461c44;
        case 0x461c48u: goto label_461c48;
        case 0x461c4cu: goto label_461c4c;
        case 0x461c50u: goto label_461c50;
        case 0x461c54u: goto label_461c54;
        case 0x461c58u: goto label_461c58;
        case 0x461c5cu: goto label_461c5c;
        case 0x461c60u: goto label_461c60;
        case 0x461c64u: goto label_461c64;
        case 0x461c68u: goto label_461c68;
        case 0x461c6cu: goto label_461c6c;
        case 0x461c70u: goto label_461c70;
        case 0x461c74u: goto label_461c74;
        case 0x461c78u: goto label_461c78;
        case 0x461c7cu: goto label_461c7c;
        case 0x461c80u: goto label_461c80;
        case 0x461c84u: goto label_461c84;
        case 0x461c88u: goto label_461c88;
        case 0x461c8cu: goto label_461c8c;
        case 0x461c90u: goto label_461c90;
        case 0x461c94u: goto label_461c94;
        case 0x461c98u: goto label_461c98;
        case 0x461c9cu: goto label_461c9c;
        case 0x461ca0u: goto label_461ca0;
        case 0x461ca4u: goto label_461ca4;
        case 0x461ca8u: goto label_461ca8;
        case 0x461cacu: goto label_461cac;
        case 0x461cb0u: goto label_461cb0;
        case 0x461cb4u: goto label_461cb4;
        case 0x461cb8u: goto label_461cb8;
        case 0x461cbcu: goto label_461cbc;
        case 0x461cc0u: goto label_461cc0;
        case 0x461cc4u: goto label_461cc4;
        case 0x461cc8u: goto label_461cc8;
        case 0x461cccu: goto label_461ccc;
        case 0x461cd0u: goto label_461cd0;
        case 0x461cd4u: goto label_461cd4;
        case 0x461cd8u: goto label_461cd8;
        case 0x461cdcu: goto label_461cdc;
        case 0x461ce0u: goto label_461ce0;
        case 0x461ce4u: goto label_461ce4;
        case 0x461ce8u: goto label_461ce8;
        case 0x461cecu: goto label_461cec;
        case 0x461cf0u: goto label_461cf0;
        case 0x461cf4u: goto label_461cf4;
        case 0x461cf8u: goto label_461cf8;
        case 0x461cfcu: goto label_461cfc;
        case 0x461d00u: goto label_461d00;
        case 0x461d04u: goto label_461d04;
        case 0x461d08u: goto label_461d08;
        case 0x461d0cu: goto label_461d0c;
        case 0x461d10u: goto label_461d10;
        case 0x461d14u: goto label_461d14;
        case 0x461d18u: goto label_461d18;
        case 0x461d1cu: goto label_461d1c;
        case 0x461d20u: goto label_461d20;
        case 0x461d24u: goto label_461d24;
        case 0x461d28u: goto label_461d28;
        case 0x461d2cu: goto label_461d2c;
        case 0x461d30u: goto label_461d30;
        case 0x461d34u: goto label_461d34;
        case 0x461d38u: goto label_461d38;
        case 0x461d3cu: goto label_461d3c;
        case 0x461d40u: goto label_461d40;
        case 0x461d44u: goto label_461d44;
        case 0x461d48u: goto label_461d48;
        case 0x461d4cu: goto label_461d4c;
        case 0x461d50u: goto label_461d50;
        case 0x461d54u: goto label_461d54;
        case 0x461d58u: goto label_461d58;
        case 0x461d5cu: goto label_461d5c;
        case 0x461d60u: goto label_461d60;
        case 0x461d64u: goto label_461d64;
        case 0x461d68u: goto label_461d68;
        case 0x461d6cu: goto label_461d6c;
        case 0x461d70u: goto label_461d70;
        case 0x461d74u: goto label_461d74;
        case 0x461d78u: goto label_461d78;
        case 0x461d7cu: goto label_461d7c;
        case 0x461d80u: goto label_461d80;
        case 0x461d84u: goto label_461d84;
        case 0x461d88u: goto label_461d88;
        case 0x461d8cu: goto label_461d8c;
        case 0x461d90u: goto label_461d90;
        case 0x461d94u: goto label_461d94;
        case 0x461d98u: goto label_461d98;
        case 0x461d9cu: goto label_461d9c;
        case 0x461da0u: goto label_461da0;
        case 0x461da4u: goto label_461da4;
        case 0x461da8u: goto label_461da8;
        case 0x461dacu: goto label_461dac;
        case 0x461db0u: goto label_461db0;
        case 0x461db4u: goto label_461db4;
        case 0x461db8u: goto label_461db8;
        case 0x461dbcu: goto label_461dbc;
        case 0x461dc0u: goto label_461dc0;
        case 0x461dc4u: goto label_461dc4;
        case 0x461dc8u: goto label_461dc8;
        case 0x461dccu: goto label_461dcc;
        case 0x461dd0u: goto label_461dd0;
        case 0x461dd4u: goto label_461dd4;
        case 0x461dd8u: goto label_461dd8;
        case 0x461ddcu: goto label_461ddc;
        case 0x461de0u: goto label_461de0;
        case 0x461de4u: goto label_461de4;
        case 0x461de8u: goto label_461de8;
        case 0x461decu: goto label_461dec;
        case 0x461df0u: goto label_461df0;
        case 0x461df4u: goto label_461df4;
        case 0x461df8u: goto label_461df8;
        case 0x461dfcu: goto label_461dfc;
        case 0x461e00u: goto label_461e00;
        case 0x461e04u: goto label_461e04;
        case 0x461e08u: goto label_461e08;
        case 0x461e0cu: goto label_461e0c;
        case 0x461e10u: goto label_461e10;
        case 0x461e14u: goto label_461e14;
        case 0x461e18u: goto label_461e18;
        case 0x461e1cu: goto label_461e1c;
        case 0x461e20u: goto label_461e20;
        case 0x461e24u: goto label_461e24;
        case 0x461e28u: goto label_461e28;
        case 0x461e2cu: goto label_461e2c;
        case 0x461e30u: goto label_461e30;
        case 0x461e34u: goto label_461e34;
        case 0x461e38u: goto label_461e38;
        case 0x461e3cu: goto label_461e3c;
        case 0x461e40u: goto label_461e40;
        case 0x461e44u: goto label_461e44;
        case 0x461e48u: goto label_461e48;
        case 0x461e4cu: goto label_461e4c;
        case 0x461e50u: goto label_461e50;
        case 0x461e54u: goto label_461e54;
        case 0x461e58u: goto label_461e58;
        case 0x461e5cu: goto label_461e5c;
        case 0x461e60u: goto label_461e60;
        case 0x461e64u: goto label_461e64;
        case 0x461e68u: goto label_461e68;
        case 0x461e6cu: goto label_461e6c;
        case 0x461e70u: goto label_461e70;
        case 0x461e74u: goto label_461e74;
        case 0x461e78u: goto label_461e78;
        case 0x461e7cu: goto label_461e7c;
        case 0x461e80u: goto label_461e80;
        case 0x461e84u: goto label_461e84;
        case 0x461e88u: goto label_461e88;
        case 0x461e8cu: goto label_461e8c;
        case 0x461e90u: goto label_461e90;
        case 0x461e94u: goto label_461e94;
        case 0x461e98u: goto label_461e98;
        case 0x461e9cu: goto label_461e9c;
        case 0x461ea0u: goto label_461ea0;
        case 0x461ea4u: goto label_461ea4;
        case 0x461ea8u: goto label_461ea8;
        case 0x461eacu: goto label_461eac;
        case 0x461eb0u: goto label_461eb0;
        case 0x461eb4u: goto label_461eb4;
        case 0x461eb8u: goto label_461eb8;
        case 0x461ebcu: goto label_461ebc;
        case 0x461ec0u: goto label_461ec0;
        case 0x461ec4u: goto label_461ec4;
        case 0x461ec8u: goto label_461ec8;
        case 0x461eccu: goto label_461ecc;
        case 0x461ed0u: goto label_461ed0;
        case 0x461ed4u: goto label_461ed4;
        case 0x461ed8u: goto label_461ed8;
        case 0x461edcu: goto label_461edc;
        case 0x461ee0u: goto label_461ee0;
        case 0x461ee4u: goto label_461ee4;
        case 0x461ee8u: goto label_461ee8;
        case 0x461eecu: goto label_461eec;
        case 0x461ef0u: goto label_461ef0;
        case 0x461ef4u: goto label_461ef4;
        case 0x461ef8u: goto label_461ef8;
        case 0x461efcu: goto label_461efc;
        case 0x461f00u: goto label_461f00;
        case 0x461f04u: goto label_461f04;
        case 0x461f08u: goto label_461f08;
        case 0x461f0cu: goto label_461f0c;
        case 0x461f10u: goto label_461f10;
        case 0x461f14u: goto label_461f14;
        case 0x461f18u: goto label_461f18;
        case 0x461f1cu: goto label_461f1c;
        case 0x461f20u: goto label_461f20;
        case 0x461f24u: goto label_461f24;
        case 0x461f28u: goto label_461f28;
        case 0x461f2cu: goto label_461f2c;
        case 0x461f30u: goto label_461f30;
        case 0x461f34u: goto label_461f34;
        case 0x461f38u: goto label_461f38;
        case 0x461f3cu: goto label_461f3c;
        case 0x461f40u: goto label_461f40;
        case 0x461f44u: goto label_461f44;
        case 0x461f48u: goto label_461f48;
        case 0x461f4cu: goto label_461f4c;
        case 0x461f50u: goto label_461f50;
        case 0x461f54u: goto label_461f54;
        case 0x461f58u: goto label_461f58;
        case 0x461f5cu: goto label_461f5c;
        case 0x461f60u: goto label_461f60;
        case 0x461f64u: goto label_461f64;
        case 0x461f68u: goto label_461f68;
        case 0x461f6cu: goto label_461f6c;
        case 0x461f70u: goto label_461f70;
        case 0x461f74u: goto label_461f74;
        case 0x461f78u: goto label_461f78;
        case 0x461f7cu: goto label_461f7c;
        case 0x461f80u: goto label_461f80;
        case 0x461f84u: goto label_461f84;
        case 0x461f88u: goto label_461f88;
        case 0x461f8cu: goto label_461f8c;
        case 0x461f90u: goto label_461f90;
        case 0x461f94u: goto label_461f94;
        case 0x461f98u: goto label_461f98;
        case 0x461f9cu: goto label_461f9c;
        case 0x461fa0u: goto label_461fa0;
        case 0x461fa4u: goto label_461fa4;
        case 0x461fa8u: goto label_461fa8;
        case 0x461facu: goto label_461fac;
        case 0x461fb0u: goto label_461fb0;
        case 0x461fb4u: goto label_461fb4;
        case 0x461fb8u: goto label_461fb8;
        case 0x461fbcu: goto label_461fbc;
        default: break;
    }

    ctx->pc = 0x461b40u;

label_461b40:
    // 0x461b40: 0x27bdfaa0  addiu       $sp, $sp, -0x560
    ctx->pc = 0x461b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965920));
label_461b44:
    // 0x461b44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x461b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_461b48:
    // 0x461b48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x461b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_461b4c:
    // 0x461b4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x461b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_461b50:
    // 0x461b50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x461b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_461b54:
    // 0x461b54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x461b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_461b58:
    // 0x461b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x461b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_461b5c:
    // 0x461b5c: 0xafa40530  sw          $a0, 0x530($sp)
    ctx->pc = 0x461b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1328), GPR_U32(ctx, 4));
label_461b60:
    // 0x461b60: 0xafa50540  sw          $a1, 0x540($sp)
    ctx->pc = 0x461b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 5));
label_461b64:
    // 0x461b64: 0xafa60550  sw          $a2, 0x550($sp)
    ctx->pc = 0x461b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1360), GPR_U32(ctx, 6));
label_461b68:
    // 0x461b68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x461b68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461b6c:
    // 0x461b6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x461b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461b70:
    // 0x461b70: 0x8f84bfb0  lw          $a0, -0x4050($gp)
    ctx->pc = 0x461b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_461b74:
    // 0x461b74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x461b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_461b78:
    // 0x461b78: 0x10830060  beq         $a0, $v1, . + 4 + (0x60 << 2)
label_461b7c:
    if (ctx->pc == 0x461B7Cu) {
        ctx->pc = 0x461B80u;
        goto label_461b80;
    }
    ctx->pc = 0x461B78u;
    {
        const bool branch_taken_0x461b78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x461b78) {
            ctx->pc = 0x461CFCu;
            goto label_461cfc;
        }
    }
    ctx->pc = 0x461B80u;
label_461b80:
    // 0x461b80: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_461b84:
    if (ctx->pc == 0x461B84u) {
        ctx->pc = 0x461B88u;
        goto label_461b88;
    }
    ctx->pc = 0x461B80u;
    {
        const bool branch_taken_0x461b80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x461b80) {
            ctx->pc = 0x461B90u;
            goto label_461b90;
        }
    }
    ctx->pc = 0x461B88u;
label_461b88:
    // 0x461b88: 0x100000da  b           . + 4 + (0xDA << 2)
label_461b8c:
    if (ctx->pc == 0x461B8Cu) {
        ctx->pc = 0x461B90u;
        goto label_461b90;
    }
    ctx->pc = 0x461B88u;
    {
        const bool branch_taken_0x461b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461b88) {
            ctx->pc = 0x461EF4u;
            goto label_461ef4;
        }
    }
    ctx->pc = 0x461B90u;
label_461b90:
    // 0x461b90: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x461b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_461b94:
    // 0x461b94: 0x244252c0  addiu       $v0, $v0, 0x52C0
    ctx->pc = 0x461b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
label_461b98:
    // 0x461b98: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x461b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_461b9c:
    // 0x461b9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x461b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_461ba0:
    // 0x461ba0: 0x244252c0  addiu       $v0, $v0, 0x52C0
    ctx->pc = 0x461ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
label_461ba4:
    // 0x461ba4: 0x401027  not         $v0, $v0
    ctx->pc = 0x461ba4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_461ba8:
    // 0x461ba8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x461ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_461bac:
    // 0x461bac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x461bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_461bb0:
    // 0x461bb0: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x461bb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
label_461bb4:
    // 0x461bb4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x461bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_461bb8:
    // 0x461bb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x461bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_461bbc:
    // 0x461bbc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_461bc0:
    if (ctx->pc == 0x461BC0u) {
        ctx->pc = 0x461BC4u;
        goto label_461bc4;
    }
    ctx->pc = 0x461BBCu;
    {
        const bool branch_taken_0x461bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x461bbc) {
            ctx->pc = 0x461C6Cu;
            goto label_461c6c;
        }
    }
    ctx->pc = 0x461BC4u;
label_461bc4:
    // 0x461bc4: 0x8f82b230  lw          $v0, -0x4DD0($gp)
    ctx->pc = 0x461bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947376)));
label_461bc8:
    // 0x461bc8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_461bcc:
    if (ctx->pc == 0x461BCCu) {
        ctx->pc = 0x461BD0u;
        goto label_461bd0;
    }
    ctx->pc = 0x461BC8u;
    {
        const bool branch_taken_0x461bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461bc8) {
            ctx->pc = 0x461C6Cu;
            goto label_461c6c;
        }
    }
    ctx->pc = 0x461BD0u;
label_461bd0:
    // 0x461bd0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x461bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_461bd4:
    // 0x461bd4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x461bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_461bd8:
    // 0x461bd8: 0x27a60520  addiu       $a2, $sp, 0x520
    ctx->pc = 0x461bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_461bdc:
    // 0x461bdc: 0xc115ee8  jal         func_457BA0
label_461be0:
    if (ctx->pc == 0x461BE0u) {
        ctx->pc = 0x461BE4u;
        goto label_461be4;
    }
    ctx->pc = 0x461BDCu;
    SET_GPR_U32(ctx, 31, 0x461BE4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x461BDCu, 0x461BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461BE4u;
label_461be4:
    // 0x461be4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_461be8:
    if (ctx->pc == 0x461BE8u) {
        ctx->pc = 0x461BECu;
        goto label_461bec;
    }
    ctx->pc = 0x461BE4u;
    {
        const bool branch_taken_0x461be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461be4) {
            ctx->pc = 0x461C6Cu;
            goto label_461c6c;
        }
    }
    ctx->pc = 0x461BECu;
label_461bec:
    // 0x461bec: 0x8fa20528  lw          $v0, 0x528($sp)
    ctx->pc = 0x461becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_461bf0:
    // 0x461bf0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_461bf4:
    if (ctx->pc == 0x461BF4u) {
        ctx->pc = 0x461BF8u;
        goto label_461bf8;
    }
    ctx->pc = 0x461BF0u;
    {
        const bool branch_taken_0x461bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461bf0) {
            ctx->pc = 0x461C6Cu;
            goto label_461c6c;
        }
    }
    ctx->pc = 0x461BF8u;
label_461bf8:
    // 0x461bf8: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x461bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_461bfc:
    // 0x461bfc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x461bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_461c00:
    // 0x461c00: 0x8fa60524  lw          $a2, 0x524($sp)
    ctx->pc = 0x461c00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1316)));
label_461c04:
    // 0x461c04: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x461c04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_461c08:
    // 0x461c08: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x461c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_461c0c:
    // 0x461c0c: 0x240806c4  addiu       $t0, $zero, 0x6C4
    ctx->pc = 0x461c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1732));
label_461c10:
    // 0x461c10: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x461c10u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_461c14:
    // 0x461c14: 0x2529f040  addiu       $t1, $t1, -0xFC0
    ctx->pc = 0x461c14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963264));
label_461c18:
    // 0x461c18: 0xc113940  jal         func_44E500
label_461c1c:
    if (ctx->pc == 0x461C1Cu) {
        ctx->pc = 0x461C20u;
        goto label_461c20;
    }
    ctx->pc = 0x461C18u;
    SET_GPR_U32(ctx, 31, 0x461C20u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x461C18u, 0x461C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461C20u;
label_461c20:
    // 0x461c20: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x461c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_461c24:
    // 0x461c24: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x461c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_461c28:
    // 0x461c28: 0x24a5f070  addiu       $a1, $a1, -0xF90
    ctx->pc = 0x461c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963312));
label_461c2c:
    // 0x461c2c: 0xc115c24  jal         func_457090
label_461c30:
    if (ctx->pc == 0x461C30u) {
        ctx->pc = 0x461C34u;
        goto label_461c34;
    }
    ctx->pc = 0x461C2Cu;
    SET_GPR_U32(ctx, 31, 0x461C34u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x461C2Cu, 0x461C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461C34u;
label_461c34:
    // 0x461c34: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x461c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_461c38:
    // 0x461c38: 0x8fa20528  lw          $v0, 0x528($sp)
    ctx->pc = 0x461c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_461c3c:
    // 0x461c3c: 0x40f809  jalr        $v0
label_461c40:
    if (ctx->pc == 0x461C40u) {
        ctx->pc = 0x461C44u;
        goto label_461c44;
    }
    ctx->pc = 0x461C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x461C44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461C3Cu, 0x461C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x461C44u;
label_461c44:
    // 0x461c44: 0xaf82b230  sw          $v0, -0x4DD0($gp)
    ctx->pc = 0x461c44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947376), GPR_U32(ctx, 2));
label_461c48:
    // 0x461c48: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x461c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_461c4c:
    // 0x461c4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_461c50:
    if (ctx->pc == 0x461C50u) {
        ctx->pc = 0x461C54u;
        goto label_461c54;
    }
    ctx->pc = 0x461C4Cu;
    {
        const bool branch_taken_0x461c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461c4c) {
            ctx->pc = 0x461C5Cu;
            goto label_461c5c;
        }
    }
    ctx->pc = 0x461C54u;
label_461c54:
    // 0x461c54: 0xd  break       0
    ctx->pc = 0x461c54u;
    runtime->handleBreak(rdram, ctx);
label_461c58:
    // 0x461c58: 0x0  nop
    ctx->pc = 0x461c58u;
    // NOP
label_461c5c:
    // 0x461c5c: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x461c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_461c60:
    // 0x461c60: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x461c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_461c64:
    // 0x461c64: 0xc11392c  jal         func_44E4B0
label_461c68:
    if (ctx->pc == 0x461C68u) {
        ctx->pc = 0x461C6Cu;
        goto label_461c6c;
    }
    ctx->pc = 0x461C64u;
    SET_GPR_U32(ctx, 31, 0x461C6Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x461C64u, 0x461C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461C6Cu;
label_461c6c:
    // 0x461c6c: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x461c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_461c70:
    // 0x461c70: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x461c70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_461c74:
    // 0x461c74: 0x24a5f140  addiu       $a1, $a1, -0xEC0
    ctx->pc = 0x461c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963520));
label_461c78:
    // 0x461c78: 0x2786bfb8  addiu       $a2, $gp, -0x4048
    ctx->pc = 0x461c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950840));
label_461c7c:
    // 0x461c7c: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x461c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_461c80:
    // 0x461c80: 0x24e74de8  addiu       $a3, $a3, 0x4DE8
    ctx->pc = 0x461c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19944));
label_461c84:
    // 0x461c84: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x461c84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_461c88:
    // 0x461c88: 0x25084e3c  addiu       $t0, $t0, 0x4E3C
    ctx->pc = 0x461c88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20028));
label_461c8c:
    // 0x461c8c: 0xc0bc3e2  jal         func_2F0F88
label_461c90:
    if (ctx->pc == 0x461C90u) {
        ctx->pc = 0x461C94u;
        goto label_461c94;
    }
    ctx->pc = 0x461C8Cu;
    SET_GPR_U32(ctx, 31, 0x461C94u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x461C8Cu, 0x461C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461C94u;
label_461c94:
    // 0x461c94: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x461c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_461c98:
    // 0x461c98: 0x8c444e00  lw          $a0, 0x4E00($v0)
    ctx->pc = 0x461c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19968)));
label_461c9c:
    // 0x461c9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x461c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_461ca0:
    // 0x461ca0: 0x8c454e04  lw          $a1, 0x4E04($v0)
    ctx->pc = 0x461ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19972)));
label_461ca4:
    // 0x461ca4: 0x27a604c0  addiu       $a2, $sp, 0x4C0
    ctx->pc = 0x461ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_461ca8:
    // 0x461ca8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x461ca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461cac:
    // 0x461cac: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x461cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_461cb0:
    // 0x461cb0: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x461cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
label_461cb4:
    // 0x461cb4: 0x252952c0  addiu       $t1, $t1, 0x52C0
    ctx->pc = 0x461cb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 21184));
label_461cb8:
    // 0x461cb8: 0xc0c3d52  jal         func_30F548
label_461cbc:
    if (ctx->pc == 0x461CBCu) {
        ctx->pc = 0x461CC0u;
        goto label_461cc0;
    }
    ctx->pc = 0x461CB8u;
    SET_GPR_U32(ctx, 31, 0x461CC0u);
    ctx->pc = 0x30F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F548u, 0x461CB8u, 0x461CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461CC0u;
label_461cc0:
    // 0x461cc0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x461cc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_461cc4:
    // 0x461cc4: 0x6610008  bgez        $s3, . + 4 + (0x8 << 2)
label_461cc8:
    if (ctx->pc == 0x461CC8u) {
        ctx->pc = 0x461CCCu;
        goto label_461ccc;
    }
    ctx->pc = 0x461CC4u;
    {
        const bool branch_taken_0x461cc4 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x461cc4) {
            ctx->pc = 0x461CE8u;
            goto label_461ce8;
        }
    }
    ctx->pc = 0x461CCCu;
label_461ccc:
    // 0x461ccc: 0xaf93bfb4  sw          $s3, -0x404C($gp)
    ctx->pc = 0x461cccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 19));
label_461cd0:
    // 0x461cd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x461cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461cd4:
    // 0x461cd4: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x461cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_461cd8:
    // 0x461cd8: 0xc1181ac  jal         func_4606B0
label_461cdc:
    if (ctx->pc == 0x461CDCu) {
        ctx->pc = 0x461CE0u;
        goto label_461ce0;
    }
    ctx->pc = 0x461CD8u;
    SET_GPR_U32(ctx, 31, 0x461CE0u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x461CD8u, 0x461CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461CE0u;
label_461ce0:
    // 0x461ce0: 0x100000ad  b           . + 4 + (0xAD << 2)
label_461ce4:
    if (ctx->pc == 0x461CE4u) {
        ctx->pc = 0x461CE8u;
        goto label_461ce8;
    }
    ctx->pc = 0x461CE0u;
    {
        const bool branch_taken_0x461ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461ce0) {
            ctx->pc = 0x461F98u;
            goto label_461f98;
        }
    }
    ctx->pc = 0x461CE8u;
label_461ce8:
    // 0x461ce8: 0x8f83bfb0  lw          $v1, -0x4050($gp)
    ctx->pc = 0x461ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950832)));
label_461cec:
    // 0x461cec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x461cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_461cf0:
    // 0x461cf0: 0xaf83bfb0  sw          $v1, -0x4050($gp)
    ctx->pc = 0x461cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950832), GPR_U32(ctx, 3));
label_461cf4:
    // 0x461cf4: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_461cf8:
    if (ctx->pc == 0x461CF8u) {
        ctx->pc = 0x461CFCu;
        goto label_461cfc;
    }
    ctx->pc = 0x461CF4u;
    {
        const bool branch_taken_0x461cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461cf4) {
            ctx->pc = 0x461F98u;
            goto label_461f98;
        }
    }
    ctx->pc = 0x461CFCu;
label_461cfc:
    // 0x461cfc: 0x8fa40550  lw          $a0, 0x550($sp)
    ctx->pc = 0x461cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1360)));
label_461d00:
    // 0x461d00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x461d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_461d04:
    // 0x461d04: 0x148300a4  bne         $a0, $v1, . + 4 + (0xA4 << 2)
label_461d08:
    if (ctx->pc == 0x461D08u) {
        ctx->pc = 0x461D0Cu;
        goto label_461d0c;
    }
    ctx->pc = 0x461D04u;
    {
        const bool branch_taken_0x461d04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x461d04) {
            ctx->pc = 0x461F98u;
            goto label_461f98;
        }
    }
    ctx->pc = 0x461D0Cu;
label_461d0c:
    // 0x461d0c: 0x8fa20530  lw          $v0, 0x530($sp)
    ctx->pc = 0x461d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1328)));
label_461d10:
    // 0x461d10: 0x3842000d  xori        $v0, $v0, 0xD
    ctx->pc = 0x461d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)13);
label_461d14:
    // 0x461d14: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x461d14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_461d18:
    // 0x461d18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x461d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_461d1c:
    // 0x461d1c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_461d20:
    if (ctx->pc == 0x461D20u) {
        ctx->pc = 0x461D24u;
        goto label_461d24;
    }
    ctx->pc = 0x461D1Cu;
    {
        const bool branch_taken_0x461d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x461d1c) {
            ctx->pc = 0x461DCCu;
            goto label_461dcc;
        }
    }
    ctx->pc = 0x461D24u;
label_461d24:
    // 0x461d24: 0x8f82b234  lw          $v0, -0x4DCC($gp)
    ctx->pc = 0x461d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947380)));
label_461d28:
    // 0x461d28: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_461d2c:
    if (ctx->pc == 0x461D2Cu) {
        ctx->pc = 0x461D30u;
        goto label_461d30;
    }
    ctx->pc = 0x461D28u;
    {
        const bool branch_taken_0x461d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461d28) {
            ctx->pc = 0x461DCCu;
            goto label_461dcc;
        }
    }
    ctx->pc = 0x461D30u;
label_461d30:
    // 0x461d30: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x461d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_461d34:
    // 0x461d34: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x461d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_461d38:
    // 0x461d38: 0x27a60510  addiu       $a2, $sp, 0x510
    ctx->pc = 0x461d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_461d3c:
    // 0x461d3c: 0xc115ee8  jal         func_457BA0
label_461d40:
    if (ctx->pc == 0x461D40u) {
        ctx->pc = 0x461D44u;
        goto label_461d44;
    }
    ctx->pc = 0x461D3Cu;
    SET_GPR_U32(ctx, 31, 0x461D44u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x461D3Cu, 0x461D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461D44u;
label_461d44:
    // 0x461d44: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_461d48:
    if (ctx->pc == 0x461D48u) {
        ctx->pc = 0x461D4Cu;
        goto label_461d4c;
    }
    ctx->pc = 0x461D44u;
    {
        const bool branch_taken_0x461d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461d44) {
            ctx->pc = 0x461DCCu;
            goto label_461dcc;
        }
    }
    ctx->pc = 0x461D4Cu;
label_461d4c:
    // 0x461d4c: 0x8fa20518  lw          $v0, 0x518($sp)
    ctx->pc = 0x461d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_461d50:
    // 0x461d50: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_461d54:
    if (ctx->pc == 0x461D54u) {
        ctx->pc = 0x461D58u;
        goto label_461d58;
    }
    ctx->pc = 0x461D50u;
    {
        const bool branch_taken_0x461d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461d50) {
            ctx->pc = 0x461DCCu;
            goto label_461dcc;
        }
    }
    ctx->pc = 0x461D58u;
label_461d58:
    // 0x461d58: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x461d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_461d5c:
    // 0x461d5c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x461d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_461d60:
    // 0x461d60: 0x8fa60514  lw          $a2, 0x514($sp)
    ctx->pc = 0x461d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1300)));
label_461d64:
    // 0x461d64: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x461d64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_461d68:
    // 0x461d68: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x461d68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_461d6c:
    // 0x461d6c: 0x240806dd  addiu       $t0, $zero, 0x6DD
    ctx->pc = 0x461d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1757));
label_461d70:
    // 0x461d70: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x461d70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_461d74:
    // 0x461d74: 0x2529f150  addiu       $t1, $t1, -0xEB0
    ctx->pc = 0x461d74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963536));
label_461d78:
    // 0x461d78: 0xc113940  jal         func_44E500
label_461d7c:
    if (ctx->pc == 0x461D7Cu) {
        ctx->pc = 0x461D80u;
        goto label_461d80;
    }
    ctx->pc = 0x461D78u;
    SET_GPR_U32(ctx, 31, 0x461D80u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x461D78u, 0x461D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461D80u;
label_461d80:
    // 0x461d80: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x461d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_461d84:
    // 0x461d84: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x461d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_461d88:
    // 0x461d88: 0x24a5efb0  addiu       $a1, $a1, -0x1050
    ctx->pc = 0x461d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963120));
label_461d8c:
    // 0x461d8c: 0xc115c24  jal         func_457090
label_461d90:
    if (ctx->pc == 0x461D90u) {
        ctx->pc = 0x461D94u;
        goto label_461d94;
    }
    ctx->pc = 0x461D8Cu;
    SET_GPR_U32(ctx, 31, 0x461D94u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x461D8Cu, 0x461D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461D94u;
label_461d94:
    // 0x461d94: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x461d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_461d98:
    // 0x461d98: 0x8fa20518  lw          $v0, 0x518($sp)
    ctx->pc = 0x461d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_461d9c:
    // 0x461d9c: 0x40f809  jalr        $v0
label_461da0:
    if (ctx->pc == 0x461DA0u) {
        ctx->pc = 0x461DA4u;
        goto label_461da4;
    }
    ctx->pc = 0x461D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x461DA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461D9Cu, 0x461DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x461DA4u;
label_461da4:
    // 0x461da4: 0xaf82b234  sw          $v0, -0x4DCC($gp)
    ctx->pc = 0x461da4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947380), GPR_U32(ctx, 2));
label_461da8:
    // 0x461da8: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x461da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_461dac:
    // 0x461dac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_461db0:
    if (ctx->pc == 0x461DB0u) {
        ctx->pc = 0x461DB4u;
        goto label_461db4;
    }
    ctx->pc = 0x461DACu;
    {
        const bool branch_taken_0x461dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461dac) {
            ctx->pc = 0x461DBCu;
            goto label_461dbc;
        }
    }
    ctx->pc = 0x461DB4u;
label_461db4:
    // 0x461db4: 0xd  break       0
    ctx->pc = 0x461db4u;
    runtime->handleBreak(rdram, ctx);
label_461db8:
    // 0x461db8: 0x0  nop
    ctx->pc = 0x461db8u;
    // NOP
label_461dbc:
    // 0x461dbc: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x461dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_461dc0:
    // 0x461dc0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x461dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_461dc4:
    // 0x461dc4: 0xc11392c  jal         func_44E4B0
label_461dc8:
    if (ctx->pc == 0x461DC8u) {
        ctx->pc = 0x461DCCu;
        goto label_461dcc;
    }
    ctx->pc = 0x461DC4u;
    SET_GPR_U32(ctx, 31, 0x461DCCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x461DC4u, 0x461DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461DCCu;
label_461dcc:
    // 0x461dcc: 0x8fa20540  lw          $v0, 0x540($sp)
    ctx->pc = 0x461dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_461dd0:
    // 0x461dd0: 0x440003c  bltz        $v0, . + 4 + (0x3C << 2)
label_461dd4:
    if (ctx->pc == 0x461DD4u) {
        ctx->pc = 0x461DD8u;
        goto label_461dd8;
    }
    ctx->pc = 0x461DD0u;
    {
        const bool branch_taken_0x461dd0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x461dd0) {
            ctx->pc = 0x461EC4u;
            goto label_461ec4;
        }
    }
    ctx->pc = 0x461DD8u;
label_461dd8:
    // 0x461dd8: 0x8fb40540  lw          $s4, 0x540($sp)
    ctx->pc = 0x461dd8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_461ddc:
    // 0x461ddc: 0x2692fffe  addiu       $s2, $s4, -0x2
    ctx->pc = 0x461ddcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
label_461de0:
    // 0x461de0: 0x2a410013  slti        $at, $s2, 0x13
    ctx->pc = 0x461de0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)19) ? 1 : 0);
label_461de4:
    // 0x461de4: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
label_461de8:
    if (ctx->pc == 0x461DE8u) {
        ctx->pc = 0x461DECu;
        goto label_461dec;
    }
    ctx->pc = 0x461DE4u;
    {
        const bool branch_taken_0x461de4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x461de4) {
            ctx->pc = 0x461E48u;
            goto label_461e48;
        }
    }
    ctx->pc = 0x461DECu;
label_461dec:
    // 0x461dec: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x461decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_461df0:
    // 0x461df0: 0x2484f1f0  addiu       $a0, $a0, -0xE10
    ctx->pc = 0x461df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963696));
label_461df4:
    // 0x461df4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x461df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461df8:
    // 0x461df8: 0xc115ae4  jal         func_456B90
label_461dfc:
    if (ctx->pc == 0x461DFCu) {
        ctx->pc = 0x461E00u;
        goto label_461e00;
    }
    ctx->pc = 0x461DF8u;
    SET_GPR_U32(ctx, 31, 0x461E00u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x461DF8u, 0x461E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461E00u;
label_461e00:
    // 0x461e00: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x461e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_461e04:
    // 0x461e04: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x461e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_461e08:
    // 0x461e08: 0x24a5f210  addiu       $a1, $a1, -0xDF0
    ctx->pc = 0x461e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963728));
label_461e0c:
    // 0x461e0c: 0x27a604c0  addiu       $a2, $sp, 0x4C0
    ctx->pc = 0x461e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_461e10:
    // 0x461e10: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x461e10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_461e14:
    // 0x461e14: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x461e14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_461e18:
    // 0x461e18: 0xc0bc3e2  jal         func_2F0F88
label_461e1c:
    if (ctx->pc == 0x461E1Cu) {
        ctx->pc = 0x461E20u;
        goto label_461e20;
    }
    ctx->pc = 0x461E18u;
    SET_GPR_U32(ctx, 31, 0x461E20u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x461E18u, 0x461E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461E20u;
label_461e20:
    // 0x461e20: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x461e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_461e24:
    // 0x461e24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x461e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461e28:
    // 0x461e28: 0xc115ae4  jal         func_456B90
label_461e2c:
    if (ctx->pc == 0x461E2Cu) {
        ctx->pc = 0x461E30u;
        goto label_461e30;
    }
    ctx->pc = 0x461E28u;
    SET_GPR_U32(ctx, 31, 0x461E30u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x461E28u, 0x461E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461E30u;
label_461e30:
    // 0x461e30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x461e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461e34:
    // 0x461e34: 0x8f85bfb4  lw          $a1, -0x404C($gp)
    ctx->pc = 0x461e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950836)));
label_461e38:
    // 0x461e38: 0xc1181ac  jal         func_4606B0
label_461e3c:
    if (ctx->pc == 0x461E3Cu) {
        ctx->pc = 0x461E40u;
        goto label_461e40;
    }
    ctx->pc = 0x461E38u;
    SET_GPR_U32(ctx, 31, 0x461E40u);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x461E38u, 0x461E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461E40u;
label_461e40:
    // 0x461e40: 0x10000055  b           . + 4 + (0x55 << 2)
label_461e44:
    if (ctx->pc == 0x461E44u) {
        ctx->pc = 0x461E48u;
        goto label_461e48;
    }
    ctx->pc = 0x461E40u;
    {
        const bool branch_taken_0x461e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461e40) {
            ctx->pc = 0x461F98u;
            goto label_461f98;
        }
    }
    ctx->pc = 0x461E48u;
label_461e48:
    // 0x461e48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x461e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461e4c:
    // 0x461e4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x461e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461e50:
    // 0x461e50: 0x1000000b  b           . + 4 + (0xB << 2)
label_461e54:
    if (ctx->pc == 0x461E54u) {
        ctx->pc = 0x461E58u;
        goto label_461e58;
    }
    ctx->pc = 0x461E50u;
    {
        const bool branch_taken_0x461e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461e50) {
            ctx->pc = 0x461E80u;
            goto label_461e80;
        }
    }
    ctx->pc = 0x461E58u;
label_461e58:
    // 0x461e58: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x461e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
label_461e5c:
    // 0x461e5c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x461e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_461e60:
    // 0x461e60: 0x244252c0  addiu       $v0, $v0, 0x52C0
    ctx->pc = 0x461e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
label_461e64:
    // 0x461e64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x461e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_461e68:
    // 0x461e68: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x461e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_461e6c:
    // 0x461e6c: 0x244303ff  addiu       $v1, $v0, 0x3FF
    ctx->pc = 0x461e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_461e70:
    // 0x461e70: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x461e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_461e74:
    // 0x461e74: 0x31282  srl         $v0, $v1, 10
    ctx->pc = 0x461e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 10));
label_461e78:
    // 0x461e78: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x461e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_461e7c:
    // 0x461e7c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x461e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_461e80:
    // 0x461e80: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x461e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_461e84:
    // 0x461e84: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_461e88:
    if (ctx->pc == 0x461E88u) {
        ctx->pc = 0x461E8Cu;
        goto label_461e8c;
    }
    ctx->pc = 0x461E84u;
    {
        const bool branch_taken_0x461e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x461e84) {
            ctx->pc = 0x461E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_461e58;
        }
    }
    ctx->pc = 0x461E8Cu;
label_461e8c:
    // 0x461e8c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x461e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_461e90:
    // 0x461e90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x461e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_461e94:
    // 0x461e94: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x461e94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_461e98:
    // 0x461e98: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_461e9c:
    if (ctx->pc == 0x461E9Cu) {
        ctx->pc = 0x461EA0u;
        goto label_461ea0;
    }
    ctx->pc = 0x461E98u;
    {
        const bool branch_taken_0x461e98 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x461e98) {
            ctx->pc = 0x461EA8u;
            goto label_461ea8;
        }
    }
    ctx->pc = 0x461EA0u;
label_461ea0:
    // 0x461ea0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x461ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_461ea4:
    // 0x461ea4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x461ea4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_461ea8:
    // 0x461ea8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x461ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_461eac:
    // 0x461eac: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x461eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_461eb0:
    // 0x461eb0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x461eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_461eb4:
    // 0x461eb4: 0x8c424e18  lw          $v0, 0x4E18($v0)
    ctx->pc = 0x461eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19992)));
label_461eb8:
    // 0x461eb8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x461eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_461ebc:
    // 0x461ebc: 0x10000007  b           . + 4 + (0x7 << 2)
label_461ec0:
    if (ctx->pc == 0x461EC0u) {
        ctx->pc = 0x461EC4u;
        goto label_461ec4;
    }
    ctx->pc = 0x461EBCu;
    {
        const bool branch_taken_0x461ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461ebc) {
            ctx->pc = 0x461EDCu;
            goto label_461edc;
        }
    }
    ctx->pc = 0x461EC4u;
label_461ec4:
    // 0x461ec4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x461ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_461ec8:
    // 0x461ec8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x461ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_461ecc:
    // 0x461ecc: 0x8c424e18  lw          $v0, 0x4E18($v0)
    ctx->pc = 0x461eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19992)));
label_461ed0:
    // 0x461ed0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x461ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_461ed4:
    // 0x461ed4: 0x8fa20540  lw          $v0, 0x540($sp)
    ctx->pc = 0x461ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_461ed8:
    // 0x461ed8: 0xaf82bfb4  sw          $v0, -0x404C($gp)
    ctx->pc = 0x461ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 2));
label_461edc:
    // 0x461edc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x461edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_461ee0:
    // 0x461ee0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x461ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_461ee4:
    // 0x461ee4: 0xc1181ac  jal         func_4606B0
label_461ee8:
    if (ctx->pc == 0x461EE8u) {
        ctx->pc = 0x461EECu;
        goto label_461eec;
    }
    ctx->pc = 0x461EE4u;
    SET_GPR_U32(ctx, 31, 0x461EECu);
    ctx->pc = 0x4606B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4606B0u, 0x461EE4u, 0x461EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461EECu;
label_461eec:
    // 0x461eec: 0x1000002a  b           . + 4 + (0x2A << 2)
label_461ef0:
    if (ctx->pc == 0x461EF0u) {
        ctx->pc = 0x461EF4u;
        goto label_461ef4;
    }
    ctx->pc = 0x461EECu;
    {
        const bool branch_taken_0x461eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461eec) {
            ctx->pc = 0x461F98u;
            goto label_461f98;
        }
    }
    ctx->pc = 0x461EF4u;
label_461ef4:
    // 0x461ef4: 0x8f83b238  lw          $v1, -0x4DC8($gp)
    ctx->pc = 0x461ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947384)));
label_461ef8:
    // 0x461ef8: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_461efc:
    if (ctx->pc == 0x461EFCu) {
        ctx->pc = 0x461F00u;
        goto label_461f00;
    }
    ctx->pc = 0x461EF8u;
    {
        const bool branch_taken_0x461ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x461ef8) {
            ctx->pc = 0x461F98u;
            goto label_461f98;
        }
    }
    ctx->pc = 0x461F00u;
label_461f00:
    // 0x461f00: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x461f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_461f04:
    // 0x461f04: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x461f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_461f08:
    // 0x461f08: 0x27a60500  addiu       $a2, $sp, 0x500
    ctx->pc = 0x461f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_461f0c:
    // 0x461f0c: 0xc115ee8  jal         func_457BA0
label_461f10:
    if (ctx->pc == 0x461F10u) {
        ctx->pc = 0x461F14u;
        goto label_461f14;
    }
    ctx->pc = 0x461F0Cu;
    SET_GPR_U32(ctx, 31, 0x461F14u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x461F0Cu, 0x461F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461F14u;
label_461f14:
    // 0x461f14: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_461f18:
    if (ctx->pc == 0x461F18u) {
        ctx->pc = 0x461F1Cu;
        goto label_461f1c;
    }
    ctx->pc = 0x461F14u;
    {
        const bool branch_taken_0x461f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461f14) {
            ctx->pc = 0x461F98u;
            goto label_461f98;
        }
    }
    ctx->pc = 0x461F1Cu;
label_461f1c:
    // 0x461f1c: 0x8fa30508  lw          $v1, 0x508($sp)
    ctx->pc = 0x461f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
label_461f20:
    // 0x461f20: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_461f24:
    if (ctx->pc == 0x461F24u) {
        ctx->pc = 0x461F28u;
        goto label_461f28;
    }
    ctx->pc = 0x461F20u;
    {
        const bool branch_taken_0x461f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x461f20) {
            ctx->pc = 0x461F98u;
            goto label_461f98;
        }
    }
    ctx->pc = 0x461F28u;
label_461f28:
    // 0x461f28: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x461f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_461f2c:
    // 0x461f2c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x461f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_461f30:
    // 0x461f30: 0x8fa60504  lw          $a2, 0x504($sp)
    ctx->pc = 0x461f30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1284)));
label_461f34:
    // 0x461f34: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x461f34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_461f38:
    // 0x461f38: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x461f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_461f3c:
    // 0x461f3c: 0x24080717  addiu       $t0, $zero, 0x717
    ctx->pc = 0x461f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1815));
label_461f40:
    // 0x461f40: 0x2789b1cc  addiu       $t1, $gp, -0x4E34
    ctx->pc = 0x461f40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947276));
label_461f44:
    // 0x461f44: 0xc113940  jal         func_44E500
label_461f48:
    if (ctx->pc == 0x461F48u) {
        ctx->pc = 0x461F4Cu;
        goto label_461f4c;
    }
    ctx->pc = 0x461F44u;
    SET_GPR_U32(ctx, 31, 0x461F4Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x461F44u, 0x461F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461F4Cu;
label_461f4c:
    // 0x461f4c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x461f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_461f50:
    // 0x461f50: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x461f50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_461f54:
    // 0x461f54: 0x24a5efd0  addiu       $a1, $a1, -0x1030
    ctx->pc = 0x461f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963152));
label_461f58:
    // 0x461f58: 0xc115c24  jal         func_457090
label_461f5c:
    if (ctx->pc == 0x461F5Cu) {
        ctx->pc = 0x461F60u;
        goto label_461f60;
    }
    ctx->pc = 0x461F58u;
    SET_GPR_U32(ctx, 31, 0x461F60u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x461F58u, 0x461F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461F60u;
label_461f60:
    // 0x461f60: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x461f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_461f64:
    // 0x461f64: 0x8fa20508  lw          $v0, 0x508($sp)
    ctx->pc = 0x461f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
label_461f68:
    // 0x461f68: 0x40f809  jalr        $v0
label_461f6c:
    if (ctx->pc == 0x461F6Cu) {
        ctx->pc = 0x461F70u;
        goto label_461f70;
    }
    ctx->pc = 0x461F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x461F70u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461F68u, 0x461F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x461F70u;
label_461f70:
    // 0x461f70: 0xaf82b238  sw          $v0, -0x4DC8($gp)
    ctx->pc = 0x461f70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947384), GPR_U32(ctx, 2));
label_461f74:
    // 0x461f74: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x461f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_461f78:
    // 0x461f78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_461f7c:
    if (ctx->pc == 0x461F7Cu) {
        ctx->pc = 0x461F80u;
        goto label_461f80;
    }
    ctx->pc = 0x461F78u;
    {
        const bool branch_taken_0x461f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x461f78) {
            ctx->pc = 0x461F88u;
            goto label_461f88;
        }
    }
    ctx->pc = 0x461F80u;
label_461f80:
    // 0x461f80: 0xd  break       0
    ctx->pc = 0x461f80u;
    runtime->handleBreak(rdram, ctx);
label_461f84:
    // 0x461f84: 0x0  nop
    ctx->pc = 0x461f84u;
    // NOP
label_461f88:
    // 0x461f88: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x461f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_461f8c:
    // 0x461f8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x461f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_461f90:
    // 0x461f90: 0xc11392c  jal         func_44E4B0
label_461f94:
    if (ctx->pc == 0x461F94u) {
        ctx->pc = 0x461F98u;
        goto label_461f98;
    }
    ctx->pc = 0x461F90u;
    SET_GPR_U32(ctx, 31, 0x461F98u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x461F90u, 0x461F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461F98u;
label_461f98:
    // 0x461f98: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x461f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_461f9c:
    // 0x461f9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x461f9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_461fa0:
    // 0x461fa0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x461fa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_461fa4:
    // 0x461fa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x461fa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_461fa8:
    // 0x461fa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x461fa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_461fac:
    // 0x461fac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x461facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_461fb0:
    // 0x461fb0: 0x27bd0560  addiu       $sp, $sp, 0x560
    ctx->pc = 0x461fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
label_461fb4:
    // 0x461fb4: 0x3e00008  jr          $ra
label_461fb8:
    if (ctx->pc == 0x461FB8u) {
        ctx->pc = 0x461FBCu;
        goto label_461fbc;
    }
    ctx->pc = 0x461FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x461FBCu;
label_461fbc:
    // 0x461fbc: 0x0  nop
    ctx->pc = 0x461fbcu;
    // NOP
    ctx->pc = 0x461fc0u;
}
