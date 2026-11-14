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

// Function: sub_00446990
// Address: 0x446990 - 0x446d70
void sub_00446990_0x446990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00446990_0x446990");
#endif

    switch (ctx->pc) {
        case 0x446990u: goto label_446990;
        case 0x446994u: goto label_446994;
        case 0x446998u: goto label_446998;
        case 0x44699cu: goto label_44699c;
        case 0x4469a0u: goto label_4469a0;
        case 0x4469a4u: goto label_4469a4;
        case 0x4469a8u: goto label_4469a8;
        case 0x4469acu: goto label_4469ac;
        case 0x4469b0u: goto label_4469b0;
        case 0x4469b4u: goto label_4469b4;
        case 0x4469b8u: goto label_4469b8;
        case 0x4469bcu: goto label_4469bc;
        case 0x4469c0u: goto label_4469c0;
        case 0x4469c4u: goto label_4469c4;
        case 0x4469c8u: goto label_4469c8;
        case 0x4469ccu: goto label_4469cc;
        case 0x4469d0u: goto label_4469d0;
        case 0x4469d4u: goto label_4469d4;
        case 0x4469d8u: goto label_4469d8;
        case 0x4469dcu: goto label_4469dc;
        case 0x4469e0u: goto label_4469e0;
        case 0x4469e4u: goto label_4469e4;
        case 0x4469e8u: goto label_4469e8;
        case 0x4469ecu: goto label_4469ec;
        case 0x4469f0u: goto label_4469f0;
        case 0x4469f4u: goto label_4469f4;
        case 0x4469f8u: goto label_4469f8;
        case 0x4469fcu: goto label_4469fc;
        case 0x446a00u: goto label_446a00;
        case 0x446a04u: goto label_446a04;
        case 0x446a08u: goto label_446a08;
        case 0x446a0cu: goto label_446a0c;
        case 0x446a10u: goto label_446a10;
        case 0x446a14u: goto label_446a14;
        case 0x446a18u: goto label_446a18;
        case 0x446a1cu: goto label_446a1c;
        case 0x446a20u: goto label_446a20;
        case 0x446a24u: goto label_446a24;
        case 0x446a28u: goto label_446a28;
        case 0x446a2cu: goto label_446a2c;
        case 0x446a30u: goto label_446a30;
        case 0x446a34u: goto label_446a34;
        case 0x446a38u: goto label_446a38;
        case 0x446a3cu: goto label_446a3c;
        case 0x446a40u: goto label_446a40;
        case 0x446a44u: goto label_446a44;
        case 0x446a48u: goto label_446a48;
        case 0x446a4cu: goto label_446a4c;
        case 0x446a50u: goto label_446a50;
        case 0x446a54u: goto label_446a54;
        case 0x446a58u: goto label_446a58;
        case 0x446a5cu: goto label_446a5c;
        case 0x446a60u: goto label_446a60;
        case 0x446a64u: goto label_446a64;
        case 0x446a68u: goto label_446a68;
        case 0x446a6cu: goto label_446a6c;
        case 0x446a70u: goto label_446a70;
        case 0x446a74u: goto label_446a74;
        case 0x446a78u: goto label_446a78;
        case 0x446a7cu: goto label_446a7c;
        case 0x446a80u: goto label_446a80;
        case 0x446a84u: goto label_446a84;
        case 0x446a88u: goto label_446a88;
        case 0x446a8cu: goto label_446a8c;
        case 0x446a90u: goto label_446a90;
        case 0x446a94u: goto label_446a94;
        case 0x446a98u: goto label_446a98;
        case 0x446a9cu: goto label_446a9c;
        case 0x446aa0u: goto label_446aa0;
        case 0x446aa4u: goto label_446aa4;
        case 0x446aa8u: goto label_446aa8;
        case 0x446aacu: goto label_446aac;
        case 0x446ab0u: goto label_446ab0;
        case 0x446ab4u: goto label_446ab4;
        case 0x446ab8u: goto label_446ab8;
        case 0x446abcu: goto label_446abc;
        case 0x446ac0u: goto label_446ac0;
        case 0x446ac4u: goto label_446ac4;
        case 0x446ac8u: goto label_446ac8;
        case 0x446accu: goto label_446acc;
        case 0x446ad0u: goto label_446ad0;
        case 0x446ad4u: goto label_446ad4;
        case 0x446ad8u: goto label_446ad8;
        case 0x446adcu: goto label_446adc;
        case 0x446ae0u: goto label_446ae0;
        case 0x446ae4u: goto label_446ae4;
        case 0x446ae8u: goto label_446ae8;
        case 0x446aecu: goto label_446aec;
        case 0x446af0u: goto label_446af0;
        case 0x446af4u: goto label_446af4;
        case 0x446af8u: goto label_446af8;
        case 0x446afcu: goto label_446afc;
        case 0x446b00u: goto label_446b00;
        case 0x446b04u: goto label_446b04;
        case 0x446b08u: goto label_446b08;
        case 0x446b0cu: goto label_446b0c;
        case 0x446b10u: goto label_446b10;
        case 0x446b14u: goto label_446b14;
        case 0x446b18u: goto label_446b18;
        case 0x446b1cu: goto label_446b1c;
        case 0x446b20u: goto label_446b20;
        case 0x446b24u: goto label_446b24;
        case 0x446b28u: goto label_446b28;
        case 0x446b2cu: goto label_446b2c;
        case 0x446b30u: goto label_446b30;
        case 0x446b34u: goto label_446b34;
        case 0x446b38u: goto label_446b38;
        case 0x446b3cu: goto label_446b3c;
        case 0x446b40u: goto label_446b40;
        case 0x446b44u: goto label_446b44;
        case 0x446b48u: goto label_446b48;
        case 0x446b4cu: goto label_446b4c;
        case 0x446b50u: goto label_446b50;
        case 0x446b54u: goto label_446b54;
        case 0x446b58u: goto label_446b58;
        case 0x446b5cu: goto label_446b5c;
        case 0x446b60u: goto label_446b60;
        case 0x446b64u: goto label_446b64;
        case 0x446b68u: goto label_446b68;
        case 0x446b6cu: goto label_446b6c;
        case 0x446b70u: goto label_446b70;
        case 0x446b74u: goto label_446b74;
        case 0x446b78u: goto label_446b78;
        case 0x446b7cu: goto label_446b7c;
        case 0x446b80u: goto label_446b80;
        case 0x446b84u: goto label_446b84;
        case 0x446b88u: goto label_446b88;
        case 0x446b8cu: goto label_446b8c;
        case 0x446b90u: goto label_446b90;
        case 0x446b94u: goto label_446b94;
        case 0x446b98u: goto label_446b98;
        case 0x446b9cu: goto label_446b9c;
        case 0x446ba0u: goto label_446ba0;
        case 0x446ba4u: goto label_446ba4;
        case 0x446ba8u: goto label_446ba8;
        case 0x446bacu: goto label_446bac;
        case 0x446bb0u: goto label_446bb0;
        case 0x446bb4u: goto label_446bb4;
        case 0x446bb8u: goto label_446bb8;
        case 0x446bbcu: goto label_446bbc;
        case 0x446bc0u: goto label_446bc0;
        case 0x446bc4u: goto label_446bc4;
        case 0x446bc8u: goto label_446bc8;
        case 0x446bccu: goto label_446bcc;
        case 0x446bd0u: goto label_446bd0;
        case 0x446bd4u: goto label_446bd4;
        case 0x446bd8u: goto label_446bd8;
        case 0x446bdcu: goto label_446bdc;
        case 0x446be0u: goto label_446be0;
        case 0x446be4u: goto label_446be4;
        case 0x446be8u: goto label_446be8;
        case 0x446becu: goto label_446bec;
        case 0x446bf0u: goto label_446bf0;
        case 0x446bf4u: goto label_446bf4;
        case 0x446bf8u: goto label_446bf8;
        case 0x446bfcu: goto label_446bfc;
        case 0x446c00u: goto label_446c00;
        case 0x446c04u: goto label_446c04;
        case 0x446c08u: goto label_446c08;
        case 0x446c0cu: goto label_446c0c;
        case 0x446c10u: goto label_446c10;
        case 0x446c14u: goto label_446c14;
        case 0x446c18u: goto label_446c18;
        case 0x446c1cu: goto label_446c1c;
        case 0x446c20u: goto label_446c20;
        case 0x446c24u: goto label_446c24;
        case 0x446c28u: goto label_446c28;
        case 0x446c2cu: goto label_446c2c;
        case 0x446c30u: goto label_446c30;
        case 0x446c34u: goto label_446c34;
        case 0x446c38u: goto label_446c38;
        case 0x446c3cu: goto label_446c3c;
        case 0x446c40u: goto label_446c40;
        case 0x446c44u: goto label_446c44;
        case 0x446c48u: goto label_446c48;
        case 0x446c4cu: goto label_446c4c;
        case 0x446c50u: goto label_446c50;
        case 0x446c54u: goto label_446c54;
        case 0x446c58u: goto label_446c58;
        case 0x446c5cu: goto label_446c5c;
        case 0x446c60u: goto label_446c60;
        case 0x446c64u: goto label_446c64;
        case 0x446c68u: goto label_446c68;
        case 0x446c6cu: goto label_446c6c;
        case 0x446c70u: goto label_446c70;
        case 0x446c74u: goto label_446c74;
        case 0x446c78u: goto label_446c78;
        case 0x446c7cu: goto label_446c7c;
        case 0x446c80u: goto label_446c80;
        case 0x446c84u: goto label_446c84;
        case 0x446c88u: goto label_446c88;
        case 0x446c8cu: goto label_446c8c;
        case 0x446c90u: goto label_446c90;
        case 0x446c94u: goto label_446c94;
        case 0x446c98u: goto label_446c98;
        case 0x446c9cu: goto label_446c9c;
        case 0x446ca0u: goto label_446ca0;
        case 0x446ca4u: goto label_446ca4;
        case 0x446ca8u: goto label_446ca8;
        case 0x446cacu: goto label_446cac;
        case 0x446cb0u: goto label_446cb0;
        case 0x446cb4u: goto label_446cb4;
        case 0x446cb8u: goto label_446cb8;
        case 0x446cbcu: goto label_446cbc;
        case 0x446cc0u: goto label_446cc0;
        case 0x446cc4u: goto label_446cc4;
        case 0x446cc8u: goto label_446cc8;
        case 0x446cccu: goto label_446ccc;
        case 0x446cd0u: goto label_446cd0;
        case 0x446cd4u: goto label_446cd4;
        case 0x446cd8u: goto label_446cd8;
        case 0x446cdcu: goto label_446cdc;
        case 0x446ce0u: goto label_446ce0;
        case 0x446ce4u: goto label_446ce4;
        case 0x446ce8u: goto label_446ce8;
        case 0x446cecu: goto label_446cec;
        case 0x446cf0u: goto label_446cf0;
        case 0x446cf4u: goto label_446cf4;
        case 0x446cf8u: goto label_446cf8;
        case 0x446cfcu: goto label_446cfc;
        case 0x446d00u: goto label_446d00;
        case 0x446d04u: goto label_446d04;
        case 0x446d08u: goto label_446d08;
        case 0x446d0cu: goto label_446d0c;
        case 0x446d10u: goto label_446d10;
        case 0x446d14u: goto label_446d14;
        case 0x446d18u: goto label_446d18;
        case 0x446d1cu: goto label_446d1c;
        case 0x446d20u: goto label_446d20;
        case 0x446d24u: goto label_446d24;
        case 0x446d28u: goto label_446d28;
        case 0x446d2cu: goto label_446d2c;
        case 0x446d30u: goto label_446d30;
        case 0x446d34u: goto label_446d34;
        case 0x446d38u: goto label_446d38;
        case 0x446d3cu: goto label_446d3c;
        case 0x446d40u: goto label_446d40;
        case 0x446d44u: goto label_446d44;
        case 0x446d48u: goto label_446d48;
        case 0x446d4cu: goto label_446d4c;
        case 0x446d50u: goto label_446d50;
        case 0x446d54u: goto label_446d54;
        case 0x446d58u: goto label_446d58;
        case 0x446d5cu: goto label_446d5c;
        case 0x446d60u: goto label_446d60;
        case 0x446d64u: goto label_446d64;
        case 0x446d68u: goto label_446d68;
        case 0x446d6cu: goto label_446d6c;
        default: break;
    }

    ctx->pc = 0x446990u;

