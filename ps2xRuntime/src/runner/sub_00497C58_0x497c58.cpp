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

// Function: sub_00497C58
// Address: 0x497c58 - 0x498030
void sub_00497C58_0x497c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497C58_0x497c58");
#endif

    switch (ctx->pc) {
        case 0x497c58u: goto label_497c58;
        case 0x497c5cu: goto label_497c5c;
        case 0x497c60u: goto label_497c60;
        case 0x497c64u: goto label_497c64;
        case 0x497c68u: goto label_497c68;
        case 0x497c6cu: goto label_497c6c;
        case 0x497c70u: goto label_497c70;
        case 0x497c74u: goto label_497c74;
        case 0x497c78u: goto label_497c78;
        case 0x497c7cu: goto label_497c7c;
        case 0x497c80u: goto label_497c80;
        case 0x497c84u: goto label_497c84;
        case 0x497c88u: goto label_497c88;
        case 0x497c8cu: goto label_497c8c;
        case 0x497c90u: goto label_497c90;
        case 0x497c94u: goto label_497c94;
        case 0x497c98u: goto label_497c98;
        case 0x497c9cu: goto label_497c9c;
        case 0x497ca0u: goto label_497ca0;
        case 0x497ca4u: goto label_497ca4;
        case 0x497ca8u: goto label_497ca8;
        case 0x497cacu: goto label_497cac;
        case 0x497cb0u: goto label_497cb0;
        case 0x497cb4u: goto label_497cb4;
        case 0x497cb8u: goto label_497cb8;
        case 0x497cbcu: goto label_497cbc;
        case 0x497cc0u: goto label_497cc0;
        case 0x497cc4u: goto label_497cc4;
        case 0x497cc8u: goto label_497cc8;
        case 0x497cccu: goto label_497ccc;
        case 0x497cd0u: goto label_497cd0;
        case 0x497cd4u: goto label_497cd4;
        case 0x497cd8u: goto label_497cd8;
        case 0x497cdcu: goto label_497cdc;
        case 0x497ce0u: goto label_497ce0;
        case 0x497ce4u: goto label_497ce4;
        case 0x497ce8u: goto label_497ce8;
        case 0x497cecu: goto label_497cec;
        case 0x497cf0u: goto label_497cf0;
        case 0x497cf4u: goto label_497cf4;
        case 0x497cf8u: goto label_497cf8;
        case 0x497cfcu: goto label_497cfc;
        case 0x497d00u: goto label_497d00;
        case 0x497d04u: goto label_497d04;
        case 0x497d08u: goto label_497d08;
        case 0x497d0cu: goto label_497d0c;
        case 0x497d10u: goto label_497d10;
        case 0x497d14u: goto label_497d14;
        case 0x497d18u: goto label_497d18;
        case 0x497d1cu: goto label_497d1c;
        case 0x497d20u: goto label_497d20;
        case 0x497d24u: goto label_497d24;
        case 0x497d28u: goto label_497d28;
        case 0x497d2cu: goto label_497d2c;
        case 0x497d30u: goto label_497d30;
        case 0x497d34u: goto label_497d34;
        case 0x497d38u: goto label_497d38;
        case 0x497d3cu: goto label_497d3c;
        case 0x497d40u: goto label_497d40;
        case 0x497d44u: goto label_497d44;
        case 0x497d48u: goto label_497d48;
        case 0x497d4cu: goto label_497d4c;
        case 0x497d50u: goto label_497d50;
        case 0x497d54u: goto label_497d54;
        case 0x497d58u: goto label_497d58;
        case 0x497d5cu: goto label_497d5c;
        case 0x497d60u: goto label_497d60;
        case 0x497d64u: goto label_497d64;
        case 0x497d68u: goto label_497d68;
        case 0x497d6cu: goto label_497d6c;
        case 0x497d70u: goto label_497d70;
        case 0x497d74u: goto label_497d74;
        case 0x497d78u: goto label_497d78;
        case 0x497d7cu: goto label_497d7c;
        case 0x497d80u: goto label_497d80;
        case 0x497d84u: goto label_497d84;
        case 0x497d88u: goto label_497d88;
        case 0x497d8cu: goto label_497d8c;
        case 0x497d90u: goto label_497d90;
        case 0x497d94u: goto label_497d94;
        case 0x497d98u: goto label_497d98;
        case 0x497d9cu: goto label_497d9c;
        case 0x497da0u: goto label_497da0;
        case 0x497da4u: goto label_497da4;
        case 0x497da8u: goto label_497da8;
        case 0x497dacu: goto label_497dac;
        case 0x497db0u: goto label_497db0;
        case 0x497db4u: goto label_497db4;
        case 0x497db8u: goto label_497db8;
        case 0x497dbcu: goto label_497dbc;
        case 0x497dc0u: goto label_497dc0;
        case 0x497dc4u: goto label_497dc4;
        case 0x497dc8u: goto label_497dc8;
        case 0x497dccu: goto label_497dcc;
        case 0x497dd0u: goto label_497dd0;
        case 0x497dd4u: goto label_497dd4;
        case 0x497dd8u: goto label_497dd8;
        case 0x497ddcu: goto label_497ddc;
        case 0x497de0u: goto label_497de0;
        case 0x497de4u: goto label_497de4;
        case 0x497de8u: goto label_497de8;
        case 0x497decu: goto label_497dec;
        case 0x497df0u: goto label_497df0;
        case 0x497df4u: goto label_497df4;
        case 0x497df8u: goto label_497df8;
        case 0x497dfcu: goto label_497dfc;
        case 0x497e00u: goto label_497e00;
        case 0x497e04u: goto label_497e04;
        case 0x497e08u: goto label_497e08;
        case 0x497e0cu: goto label_497e0c;
        case 0x497e10u: goto label_497e10;
        case 0x497e14u: goto label_497e14;
        case 0x497e18u: goto label_497e18;
        case 0x497e1cu: goto label_497e1c;
        case 0x497e20u: goto label_497e20;
        case 0x497e24u: goto label_497e24;
        case 0x497e28u: goto label_497e28;
        case 0x497e2cu: goto label_497e2c;
        case 0x497e30u: goto label_497e30;
        case 0x497e34u: goto label_497e34;
        case 0x497e38u: goto label_497e38;
        case 0x497e3cu: goto label_497e3c;
        case 0x497e40u: goto label_497e40;
        case 0x497e44u: goto label_497e44;
        case 0x497e48u: goto label_497e48;
        case 0x497e4cu: goto label_497e4c;
        case 0x497e50u: goto label_497e50;
        case 0x497e54u: goto label_497e54;
        case 0x497e58u: goto label_497e58;
        case 0x497e5cu: goto label_497e5c;
        case 0x497e60u: goto label_497e60;
        case 0x497e64u: goto label_497e64;
        case 0x497e68u: goto label_497e68;
        case 0x497e6cu: goto label_497e6c;
        case 0x497e70u: goto label_497e70;
        case 0x497e74u: goto label_497e74;
        case 0x497e78u: goto label_497e78;
        case 0x497e7cu: goto label_497e7c;
        case 0x497e80u: goto label_497e80;
        case 0x497e84u: goto label_497e84;
        case 0x497e88u: goto label_497e88;
        case 0x497e8cu: goto label_497e8c;
        case 0x497e90u: goto label_497e90;
        case 0x497e94u: goto label_497e94;
        case 0x497e98u: goto label_497e98;
        case 0x497e9cu: goto label_497e9c;
        case 0x497ea0u: goto label_497ea0;
        case 0x497ea4u: goto label_497ea4;
        case 0x497ea8u: goto label_497ea8;
        case 0x497eacu: goto label_497eac;
        case 0x497eb0u: goto label_497eb0;
        case 0x497eb4u: goto label_497eb4;
        case 0x497eb8u: goto label_497eb8;
        case 0x497ebcu: goto label_497ebc;
        case 0x497ec0u: goto label_497ec0;
        case 0x497ec4u: goto label_497ec4;
        case 0x497ec8u: goto label_497ec8;
        case 0x497eccu: goto label_497ecc;
        case 0x497ed0u: goto label_497ed0;
        case 0x497ed4u: goto label_497ed4;
        case 0x497ed8u: goto label_497ed8;
        case 0x497edcu: goto label_497edc;
        case 0x497ee0u: goto label_497ee0;
        case 0x497ee4u: goto label_497ee4;
        case 0x497ee8u: goto label_497ee8;
        case 0x497eecu: goto label_497eec;
        case 0x497ef0u: goto label_497ef0;
        case 0x497ef4u: goto label_497ef4;
        case 0x497ef8u: goto label_497ef8;
        case 0x497efcu: goto label_497efc;
        case 0x497f00u: goto label_497f00;
        case 0x497f04u: goto label_497f04;
        case 0x497f08u: goto label_497f08;
        case 0x497f0cu: goto label_497f0c;
        case 0x497f10u: goto label_497f10;
        case 0x497f14u: goto label_497f14;
        case 0x497f18u: goto label_497f18;
        case 0x497f1cu: goto label_497f1c;
        case 0x497f20u: goto label_497f20;
        case 0x497f24u: goto label_497f24;
        case 0x497f28u: goto label_497f28;
        case 0x497f2cu: goto label_497f2c;
        case 0x497f30u: goto label_497f30;
        case 0x497f34u: goto label_497f34;
        case 0x497f38u: goto label_497f38;
        case 0x497f3cu: goto label_497f3c;
        case 0x497f40u: goto label_497f40;
        case 0x497f44u: goto label_497f44;
        case 0x497f48u: goto label_497f48;
        case 0x497f4cu: goto label_497f4c;
        case 0x497f50u: goto label_497f50;
        case 0x497f54u: goto label_497f54;
        case 0x497f58u: goto label_497f58;
        case 0x497f5cu: goto label_497f5c;
        case 0x497f60u: goto label_497f60;
        case 0x497f64u: goto label_497f64;
        case 0x497f68u: goto label_497f68;
        case 0x497f6cu: goto label_497f6c;
        case 0x497f70u: goto label_497f70;
        case 0x497f74u: goto label_497f74;
        case 0x497f78u: goto label_497f78;
        case 0x497f7cu: goto label_497f7c;
        case 0x497f80u: goto label_497f80;
        case 0x497f84u: goto label_497f84;
        case 0x497f88u: goto label_497f88;
        case 0x497f8cu: goto label_497f8c;
        case 0x497f90u: goto label_497f90;
        case 0x497f94u: goto label_497f94;
        case 0x497f98u: goto label_497f98;
        case 0x497f9cu: goto label_497f9c;
        case 0x497fa0u: goto label_497fa0;
        case 0x497fa4u: goto label_497fa4;
        case 0x497fa8u: goto label_497fa8;
        case 0x497facu: goto label_497fac;
        case 0x497fb0u: goto label_497fb0;
        case 0x497fb4u: goto label_497fb4;
        case 0x497fb8u: goto label_497fb8;
        case 0x497fbcu: goto label_497fbc;
        case 0x497fc0u: goto label_497fc0;
        case 0x497fc4u: goto label_497fc4;
        case 0x497fc8u: goto label_497fc8;
        case 0x497fccu: goto label_497fcc;
        case 0x497fd0u: goto label_497fd0;
        case 0x497fd4u: goto label_497fd4;
        case 0x497fd8u: goto label_497fd8;
        case 0x497fdcu: goto label_497fdc;
        case 0x497fe0u: goto label_497fe0;
        case 0x497fe4u: goto label_497fe4;
        case 0x497fe8u: goto label_497fe8;
        case 0x497fecu: goto label_497fec;
        case 0x497ff0u: goto label_497ff0;
        case 0x497ff4u: goto label_497ff4;
        case 0x497ff8u: goto label_497ff8;
        case 0x497ffcu: goto label_497ffc;
        case 0x498000u: goto label_498000;
        case 0x498004u: goto label_498004;
        case 0x498008u: goto label_498008;
        case 0x49800cu: goto label_49800c;
        case 0x498010u: goto label_498010;
        case 0x498014u: goto label_498014;
        case 0x498018u: goto label_498018;
        case 0x49801cu: goto label_49801c;
        case 0x498020u: goto label_498020;
        case 0x498024u: goto label_498024;
        case 0x498028u: goto label_498028;
        case 0x49802cu: goto label_49802c;
        default: break;
    }

    ctx->pc = 0x497c58u;

