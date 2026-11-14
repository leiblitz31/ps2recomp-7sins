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

// Function: sub_00344BB8
// Address: 0x344bb8 - 0x345010
void sub_00344BB8_0x344bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344BB8_0x344bb8");
#endif

    switch (ctx->pc) {
        case 0x344bb8u: goto label_344bb8;
        case 0x344bbcu: goto label_344bbc;
        case 0x344bc0u: goto label_344bc0;
        case 0x344bc4u: goto label_344bc4;
        case 0x344bc8u: goto label_344bc8;
        case 0x344bccu: goto label_344bcc;
        case 0x344bd0u: goto label_344bd0;
        case 0x344bd4u: goto label_344bd4;
        case 0x344bd8u: goto label_344bd8;
        case 0x344bdcu: goto label_344bdc;
        case 0x344be0u: goto label_344be0;
        case 0x344be4u: goto label_344be4;
        case 0x344be8u: goto label_344be8;
        case 0x344becu: goto label_344bec;
        case 0x344bf0u: goto label_344bf0;
        case 0x344bf4u: goto label_344bf4;
        case 0x344bf8u: goto label_344bf8;
        case 0x344bfcu: goto label_344bfc;
        case 0x344c00u: goto label_344c00;
        case 0x344c04u: goto label_344c04;
        case 0x344c08u: goto label_344c08;
        case 0x344c0cu: goto label_344c0c;
        case 0x344c10u: goto label_344c10;
        case 0x344c14u: goto label_344c14;
        case 0x344c18u: goto label_344c18;
        case 0x344c1cu: goto label_344c1c;
        case 0x344c20u: goto label_344c20;
        case 0x344c24u: goto label_344c24;
        case 0x344c28u: goto label_344c28;
        case 0x344c2cu: goto label_344c2c;
        case 0x344c30u: goto label_344c30;
        case 0x344c34u: goto label_344c34;
        case 0x344c38u: goto label_344c38;
        case 0x344c3cu: goto label_344c3c;
        case 0x344c40u: goto label_344c40;
        case 0x344c44u: goto label_344c44;
        case 0x344c48u: goto label_344c48;
        case 0x344c4cu: goto label_344c4c;
        case 0x344c50u: goto label_344c50;
        case 0x344c54u: goto label_344c54;
        case 0x344c58u: goto label_344c58;
        case 0x344c5cu: goto label_344c5c;
        case 0x344c60u: goto label_344c60;
        case 0x344c64u: goto label_344c64;
        case 0x344c68u: goto label_344c68;
        case 0x344c6cu: goto label_344c6c;
        case 0x344c70u: goto label_344c70;
        case 0x344c74u: goto label_344c74;
        case 0x344c78u: goto label_344c78;
        case 0x344c7cu: goto label_344c7c;
        case 0x344c80u: goto label_344c80;
        case 0x344c84u: goto label_344c84;
        case 0x344c88u: goto label_344c88;
        case 0x344c8cu: goto label_344c8c;
        case 0x344c90u: goto label_344c90;
        case 0x344c94u: goto label_344c94;
        case 0x344c98u: goto label_344c98;
        case 0x344c9cu: goto label_344c9c;
        case 0x344ca0u: goto label_344ca0;
        case 0x344ca4u: goto label_344ca4;
        case 0x344ca8u: goto label_344ca8;
        case 0x344cacu: goto label_344cac;
        case 0x344cb0u: goto label_344cb0;
        case 0x344cb4u: goto label_344cb4;
        case 0x344cb8u: goto label_344cb8;
        case 0x344cbcu: goto label_344cbc;
        case 0x344cc0u: goto label_344cc0;
        case 0x344cc4u: goto label_344cc4;
        case 0x344cc8u: goto label_344cc8;
        case 0x344cccu: goto label_344ccc;
        case 0x344cd0u: goto label_344cd0;
        case 0x344cd4u: goto label_344cd4;
        case 0x344cd8u: goto label_344cd8;
        case 0x344cdcu: goto label_344cdc;
        case 0x344ce0u: goto label_344ce0;
        case 0x344ce4u: goto label_344ce4;
        case 0x344ce8u: goto label_344ce8;
        case 0x344cecu: goto label_344cec;
        case 0x344cf0u: goto label_344cf0;
        case 0x344cf4u: goto label_344cf4;
        case 0x344cf8u: goto label_344cf8;
        case 0x344cfcu: goto label_344cfc;
        case 0x344d00u: goto label_344d00;
        case 0x344d04u: goto label_344d04;
        case 0x344d08u: goto label_344d08;
        case 0x344d0cu: goto label_344d0c;
        case 0x344d10u: goto label_344d10;
        case 0x344d14u: goto label_344d14;
        case 0x344d18u: goto label_344d18;
        case 0x344d1cu: goto label_344d1c;
        case 0x344d20u: goto label_344d20;
        case 0x344d24u: goto label_344d24;
        case 0x344d28u: goto label_344d28;
        case 0x344d2cu: goto label_344d2c;
        case 0x344d30u: goto label_344d30;
        case 0x344d34u: goto label_344d34;
        case 0x344d38u: goto label_344d38;
        case 0x344d3cu: goto label_344d3c;
        case 0x344d40u: goto label_344d40;
        case 0x344d44u: goto label_344d44;
        case 0x344d48u: goto label_344d48;
        case 0x344d4cu: goto label_344d4c;
        case 0x344d50u: goto label_344d50;
        case 0x344d54u: goto label_344d54;
        case 0x344d58u: goto label_344d58;
        case 0x344d5cu: goto label_344d5c;
        case 0x344d60u: goto label_344d60;
        case 0x344d64u: goto label_344d64;
        case 0x344d68u: goto label_344d68;
        case 0x344d6cu: goto label_344d6c;
        case 0x344d70u: goto label_344d70;
        case 0x344d74u: goto label_344d74;
        case 0x344d78u: goto label_344d78;
        case 0x344d7cu: goto label_344d7c;
        case 0x344d80u: goto label_344d80;
        case 0x344d84u: goto label_344d84;
        case 0x344d88u: goto label_344d88;
        case 0x344d8cu: goto label_344d8c;
        case 0x344d90u: goto label_344d90;
        case 0x344d94u: goto label_344d94;
        case 0x344d98u: goto label_344d98;
        case 0x344d9cu: goto label_344d9c;
        case 0x344da0u: goto label_344da0;
        case 0x344da4u: goto label_344da4;
        case 0x344da8u: goto label_344da8;
        case 0x344dacu: goto label_344dac;
        case 0x344db0u: goto label_344db0;
        case 0x344db4u: goto label_344db4;
        case 0x344db8u: goto label_344db8;
        case 0x344dbcu: goto label_344dbc;
        case 0x344dc0u: goto label_344dc0;
        case 0x344dc4u: goto label_344dc4;
        case 0x344dc8u: goto label_344dc8;
        case 0x344dccu: goto label_344dcc;
        case 0x344dd0u: goto label_344dd0;
        case 0x344dd4u: goto label_344dd4;
        case 0x344dd8u: goto label_344dd8;
        case 0x344ddcu: goto label_344ddc;
        case 0x344de0u: goto label_344de0;
        case 0x344de4u: goto label_344de4;
        case 0x344de8u: goto label_344de8;
        case 0x344decu: goto label_344dec;
        case 0x344df0u: goto label_344df0;
        case 0x344df4u: goto label_344df4;
        case 0x344df8u: goto label_344df8;
        case 0x344dfcu: goto label_344dfc;
        case 0x344e00u: goto label_344e00;
        case 0x344e04u: goto label_344e04;
        case 0x344e08u: goto label_344e08;
        case 0x344e0cu: goto label_344e0c;
        case 0x344e10u: goto label_344e10;
        case 0x344e14u: goto label_344e14;
        case 0x344e18u: goto label_344e18;
        case 0x344e1cu: goto label_344e1c;
        case 0x344e20u: goto label_344e20;
        case 0x344e24u: goto label_344e24;
        case 0x344e28u: goto label_344e28;
        case 0x344e2cu: goto label_344e2c;
        case 0x344e30u: goto label_344e30;
        case 0x344e34u: goto label_344e34;
        case 0x344e38u: goto label_344e38;
        case 0x344e3cu: goto label_344e3c;
        case 0x344e40u: goto label_344e40;
        case 0x344e44u: goto label_344e44;
        case 0x344e48u: goto label_344e48;
        case 0x344e4cu: goto label_344e4c;
        case 0x344e50u: goto label_344e50;
        case 0x344e54u: goto label_344e54;
        case 0x344e58u: goto label_344e58;
        case 0x344e5cu: goto label_344e5c;
        case 0x344e60u: goto label_344e60;
        case 0x344e64u: goto label_344e64;
        case 0x344e68u: goto label_344e68;
        case 0x344e6cu: goto label_344e6c;
        case 0x344e70u: goto label_344e70;
        case 0x344e74u: goto label_344e74;
        case 0x344e78u: goto label_344e78;
        case 0x344e7cu: goto label_344e7c;
        case 0x344e80u: goto label_344e80;
        case 0x344e84u: goto label_344e84;
        case 0x344e88u: goto label_344e88;
        case 0x344e8cu: goto label_344e8c;
        case 0x344e90u: goto label_344e90;
        case 0x344e94u: goto label_344e94;
        case 0x344e98u: goto label_344e98;
        case 0x344e9cu: goto label_344e9c;
        case 0x344ea0u: goto label_344ea0;
        case 0x344ea4u: goto label_344ea4;
        case 0x344ea8u: goto label_344ea8;
        case 0x344eacu: goto label_344eac;
        case 0x344eb0u: goto label_344eb0;
        case 0x344eb4u: goto label_344eb4;
        case 0x344eb8u: goto label_344eb8;
        case 0x344ebcu: goto label_344ebc;
        case 0x344ec0u: goto label_344ec0;
        case 0x344ec4u: goto label_344ec4;
        case 0x344ec8u: goto label_344ec8;
        case 0x344eccu: goto label_344ecc;
        case 0x344ed0u: goto label_344ed0;
        case 0x344ed4u: goto label_344ed4;
        case 0x344ed8u: goto label_344ed8;
        case 0x344edcu: goto label_344edc;
        case 0x344ee0u: goto label_344ee0;
        case 0x344ee4u: goto label_344ee4;
        case 0x344ee8u: goto label_344ee8;
        case 0x344eecu: goto label_344eec;
        case 0x344ef0u: goto label_344ef0;
        case 0x344ef4u: goto label_344ef4;
        case 0x344ef8u: goto label_344ef8;
        case 0x344efcu: goto label_344efc;
        case 0x344f00u: goto label_344f00;
        case 0x344f04u: goto label_344f04;
        case 0x344f08u: goto label_344f08;
        case 0x344f0cu: goto label_344f0c;
        case 0x344f10u: goto label_344f10;
        case 0x344f14u: goto label_344f14;
        case 0x344f18u: goto label_344f18;
        case 0x344f1cu: goto label_344f1c;
        case 0x344f20u: goto label_344f20;
        case 0x344f24u: goto label_344f24;
        case 0x344f28u: goto label_344f28;
        case 0x344f2cu: goto label_344f2c;
        case 0x344f30u: goto label_344f30;
        case 0x344f34u: goto label_344f34;
        case 0x344f38u: goto label_344f38;
        case 0x344f3cu: goto label_344f3c;
        case 0x344f40u: goto label_344f40;
        case 0x344f44u: goto label_344f44;
        case 0x344f48u: goto label_344f48;
        case 0x344f4cu: goto label_344f4c;
        case 0x344f50u: goto label_344f50;
        case 0x344f54u: goto label_344f54;
        case 0x344f58u: goto label_344f58;
        case 0x344f5cu: goto label_344f5c;
        case 0x344f60u: goto label_344f60;
        case 0x344f64u: goto label_344f64;
        case 0x344f68u: goto label_344f68;
        case 0x344f6cu: goto label_344f6c;
        case 0x344f70u: goto label_344f70;
        case 0x344f74u: goto label_344f74;
        case 0x344f78u: goto label_344f78;
        case 0x344f7cu: goto label_344f7c;
        case 0x344f80u: goto label_344f80;
        case 0x344f84u: goto label_344f84;
        case 0x344f88u: goto label_344f88;
        case 0x344f8cu: goto label_344f8c;
        case 0x344f90u: goto label_344f90;
        case 0x344f94u: goto label_344f94;
        case 0x344f98u: goto label_344f98;
        case 0x344f9cu: goto label_344f9c;
        case 0x344fa0u: goto label_344fa0;
        case 0x344fa4u: goto label_344fa4;
        case 0x344fa8u: goto label_344fa8;
        case 0x344facu: goto label_344fac;
        case 0x344fb0u: goto label_344fb0;
        case 0x344fb4u: goto label_344fb4;
        case 0x344fb8u: goto label_344fb8;
        case 0x344fbcu: goto label_344fbc;
        case 0x344fc0u: goto label_344fc0;
        case 0x344fc4u: goto label_344fc4;
        case 0x344fc8u: goto label_344fc8;
        case 0x344fccu: goto label_344fcc;
        case 0x344fd0u: goto label_344fd0;
        case 0x344fd4u: goto label_344fd4;
        case 0x344fd8u: goto label_344fd8;
        case 0x344fdcu: goto label_344fdc;
        case 0x344fe0u: goto label_344fe0;
        case 0x344fe4u: goto label_344fe4;
        case 0x344fe8u: goto label_344fe8;
        case 0x344fecu: goto label_344fec;
        case 0x344ff0u: goto label_344ff0;
        case 0x344ff4u: goto label_344ff4;
        case 0x344ff8u: goto label_344ff8;
        case 0x344ffcu: goto label_344ffc;
        case 0x345000u: goto label_345000;
        case 0x345004u: goto label_345004;
        case 0x345008u: goto label_345008;
        case 0x34500cu: goto label_34500c;
        default: break;
    }

    ctx->pc = 0x344bb8u;