label_446990:
    // 0x446990: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x446990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_446994:
    // 0x446994: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x446994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_446998:
    // 0x446998: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x446998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_44699c:
    // 0x44699c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x44699cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4469a0:
    // 0x4469a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4469a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4469a4:
    // 0x4469a4: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x4469a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_4469a8:
    // 0x4469a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4469a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4469ac:
    // 0x4469ac: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x4469acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_4469b0:
    // 0x4469b0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x4469b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_4469b4:
    // 0x4469b4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x4469b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4469b8:
    // 0x4469b8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4469b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_4469bc:
    // 0x4469bc: 0x1e182b  sltu        $v1, $zero, $fp
    ctx->pc = 0x4469bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_4469c0:
    // 0x4469c0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x4469c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_4469c4:
    // 0x4469c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4469c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4469c8:
    // 0x4469c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4469c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_4469cc:
    // 0x4469cc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x4469ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_4469d0:
    // 0x4469d0: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x4469d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4469d4:
    // 0x4469d4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x4469d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_4469d8:
    // 0x4469d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4469d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4469dc:
    // 0x4469dc: 0xc0bc60c  jal         func_2F1830
label_4469e0:
    if (ctx->pc == 0x4469E0u) {
        ctx->pc = 0x4469E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4469DCu;
        // 0x4469e0: 0x43b821  addu        $s7, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4469E4u;
        goto label_4469e4;
    }
    ctx->pc = 0x4469DCu;
    SET_GPR_U32(ctx, 31, 0x4469E4u);
    ctx->pc = 0x4469E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4469DCu;
    // 0x4469e0: 0x43b821  addu        $s7, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x4469DCu, 0x4469E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4469E4u;