label_497c58:
    // 0x497c58: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x497c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_497c5c:
    // 0x497c5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x497c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497c60:
    // 0x497c60: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x497c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_497c64:
    // 0x497c64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x497c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_497c68:
    // 0x497c68: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x497c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_497c6c:
    // 0x497c6c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x497c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_497c70:
    // 0x497c70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x497c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497c74:
    // 0x497c74: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x497c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_497c78:
    // 0x497c78: 0x2645002c  addiu       $a1, $s2, 0x2C
    ctx->pc = 0x497c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_497c7c:
    // 0x497c7c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x497c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_497c80:
    // 0x497c80: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x497c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_497c84:
    // 0x497c84: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x497c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_497c88:
    // 0x497c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x497c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_497c8c:
    // 0x497c8c: 0xc126852  jal         func_49A148
label_497c90:
    if (ctx->pc == 0x497C90u) {
        ctx->pc = 0x497C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497C8Cu;
        // 0x497c90: 0x2651003c  addiu       $s1, $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497C94u;
        goto label_497c94;
    }
    ctx->pc = 0x497C8Cu;
    SET_GPR_U32(ctx, 31, 0x497C94u);
    ctx->pc = 0x497C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497C8Cu;
    // 0x497c90: 0x2651003c  addiu       $s1, $s2, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A148u, 0x497C8Cu, 0x497C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497C94u;