label_344bb8:
    // 0x344bb8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x344bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_344bbc:
    // 0x344bbc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x344bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_344bc0:
    // 0x344bc0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x344bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_344bc4:
    // 0x344bc4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x344bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_344bc8:
    // 0x344bc8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x344bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_344bcc:
    // 0x344bcc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x344bccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_344bd0:
    // 0x344bd0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x344bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_344bd4:
    // 0x344bd4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x344bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_344bd8:
    // 0x344bd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x344bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_344bdc:
    // 0x344bdc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x344bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_344be0:
    // 0x344be0: 0xc0d120c  jal         func_344830
label_344be4:
    if (ctx->pc == 0x344BE4u) {
        ctx->pc = 0x344BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344BE0u;
        // 0x344be4: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344BE8u;
        goto label_344be8;
    }
    ctx->pc = 0x344BE0u;
    SET_GPR_U32(ctx, 31, 0x344BE8u);
    ctx->pc = 0x344BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344BE0u;
    // 0x344be4: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x344BE0u, 0x344BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344BE8u;
label_344be8:
    // 0x344be8: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x344be8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_344bec:
    // 0x344bec: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x344becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_344bf0:
    // 0x344bf0: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_344bf4:
    if (ctx->pc == 0x344BF4u) {
        ctx->pc = 0x344BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344BF0u;
        // 0x344bf4: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344BF8u;
        goto label_344bf8;
    }
    ctx->pc = 0x344BF0u;
    {
        const bool branch_taken_0x344bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344bf0) {
            ctx->pc = 0x344BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344BF0u;
            // 0x344bf4: 0x8e82000c  lw          $v0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344C80u;
            goto label_344c80;
        }
    }
    ctx->pc = 0x344BF8u;