label_4469e4:
    // 0x4469e4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x4469e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4469e8:
    // 0x4469e8: 0x8e27002c  lw          $a3, 0x2C($s1)
    ctx->pc = 0x4469e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_4469ec:
    // 0x4469ec: 0x2e32018  mult        $a0, $s7, $v1
    ctx->pc = 0x4469ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4469f0:
    // 0x4469f0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4469f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4469f4:
    // 0x4469f4: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x4469f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4469f8:
    // 0x4469f8: 0x34c6fffc  ori         $a2, $a2, 0xFFFC
    ctx->pc = 0x4469f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65532);
label_4469fc:
    // 0x4469fc: 0x172880  sll         $a1, $s7, 2
    ctx->pc = 0x4469fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_446a00:
    // 0x446a00: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x446a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_446a04:
    // 0x446a04: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x446a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_446a08:
    // 0x446a08: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x446a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_446a0c:
    // 0x446a0c: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x446a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_446a10:
    // 0x446a10: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x446a10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_446a14:
    // 0x446a14: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x446a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_446a18:
    // 0x446a18: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x446a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_446a1c:
    // 0x446a1c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x446a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_446a20:
    // 0x446a20: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x446a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_446a24:
    // 0x446a24: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x446a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_446a28:
    // 0x446a28: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x446a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_446a2c:
    // 0x446a2c: 0x10e00013  beqz        $a3, . + 4 + (0x13 << 2)