label_497c94:
    // 0x497c94: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x497c94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497c98:
    // 0x497c98: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x497c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_497c9c:
    // 0x497c9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_497ca0:
    if (ctx->pc == 0x497CA0u) {
        ctx->pc = 0x497CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497C9Cu;
        // 0x497ca0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497CA4u;
        goto label_497ca4;
    }
    ctx->pc = 0x497C9Cu;
    {
        const bool branch_taken_0x497c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497C9Cu;
        // 0x497ca0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497c9c) {
            ctx->pc = 0x497CB0u;
            goto label_497cb0;
        }
    }
    ctx->pc = 0x497CA4u;
label_497ca4:
    // 0x497ca4: 0xc12a47e  jal         func_4A91F8
label_497ca8:
    if (ctx->pc == 0x497CA8u) {
        ctx->pc = 0x497CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497CA4u;
        // 0x497ca8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497CACu;
        goto label_497cac;
    }
    ctx->pc = 0x497CA4u;
    SET_GPR_U32(ctx, 31, 0x497CACu);
    ctx->pc = 0x497CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497CA4u;
    // 0x497ca8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x497CA4u, 0x497CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497CACu;
label_497cac:
    // 0x497cac: 0x2651004c  addiu       $s1, $s2, 0x4C
    ctx->pc = 0x497cacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
label_497cb0:
    // 0x497cb0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x497cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_497cb4:
    // 0x497cb4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_497cb8:
    if (ctx->pc == 0x497CB8u) {
        ctx->pc = 0x497CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497CB4u;
        // 0x497cb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497CBCu;
        goto label_497cbc;
    }
    ctx->pc = 0x497CB4u;
    {
        const bool branch_taken_0x497cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497CB4u;
        // 0x497cb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497cb4) {
            ctx->pc = 0x497CDCu;
            goto label_497cdc;
        }
    }
    ctx->pc = 0x497CBCu;
label_497cbc:
    // 0x497cbc: 0xc12a448  jal         func_4A9120