label_344bf8:
    // 0x344bf8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x344bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_344bfc:
    // 0x344bfc: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_344c00:
    if (ctx->pc == 0x344C00u) {
        ctx->pc = 0x344C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344BFCu;
        // 0x344c00: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344C04u;
        goto label_344c04;
    }
    ctx->pc = 0x344BFCu;
    {
        const bool branch_taken_0x344bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x344C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344BFCu;
        // 0x344c00: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344bfc) {
            ctx->pc = 0x344C78u;
            goto label_344c78;
        }
    }
    ctx->pc = 0x344C04u;
label_344c04:
    // 0x344c04: 0x2472e880  addiu       $s2, $v1, -0x1780
    ctx->pc = 0x344c04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_344c08:
    // 0x344c08: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x344c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_344c0c:
    // 0x344c0c: 0x40f809  jalr        $v0
label_344c10:
    if (ctx->pc == 0x344C10u) {
        ctx->pc = 0x344C14u;
        goto label_344c14;
    }
    ctx->pc = 0x344C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x344C14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344C0Cu, 0x344C14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x344C14u;
label_344c14:
    // 0x344c14: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x344c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_344c18:
    // 0x344c18: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x344c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_344c1c:
    // 0x344c1c: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x344c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_344c20:
    // 0x344c20: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_344c24:
    if (ctx->pc == 0x344C24u) {
        ctx->pc = 0x344C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C20u;
        // 0x344c24: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344C28u;
        goto label_344c28;
    }
    ctx->pc = 0x344C20u;
    {
        const bool branch_taken_0x344c20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x344C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C20u;
        // 0x344c24: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c20) {
            ctx->pc = 0x344C78u;
            goto label_344c78;
        }
    }
    ctx->pc = 0x344C28u;
label_344c28:
    // 0x344c28: 0xc0d434e  jal         func_350D38
label_344c2c:
    if (ctx->pc == 0x344C2Cu) {
        ctx->pc = 0x344C30u;
        goto label_344c30;
    }
    ctx->pc = 0x344C28u;
    SET_GPR_U32(ctx, 31, 0x344C30u);
    ctx->pc = 0x350D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350D38u, 0x344C28u, 0x344C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344C30u;
label_344c30:
    // 0x344c30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x344c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_344c34:
    // 0x344c34: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x344c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_344c38:
    // 0x344c38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x344c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_344c3c:
    // 0x344c3c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x344c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_344c40:
    // 0x344c40: 0x8e420108  lw          $v0, 0x108($s2)
    ctx->pc = 0x344c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_344c44:
    // 0x344c44: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x344c44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_344c48:
    // 0x344c48: 0x2012  mflo        $a0
    ctx->pc = 0x344c48u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_344c4c:
    // 0x344c4c: 0x40f809  jalr        $v0