label_446a30:
    if (ctx->pc == 0x446A30u) {
        ctx->pc = 0x446A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446A2Cu;
        // 0x446a30: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446A34u;
        goto label_446a34;
    }
    ctx->pc = 0x446A2Cu;
    {
        const bool branch_taken_0x446a2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x446A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446A2Cu;
        // 0x446a30: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446a2c) {
            ctx->pc = 0x446A7Cu;
            goto label_446a7c;
        }
    }
    ctx->pc = 0x446A34u;
label_446a34:
    // 0x446a34: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x446a34u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_446a38:
    // 0x446a38: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x446a38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_446a3c:
    // 0x446a3c: 0x3652fffc  ori         $s2, $s2, 0xFFFC
    ctx->pc = 0x446a3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65532);
label_446a40:
    // 0x446a40: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x446a40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_446a44:
    // 0x446a44: 0x0  nop
    ctx->pc = 0x446a44u;
    // NOP
label_446a48:
    // 0x446a48: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x446a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_446a4c:
    // 0x446a4c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x446a4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_446a50:
    // 0x446a50: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x446a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_446a54:
    // 0x446a54: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x446a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_446a58:
    // 0x446a58: 0xc0bc60c  jal         func_2F1830
label_446a5c:
    if (ctx->pc == 0x446A5Cu) {
        ctx->pc = 0x446A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446A58u;
        // 0x446a5c: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446A60u;
        goto label_446a60;
    }
    ctx->pc = 0x446A58u;
    SET_GPR_U32(ctx, 31, 0x446A60u);
    ctx->pc = 0x446A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446A58u;
    // 0x446a5c: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x446A58u, 0x446A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446A60u;
label_446a60:
    // 0x446a60: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x446a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_446a64:
    // 0x446a64: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x446a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_446a68:
    // 0x446a68: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x446a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_446a6c:
    // 0x446a6c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x446a6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_446a70:
    // 0x446a70: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x446a70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_446a74:
    // 0x446a74: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_446a78:
    if (ctx->pc == 0x446A78u) {
        ctx->pc = 0x446A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446A74u;
        // 0x446a78: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446A7Cu;
        goto label_446a7c;
    }
    ctx->pc = 0x446A74u;
    {
        const bool branch_taken_0x446a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x446A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446A74u;
        // 0x446a78: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446a74) {
            ctx->pc = 0x446A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_446a48;
        }
    }
    ctx->pc = 0x446A7Cu;
label_446a7c:
    // 0x446a7c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x446a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_446a80:
    // 0x446a80: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x446a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_446a84:
    // 0x446a84: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x446a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_446a88:
    // 0x446a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x446a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_446a8c:
    // 0x446a8c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x446a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_446a90:
    // 0x446a90: 0x40f809  jalr        $v0
label_446a94:
    if (ctx->pc == 0x446A94u) {
        ctx->pc = 0x446A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446A90u;
        // 0x446a94: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x446A98u;
        goto label_446a98;
    }
    ctx->pc = 0x446A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x446A98u);
        ctx->pc = 0x446A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446A90u;
        // 0x446a94: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446A90u, 0x446A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x446A98u;
label_446a98:
    // 0x446a98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x446a98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_446a9c:
    // 0x446a9c: 0x1240009d  beqz        $s2, . + 4 + (0x9D << 2)
label_446aa0:
    if (ctx->pc == 0x446AA0u) {
        ctx->pc = 0x446AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446A9Cu;
        // 0x446aa0: 0x17b080  sll         $s6, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446AA4u;
        goto label_446aa4;
    }
    ctx->pc = 0x446A9Cu;
    {
        const bool branch_taken_0x446a9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x446AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446A9Cu;
        // 0x446aa0: 0x17b080  sll         $s6, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446a9c) {
            ctx->pc = 0x446D14u;
            goto label_446d14;
        }
    }
    ctx->pc = 0x446AA4u;
label_446aa4:
    // 0x446aa4: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x446aa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_446aa8:
    // 0x446aa8: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x446aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_446aac:
    // 0x446aac: 0x26720040  addiu       $s2, $s3, 0x40
    ctx->pc = 0x446aacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_446ab0:
    // 0x446ab0: 0x3610fffc  ori         $s0, $s0, 0xFFFC
    ctx->pc = 0x446ab0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65532);
label_446ab4:
    // 0x446ab4: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x446ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