label_497cc0:
    if (ctx->pc == 0x497CC0u) {
        ctx->pc = 0x497CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497CBCu;
        // 0x497cc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497CC4u;
        goto label_497cc4;
    }
    ctx->pc = 0x497CBCu;
    SET_GPR_U32(ctx, 31, 0x497CC4u);
    ctx->pc = 0x497CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497CBCu;
    // 0x497cc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x497CBCu, 0x497CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497CC4u;
label_497cc4:
    // 0x497cc4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x497cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_497cc8:
    // 0x497cc8: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x497cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_497ccc:
    // 0x497ccc: 0x40f809  jalr        $v0
label_497cd0:
    if (ctx->pc == 0x497CD0u) {
        ctx->pc = 0x497CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497CCCu;
        // 0x497cd0: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497CD4u;
        goto label_497cd4;
    }
    ctx->pc = 0x497CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x497CD4u);
        ctx->pc = 0x497CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497CCCu;
        // 0x497cd0: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497CCCu, 0x497CD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x497CD4u;
label_497cd4:
    // 0x497cd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x497cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_497cd8:
    // 0x497cd8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x497cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_497cdc:
    // 0x497cdc: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x497cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_497ce0:
    // 0x497ce0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_497ce4:
    if (ctx->pc == 0x497CE4u) {
        ctx->pc = 0x497CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497CE0u;
        // 0x497ce4: 0x8e54000c  lw          $s4, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497CE8u;
        goto label_497ce8;
    }
    ctx->pc = 0x497CE0u;
    {
        const bool branch_taken_0x497ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x497ce0) {
            ctx->pc = 0x497CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x497CE0u;
            // 0x497ce4: 0x8e54000c  lw          $s4, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x497CF8u;
            goto label_497cf8;
        }
    }
    ctx->pc = 0x497CE8u;
label_497ce8:
    // 0x497ce8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x497ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_497cec:
    // 0x497cec: 0xae510018  sw          $s1, 0x18($s2)
    ctx->pc = 0x497cecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 17));
label_497cf0:
    // 0x497cf0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x497cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_497cf4:
    // 0x497cf4: 0x8e54000c  lw          $s4, 0xC($s2)
    ctx->pc = 0x497cf4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_497cf8:
    // 0x497cf8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x497cf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497cfc:
    // 0x497cfc: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x497cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
label_497d00:
    // 0x497d00: 0x26560020  addiu       $s6, $s2, 0x20
    ctx->pc = 0x497d00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_497d04:
    // 0x497d04: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x497d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_497d08:
    // 0x497d08: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
label_497d0c:
    if (ctx->pc == 0x497D0Cu) {
        ctx->pc = 0x497D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497D08u;
        // 0x497d0c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497D10u;
        goto label_497d10;
    }
    ctx->pc = 0x497D08u;
    {
        const bool branch_taken_0x497d08 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x497D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497D08u;
        // 0x497d0c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497d08) {
            ctx->pc = 0x497D48u;
            goto label_497d48;
        }
    }
    ctx->pc = 0x497D10u;
label_497d10:
    // 0x497d10: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x497d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_497d14:
    // 0x497d14: 0x1380c0  sll         $s0, $s3, 3
    ctx->pc = 0x497d14u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_497d18:
    // 0x497d18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x497d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_497d1c:
    // 0x497d1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x497d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_497d20:
    // 0x497d20: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x497d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_497d24:
    // 0x497d24: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x497d24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_497d28:
    // 0x497d28: 0xc126736  jal         func_499CD8
label_497d2c:
    if (ctx->pc == 0x497D2Cu) {
        ctx->pc = 0x497D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497D28u;
        // 0x497d2c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497D30u;
        goto label_497d30;
    }
    ctx->pc = 0x497D28u;
    SET_GPR_U32(ctx, 31, 0x497D30u);
    ctx->pc = 0x497D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497D28u;
    // 0x497d2c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499CD8u, 0x497D28u, 0x497D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497D30u;
label_497d30:
    // 0x497d30: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x497d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_497d34:
    // 0x497d34: 0x274202b  sltu        $a0, $s3, $s4
    ctx->pc = 0x497d34u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_497d38:
    // 0x497d38: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x497d38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_497d3c:
    // 0x497d3c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x497d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_497d40:
    // 0x497d40: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
label_497d44:
    if (ctx->pc == 0x497D44u) {
        ctx->pc = 0x497D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497D40u;
        // 0x497d44: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497D48u;
        goto label_497d48;
    }
    ctx->pc = 0x497D40u;
    {
        const bool branch_taken_0x497d40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x497D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497D40u;
        // 0x497d44: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497d40) {
            ctx->pc = 0x497D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_497d10;
        }
    }
    ctx->pc = 0x497D48u;
label_497d48:
    // 0x497d48: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x497d48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_497d4c:
    // 0x497d4c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x497d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_497d50:
    // 0x497d50: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x497d50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_497d54:
    // 0x497d54: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x497d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_497d58:
    // 0x497d58: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x497d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_497d5c:
    // 0x497d5c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x497d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_497d60:
    // 0x497d60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x497d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_497d64:
    // 0x497d64: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x497d64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_497d68:
    // 0x497d68: 0xae440020  sw          $a0, 0x20($s2)
    ctx->pc = 0x497d68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 4));
label_497d6c:
    // 0x497d6c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x497d6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_497d70:
    // 0x497d70: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x497d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_497d74:
    // 0x497d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x497d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_497d78:
    // 0x497d78: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x497d78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_497d7c:
    // 0x497d7c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x497d7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_497d80:
    // 0x497d80: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x497d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_497d84:
    // 0x497d84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x497d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_497d88:
    // 0x497d88: 0xac760004  sw          $s6, 0x4($v1)
    ctx->pc = 0x497d88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 22));