label_344c50:
    if (ctx->pc == 0x344C50u) {
        ctx->pc = 0x344C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C4Cu;
        // 0x344c50: 0x34a50130  ori         $a1, $a1, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x344C54u;
        goto label_344c54;
    }
    ctx->pc = 0x344C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x344C54u);
        ctx->pc = 0x344C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C4Cu;
        // 0x344c50: 0x34a50130  ori         $a1, $a1, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344C4Cu, 0x344C54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x344C54u;
label_344c54:
    // 0x344c54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x344c54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_344c58:
    // 0x344c58: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_344c5c:
    if (ctx->pc == 0x344C5Cu) {
        ctx->pc = 0x344C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C58u;
        // 0x344c5c: 0xae23001c  sw          $v1, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344C60u;
        goto label_344c60;
    }
    ctx->pc = 0x344C58u;
    {
        const bool branch_taken_0x344c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x344C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C58u;
        // 0x344c5c: 0xae23001c  sw          $v1, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c58) {
            ctx->pc = 0x344C78u;
            goto label_344c78;
        }
    }
    ctx->pc = 0x344C60u;
label_344c60:
    // 0x344c60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x344c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_344c64:
    // 0x344c64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x344c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_344c68:
    // 0x344c68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x344c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_344c6c:
    // 0x344c6c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x344c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_344c70:
    // 0x344c70: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x344c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_344c74:
    // 0x344c74: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x344c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_344c78:
    // 0x344c78: 0x100000dd  b           . + 4 + (0xDD << 2)
label_344c7c:
    if (ctx->pc == 0x344C7Cu) {
        ctx->pc = 0x344C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C78u;
        // 0x344c7c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344C80u;
        goto label_344c80;
    }
    ctx->pc = 0x344C78u;
    {
        const bool branch_taken_0x344c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C78u;
        // 0x344c7c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c78) {
            ctx->pc = 0x344FF0u;
            goto label_344ff0;
        }
    }
    ctx->pc = 0x344C80u;
label_344c80:
    // 0x344c80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x344c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_344c84:
    // 0x344c84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x344c84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_344c88:
    // 0x344c88: 0xc0d120c  jal         func_344830
label_344c8c:
    if (ctx->pc == 0x344C8Cu) {
        ctx->pc = 0x344C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C88u;
        // 0x344c8c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344C90u;
        goto label_344c90;
    }
    ctx->pc = 0x344C88u;
    SET_GPR_U32(ctx, 31, 0x344C90u);
    ctx->pc = 0x344C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344C88u;
    // 0x344c8c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x344C88u, 0x344C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344C90u;
label_344c90:
    // 0x344c90: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x344c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_344c94:
    // 0x344c94: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x344c94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_344c98:
    // 0x344c98: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x344c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_344c9c:
    // 0x344c9c: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x344c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_344ca0:
    // 0x344ca0: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x344ca0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_344ca4:
    // 0x344ca4: 0xc0d120c  jal         func_344830
label_344ca8:
    if (ctx->pc == 0x344CA8u) {
        ctx->pc = 0x344CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CA4u;
        // 0x344ca8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344CACu;
        goto label_344cac;
    }
    ctx->pc = 0x344CA4u;
    SET_GPR_U32(ctx, 31, 0x344CACu);
    ctx->pc = 0x344CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344CA4u;
    // 0x344ca8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x344CA4u, 0x344CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344CACu;
label_344cac:
    // 0x344cac: 0x4420002  bltzl       $v0, . + 4 + (0x2 << 2)
label_344cb0:
    if (ctx->pc == 0x344CB0u) {
        ctx->pc = 0x344CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CACu;
        // 0x344cb0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344CB4u;
        goto label_344cb4;
    }
    ctx->pc = 0x344CACu;
    {
        const bool branch_taken_0x344cac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x344cac) {
            ctx->pc = 0x344CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344CACu;
            // 0x344cb0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344CB8u;
            goto label_344cb8;
        }
    }
    ctx->pc = 0x344CB4u;
label_344cb4:
    // 0x344cb4: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x344cb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_344cb8:
    // 0x344cb8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x344cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_344cbc:
    // 0x344cbc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x344cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_344cc0:
    // 0x344cc0: 0xc0d120c  jal         func_344830
label_344cc4:
    if (ctx->pc == 0x344CC4u) {
        ctx->pc = 0x344CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CC0u;
        // 0x344cc4: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344CC8u;
        goto label_344cc8;
    }
    ctx->pc = 0x344CC0u;
    SET_GPR_U32(ctx, 31, 0x344CC8u);
    ctx->pc = 0x344CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344CC0u;
    // 0x344cc4: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x344CC0u, 0x344CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344CC8u;
label_344cc8:
    // 0x344cc8: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x344cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_344ccc:
    // 0x344ccc: 0x36430002  ori         $v1, $s2, 0x2
    ctx->pc = 0x344cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
label_344cd0:
    // 0x344cd0: 0x8e6400a4  lw          $a0, 0xA4($s3)
    ctx->pc = 0x344cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_344cd4:
    // 0x344cd4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_344cd8:
    if (ctx->pc == 0x344CD8u) {
        ctx->pc = 0x344CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CD4u;
        // 0x344cd8: 0x62900a  movz        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344CDCu;
        goto label_344cdc;
    }
    ctx->pc = 0x344CD4u;
    {
        const bool branch_taken_0x344cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x344CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CD4u;
        // 0x344cd8: 0x62900a  movz        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344cd4) {
            ctx->pc = 0x344D00u;
            goto label_344d00;
        }
    }
    ctx->pc = 0x344CDCu;
label_344cdc:
    // 0x344cdc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x344cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_344ce0:
    // 0x344ce0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x344ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_344ce4:
    // 0x344ce4: 0xc0d120c  jal         func_344830
label_344ce8:
    if (ctx->pc == 0x344CE8u) {
        ctx->pc = 0x344CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CE4u;
        // 0x344ce8: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344CECu;
        goto label_344cec;
    }
    ctx->pc = 0x344CE4u;
    SET_GPR_U32(ctx, 31, 0x344CECu);
    ctx->pc = 0x344CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344CE4u;
    // 0x344ce8: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x344CE4u, 0x344CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344CECu;