label_446ab8:
    // 0x446ab8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x446ab8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_446abc:
    // 0x446abc: 0xc0bc60c  jal         func_2F1830
label_446ac0:
    if (ctx->pc == 0x446AC0u) {
        ctx->pc = 0x446AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446ABCu;
        // 0x446ac0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446AC4u;
        goto label_446ac4;
    }
    ctx->pc = 0x446ABCu;
    SET_GPR_U32(ctx, 31, 0x446AC4u);
    ctx->pc = 0x446AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446ABCu;
    // 0x446ac0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x446ABCu, 0x446AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446AC4u;
label_446ac4:
    // 0x446ac4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x446ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_446ac8:
    // 0x446ac8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x446ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_446acc:
    // 0x446acc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x446accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_446ad0:
    // 0x446ad0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x446ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_446ad4:
    // 0x446ad4: 0xc0bc5c6  jal         func_2F1718
label_446ad8:
    if (ctx->pc == 0x446AD8u) {
        ctx->pc = 0x446AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446AD4u;
        // 0x446ad8: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446ADCu;
        goto label_446adc;
    }
    ctx->pc = 0x446AD4u;
    SET_GPR_U32(ctx, 31, 0x446ADCu);
    ctx->pc = 0x446AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446AD4u;
    // 0x446ad8: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x446AD4u, 0x446ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446ADCu;
label_446adc:
    // 0x446adc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x446adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_446ae0:
    // 0x446ae0: 0x6a24000b  ldl         $a0, 0xB($s1)
    ctx->pc = 0x446ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_446ae4:
    // 0x446ae4: 0x6e240004  ldr         $a0, 0x4($s1)
    ctx->pc = 0x446ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_446ae8:
    // 0x446ae8: 0x6a250013  ldl         $a1, 0x13($s1)
    ctx->pc = 0x446ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_446aec:
    // 0x446aec: 0x6e25000c  ldr         $a1, 0xC($s1)
    ctx->pc = 0x446aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_446af0:
    // 0x446af0: 0x6a26001b  ldl         $a2, 0x1B($s1)
    ctx->pc = 0x446af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_446af4:
    // 0x446af4: 0x6e260014  ldr         $a2, 0x14($s1)
    ctx->pc = 0x446af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_446af8:
    // 0x446af8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x446af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_446afc:
    // 0x446afc: 0xb264000b  sdl         $a0, 0xB($s3)
    ctx->pc = 0x446afcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_446b00:
    // 0x446b00: 0xb6640004  sdr         $a0, 0x4($s3)
    ctx->pc = 0x446b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_446b04:
    // 0x446b04: 0xb2650013  sdl         $a1, 0x13($s3)
    ctx->pc = 0x446b04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_446b08:
    // 0x446b08: 0xb665000c  sdr         $a1, 0xC($s3)
    ctx->pc = 0x446b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_446b0c:
    // 0x446b0c: 0xb266001b  sdl         $a2, 0x1B($s3)
    ctx->pc = 0x446b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_446b10:
    // 0x446b10: 0xb6660014  sdr         $a2, 0x14($s3)
    ctx->pc = 0x446b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_446b14:
    // 0x446b14: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x446b14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_446b18:
    // 0x446b18: 0x2e31818  mult        $v1, $s7, $v1
    ctx->pc = 0x446b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_446b1c:
    // 0x446b1c: 0xae770020  sw          $s7, 0x20($s3)
    ctx->pc = 0x446b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 23));
label_446b20:
    // 0x446b20: 0xae720024  sw          $s2, 0x24($s3)
    ctx->pc = 0x446b20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 18));
label_446b24:
    // 0x446b24: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x446b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_446b28:
    // 0x446b28: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x446b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_446b2c:
    // 0x446b2c: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x446b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_446b30:
    // 0x446b30: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_446b34:
    if (ctx->pc == 0x446B34u) {
        ctx->pc = 0x446B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446B30u;
        // 0x446b34: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446B38u;
        goto label_446b38;
    }
    ctx->pc = 0x446B30u;
    {
        const bool branch_taken_0x446b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446B30u;
        // 0x446b34: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446b30) {
            ctx->pc = 0x446B70u;
            goto label_446b70;
        }
    }
    ctx->pc = 0x446B38u;
label_446b38:
    // 0x446b38: 0x8e660024  lw          $a2, 0x24($s3)
    ctx->pc = 0x446b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_446b3c:
    // 0x446b3c: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x446b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_446b40:
    // 0x446b40: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x446b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_446b44:
    // 0x446b44: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x446b44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_446b48:
    // 0x446b48: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x446b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_446b4c:
    // 0x446b4c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x446b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_446b50:
    // 0x446b50: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x446b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_446b54:
    // 0x446b54: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x446b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_446b58:
    // 0x446b58: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x446b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_446b5c:
    // 0x446b5c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x446b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