label_497d8c:
    // 0x497d8c: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x497d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_497d90:
    // 0x497d90: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x497d90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_497d94:
    // 0x497d94: 0xac960000  sw          $s6, 0x0($a0)
    ctx->pc = 0x497d94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 22));
label_497d98:
    // 0x497d98: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x497d98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_497d9c:
    // 0x497d9c: 0x3e00008  jr          $ra
label_497da0:
    if (ctx->pc == 0x497DA0u) {
        ctx->pc = 0x497DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497D9Cu;
        // 0x497da0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497DA4u;
        goto label_497da4;
    }
    ctx->pc = 0x497D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497D9Cu;
        // 0x497da0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x497DA4u;
label_497da4:
    // 0x497da4: 0x0  nop
    ctx->pc = 0x497da4u;
    // NOP
label_497da8:
    // 0x497da8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x497da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_497dac:
    // 0x497dac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x497dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497db0:
    // 0x497db0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x497db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_497db4:
    // 0x497db4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x497db4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497db8:
    // 0x497db8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x497db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_497dbc:
    // 0x497dbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x497dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_497dc0:
    // 0x497dc0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x497dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_497dc4:
    // 0x497dc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x497dc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497dc8:
    // 0x497dc8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x497dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_497dcc:
    // 0x497dcc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x497dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_497dd0:
    // 0x497dd0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x497dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_497dd4:
    // 0x497dd4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x497dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_497dd8:
    // 0x497dd8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x497dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_497ddc:
    // 0x497ddc: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x497ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_497de0:
    // 0x497de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x497de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_497de4:
    // 0x497de4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x497de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_497de8:
    // 0x497de8: 0xc12609a  jal         func_498268
label_497dec:
    if (ctx->pc == 0x497DECu) {
        ctx->pc = 0x497DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497DE8u;
        // 0x497dec: 0x8e260018  lw          $a2, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497DF0u;
        goto label_497df0;
    }
    ctx->pc = 0x497DE8u;
    SET_GPR_U32(ctx, 31, 0x497DF0u);
    ctx->pc = 0x497DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497DE8u;
    // 0x497dec: 0x8e260018  lw          $a2, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498268u, 0x497DE8u, 0x497DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497DF0u;
label_497df0:
    // 0x497df0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x497df0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497df4:
    // 0x497df4: 0x56c00003  bnel        $s6, $zero, . + 4 + (0x3 << 2)
label_497df8:
    if (ctx->pc == 0x497DF8u) {
        ctx->pc = 0x497DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497DF4u;
        // 0x497df8: 0x8e35000c  lw          $s5, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497DFCu;
        goto label_497dfc;
    }
    ctx->pc = 0x497DF4u;
    {
        const bool branch_taken_0x497df4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x497df4) {
            ctx->pc = 0x497DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x497DF4u;
            // 0x497df8: 0x8e35000c  lw          $s5, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x497E04u;
            goto label_497e04;
        }
    }
    ctx->pc = 0x497DFCu;
label_497dfc:
    // 0x497dfc: 0x10000034  b           . + 4 + (0x34 << 2)
label_497e00:
    if (ctx->pc == 0x497E00u) {
        ctx->pc = 0x497E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497DFCu;
        // 0x497e00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497E04u;
        goto label_497e04;
    }
    ctx->pc = 0x497DFCu;
    {
        const bool branch_taken_0x497dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497DFCu;
        // 0x497e00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497dfc) {
            ctx->pc = 0x497ED0u;
            goto label_497ed0;
        }
    }
    ctx->pc = 0x497E04u;
label_497e04:
    // 0x497e04: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x497e04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497e08:
    // 0x497e08: 0x12a00030  beqz        $s5, . + 4 + (0x30 << 2)
label_497e0c:
    if (ctx->pc == 0x497E0Cu) {
        ctx->pc = 0x497E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497E08u;
        // 0x497e0c: 0x8ed00000  lw          $s0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497E10u;
        goto label_497e10;
    }
    ctx->pc = 0x497E08u;
    {
        const bool branch_taken_0x497e08 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x497E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497E08u;
        // 0x497e0c: 0x8ed00000  lw          $s0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497e08) {
            ctx->pc = 0x497ECCu;
            goto label_497ecc;
        }
    }
    ctx->pc = 0x497E10u;
label_497e10:
    // 0x497e10: 0x24170018  addiu       $s7, $zero, 0x18
    ctx->pc = 0x497e10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_497e14:
    // 0x497e14: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x497e14u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
label_497e18:
    // 0x497e18: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x497e18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497e1c:
    // 0x497e1c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x497e1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497e20:
    // 0x497e20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x497e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_497e24:
    // 0x497e24: 0x27c52018  addiu       $a1, $fp, 0x2018
    ctx->pc = 0x497e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 8216));
label_497e28:
    // 0x497e28: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x497e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_497e2c:
    // 0x497e2c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x497e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_497e30:
    // 0x497e30: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x497e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_497e34:
    // 0x497e34: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x497e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_497e38:
    // 0x497e38: 0xc12a3ec  jal         func_4A8FB0