label_344cec:
    // 0x344cec: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
label_344cf0:
    if (ctx->pc == 0x344CF0u) {
        ctx->pc = 0x344CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CECu;
        // 0x344cf0: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344CF4u;
        goto label_344cf4;
    }
    ctx->pc = 0x344CECu;
    {
        const bool branch_taken_0x344cec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x344CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CECu;
        // 0x344cf0: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344cec) {
            ctx->pc = 0x344CFCu;
            goto label_344cfc;
        }
    }
    ctx->pc = 0x344CF4u;
label_344cf4:
    // 0x344cf4: 0x10000002  b           . + 4 + (0x2 << 2)
label_344cf8:
    if (ctx->pc == 0x344CF8u) {
        ctx->pc = 0x344CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CF4u;
        // 0x344cf8: 0x36520080  ori         $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x344CFCu;
        goto label_344cfc;
    }
    ctx->pc = 0x344CF4u;
    {
        const bool branch_taken_0x344cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344CF4u;
        // 0x344cf8: 0x36520080  ori         $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344cf4) {
            ctx->pc = 0x344D00u;
            goto label_344d00;
        }
    }
    ctx->pc = 0x344CFCu;
label_344cfc:
    // 0x344cfc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x344cfcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_344d00:
    // 0x344d00: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x344d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_344d04:
    // 0x344d04: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x344d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_344d08:
    // 0x344d08: 0xc0d120c  jal         func_344830
label_344d0c:
    if (ctx->pc == 0x344D0Cu) {
        ctx->pc = 0x344D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D08u;
        // 0x344d0c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344D10u;
        goto label_344d10;
    }
    ctx->pc = 0x344D08u;
    SET_GPR_U32(ctx, 31, 0x344D10u);
    ctx->pc = 0x344D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344D08u;
    // 0x344d0c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x344D08u, 0x344D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344D10u;
label_344d10:
    // 0x344d10: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
label_344d14:
    if (ctx->pc == 0x344D14u) {
        ctx->pc = 0x344D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D10u;
        // 0x344d14: 0x32430001  andi        $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x344D18u;
        goto label_344d18;
    }
    ctx->pc = 0x344D10u;
    {
        const bool branch_taken_0x344d10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x344D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D10u;
        // 0x344d14: 0x32430001  andi        $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344d10) {
            ctx->pc = 0x344D20u;
            goto label_344d20;
        }
    }
    ctx->pc = 0x344D18u;
label_344d18:
    // 0x344d18: 0x36420004  ori         $v0, $s2, 0x4
    ctx->pc = 0x344d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4);
label_344d1c:
    // 0x344d1c: 0x43900b  movn        $s2, $v0, $v1
    ctx->pc = 0x344d1cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_344d20:
    // 0x344d20: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x344d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_344d24:
    // 0x344d24: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x344d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
label_344d28:
    // 0x344d28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x344d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_344d2c:
    // 0x344d2c: 0x32440001  andi        $a0, $s2, 0x1
    ctx->pc = 0x344d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_344d30:
    // 0x344d30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x344d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_344d34:
    // 0x344d34: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_344d38:
    if (ctx->pc == 0x344D38u) {
        ctx->pc = 0x344D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D34u;
        // 0x344d38: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344D3Cu;
        goto label_344d3c;
    }
    ctx->pc = 0x344D34u;
    {
        const bool branch_taken_0x344d34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x344D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D34u;
        // 0x344d38: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344d34) {
            ctx->pc = 0x344D98u;
            goto label_344d98;
        }
    }
    ctx->pc = 0x344D3Cu;
label_344d3c:
    // 0x344d3c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x344d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_344d40:
    // 0x344d40: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x344d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_344d44:
    // 0x344d44: 0xc0d120c  jal         func_344830
label_344d48:
    if (ctx->pc == 0x344D48u) {
        ctx->pc = 0x344D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D44u;
        // 0x344d48: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344D4Cu;
        goto label_344d4c;
    }
    ctx->pc = 0x344D44u;
    SET_GPR_U32(ctx, 31, 0x344D4Cu);
    ctx->pc = 0x344D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344D44u;
    // 0x344d48: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x344D44u, 0x344D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344D4Cu;
label_344d4c:
    // 0x344d4c: 0x4420003  bltzl       $v0, . + 4 + (0x3 << 2)
label_344d50:
    if (ctx->pc == 0x344D50u) {
        ctx->pc = 0x344D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D4Cu;
        // 0x344d50: 0xc6610080  lwc1        $f1, 0x80($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x344D54u;
        goto label_344d54;
    }
    ctx->pc = 0x344D4Cu;
    {
        const bool branch_taken_0x344d4c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x344d4c) {
            ctx->pc = 0x344D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344D4Cu;
            // 0x344d50: 0xc6610080  lwc1        $f1, 0x80($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x344D5Cu;
            goto label_344d5c;
        }
    }
    ctx->pc = 0x344D54u;
label_344d54:
    // 0x344d54: 0x10000010  b           . + 4 + (0x10 << 2)
label_344d58:
    if (ctx->pc == 0x344D58u) {
        ctx->pc = 0x344D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D54u;
        // 0x344d58: 0x36520020  ori         $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x344D5Cu;
        goto label_344d5c;
    }
    ctx->pc = 0x344D54u;
    {
        const bool branch_taken_0x344d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D54u;
        // 0x344d58: 0x36520020  ori         $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344d54) {
            ctx->pc = 0x344D98u;
            goto label_344d98;
        }
    }
    ctx->pc = 0x344D5Cu;
label_344d5c:
    // 0x344d5c: 0xc7808130  lwc1        $f0, -0x7ED0($gp)
    ctx->pc = 0x344d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344d60:
    // 0x344d60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x344d60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344d64:
    // 0x344d64: 0x0  nop
    ctx->pc = 0x344d64u;
    // NOP