label_446b60:
    // 0x446b60: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x446b60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_446b64:
    // 0x446b64: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x446b64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_446b68:
    // 0x446b68: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_446b6c:
    if (ctx->pc == 0x446B6Cu) {
        ctx->pc = 0x446B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446B68u;
        // 0x446b6c: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446B70u;
        goto label_446b70;
    }
    ctx->pc = 0x446B68u;
    {
        const bool branch_taken_0x446b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x446B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446B68u;
        // 0x446b6c: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446b68) {
            ctx->pc = 0x446B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_446b40;
        }
    }
    ctx->pc = 0x446B70u;
label_446b70:
    // 0x446b70: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
label_446b74:
    if (ctx->pc == 0x446B74u) {
        ctx->pc = 0x446B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446B70u;
        // 0x446b74: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446B78u;
        goto label_446b78;
    }
    ctx->pc = 0x446B70u;
    {
        const bool branch_taken_0x446b70 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x446B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446B70u;
        // 0x446b74: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446b70) {
            ctx->pc = 0x446B90u;
            goto label_446b90;
        }
    }
    ctx->pc = 0x446B78u;
label_446b78:
    // 0x446b78: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x446b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_446b7c:
    // 0x446b7c: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x446b7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_446b80:
    // 0x446b80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x446b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_446b84:
    // 0x446b84: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x446b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_446b88:
    // 0x446b88: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x446b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_446b8c:
    // 0x446b8c: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x446b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
label_446b90:
    // 0x446b90: 0xae720028  sw          $s2, 0x28($s3)
    ctx->pc = 0x446b90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 18));
label_446b94:
    // 0x446b94: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x446b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_446b98:
    // 0x446b98: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x446b98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_446b9c:
    // 0x446b9c: 0x2414fffc  addiu       $s4, $zero, -0x4
    ctx->pc = 0x446b9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_446ba0:
    // 0x446ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x446ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_446ba4:
    // 0x446ba4: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x446ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_446ba8:
    // 0x446ba8: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x446ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_446bac:
    // 0x446bac: 0xc0bb778  jal         func_2EDDE0
label_446bb0:
    if (ctx->pc == 0x446BB0u) {
        ctx->pc = 0x446BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446BACu;
        // 0x446bb0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446BB4u;
        goto label_446bb4;
    }
    ctx->pc = 0x446BACu;
    SET_GPR_U32(ctx, 31, 0x446BB4u);
    ctx->pc = 0x446BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446BACu;
    // 0x446bb0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x446BACu, 0x446BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446BB4u;
label_446bb4:
    // 0x446bb4: 0x53c00005  beql        $fp, $zero, . + 4 + (0x5 << 2)
label_446bb8:
    if (ctx->pc == 0x446BB8u) {
        ctx->pc = 0x446BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446BB4u;
        // 0x446bb8: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446BBCu;
        goto label_446bbc;
    }
    ctx->pc = 0x446BB4u;
    {
        const bool branch_taken_0x446bb4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x446bb4) {
            ctx->pc = 0x446BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446BB4u;
            // 0x446bb8: 0x8e24002c  lw          $a0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446BCCu;
            goto label_446bcc;
        }
    }
    ctx->pc = 0x446BBCu;
label_446bbc:
    // 0x446bbc: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x446bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_446bc0:
    // 0x446bc0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x446bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_446bc4:
    // 0x446bc4: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x446bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
label_446bc8:
    // 0x446bc8: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x446bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_446bcc:
    // 0x446bcc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x446bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_446bd0:
    // 0x446bd0: 0xae720030  sw          $s2, 0x30($s3)
    ctx->pc = 0x446bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 18));
label_446bd4:
    // 0x446bd4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x446bd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_446bd8:
    // 0x446bd8: 0xae64002c  sw          $a0, 0x2C($s3)
    ctx->pc = 0x446bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 4));
label_446bdc:
    // 0x446bdc: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x446bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_446be0:
    // 0x446be0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x446be0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_446be4:
    // 0x446be4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x446be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_446be8:
    // 0x446be8: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x446be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_446bec:
    // 0x446bec: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
label_446bf0:
    if (ctx->pc == 0x446BF0u) {
        ctx->pc = 0x446BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446BECu;
        // 0x446bf0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446BF4u;
        goto label_446bf4;
    }
    ctx->pc = 0x446BECu;
    {
        const bool branch_taken_0x446bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x446BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446BECu;
        // 0x446bf0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446bec) {
            ctx->pc = 0x446CCCu;
            goto label_446ccc;
        }
    }
    ctx->pc = 0x446BF4u;
label_446bf4:
    // 0x446bf4: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x446bf4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
label_446bf8:
    // 0x446bf8: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x446bf8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_446bfc:
    // 0x446bfc: 0x3694fffc  ori         $s4, $s4, 0xFFFC
    ctx->pc = 0x446bfcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65532);
label_446c00:
    // 0x446c00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x446c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_446c04:
    // 0x446c04: 0x0  nop
    ctx->pc = 0x446c04u;
    // NOP
label_446c08:
    // 0x446c08: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x446c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_446c0c:
    // 0x446c0c: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x446c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_446c10:
    // 0x446c10: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x446c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_446c14:
    // 0x446c14: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x446c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_446c18:
    // 0x446c18: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x446c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_446c1c:
    // 0x446c1c: 0xc0bc60c  jal         func_2F1830