label_497e3c:
    if (ctx->pc == 0x497E3Cu) {
        ctx->pc = 0x497E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497E38u;
        // 0x497e3c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497E40u;
        goto label_497e40;
    }
    ctx->pc = 0x497E38u;
    SET_GPR_U32(ctx, 31, 0x497E40u);
    ctx->pc = 0x497E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497E38u;
    // 0x497e3c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x497E38u, 0x497E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497E40u;
label_497e40:
    // 0x497e40: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_497e44:
    if (ctx->pc == 0x497E44u) {
        ctx->pc = 0x497E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497E40u;
        // 0x497e44: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497E48u;
        goto label_497e48;
    }
    ctx->pc = 0x497E40u;
    {
        const bool branch_taken_0x497e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x497E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497E40u;
        // 0x497e44: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497e40) {
            ctx->pc = 0x497E8Cu;
            goto label_497e8c;
        }
    }
    ctx->pc = 0x497E48u;
label_497e48:
    // 0x497e48: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x497e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_497e4c:
    // 0x497e4c: 0xc12a05e  jal         func_4A8178
label_497e50:
    if (ctx->pc == 0x497E50u) {
        ctx->pc = 0x497E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497E4Cu;
        // 0x497e50: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497E54u;
        goto label_497e54;
    }
    ctx->pc = 0x497E4Cu;
    SET_GPR_U32(ctx, 31, 0x497E54u);
    ctx->pc = 0x497E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497E4Cu;
    // 0x497e50: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8178u, 0x497E4Cu, 0x497E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497E54u;
label_497e54:
    // 0x497e54: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x497e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_497e58:
    // 0x497e58: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x497e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497e5c:
    // 0x497e5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x497e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_497e60:
    // 0x497e60: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x497e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_497e64:
    // 0x497e64: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x497e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_497e68:
    // 0x497e68: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x497e68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_497e6c:
    // 0x497e6c: 0xb71818  mult        $v1, $a1, $s7
    ctx->pc = 0x497e6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_497e70:
    // 0x497e70: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x497e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_497e74:
    // 0x497e74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x497e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_497e78:
    // 0x497e78: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x497e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_497e7c:
    // 0x497e7c: 0x40f809  jalr        $v0
label_497e80:
    if (ctx->pc == 0x497E80u) {
        ctx->pc = 0x497E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497E7Cu;
        // 0x497e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497E84u;
        goto label_497e84;
    }
    ctx->pc = 0x497E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x497E84u);
        ctx->pc = 0x497E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497E7Cu;
        // 0x497e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497E7Cu, 0x497E84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x497E84u;
label_497e84:
    // 0x497e84: 0x1000000d  b           . + 4 + (0xD << 2)
label_497e88:
    if (ctx->pc == 0x497E88u) {
        ctx->pc = 0x497E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497E84u;
        // 0x497e88: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497E8Cu;
        goto label_497e8c;
    }
    ctx->pc = 0x497E84u;
    {
        const bool branch_taken_0x497e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x497E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497E84u;
        // 0x497e88: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497e84) {
            ctx->pc = 0x497EBCu;
            goto label_497ebc;
        }
    }
    ctx->pc = 0x497E8Cu;
label_497e8c:
    // 0x497e8c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x497e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_497e90:
    // 0x497e90: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x497e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_497e94:
    // 0x497e94: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x497e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_497e98:
    // 0x497e98: 0x8cc8004c  lw          $t0, 0x4C($a2)
    ctx->pc = 0x497e98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
label_497e9c:
    // 0x497e9c: 0xb71818  mult        $v1, $a1, $s7
    ctx->pc = 0x497e9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_497ea0:
    // 0x497ea0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x497ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_497ea4:
    // 0x497ea4: 0x8d070010  lw          $a3, 0x10($t0)
    ctx->pc = 0x497ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_497ea8:
    // 0x497ea8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x497ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_497eac:
    // 0x497eac: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x497eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_497eb0:
    // 0x497eb0: 0x40f809  jalr        $v0
label_497eb4:
    if (ctx->pc == 0x497EB4u) {
        ctx->pc = 0x497EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497EB0u;
        // 0x497eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497EB8u;
        goto label_497eb8;
    }
    ctx->pc = 0x497EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x497EB8u);
        ctx->pc = 0x497EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497EB0u;
        // 0x497eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497EB0u, 0x497EB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x497EB8u;
label_497eb8:
    // 0x497eb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x497eb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_497ebc:
    // 0x497ebc: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x497ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_497ec0:
    // 0x497ec0: 0x275102b  sltu        $v0, $s3, $s5
    ctx->pc = 0x497ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_497ec4:
    // 0x497ec4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_497ec8:
    if (ctx->pc == 0x497EC8u) {
        ctx->pc = 0x497EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497EC4u;
        // 0x497ec8: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497ECCu;
        goto label_497ecc;
    }
    ctx->pc = 0x497EC4u;
    {
        const bool branch_taken_0x497ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x497EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497EC4u;
        // 0x497ec8: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497ec4) {
            ctx->pc = 0x497E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_497e20;
        }
    }
    ctx->pc = 0x497ECCu;