label_344d68:
    // 0x344d68: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_344d6c:
    if (ctx->pc == 0x344D6Cu) {
        ctx->pc = 0x344D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D68u;
        // 0x344d6c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344D70u;
        goto label_344d70;
    }
    ctx->pc = 0x344D68u;
    {
        const bool branch_taken_0x344d68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x344d68) {
            ctx->pc = 0x344D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344D68u;
            // 0x344d6c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344D88u;
            goto label_344d88;
        }
    }
    ctx->pc = 0x344D70u;
label_344d70:
    // 0x344d70: 0xc7808244  lwc1        $f0, -0x7DBC($gp)
    ctx->pc = 0x344d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344d74:
    // 0x344d74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x344d74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344d78:
    // 0x344d78: 0x0  nop
    ctx->pc = 0x344d78u;
    // NOP
label_344d7c:
    // 0x344d7c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_344d80:
    if (ctx->pc == 0x344D80u) {
        ctx->pc = 0x344D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D7Cu;
        // 0x344d80: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344D84u;
        goto label_344d84;
    }
    ctx->pc = 0x344D7Cu;
    {
        const bool branch_taken_0x344d7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x344d7c) {
            ctx->pc = 0x344D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344D7Cu;
            // 0x344d80: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344D9Cu;
            goto label_344d9c;
        }
    }
    ctx->pc = 0x344D84u;
label_344d84:
    // 0x344d84: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x344d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_344d88:
    // 0x344d88: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x344d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_344d8c:
    // 0x344d8c: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x344d8cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
label_344d90:
    // 0x344d90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x344d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_344d94:
    // 0x344d94: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x344d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_344d98:
    // 0x344d98: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x344d98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_344d9c:
    // 0x344d9c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x344d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_344da0:
    // 0x344da0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x344da0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_344da4:
    // 0x344da4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x344da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_344da8:
    // 0x344da8: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x344da8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
label_344dac:
    // 0x344dac: 0xc0d4328  jal         func_350CA0
label_344db0:
    if (ctx->pc == 0x344DB0u) {
        ctx->pc = 0x344DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344DACu;
        // 0x344db0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344DB4u;
        goto label_344db4;
    }
    ctx->pc = 0x344DACu;
    SET_GPR_U32(ctx, 31, 0x344DB4u);
    ctx->pc = 0x344DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344DACu;
    // 0x344db0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CA0u, 0x344DACu, 0x344DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344DB4u;
label_344db4:
    // 0x344db4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x344db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_344db8:
    // 0x344db8: 0x1200008d  beqz        $s0, . + 4 + (0x8D << 2)
label_344dbc:
    if (ctx->pc == 0x344DBCu) {
        ctx->pc = 0x344DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344DB8u;
        // 0x344dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344DC0u;
        goto label_344dc0;
    }
    ctx->pc = 0x344DB8u;
    {
        const bool branch_taken_0x344db8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x344DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344DB8u;
        // 0x344dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344db8) {
            ctx->pc = 0x344FF0u;
            goto label_344ff0;
        }
    }
    ctx->pc = 0x344DC0u;
label_344dc0:
    // 0x344dc0: 0xc1067b0  jal         func_419EC0
label_344dc4:
    if (ctx->pc == 0x344DC4u) {
        ctx->pc = 0x344DC8u;
        goto label_344dc8;
    }
    ctx->pc = 0x344DC0u;
    SET_GPR_U32(ctx, 31, 0x344DC8u);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x344DC0u, 0x344DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344DC8u;
label_344dc8:
    // 0x344dc8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x344dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_344dcc:
    // 0x344dcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x344dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_344dd0:
    // 0x344dd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x344dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_344dd4:
    // 0x344dd4: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x344dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_344dd8:
    // 0x344dd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x344dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344ddc:
    // 0x344ddc: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x344ddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
label_344de0:
    // 0x344de0: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x344de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_344de4:
    // 0x344de4: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x344de4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_344de8:
    // 0x344de8: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x344de8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_344dec:
    // 0x344dec: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x344decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_344df0:
    // 0x344df0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x344df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_344df4:
    // 0x344df4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x344df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_344df8:
    // 0x344df8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x344df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_344dfc:
    // 0x344dfc: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x344dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_344e00:
    // 0x344e00: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x344e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_344e04:
    // 0x344e04: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x344e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_344e08:
    // 0x344e08: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x344e08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_344e0c:
    // 0x344e0c: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x344e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_344e10:
    // 0x344e10: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x344e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_344e14:
    // 0x344e14: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x344e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_344e18:
    // 0x344e18: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x344e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
label_344e1c:
    // 0x344e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x344e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_344e20:
    // 0x344e20: 0xc0e2686  jal         func_389A18
label_344e24:
    if (ctx->pc == 0x344E24u) {
        ctx->pc = 0x344E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E20u;
        // 0x344e24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344E28u;
        goto label_344e28;
    }
    ctx->pc = 0x344E20u;
    SET_GPR_U32(ctx, 31, 0x344E28u);
    ctx->pc = 0x344E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344E20u;
    // 0x344e24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x344E20u, 0x344E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344E28u;
label_344e28:
    // 0x344e28: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x344e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_344e2c:
    // 0x344e2c: 0xc46097bc  lwc1        $f0, -0x6844($v1)
    ctx->pc = 0x344e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344e30:
    // 0x344e30: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x344e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_344e34:
    // 0x344e34: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x344e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_344e38:
    // 0x344e38: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x344e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_344e3c:
    // 0x344e3c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x344e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_344e40:
    // 0x344e40: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x344e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_344e44:
    // 0x344e44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x344e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_344e48:
    // 0x344e48: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x344e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_344e4c:
    // 0x344e4c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x344e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_344e50:
    // 0x344e50: 0xb06200bf  sdl         $v0, 0xBF($v1)
    ctx->pc = 0x344e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_344e54:
    // 0x344e54: 0xb46200b8  sdr         $v0, 0xB8($v1)
    ctx->pc = 0x344e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_344e58:
    // 0x344e58: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x344e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_344e5c:
    // 0x344e5c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x344e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_344e60:
    // 0x344e60: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x344e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_344e64:
    // 0x344e64: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x344e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_344e68:
    // 0x344e68: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x344e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_344e6c:
    // 0x344e6c: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x344e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