label_446c20:
    if (ctx->pc == 0x446C20u) {
        ctx->pc = 0x446C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446C1Cu;
        // 0x446c20: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446C24u;
        goto label_446c24;
    }
    ctx->pc = 0x446C1Cu;
    SET_GPR_U32(ctx, 31, 0x446C24u);
    ctx->pc = 0x446C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446C1Cu;
    // 0x446c20: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x446C1Cu, 0x446C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446C24u;
label_446c24:
    // 0x446c24: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x446c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_446c28:
    // 0x446c28: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x446c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_446c2c:
    // 0x446c2c: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x446c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_446c30:
    // 0x446c30: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x446c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_446c34:
    // 0x446c34: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x446c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_446c38:
    // 0x446c38: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x446c38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_446c3c:
    // 0x446c3c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x446c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_446c40:
    // 0x446c40: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x446c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_446c44:
    // 0x446c44: 0xc0bc5c6  jal         func_2F1718
label_446c48:
    if (ctx->pc == 0x446C48u) {
        ctx->pc = 0x446C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446C44u;
        // 0x446c48: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446C4Cu;
        goto label_446c4c;
    }
    ctx->pc = 0x446C44u;
    SET_GPR_U32(ctx, 31, 0x446C4Cu);
    ctx->pc = 0x446C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446C44u;
    // 0x446c48: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x446C44u, 0x446C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446C4Cu;
label_446c4c:
    // 0x446c4c: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x446c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_446c50:
    // 0x446c50: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x446c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_446c54:
    // 0x446c54: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x446c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_446c58:
    // 0x446c58: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x446c58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_446c5c:
    // 0x446c5c: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x446c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
label_446c60:
    // 0x446c60: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x446c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_446c64:
    // 0x446c64: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x446c64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_446c68:
    // 0x446c68: 0x2579021  addu        $s2, $s2, $s7
    ctx->pc = 0x446c68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
label_446c6c:
    // 0x446c6c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x446c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_446c70:
    // 0x446c70: 0xc0bb778  jal         func_2EDDE0
label_446c74:
    if (ctx->pc == 0x446C74u) {
        ctx->pc = 0x446C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446C70u;
        // 0x446c74: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446C78u;
        goto label_446c78;
    }
    ctx->pc = 0x446C70u;
    SET_GPR_U32(ctx, 31, 0x446C78u);
    ctx->pc = 0x446C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446C70u;
    // 0x446c74: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x446C70u, 0x446C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446C78u;
label_446c78:
    // 0x446c78: 0x53c0000a  beql        $fp, $zero, . + 4 + (0xA << 2)
label_446c7c:
    if (ctx->pc == 0x446C7Cu) {
        ctx->pc = 0x446C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446C78u;
        // 0x446c7c: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446C80u;
        goto label_446c80;
    }
    ctx->pc = 0x446C78u;
    {
        const bool branch_taken_0x446c78 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x446c78) {
            ctx->pc = 0x446C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x446C78u;
            // 0x446c7c: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x446CA4u;
            goto label_446ca4;
        }
    }
    ctx->pc = 0x446C80u;
label_446c80:
    // 0x446c80: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x446c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_446c84:
    // 0x446c84: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x446c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_446c88:
    // 0x446c88: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x446c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_446c8c:
    // 0x446c8c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x446c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_446c90:
    // 0x446c90: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x446c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_446c94:
    // 0x446c94: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x446c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_446c98:
    // 0x446c98: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x446c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_446c9c:
    // 0x446c9c: 0xac82fffc  sw          $v0, -0x4($a0)
    ctx->pc = 0x446c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 2));
label_446ca0:
    // 0x446ca0: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x446ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_446ca4:
    // 0x446ca4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x446ca4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_446ca8:
    // 0x446ca8: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x446ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_446cac:
    // 0x446cac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x446cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_446cb0:
    // 0x446cb0: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x446cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_446cb4:
    // 0x446cb4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x446cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_446cb8:
    // 0x446cb8: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x446cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_446cbc:
    // 0x446cbc: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x446cbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_446cc0:
    // 0x446cc0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x446cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_446cc4:
    // 0x446cc4: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
label_446cc8:
    if (ctx->pc == 0x446CC8u) {
        ctx->pc = 0x446CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446CC4u;
        // 0x446cc8: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446CCCu;
        goto label_446ccc;
    }
    ctx->pc = 0x446CC4u;
    {
        const bool branch_taken_0x446cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x446CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446CC4u;
        // 0x446cc8: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446cc4) {
            ctx->pc = 0x446C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_446c08;
        }
    }
    ctx->pc = 0x446CCCu;
label_446ccc:
    // 0x446ccc: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x446cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_446cd0:
    // 0x446cd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x446cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_446cd4:
    // 0x446cd4: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x446cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
label_446cd8:
    // 0x446cd8: 0xae620034  sw          $v0, 0x34($s3)
    ctx->pc = 0x446cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