label_497ecc:
    // 0x497ecc: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x497eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_497ed0:
    // 0x497ed0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x497ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_497ed4:
    // 0x497ed4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x497ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_497ed8:
    // 0x497ed8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x497ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_497edc:
    // 0x497edc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x497edcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_497ee0:
    // 0x497ee0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x497ee0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_497ee4:
    // 0x497ee4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x497ee4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_497ee8:
    // 0x497ee8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x497ee8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_497eec:
    // 0x497eec: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x497eecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_497ef0:
    // 0x497ef0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x497ef0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_497ef4:
    // 0x497ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x497ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_497ef8:
    // 0x497ef8: 0x3e00008  jr          $ra
label_497efc:
    if (ctx->pc == 0x497EFCu) {
        ctx->pc = 0x497EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497EF8u;
        // 0x497efc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497F00u;
        goto label_497f00;
    }
    ctx->pc = 0x497EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497EF8u;
        // 0x497efc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x497F00u;
label_497f00:
    // 0x497f00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x497f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_497f04:
    // 0x497f04: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x497f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_497f08:
    // 0x497f08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x497f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_497f0c:
    // 0x497f0c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x497f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_497f10:
    // 0x497f10: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x497f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_497f14:
    // 0x497f14: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x497f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_497f18:
    // 0x497f18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x497f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_497f1c:
    // 0x497f1c: 0xc125e7a  jal         func_4979E8
label_497f20:
    if (ctx->pc == 0x497F20u) {
        ctx->pc = 0x497F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497F1Cu;
        // 0x497f20: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497F24u;
        goto label_497f24;
    }
    ctx->pc = 0x497F1Cu;
    SET_GPR_U32(ctx, 31, 0x497F24u);
    ctx->pc = 0x497F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497F1Cu;
    // 0x497f20: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4979E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4979E8u, 0x497F1Cu, 0x497F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497F24u;
label_497f24:
    // 0x497f24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x497f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_497f28:
    // 0x497f28: 0x12400038  beqz        $s2, . + 4 + (0x38 << 2)
label_497f2c:
    if (ctx->pc == 0x497F2Cu) {
        ctx->pc = 0x497F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497F28u;
        // 0x497f2c: 0x2411002c  addiu       $s1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497F30u;
        goto label_497f30;
    }
    ctx->pc = 0x497F28u;
    {
        const bool branch_taken_0x497f28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x497F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497F28u;
        // 0x497f2c: 0x2411002c  addiu       $s1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497f28) {
            ctx->pc = 0x49800Cu;
            goto label_49800c;
        }
    }
    ctx->pc = 0x497F30u;
label_497f30:
    // 0x497f30: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x497f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_497f34:
    // 0x497f34: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x497f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_497f38:
    // 0x497f38: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x497f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_497f3c:
    // 0x497f3c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_497f40:
    if (ctx->pc == 0x497F40u) {
        ctx->pc = 0x497F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497F3Cu;
        // 0x497f40: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497F44u;
        goto label_497f44;
    }
    ctx->pc = 0x497F3Cu;
    {
        const bool branch_taken_0x497f3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x497F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497F3Cu;
        // 0x497f40: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497f3c) {
            ctx->pc = 0x497F5Cu;
            goto label_497f5c;
        }
    }
    ctx->pc = 0x497F44u;
label_497f44:
    // 0x497f44: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x497f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_497f48:
    // 0x497f48: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x497f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_497f4c:
    // 0x497f4c: 0x40f809  jalr        $v0
label_497f50:
    if (ctx->pc == 0x497F50u) {
        ctx->pc = 0x497F54u;
        goto label_497f54;
    }
    ctx->pc = 0x497F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x497F54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497F4Cu, 0x497F54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x497F54u;
label_497f54:
    // 0x497f54: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x497f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_497f58:
    // 0x497f58: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x497f58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_497f5c:
    // 0x497f5c: 0x8e53000c  lw          $s3, 0xC($s2)
    ctx->pc = 0x497f5cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_497f60:
    // 0x497f60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x497f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_497f64:
    // 0x497f64: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x497f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_497f68:
    // 0x497f68: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x497f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_497f6c:
    // 0x497f6c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x497f6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_497f70:
    // 0x497f70: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_497f74:
    if (ctx->pc == 0x497F74u) {
        ctx->pc = 0x497F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497F70u;
        // 0x497f74: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497F78u;
        goto label_497f78;
    }
    ctx->pc = 0x497F70u;
    {
        const bool branch_taken_0x497f70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x497F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497F70u;
        // 0x497f74: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497f70) {
            ctx->pc = 0x497FACu;
            goto label_497fac;
        }
    }
    ctx->pc = 0x497F78u;
label_497f78:
    // 0x497f78: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x497f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_497f7c:
    // 0x497f7c: 0x0  nop
    ctx->pc = 0x497f7cu;
    // NOP
label_497f80:
    // 0x497f80: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x497f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_497f84:
    // 0x497f84: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x497f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_497f88:
    // 0x497f88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x497f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_497f8c:
    // 0x497f8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x497f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_497f90:
    // 0x497f90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x497f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_497f94:
    // 0x497f94: 0xc126736  jal         func_499CD8
label_497f98:
    if (ctx->pc == 0x497F98u) {
        ctx->pc = 0x497F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497F94u;
        // 0x497f98: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497F9Cu;
        goto label_497f9c;
    }
    ctx->pc = 0x497F94u;
    SET_GPR_U32(ctx, 31, 0x497F9Cu);
    ctx->pc = 0x497F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497F94u;
    // 0x497f98: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499CD8u, 0x497F94u, 0x497F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497F9Cu;