label_344e70:
    // 0x344e70: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_344e74:
    if (ctx->pc == 0x344E74u) {
        ctx->pc = 0x344E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E70u;
        // 0x344e74: 0xaca30040  sw          $v1, 0x40($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344E78u;
        goto label_344e78;
    }
    ctx->pc = 0x344E70u;
    {
        const bool branch_taken_0x344e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E70u;
        // 0x344e74: 0xaca30040  sw          $v1, 0x40($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344e70) {
            ctx->pc = 0x344ED0u;
            goto label_344ed0;
        }
    }
    ctx->pc = 0x344E78u;
label_344e78:
    // 0x344e78: 0x8a62007f  lwl         $v0, 0x7F($s3)
    ctx->pc = 0x344e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 127); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_344e7c:
    // 0x344e7c: 0x9a62007c  lwr         $v0, 0x7C($s3)
    ctx->pc = 0x344e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 124); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_344e80:
    // 0x344e80: 0xa8a200cf  swl         $v0, 0xCF($a1)
    ctx->pc = 0x344e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 207); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_344e84:
    // 0x344e84: 0xb8a200cc  swr         $v0, 0xCC($a1)
    ctx->pc = 0x344e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 204); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_344e88:
    // 0x344e88: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x344e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_344e8c:
    // 0x344e8c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x344e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_344e90:
    // 0x344e90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x344e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_344e94:
    // 0x344e94: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_344e98:
    if (ctx->pc == 0x344E98u) {
        ctx->pc = 0x344E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E94u;
        // 0x344e98: 0x8f82a858  lw          $v0, -0x57A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344E9Cu;
        goto label_344e9c;
    }
    ctx->pc = 0x344E94u;
    {
        const bool branch_taken_0x344e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x344E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E94u;
        // 0x344e98: 0x8f82a858  lw          $v0, -0x57A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344e94) {
            ctx->pc = 0x344EB8u;
            goto label_344eb8;
        }
    }
    ctx->pc = 0x344E9Cu;
label_344e9c:
    // 0x344e9c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x344e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_344ea0:
    // 0x344ea0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x344ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_344ea4:
    // 0x344ea4: 0x886700cf  lwl         $a3, 0xCF($v1)
    ctx->pc = 0x344ea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 207); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
label_344ea8:
    // 0x344ea8: 0x986700cc  lwr         $a3, 0xCC($v1)
    ctx->pc = 0x344ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 204); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
label_344eac:
    // 0x344eac: 0xa8870007  swl         $a3, 0x7($a0)
    ctx->pc = 0x344eacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_344eb0:
    // 0x344eb0: 0xb8870004  swr         $a3, 0x4($a0)
    ctx->pc = 0x344eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_344eb4:
    // 0x344eb4: 0x0  nop
    ctx->pc = 0x344eb4u;
    // NOP
label_344eb8:
    // 0x344eb8: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x344eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_344ebc:
    // 0x344ebc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x344ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_344ec0:
    // 0x344ec0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x344ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_344ec4:
    // 0x344ec4: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x344ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_344ec8:
    // 0x344ec8: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x344ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_344ecc:
    // 0x344ecc: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x344eccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
label_344ed0:
    // 0x344ed0: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x344ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
label_344ed4:
    // 0x344ed4: 0x2461024  and         $v0, $s2, $a2
    ctx->pc = 0x344ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 6));
label_344ed8:
    // 0x344ed8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_344edc:
    if (ctx->pc == 0x344EDCu) {
        ctx->pc = 0x344EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344ED8u;
        // 0x344edc: 0x32420004  andi        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x344EE0u;
        goto label_344ee0;
    }
    ctx->pc = 0x344ED8u;
    {
        const bool branch_taken_0x344ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344ED8u;
        // 0x344edc: 0x32420004  andi        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344ed8) {
            ctx->pc = 0x344F28u;
            goto label_344f28;
        }
    }
    ctx->pc = 0x344EE0u;
label_344ee0:
    // 0x344ee0: 0xc6600084  lwc1        $f0, 0x84($s3)
    ctx->pc = 0x344ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344ee4:
    // 0x344ee4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x344ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_344ee8:
    // 0x344ee8: 0xc6610088  lwc1        $f1, 0x88($s3)
    ctx->pc = 0x344ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_344eec:
    // 0x344eec: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x344eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_344ef0:
    // 0x344ef0: 0xc660008c  lwc1        $f0, 0x8C($s3)
    ctx->pc = 0x344ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344ef4:
    // 0x344ef4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x344ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_344ef8:
    // 0x344ef8: 0xc6610090  lwc1        $f1, 0x90($s3)
    ctx->pc = 0x344ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_344efc:
    // 0x344efc: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x344efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_344f00:
    // 0x344f00: 0x8f84a858  lw          $a0, -0x57A8($gp)
    ctx->pc = 0x344f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_344f04:
    // 0x344f04: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x344f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_344f08:
    // 0x344f08: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x344f08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_344f0c:
    // 0x344f0c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x344f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_344f10:
    // 0x344f10: 0x7c6200e0  sq          $v0, 0xE0($v1)
    ctx->pc = 0x344f10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 224), GPR_VEC(ctx, 2));
label_344f14:
    // 0x344f14: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x344f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_344f18:
    // 0x344f18: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x344f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_344f1c:
    // 0x344f1c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x344f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_344f20:
    // 0x344f20: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x344f20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
label_344f24:
    // 0x344f24: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x344f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
label_344f28:
    // 0x344f28: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_344f2c:
    if (ctx->pc == 0x344F2Cu) {
        ctx->pc = 0x344F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F28u;
        // 0x344f2c: 0x8e6500a4  lw          $a1, 0xA4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344F30u;
        goto label_344f30;
    }
    ctx->pc = 0x344F28u;
    {
        const bool branch_taken_0x344f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x344f28) {
            ctx->pc = 0x344F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344F28u;
            // 0x344f2c: 0x8e6500a4  lw          $a1, 0xA4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344F78u;
            goto label_344f78;
        }
    }
    ctx->pc = 0x344F30u;