label_446cdc:
    // 0x446cdc: 0xae630038  sw          $v1, 0x38($s3)
    ctx->pc = 0x446cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 3));
label_446ce0:
    // 0x446ce0: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x446ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_446ce4:
    // 0x446ce4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_446ce8:
    if (ctx->pc == 0x446CE8u) {
        ctx->pc = 0x446CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446CE4u;
        // 0x446ce8: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446CECu;
        goto label_446cec;
    }
    ctx->pc = 0x446CE4u;
    {
        const bool branch_taken_0x446ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x446CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446CE4u;
        // 0x446ce8: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446ce4) {
            ctx->pc = 0x446D0Cu;
            goto label_446d0c;
        }
    }
    ctx->pc = 0x446CECu;
label_446cec:
    // 0x446cec: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x446cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_446cf0:
    // 0x446cf0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_446cf4:
    if (ctx->pc == 0x446CF4u) {
        ctx->pc = 0x446CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446CF0u;
        // 0x446cf4: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446CF8u;
        goto label_446cf8;
    }
    ctx->pc = 0x446CF0u;
    {
        const bool branch_taken_0x446cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446CF0u;
        // 0x446cf4: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446cf0) {
            ctx->pc = 0x446D0Cu;
            goto label_446d0c;
        }
    }
    ctx->pc = 0x446CF8u;
label_446cf8:
    // 0x446cf8: 0x2483e880  addiu       $v1, $a0, -0x1780
    ctx->pc = 0x446cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_446cfc:
    // 0x446cfc: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x446cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_446d00:
    // 0x446d00: 0x40f809  jalr        $v0
label_446d04:
    if (ctx->pc == 0x446D04u) {
        ctx->pc = 0x446D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446D00u;
        // 0x446d04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446D08u;
        goto label_446d08;
    }
    ctx->pc = 0x446D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x446D08u);
        ctx->pc = 0x446D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446D00u;
        // 0x446d04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446D00u, 0x446D08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x446D08u;
label_446d08:
    // 0x446d08: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x446d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_446d0c:
    // 0x446d0c: 0x1000000a  b           . + 4 + (0xA << 2)
label_446d10:
    if (ctx->pc == 0x446D10u) {
        ctx->pc = 0x446D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446D0Cu;
        // 0x446d10: 0xacb30000  sw          $s3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446D14u;
        goto label_446d14;
    }
    ctx->pc = 0x446D0Cu;
    {
        const bool branch_taken_0x446d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446D0Cu;
        // 0x446d10: 0xacb30000  sw          $s3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446d0c) {
            ctx->pc = 0x446D38u;
            goto label_446d38;
        }
    }
    ctx->pc = 0x446D14u;
label_446d14:
    // 0x446d14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x446d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_446d18:
    // 0x446d18: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x446d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_446d1c:
    // 0x446d1c: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x446d1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_446d20:
    // 0x446d20: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x446d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_446d24:
    // 0x446d24: 0xc1035f6  jal         func_40D7D8
label_446d28:
    if (ctx->pc == 0x446D28u) {
        ctx->pc = 0x446D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446D24u;
        // 0x446d28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446D2Cu;
        goto label_446d2c;
    }
    ctx->pc = 0x446D24u;
    SET_GPR_U32(ctx, 31, 0x446D2Cu);
    ctx->pc = 0x446D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446D24u;
    // 0x446d28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x446D24u, 0x446D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446D2Cu;
label_446d2c:
    // 0x446d2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x446d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_446d30:
    // 0x446d30: 0xc103628  jal         func_40D8A0
label_446d34:
    if (ctx->pc == 0x446D34u) {
        ctx->pc = 0x446D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446D30u;
        // 0x446d34: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446D38u;
        goto label_446d38;
    }
    ctx->pc = 0x446D30u;
    SET_GPR_U32(ctx, 31, 0x446D38u);
    ctx->pc = 0x446D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x446D30u;
    // 0x446d34: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x446D30u, 0x446D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446D38u;
label_446d38:
    // 0x446d38: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x446d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_446d3c:
    // 0x446d3c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x446d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_446d40:
    // 0x446d40: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x446d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_446d44:
    // 0x446d44: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x446d44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_446d48:
    // 0x446d48: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x446d48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_446d4c:
    // 0x446d4c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x446d4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_446d50:
    // 0x446d50: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x446d50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_446d54:
    // 0x446d54: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x446d54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_446d58:
    // 0x446d58: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x446d58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_446d5c:
    // 0x446d5c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x446d5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_446d60:
    // 0x446d60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x446d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_446d64:
    // 0x446d64: 0x3e00008  jr          $ra
label_446d68:
    if (ctx->pc == 0x446D68u) {
        ctx->pc = 0x446D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446D64u;
        // 0x446d68: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446D6Cu;
        goto label_446d6c;
    }
    ctx->pc = 0x446D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x446D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446D64u;
        // 0x446d68: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x446D6Cu;
label_446d6c:
    // 0x446d6c: 0x0  nop
    ctx->pc = 0x446d6cu;
    // NOP
    ctx->pc = 0x446d70u;
}