label_497f9c:
    // 0x497f9c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x497f9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_497fa0:
    // 0x497fa0: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x497fa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_497fa4:
    // 0x497fa4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_497fa8:
    if (ctx->pc == 0x497FA8u) {
        ctx->pc = 0x497FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497FA4u;
        // 0x497fa8: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497FACu;
        goto label_497fac;
    }
    ctx->pc = 0x497FA4u;
    {
        const bool branch_taken_0x497fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x497fa4) {
            ctx->pc = 0x497FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x497FA4u;
            // 0x497fa8: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x497F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_497f80;
        }
    }
    ctx->pc = 0x497FACu;
label_497fac:
    // 0x497fac: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x497facu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_497fb0:
    // 0x497fb0: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x497fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_497fb4:
    // 0x497fb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x497fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_497fb8:
    // 0x497fb8: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x497fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_497fbc:
    // 0x497fbc: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x497fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_497fc0:
    // 0x497fc0: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x497fc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_497fc4:
    // 0x497fc4: 0xc103404  jal         func_40D010
label_497fc8:
    if (ctx->pc == 0x497FC8u) {
        ctx->pc = 0x497FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497FC4u;
        // 0x497fc8: 0x24080037  addiu       $t0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497FCCu;
        goto label_497fcc;
    }
    ctx->pc = 0x497FC4u;
    SET_GPR_U32(ctx, 31, 0x497FCCu);
    ctx->pc = 0x497FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497FC4u;
    // 0x497fc8: 0x24080037  addiu       $t0, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x497FC4u, 0x497FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497FCCu;
label_497fcc:
    // 0x497fcc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_497fd0:
    if (ctx->pc == 0x497FD0u) {
        ctx->pc = 0x497FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497FCCu;
        // 0x497fd0: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497FD4u;
        goto label_497fd4;
    }
    ctx->pc = 0x497FCCu;
    {
        const bool branch_taken_0x497fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497FCCu;
        // 0x497fd0: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497fcc) {
            ctx->pc = 0x49800Cu;
            goto label_49800c;
        }
    }
    ctx->pc = 0x497FD4u;
label_497fd4:
    // 0x497fd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x497fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_497fd8:
    // 0x497fd8: 0x24050801  addiu       $a1, $zero, 0x801
    ctx->pc = 0x497fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
label_497fdc:
    // 0x497fdc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x497fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_497fe0:
    // 0x497fe0: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x497fe0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_497fe4:
    // 0x497fe4: 0xc103404  jal         func_40D010
label_497fe8:
    if (ctx->pc == 0x497FE8u) {
        ctx->pc = 0x497FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497FE4u;
        // 0x497fe8: 0x24080037  addiu       $t0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497FECu;
        goto label_497fec;
    }
    ctx->pc = 0x497FE4u;
    SET_GPR_U32(ctx, 31, 0x497FECu);
    ctx->pc = 0x497FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497FE4u;
    // 0x497fe8: 0x24080037  addiu       $t0, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x497FE4u, 0x497FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497FECu;
label_497fec:
    // 0x497fec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_497ff0:
    if (ctx->pc == 0x497FF0u) {
        ctx->pc = 0x497FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497FECu;
        // 0x497ff0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x497FF4u;
        goto label_497ff4;
    }
    ctx->pc = 0x497FECu;
    {
        const bool branch_taken_0x497fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497FECu;
        // 0x497ff0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497fec) {
            ctx->pc = 0x49800Cu;
            goto label_49800c;
        }
    }
    ctx->pc = 0x497FF4u;
label_497ff4:
    // 0x497ff4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x497ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_497ff8:
    // 0x497ff8: 0xc10486e  jal         func_4121B8
label_497ffc:
    if (ctx->pc == 0x497FFCu) {
        ctx->pc = 0x497FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497FF8u;
        // 0x497ffc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498000u;
        goto label_498000;
    }
    ctx->pc = 0x497FF8u;
    SET_GPR_U32(ctx, 31, 0x498000u);
    ctx->pc = 0x497FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497FF8u;
    // 0x497ffc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x497FF8u, 0x498000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498000u;
label_498000:
    // 0x498000: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x498000u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_498004:
    // 0x498004: 0x10000002  b           . + 4 + (0x2 << 2)
label_498008:
    if (ctx->pc == 0x498008u) {
        ctx->pc = 0x498008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498004u;
        // 0x498008: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49800Cu;
        goto label_49800c;
    }
    ctx->pc = 0x498004u;
    {
        const bool branch_taken_0x498004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498004u;
        // 0x498008: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498004) {
            ctx->pc = 0x498010u;
            goto label_498010;
        }
    }
    ctx->pc = 0x49800Cu;
label_49800c:
    // 0x49800c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49800cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_498010:
    // 0x498010: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x498010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_498014:
    // 0x498014: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x498014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_498018:
    // 0x498018: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x498018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49801c:
    // 0x49801c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x49801cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_498020:
    // 0x498020: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x498020u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_498024:
    // 0x498024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x498024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_498028:
    // 0x498028: 0x3e00008  jr          $ra
label_49802c:
    if (ctx->pc == 0x49802Cu) {
        ctx->pc = 0x49802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498028u;
        // 0x49802c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498030u;
        goto label_fallthrough_0x498028;
    }
    ctx->pc = 0x498028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498028u;
        // 0x49802c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x498028:
    ctx->pc = 0x498030u;
}