label_344f30:
    // 0x344f30: 0xc6600074  lwc1        $f0, 0x74($s3)
    ctx->pc = 0x344f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344f34:
    // 0x344f34: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x344f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_344f38:
    // 0x344f38: 0xc6610078  lwc1        $f1, 0x78($s3)
    ctx->pc = 0x344f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_344f3c:
    // 0x344f3c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x344f3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_344f40:
    // 0x344f40: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x344f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_344f44:
    // 0x344f44: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x344f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_344f48:
    // 0x344f48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x344f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_344f4c:
    // 0x344f4c: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x344f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_344f50:
    // 0x344f50: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x344f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_344f54:
    // 0x344f54: 0xb06700c7  sdl         $a3, 0xC7($v1)
    ctx->pc = 0x344f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_344f58:
    // 0x344f58: 0xb46700c0  sdr         $a3, 0xC0($v1)
    ctx->pc = 0x344f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_344f5c:
    // 0x344f5c: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x344f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_344f60:
    // 0x344f60: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x344f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_344f64:
    // 0x344f64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x344f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_344f68:
    // 0x344f68: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x344f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_344f6c:
    // 0x344f6c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x344f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_344f70:
    // 0x344f70: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x344f70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
label_344f74:
    // 0x344f74: 0x8e6500a4  lw          $a1, 0xA4($s3)
    ctx->pc = 0x344f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_344f78:
    // 0x344f78: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_344f7c:
    if (ctx->pc == 0x344F7Cu) {
        ctx->pc = 0x344F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F78u;
        // 0x344f7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344F80u;
        goto label_344f80;
    }
    ctx->pc = 0x344F78u;
    {
        const bool branch_taken_0x344f78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x344f78) {
            ctx->pc = 0x344F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344F78u;
            // 0x344f7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344F98u;
            goto label_344f98;
        }
    }
    ctx->pc = 0x344F80u;
label_344f80:
    // 0x344f80: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x344f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_344f84:
    // 0x344f84: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x344f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_344f88:
    // 0x344f88: 0xc0e39e0  jal         func_38E780
label_344f8c:
    if (ctx->pc == 0x344F8Cu) {
        ctx->pc = 0x344F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F88u;
        // 0x344f8c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344F90u;
        goto label_344f90;
    }
    ctx->pc = 0x344F88u;
    SET_GPR_U32(ctx, 31, 0x344F90u);
    ctx->pc = 0x344F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344F88u;
    // 0x344f8c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E780u, 0x344F88u, 0x344F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344F90u;
label_344f90:
    // 0x344f90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x344f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_344f94:
    // 0x344f94: 0x0  nop
    ctx->pc = 0x344f94u;
    // NOP
label_344f98:
    // 0x344f98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x344f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_344f9c:
    // 0x344f9c: 0xc0d1404  jal         func_345010
label_344fa0:
    if (ctx->pc == 0x344FA0u) {
        ctx->pc = 0x344FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344F9Cu;
        // 0x344fa0: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344FA4u;
        goto label_344fa4;
    }
    ctx->pc = 0x344F9Cu;
    SET_GPR_U32(ctx, 31, 0x344FA4u);
    ctx->pc = 0x344FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344F9Cu;
    // 0x344fa0: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345010u, 0x344F9Cu, 0x344FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344FA4u;
label_344fa4:
    // 0x344fa4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_344fa8:
    if (ctx->pc == 0x344FA8u) {
        ctx->pc = 0x344FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FA4u;
        // 0x344fa8: 0x8f85a858  lw          $a1, -0x57A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344FACu;
        goto label_344fac;
    }
    ctx->pc = 0x344FA4u;
    {
        const bool branch_taken_0x344fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FA4u;
        // 0x344fa8: 0x8f85a858  lw          $a1, -0x57A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344fa4) {
            ctx->pc = 0x344FECu;
            goto label_344fec;
        }
    }
    ctx->pc = 0x344FACu;
label_344fac:
    // 0x344fac: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x344facu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_344fb0:
    // 0x344fb0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x344fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_344fb4:
    // 0x344fb4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x344fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_344fb8:
    // 0x344fb8: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x344fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_344fbc:
    // 0x344fbc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x344fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_344fc0:
    // 0x344fc0: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x344fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_344fc4:
    // 0x344fc4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x344fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_344fc8:
    // 0x344fc8: 0xaca400ac  sw          $a0, 0xAC($a1)
    ctx->pc = 0x344fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 172), GPR_U32(ctx, 4));
label_344fcc:
    // 0x344fcc: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x344fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_344fd0:
    // 0x344fd0: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x344fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_344fd4:
    // 0x344fd4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x344fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_344fd8:
    // 0x344fd8: 0xaca400b0  sw          $a0, 0xB0($a1)
    ctx->pc = 0x344fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 176), GPR_U32(ctx, 4));
label_344fdc:
    // 0x344fdc: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x344fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
label_344fe0:
    // 0x344fe0: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x344fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_344fe4:
    // 0x344fe4: 0x10000002  b           . + 4 + (0x2 << 2)
label_344fe8:
    if (ctx->pc == 0x344FE8u) {
        ctx->pc = 0x344FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FE4u;
        // 0x344fe8: 0xaca400b4  sw          $a0, 0xB4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 180), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344FECu;
        goto label_344fec;
    }
    ctx->pc = 0x344FE4u;
    {
        const bool branch_taken_0x344fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FE4u;
        // 0x344fe8: 0xaca400b4  sw          $a0, 0xB4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 180), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344fe4) {
            ctx->pc = 0x344FF0u;
            goto label_344ff0;
        }
    }
    ctx->pc = 0x344FECu;
label_344fec:
    // 0x344fec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x344fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_344ff0:
    // 0x344ff0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x344ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_344ff4:
    // 0x344ff4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x344ff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_344ff8:
    // 0x344ff8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x344ff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_344ffc:
    // 0x344ffc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x344ffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_345000:
    // 0x345000: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x345000u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_345004:
    // 0x345004: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x345004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_345008:
    // 0x345008: 0x3e00008  jr          $ra
label_34500c:
    if (ctx->pc == 0x34500Cu) {
        ctx->pc = 0x34500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345008u;
        // 0x34500c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345010u;
        goto label_fallthrough_0x345008;
    }
    ctx->pc = 0x345008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345008u;
        // 0x34500c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x345008:
    ctx->pc = 0x345010u;
}
