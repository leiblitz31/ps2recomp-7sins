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

// Function: sub_00471990
// Address: 0x471990 - 0x471dc0
void sub_00471990_0x471990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471990_0x471990");
#endif

    switch (ctx->pc) {
        case 0x471990u: goto label_471990;
        case 0x471994u: goto label_471994;
        case 0x471998u: goto label_471998;
        case 0x47199cu: goto label_47199c;
        case 0x4719a0u: goto label_4719a0;
        case 0x4719a4u: goto label_4719a4;
        case 0x4719a8u: goto label_4719a8;
        case 0x4719acu: goto label_4719ac;
        case 0x4719b0u: goto label_4719b0;
        case 0x4719b4u: goto label_4719b4;
        case 0x4719b8u: goto label_4719b8;
        case 0x4719bcu: goto label_4719bc;
        case 0x4719c0u: goto label_4719c0;
        case 0x4719c4u: goto label_4719c4;
        case 0x4719c8u: goto label_4719c8;
        case 0x4719ccu: goto label_4719cc;
        case 0x4719d0u: goto label_4719d0;
        case 0x4719d4u: goto label_4719d4;
        case 0x4719d8u: goto label_4719d8;
        case 0x4719dcu: goto label_4719dc;
        case 0x4719e0u: goto label_4719e0;
        case 0x4719e4u: goto label_4719e4;
        case 0x4719e8u: goto label_4719e8;
        case 0x4719ecu: goto label_4719ec;
        case 0x4719f0u: goto label_4719f0;
        case 0x4719f4u: goto label_4719f4;
        case 0x4719f8u: goto label_4719f8;
        case 0x4719fcu: goto label_4719fc;
        case 0x471a00u: goto label_471a00;
        case 0x471a04u: goto label_471a04;
        case 0x471a08u: goto label_471a08;
        case 0x471a0cu: goto label_471a0c;
        case 0x471a10u: goto label_471a10;
        case 0x471a14u: goto label_471a14;
        case 0x471a18u: goto label_471a18;
        case 0x471a1cu: goto label_471a1c;
        case 0x471a20u: goto label_471a20;
        case 0x471a24u: goto label_471a24;
        case 0x471a28u: goto label_471a28;
        case 0x471a2cu: goto label_471a2c;
        case 0x471a30u: goto label_471a30;
        case 0x471a34u: goto label_471a34;
        case 0x471a38u: goto label_471a38;
        case 0x471a3cu: goto label_471a3c;
        case 0x471a40u: goto label_471a40;
        case 0x471a44u: goto label_471a44;
        case 0x471a48u: goto label_471a48;
        case 0x471a4cu: goto label_471a4c;
        case 0x471a50u: goto label_471a50;
        case 0x471a54u: goto label_471a54;
        case 0x471a58u: goto label_471a58;
        case 0x471a5cu: goto label_471a5c;
        case 0x471a60u: goto label_471a60;
        case 0x471a64u: goto label_471a64;
        case 0x471a68u: goto label_471a68;
        case 0x471a6cu: goto label_471a6c;
        case 0x471a70u: goto label_471a70;
        case 0x471a74u: goto label_471a74;
        case 0x471a78u: goto label_471a78;
        case 0x471a7cu: goto label_471a7c;
        case 0x471a80u: goto label_471a80;
        case 0x471a84u: goto label_471a84;
        case 0x471a88u: goto label_471a88;
        case 0x471a8cu: goto label_471a8c;
        case 0x471a90u: goto label_471a90;
        case 0x471a94u: goto label_471a94;
        case 0x471a98u: goto label_471a98;
        case 0x471a9cu: goto label_471a9c;
        case 0x471aa0u: goto label_471aa0;
        case 0x471aa4u: goto label_471aa4;
        case 0x471aa8u: goto label_471aa8;
        case 0x471aacu: goto label_471aac;
        case 0x471ab0u: goto label_471ab0;
        case 0x471ab4u: goto label_471ab4;
        case 0x471ab8u: goto label_471ab8;
        case 0x471abcu: goto label_471abc;
        case 0x471ac0u: goto label_471ac0;
        case 0x471ac4u: goto label_471ac4;
        case 0x471ac8u: goto label_471ac8;
        case 0x471accu: goto label_471acc;
        case 0x471ad0u: goto label_471ad0;
        case 0x471ad4u: goto label_471ad4;
        case 0x471ad8u: goto label_471ad8;
        case 0x471adcu: goto label_471adc;
        case 0x471ae0u: goto label_471ae0;
        case 0x471ae4u: goto label_471ae4;
        case 0x471ae8u: goto label_471ae8;
        case 0x471aecu: goto label_471aec;
        case 0x471af0u: goto label_471af0;
        case 0x471af4u: goto label_471af4;
        case 0x471af8u: goto label_471af8;
        case 0x471afcu: goto label_471afc;
        case 0x471b00u: goto label_471b00;
        case 0x471b04u: goto label_471b04;
        case 0x471b08u: goto label_471b08;
        case 0x471b0cu: goto label_471b0c;
        case 0x471b10u: goto label_471b10;
        case 0x471b14u: goto label_471b14;
        case 0x471b18u: goto label_471b18;
        case 0x471b1cu: goto label_471b1c;
        case 0x471b20u: goto label_471b20;
        case 0x471b24u: goto label_471b24;
        case 0x471b28u: goto label_471b28;
        case 0x471b2cu: goto label_471b2c;
        case 0x471b30u: goto label_471b30;
        case 0x471b34u: goto label_471b34;
        case 0x471b38u: goto label_471b38;
        case 0x471b3cu: goto label_471b3c;
        case 0x471b40u: goto label_471b40;
        case 0x471b44u: goto label_471b44;
        case 0x471b48u: goto label_471b48;
        case 0x471b4cu: goto label_471b4c;
        case 0x471b50u: goto label_471b50;
        case 0x471b54u: goto label_471b54;
        case 0x471b58u: goto label_471b58;
        case 0x471b5cu: goto label_471b5c;
        case 0x471b60u: goto label_471b60;
        case 0x471b64u: goto label_471b64;
        case 0x471b68u: goto label_471b68;
        case 0x471b6cu: goto label_471b6c;
        case 0x471b70u: goto label_471b70;
        case 0x471b74u: goto label_471b74;
        case 0x471b78u: goto label_471b78;
        case 0x471b7cu: goto label_471b7c;
        case 0x471b80u: goto label_471b80;
        case 0x471b84u: goto label_471b84;
        case 0x471b88u: goto label_471b88;
        case 0x471b8cu: goto label_471b8c;
        case 0x471b90u: goto label_471b90;
        case 0x471b94u: goto label_471b94;
        case 0x471b98u: goto label_471b98;
        case 0x471b9cu: goto label_471b9c;
        case 0x471ba0u: goto label_471ba0;
        case 0x471ba4u: goto label_471ba4;
        case 0x471ba8u: goto label_471ba8;
        case 0x471bacu: goto label_471bac;
        case 0x471bb0u: goto label_471bb0;
        case 0x471bb4u: goto label_471bb4;
        case 0x471bb8u: goto label_471bb8;
        case 0x471bbcu: goto label_471bbc;
        case 0x471bc0u: goto label_471bc0;
        case 0x471bc4u: goto label_471bc4;
        case 0x471bc8u: goto label_471bc8;
        case 0x471bccu: goto label_471bcc;
        case 0x471bd0u: goto label_471bd0;
        case 0x471bd4u: goto label_471bd4;
        case 0x471bd8u: goto label_471bd8;
        case 0x471bdcu: goto label_471bdc;
        case 0x471be0u: goto label_471be0;
        case 0x471be4u: goto label_471be4;
        case 0x471be8u: goto label_471be8;
        case 0x471becu: goto label_471bec;
        case 0x471bf0u: goto label_471bf0;
        case 0x471bf4u: goto label_471bf4;
        case 0x471bf8u: goto label_471bf8;
        case 0x471bfcu: goto label_471bfc;
        case 0x471c00u: goto label_471c00;
        case 0x471c04u: goto label_471c04;
        case 0x471c08u: goto label_471c08;
        case 0x471c0cu: goto label_471c0c;
        case 0x471c10u: goto label_471c10;
        case 0x471c14u: goto label_471c14;
        case 0x471c18u: goto label_471c18;
        case 0x471c1cu: goto label_471c1c;
        case 0x471c20u: goto label_471c20;
        case 0x471c24u: goto label_471c24;
        case 0x471c28u: goto label_471c28;
        case 0x471c2cu: goto label_471c2c;
        case 0x471c30u: goto label_471c30;
        case 0x471c34u: goto label_471c34;
        case 0x471c38u: goto label_471c38;
        case 0x471c3cu: goto label_471c3c;
        case 0x471c40u: goto label_471c40;
        case 0x471c44u: goto label_471c44;
        case 0x471c48u: goto label_471c48;
        case 0x471c4cu: goto label_471c4c;
        case 0x471c50u: goto label_471c50;
        case 0x471c54u: goto label_471c54;
        case 0x471c58u: goto label_471c58;
        case 0x471c5cu: goto label_471c5c;
        case 0x471c60u: goto label_471c60;
        case 0x471c64u: goto label_471c64;
        case 0x471c68u: goto label_471c68;
        case 0x471c6cu: goto label_471c6c;
        case 0x471c70u: goto label_471c70;
        case 0x471c74u: goto label_471c74;
        case 0x471c78u: goto label_471c78;
        case 0x471c7cu: goto label_471c7c;
        case 0x471c80u: goto label_471c80;
        case 0x471c84u: goto label_471c84;
        case 0x471c88u: goto label_471c88;
        case 0x471c8cu: goto label_471c8c;
        case 0x471c90u: goto label_471c90;
        case 0x471c94u: goto label_471c94;
        case 0x471c98u: goto label_471c98;
        case 0x471c9cu: goto label_471c9c;
        case 0x471ca0u: goto label_471ca0;
        case 0x471ca4u: goto label_471ca4;
        case 0x471ca8u: goto label_471ca8;
        case 0x471cacu: goto label_471cac;
        case 0x471cb0u: goto label_471cb0;
        case 0x471cb4u: goto label_471cb4;
        case 0x471cb8u: goto label_471cb8;
        case 0x471cbcu: goto label_471cbc;
        case 0x471cc0u: goto label_471cc0;
        case 0x471cc4u: goto label_471cc4;
        case 0x471cc8u: goto label_471cc8;
        case 0x471cccu: goto label_471ccc;
        case 0x471cd0u: goto label_471cd0;
        case 0x471cd4u: goto label_471cd4;
        case 0x471cd8u: goto label_471cd8;
        case 0x471cdcu: goto label_471cdc;
        case 0x471ce0u: goto label_471ce0;
        case 0x471ce4u: goto label_471ce4;
        case 0x471ce8u: goto label_471ce8;
        case 0x471cecu: goto label_471cec;
        case 0x471cf0u: goto label_471cf0;
        case 0x471cf4u: goto label_471cf4;
        case 0x471cf8u: goto label_471cf8;
        case 0x471cfcu: goto label_471cfc;
        case 0x471d00u: goto label_471d00;
        case 0x471d04u: goto label_471d04;
        case 0x471d08u: goto label_471d08;
        case 0x471d0cu: goto label_471d0c;
        case 0x471d10u: goto label_471d10;
        case 0x471d14u: goto label_471d14;
        case 0x471d18u: goto label_471d18;
        case 0x471d1cu: goto label_471d1c;
        case 0x471d20u: goto label_471d20;
        case 0x471d24u: goto label_471d24;
        case 0x471d28u: goto label_471d28;
        case 0x471d2cu: goto label_471d2c;
        case 0x471d30u: goto label_471d30;
        case 0x471d34u: goto label_471d34;
        case 0x471d38u: goto label_471d38;
        case 0x471d3cu: goto label_471d3c;
        case 0x471d40u: goto label_471d40;
        case 0x471d44u: goto label_471d44;
        case 0x471d48u: goto label_471d48;
        case 0x471d4cu: goto label_471d4c;
        case 0x471d50u: goto label_471d50;
        case 0x471d54u: goto label_471d54;
        case 0x471d58u: goto label_471d58;
        case 0x471d5cu: goto label_471d5c;
        case 0x471d60u: goto label_471d60;
        case 0x471d64u: goto label_471d64;
        case 0x471d68u: goto label_471d68;
        case 0x471d6cu: goto label_471d6c;
        case 0x471d70u: goto label_471d70;
        case 0x471d74u: goto label_471d74;
        case 0x471d78u: goto label_471d78;
        case 0x471d7cu: goto label_471d7c;
        case 0x471d80u: goto label_471d80;
        case 0x471d84u: goto label_471d84;
        case 0x471d88u: goto label_471d88;
        case 0x471d8cu: goto label_471d8c;
        case 0x471d90u: goto label_471d90;
        case 0x471d94u: goto label_471d94;
        case 0x471d98u: goto label_471d98;
        case 0x471d9cu: goto label_471d9c;
        case 0x471da0u: goto label_471da0;
        case 0x471da4u: goto label_471da4;
        case 0x471da8u: goto label_471da8;
        case 0x471dacu: goto label_471dac;
        case 0x471db0u: goto label_471db0;
        case 0x471db4u: goto label_471db4;
        case 0x471db8u: goto label_471db8;
        case 0x471dbcu: goto label_471dbc;
        default: break;
    }

    ctx->pc = 0x471990u;

label_471990:
    // 0x471990: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x471990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_471994:
    // 0x471994: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x471994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_471998:
    // 0x471998: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x471998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47199c:
    // 0x47199c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47199cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4719a0:
    // 0x4719a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4719a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4719a4:
    // 0x4719a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4719a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4719a8:
    // 0x4719a8: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x4719a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
label_4719ac:
    // 0x4719ac: 0xafa501a0  sw          $a1, 0x1A0($sp)
    ctx->pc = 0x4719acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 5));
label_4719b0:
    // 0x4719b0: 0xafa601b0  sw          $a2, 0x1B0($sp)
    ctx->pc = 0x4719b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 6));
label_4719b4:
    // 0x4719b4: 0xafa701c0  sw          $a3, 0x1C0($sp)
    ctx->pc = 0x4719b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 7));
label_4719b8:
    // 0x4719b8: 0xafa801d0  sw          $t0, 0x1D0($sp)
    ctx->pc = 0x4719b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 8));
label_4719bc:
    // 0x4719bc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x4719bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4719c0:
    // 0x4719c0: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x4719c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4719c4:
    // 0x4719c4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4719c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4719c8:
    // 0x4719c8: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x4719c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_4719cc:
    // 0x4719cc: 0x40f809  jalr        $v0
label_4719d0:
    if (ctx->pc == 0x4719D0u) {
        ctx->pc = 0x4719D4u;
        goto label_4719d4;
    }
    ctx->pc = 0x4719CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4719D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4719CCu, 0x4719D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4719D4u;
label_4719d4:
    // 0x4719d4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x4719d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_4719d8:
    // 0x4719d8: 0x27a5017c  addiu       $a1, $sp, 0x17C
    ctx->pc = 0x4719d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_4719dc:
    // 0x4719dc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4719dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4719e0:
    // 0x4719e0: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x4719e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_4719e4:
    // 0x4719e4: 0x40f809  jalr        $v0
label_4719e8:
    if (ctx->pc == 0x4719E8u) {
        ctx->pc = 0x4719ECu;
        goto label_4719ec;
    }
    ctx->pc = 0x4719E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4719ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4719E4u, 0x4719ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4719ECu;
label_4719ec:
    // 0x4719ec: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x4719ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4719f0:
    // 0x4719f0: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x4719f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_4719f4:
    // 0x4719f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4719f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4719f8:
    // 0x4719f8: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x4719f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_4719fc:
    // 0x4719fc: 0x40f809  jalr        $v0
label_471a00:
    if (ctx->pc == 0x471A00u) {
        ctx->pc = 0x471A04u;
        goto label_471a04;
    }
    ctx->pc = 0x4719FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471A04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4719FCu, 0x471A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471A04u;
label_471a04:
    // 0x471a04: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x471a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_471a08:
    // 0x471a08: 0x27a50174  addiu       $a1, $sp, 0x174
    ctx->pc = 0x471a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_471a0c:
    // 0x471a0c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x471a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_471a10:
    // 0x471a10: 0x8c42e8a4  lw          $v0, -0x175C($v0)
    ctx->pc = 0x471a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961316)));
label_471a14:
    // 0x471a14: 0x40f809  jalr        $v0
label_471a18:
    if (ctx->pc == 0x471A18u) {
        ctx->pc = 0x471A1Cu;
        goto label_471a1c;
    }
    ctx->pc = 0x471A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471A1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471A14u, 0x471A1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471A1Cu;
label_471a1c:
    // 0x471a1c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x471a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_471a20:
    // 0x471a20: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x471a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_471a24:
    // 0x471a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x471a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_471a28:
    // 0x471a28: 0x0  nop
    ctx->pc = 0x471a28u;
    // NOP
label_471a2c:
    // 0x471a2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x471a2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_471a30:
    // 0x471a30: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x471a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_471a34:
    // 0x471a34: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x471a34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_471a38:
    // 0x471a38: 0xc7a0018c  lwc1        $f0, 0x18C($sp)
    ctx->pc = 0x471a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_471a3c:
    // 0x471a3c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x471a3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_471a40:
    // 0x471a40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x471a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_471a44:
    // 0x471a44: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_471a48:
    if (ctx->pc == 0x471A48u) {
        ctx->pc = 0x471A4Cu;
        goto label_471a4c;
    }
    ctx->pc = 0x471A44u;
    {
        const bool branch_taken_0x471a44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x471a44) {
            ctx->pc = 0x471A50u;
            goto label_471a50;
        }
    }
    ctx->pc = 0x471A4Cu;
label_471a4c:
    // 0x471a4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x471a4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_471a50:
    // 0x471a50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x471a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_471a54:
    // 0x471a54: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_471a58:
    if (ctx->pc == 0x471A58u) {
        ctx->pc = 0x471A5Cu;
        goto label_471a5c;
    }
    ctx->pc = 0x471A54u;
    {
        const bool branch_taken_0x471a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x471a54) {
            ctx->pc = 0x471B04u;
            goto label_471b04;
        }
    }
    ctx->pc = 0x471A5Cu;
label_471a5c:
    // 0x471a5c: 0x8f82b398  lw          $v0, -0x4C68($gp)
    ctx->pc = 0x471a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947736)));
label_471a60:
    // 0x471a60: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_471a64:
    if (ctx->pc == 0x471A64u) {
        ctx->pc = 0x471A68u;
        goto label_471a68;
    }
    ctx->pc = 0x471A60u;
    {
        const bool branch_taken_0x471a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471a60) {
            ctx->pc = 0x471B04u;
            goto label_471b04;
        }
    }
    ctx->pc = 0x471A68u;
label_471a68:
    // 0x471a68: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x471a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_471a6c:
    // 0x471a6c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x471a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_471a70:
    // 0x471a70: 0x27a60168  addiu       $a2, $sp, 0x168
    ctx->pc = 0x471a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_471a74:
    // 0x471a74: 0xc115ee8  jal         func_457BA0
label_471a78:
    if (ctx->pc == 0x471A78u) {
        ctx->pc = 0x471A7Cu;
        goto label_471a7c;
    }
    ctx->pc = 0x471A74u;
    SET_GPR_U32(ctx, 31, 0x471A7Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x471A74u, 0x471A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471A7Cu;
label_471a7c:
    // 0x471a7c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_471a80:
    if (ctx->pc == 0x471A80u) {
        ctx->pc = 0x471A84u;
        goto label_471a84;
    }
    ctx->pc = 0x471A7Cu;
    {
        const bool branch_taken_0x471a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471a7c) {
            ctx->pc = 0x471B04u;
            goto label_471b04;
        }
    }
    ctx->pc = 0x471A84u;
label_471a84:
    // 0x471a84: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x471a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_471a88:
    // 0x471a88: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_471a8c:
    if (ctx->pc == 0x471A8Cu) {
        ctx->pc = 0x471A90u;
        goto label_471a90;
    }
    ctx->pc = 0x471A88u;
    {
        const bool branch_taken_0x471a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471a88) {
            ctx->pc = 0x471B04u;
            goto label_471b04;
        }
    }
    ctx->pc = 0x471A90u;
label_471a90:
    // 0x471a90: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x471a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_471a94:
    // 0x471a94: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x471a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_471a98:
    // 0x471a98: 0x8fa6016c  lw          $a2, 0x16C($sp)
    ctx->pc = 0x471a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_471a9c:
    // 0x471a9c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x471a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_471aa0:
    // 0x471aa0: 0x24e701e0  addiu       $a3, $a3, 0x1E0
    ctx->pc = 0x471aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 480));
label_471aa4:
    // 0x471aa4: 0x240800e6  addiu       $t0, $zero, 0xE6
    ctx->pc = 0x471aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
label_471aa8:
    // 0x471aa8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x471aa8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_471aac:
    // 0x471aac: 0x252902a8  addiu       $t1, $t1, 0x2A8
    ctx->pc = 0x471aacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 680));
label_471ab0:
    // 0x471ab0: 0xc113940  jal         func_44E500
label_471ab4:
    if (ctx->pc == 0x471AB4u) {
        ctx->pc = 0x471AB8u;
        goto label_471ab8;
    }
    ctx->pc = 0x471AB0u;
    SET_GPR_U32(ctx, 31, 0x471AB8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x471AB0u, 0x471AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471AB8u;
label_471ab8:
    // 0x471ab8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x471ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_471abc:
    // 0x471abc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x471abcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_471ac0:
    // 0x471ac0: 0x24a502b8  addiu       $a1, $a1, 0x2B8
    ctx->pc = 0x471ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 696));
label_471ac4:
    // 0x471ac4: 0xc115c24  jal         func_457090
label_471ac8:
    if (ctx->pc == 0x471AC8u) {
        ctx->pc = 0x471ACCu;
        goto label_471acc;
    }
    ctx->pc = 0x471AC4u;
    SET_GPR_U32(ctx, 31, 0x471ACCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x471AC4u, 0x471ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471ACCu;
label_471acc:
    // 0x471acc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x471accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_471ad0:
    // 0x471ad0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x471ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_471ad4:
    // 0x471ad4: 0x40f809  jalr        $v0
label_471ad8:
    if (ctx->pc == 0x471AD8u) {
        ctx->pc = 0x471ADCu;
        goto label_471adc;
    }
    ctx->pc = 0x471AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471ADCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471AD4u, 0x471ADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471ADCu;
label_471adc:
    // 0x471adc: 0xaf82b398  sw          $v0, -0x4C68($gp)
    ctx->pc = 0x471adcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947736), GPR_U32(ctx, 2));
label_471ae0:
    // 0x471ae0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x471ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_471ae4:
    // 0x471ae4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_471ae8:
    if (ctx->pc == 0x471AE8u) {
        ctx->pc = 0x471AECu;
        goto label_471aec;
    }
    ctx->pc = 0x471AE4u;
    {
        const bool branch_taken_0x471ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471ae4) {
            ctx->pc = 0x471AF4u;
            goto label_471af4;
        }
    }
    ctx->pc = 0x471AECu;
label_471aec:
    // 0x471aec: 0xd  break       0
    ctx->pc = 0x471aecu;
    runtime->handleBreak(rdram, ctx);
label_471af0:
    // 0x471af0: 0x0  nop
    ctx->pc = 0x471af0u;
    // NOP
label_471af4:
    // 0x471af4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x471af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_471af8:
    // 0x471af8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x471af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_471afc:
    // 0x471afc: 0xc11392c  jal         func_44E4B0
label_471b00:
    if (ctx->pc == 0x471B00u) {
        ctx->pc = 0x471B04u;
        goto label_471b04;
    }
    ctx->pc = 0x471AFCu;
    SET_GPR_U32(ctx, 31, 0x471B04u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x471AFCu, 0x471B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471B04u;
label_471b04:
    // 0x471b04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x471b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_471b08:
    // 0x471b08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x471b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_471b0c:
    // 0x471b0c: 0xc7a0018c  lwc1        $f0, 0x18C($sp)
    ctx->pc = 0x471b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_471b10:
    // 0x471b10: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x471b10u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_471b14:
    // 0x471b14: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x471b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_471b18:
    // 0x471b18: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x471b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_471b1c:
    // 0x471b1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x471b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_471b20:
    // 0x471b20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x471b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_471b24:
    // 0x471b24: 0xc4600084  lwc1        $f0, 0x84($v1)
    ctx->pc = 0x471b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_471b28:
    // 0x471b28: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x471b28u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_471b2c:
    // 0x471b2c: 0x0  nop
    ctx->pc = 0x471b2cu;
    // NOP
label_471b30:
    // 0x471b30: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x471b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_471b34:
    // 0x471b34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x471b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_471b38:
    // 0x471b38: 0x10000082  b           . + 4 + (0x82 << 2)
label_471b3c:
    if (ctx->pc == 0x471B3Cu) {
        ctx->pc = 0x471B40u;
        goto label_471b40;
    }
    ctx->pc = 0x471B38u;
    {
        const bool branch_taken_0x471b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x471b38) {
            ctx->pc = 0x471D44u;
            goto label_471d44;
        }
    }
    ctx->pc = 0x471B40u;
label_471b40:
    // 0x471b40: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x471b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_471b44:
    // 0x471b44: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x471b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_471b48:
    // 0x471b48: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x471b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
label_471b4c:
    // 0x471b4c: 0x27b301c0  addiu       $s3, $sp, 0x1C0
    ctx->pc = 0x471b4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_471b50:
    // 0x471b50: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x471b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_471b54:
    // 0x471b54: 0xc105f96  jal         func_417E58
label_471b58:
    if (ctx->pc == 0x471B58u) {
        ctx->pc = 0x471B5Cu;
        goto label_471b5c;
    }
    ctx->pc = 0x471B54u;
    SET_GPR_U32(ctx, 31, 0x471B5Cu);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x471B54u, 0x471B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471B5Cu;
label_471b5c:
    // 0x471b5c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_471b60:
    if (ctx->pc == 0x471B60u) {
        ctx->pc = 0x471B64u;
        goto label_471b64;
    }
    ctx->pc = 0x471B5Cu;
    {
        const bool branch_taken_0x471b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471b5c) {
            ctx->pc = 0x471C40u;
            goto label_471c40;
        }
    }
    ctx->pc = 0x471B64u;
label_471b64:
    // 0x471b64: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x471b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_471b68:
    // 0x471b68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x471b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_471b6c:
    // 0x471b6c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x471b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_471b70:
    // 0x471b70: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x471b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_471b74:
    // 0x471b74: 0x40f809  jalr        $v0
label_471b78:
    if (ctx->pc == 0x471B78u) {
        ctx->pc = 0x471B7Cu;
        goto label_471b7c;
    }
    ctx->pc = 0x471B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471B7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471B74u, 0x471B7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471B7Cu;
label_471b7c:
    // 0x471b7c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x471b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_471b80:
    // 0x471b80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x471b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_471b84:
    // 0x471b84: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x471b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_471b88:
    // 0x471b88: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x471b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_471b8c:
    // 0x471b8c: 0x40f809  jalr        $v0
label_471b90:
    if (ctx->pc == 0x471B90u) {
        ctx->pc = 0x471B94u;
        goto label_471b94;
    }
    ctx->pc = 0x471B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471B94u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471B8Cu, 0x471B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471B94u;
label_471b94:
    // 0x471b94: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x471b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_471b98:
    // 0x471b98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x471b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_471b9c:
    // 0x471b9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x471b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_471ba0:
    // 0x471ba0: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x471ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_471ba4:
    // 0x471ba4: 0x40f809  jalr        $v0
label_471ba8:
    if (ctx->pc == 0x471BA8u) {
        ctx->pc = 0x471BACu;
        goto label_471bac;
    }
    ctx->pc = 0x471BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471BACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471BA4u, 0x471BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471BACu;
label_471bac:
    // 0x471bac: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x471bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_471bb0:
    // 0x471bb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x471bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_471bb4:
    // 0x471bb4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x471bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_471bb8:
    // 0x471bb8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x471bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_471bbc:
    // 0x471bbc: 0x40f809  jalr        $v0
label_471bc0:
    if (ctx->pc == 0x471BC0u) {
        ctx->pc = 0x471BC4u;
        goto label_471bc4;
    }
    ctx->pc = 0x471BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471BC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471BBCu, 0x471BC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471BC4u;
label_471bc4:
    // 0x471bc4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x471bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_471bc8:
    // 0x471bc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x471bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_471bcc:
    // 0x471bcc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x471bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_471bd0:
    // 0x471bd0: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x471bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_471bd4:
    // 0x471bd4: 0x40f809  jalr        $v0
label_471bd8:
    if (ctx->pc == 0x471BD8u) {
        ctx->pc = 0x471BDCu;
        goto label_471bdc;
    }
    ctx->pc = 0x471BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471BDCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471BD4u, 0x471BDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471BDCu;
label_471bdc:
    // 0x471bdc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x471bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_471be0:
    // 0x471be0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x471be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_471be4:
    // 0x471be4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x471be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_471be8:
    // 0x471be8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x471be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_471bec:
    // 0x471bec: 0x40f809  jalr        $v0
label_471bf0:
    if (ctx->pc == 0x471BF0u) {
        ctx->pc = 0x471BF4u;
        goto label_471bf4;
    }
    ctx->pc = 0x471BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471BF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471BECu, 0x471BF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471BF4u;
label_471bf4:
    // 0x471bf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x471bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_471bf8:
    // 0x471bf8: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x471bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_471bfc:
    // 0x471bfc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x471bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_471c00:
    // 0x471c00: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x471c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_471c04:
    // 0x471c04: 0x40f809  jalr        $v0
label_471c08:
    if (ctx->pc == 0x471C08u) {
        ctx->pc = 0x471C0Cu;
        goto label_471c0c;
    }
    ctx->pc = 0x471C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471C0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471C04u, 0x471C0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471C0Cu;
label_471c0c:
    // 0x471c0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x471c0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_471c10:
    // 0x471c10: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x471c10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_471c14:
    // 0x471c14: 0xc7ae018c  lwc1        $f14, 0x18C($sp)
    ctx->pc = 0x471c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_471c18:
    // 0x471c18: 0xc7af018c  lwc1        $f15, 0x18C($sp)
    ctx->pc = 0x471c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_471c1c:
    // 0x471c1c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x471c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_471c20:
    // 0x471c20: 0xc450e89c  lwc1        $f16, -0x1764($v0)
    ctx->pc = 0x471c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_471c24:
    // 0x471c24: 0xc7b10184  lwc1        $f17, 0x184($sp)
    ctx->pc = 0x471c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_471c28:
    // 0x471c28: 0xc7b20188  lwc1        $f18, 0x188($sp)
    ctx->pc = 0x471c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_471c2c:
    // 0x471c2c: 0xc11c4a8  jal         func_4712A0
label_471c30:
    if (ctx->pc == 0x471C30u) {
        ctx->pc = 0x471C34u;
        goto label_471c34;
    }
    ctx->pc = 0x471C2Cu;
    SET_GPR_U32(ctx, 31, 0x471C34u);
    ctx->pc = 0x4712A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4712A0u, 0x471C2Cu, 0x471C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471C34u;
label_471c34:
    // 0x471c34: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x471c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_471c38:
    // 0x471c38: 0xc105f9e  jal         func_417E78
label_471c3c:
    if (ctx->pc == 0x471C3Cu) {
        ctx->pc = 0x471C40u;
        goto label_471c40;
    }
    ctx->pc = 0x471C38u;
    SET_GPR_U32(ctx, 31, 0x471C40u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x471C38u, 0x471C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471C40u;
label_471c40:
    // 0x471c40: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x471c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_471c44:
    // 0x471c44: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x471c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_471c48:
    // 0x471c48: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x471c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
label_471c4c:
    // 0x471c4c: 0x27b201c0  addiu       $s2, $sp, 0x1C0
    ctx->pc = 0x471c4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_471c50:
    // 0x471c50: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x471c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_471c54:
    // 0x471c54: 0xc105f96  jal         func_417E58
label_471c58:
    if (ctx->pc == 0x471C58u) {
        ctx->pc = 0x471C5Cu;
        goto label_471c5c;
    }
    ctx->pc = 0x471C54u;
    SET_GPR_U32(ctx, 31, 0x471C5Cu);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x471C54u, 0x471C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471C5Cu;
label_471c5c:
    // 0x471c5c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_471c60:
    if (ctx->pc == 0x471C60u) {
        ctx->pc = 0x471C64u;
        goto label_471c64;
    }
    ctx->pc = 0x471C5Cu;
    {
        const bool branch_taken_0x471c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471c5c) {
            ctx->pc = 0x471D40u;
            goto label_471d40;
        }
    }
    ctx->pc = 0x471C64u;
label_471c64:
    // 0x471c64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x471c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_471c68:
    // 0x471c68: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x471c68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_471c6c:
    // 0x471c6c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x471c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_471c70:
    // 0x471c70: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x471c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_471c74:
    // 0x471c74: 0x40f809  jalr        $v0
label_471c78:
    if (ctx->pc == 0x471C78u) {
        ctx->pc = 0x471C7Cu;
        goto label_471c7c;
    }
    ctx->pc = 0x471C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471C7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471C74u, 0x471C7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471C7Cu;
label_471c7c:
    // 0x471c7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x471c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_471c80:
    // 0x471c80: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x471c80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_471c84:
    // 0x471c84: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x471c84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_471c88:
    // 0x471c88: 0xc7ae018c  lwc1        $f14, 0x18C($sp)
    ctx->pc = 0x471c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_471c8c:
    // 0x471c8c: 0xc7af018c  lwc1        $f15, 0x18C($sp)
    ctx->pc = 0x471c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_471c90:
    // 0x471c90: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x471c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_471c94:
    // 0x471c94: 0xc450e89c  lwc1        $f16, -0x1764($v0)
    ctx->pc = 0x471c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_471c98:
    // 0x471c98: 0xc7b10184  lwc1        $f17, 0x184($sp)
    ctx->pc = 0x471c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_471c9c:
    // 0x471c9c: 0xc11c4a8  jal         func_4712A0
label_471ca0:
    if (ctx->pc == 0x471CA0u) {
        ctx->pc = 0x471CA4u;
        goto label_471ca4;
    }
    ctx->pc = 0x471C9Cu;
    SET_GPR_U32(ctx, 31, 0x471CA4u);
    ctx->pc = 0x4712A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4712A0u, 0x471C9Cu, 0x471CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471CA4u;
label_471ca4:
    // 0x471ca4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x471ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_471ca8:
    // 0x471ca8: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x471ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_471cac:
    // 0x471cac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x471cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_471cb0:
    // 0x471cb0: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x471cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_471cb4:
    // 0x471cb4: 0x40f809  jalr        $v0
label_471cb8:
    if (ctx->pc == 0x471CB8u) {
        ctx->pc = 0x471CBCu;
        goto label_471cbc;
    }
    ctx->pc = 0x471CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471CBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471CB4u, 0x471CBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471CBCu;
label_471cbc:
    // 0x471cbc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x471cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_471cc0:
    // 0x471cc0: 0x8fa5017c  lw          $a1, 0x17C($sp)
    ctx->pc = 0x471cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_471cc4:
    // 0x471cc4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x471cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_471cc8:
    // 0x471cc8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x471cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_471ccc:
    // 0x471ccc: 0x40f809  jalr        $v0
label_471cd0:
    if (ctx->pc == 0x471CD0u) {
        ctx->pc = 0x471CD4u;
        goto label_471cd4;
    }
    ctx->pc = 0x471CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471CD4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471CCCu, 0x471CD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471CD4u;
label_471cd4:
    // 0x471cd4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x471cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_471cd8:
    // 0x471cd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x471cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_471cdc:
    // 0x471cdc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x471cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_471ce0:
    // 0x471ce0: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x471ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_471ce4:
    // 0x471ce4: 0x40f809  jalr        $v0
label_471ce8:
    if (ctx->pc == 0x471CE8u) {
        ctx->pc = 0x471CECu;
        goto label_471cec;
    }
    ctx->pc = 0x471CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471CECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471CE4u, 0x471CECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471CECu;
label_471cec:
    // 0x471cec: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x471cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_471cf0:
    // 0x471cf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x471cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_471cf4:
    // 0x471cf4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x471cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_471cf8:
    // 0x471cf8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x471cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_471cfc:
    // 0x471cfc: 0x40f809  jalr        $v0
label_471d00:
    if (ctx->pc == 0x471D00u) {
        ctx->pc = 0x471D04u;
        goto label_471d04;
    }
    ctx->pc = 0x471CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471D04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471CFCu, 0x471D04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471D04u;
label_471d04:
    // 0x471d04: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x471d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_471d08:
    // 0x471d08: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x471d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_471d0c:
    // 0x471d0c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x471d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_471d10:
    // 0x471d10: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x471d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_471d14:
    // 0x471d14: 0x40f809  jalr        $v0
label_471d18:
    if (ctx->pc == 0x471D18u) {
        ctx->pc = 0x471D1Cu;
        goto label_471d1c;
    }
    ctx->pc = 0x471D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471D1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471D14u, 0x471D1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471D1Cu;
label_471d1c:
    // 0x471d1c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x471d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_471d20:
    // 0x471d20: 0x8fa50174  lw          $a1, 0x174($sp)
    ctx->pc = 0x471d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_471d24:
    // 0x471d24: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x471d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_471d28:
    // 0x471d28: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x471d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_471d2c:
    // 0x471d2c: 0x40f809  jalr        $v0
label_471d30:
    if (ctx->pc == 0x471D30u) {
        ctx->pc = 0x471D34u;
        goto label_471d34;
    }
    ctx->pc = 0x471D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471D34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471D2Cu, 0x471D34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471D34u;
label_471d34:
    // 0x471d34: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x471d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_471d38:
    // 0x471d38: 0xc105f9e  jal         func_417E78
label_471d3c:
    if (ctx->pc == 0x471D3Cu) {
        ctx->pc = 0x471D40u;
        goto label_471d40;
    }
    ctx->pc = 0x471D38u;
    SET_GPR_U32(ctx, 31, 0x471D40u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x471D38u, 0x471D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471D40u;
label_471d40:
    // 0x471d40: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x471d40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_471d44:
    // 0x471d44: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x471d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_471d48:
    // 0x471d48: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x471d48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_471d4c:
    // 0x471d4c: 0x1440ff7c  bnez        $v0, . + 4 + (-0x84 << 2)
label_471d50:
    if (ctx->pc == 0x471D50u) {
        ctx->pc = 0x471D54u;
        goto label_471d54;
    }
    ctx->pc = 0x471D4Cu;
    {
        const bool branch_taken_0x471d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x471d4c) {
            ctx->pc = 0x471B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_471b40;
        }
    }
    ctx->pc = 0x471D54u;
label_471d54:
    // 0x471d54: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x471d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_471d58:
    // 0x471d58: 0xc105f96  jal         func_417E58
label_471d5c:
    if (ctx->pc == 0x471D5Cu) {
        ctx->pc = 0x471D60u;
        goto label_471d60;
    }
    ctx->pc = 0x471D58u;
    SET_GPR_U32(ctx, 31, 0x471D60u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x471D58u, 0x471D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471D60u;
label_471d60:
    // 0x471d60: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_471d64:
    if (ctx->pc == 0x471D64u) {
        ctx->pc = 0x471D68u;
        goto label_471d68;
    }
    ctx->pc = 0x471D60u;
    {
        const bool branch_taken_0x471d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471d60) {
            ctx->pc = 0x471D8Cu;
            goto label_471d8c;
        }
    }
    ctx->pc = 0x471D68u;
label_471d68:
    // 0x471d68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x471d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_471d6c:
    // 0x471d6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x471d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_471d70:
    // 0x471d70: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x471d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_471d74:
    // 0x471d74: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x471d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_471d78:
    // 0x471d78: 0x40f809  jalr        $v0
label_471d7c:
    if (ctx->pc == 0x471D7Cu) {
        ctx->pc = 0x471D80u;
        goto label_471d80;
    }
    ctx->pc = 0x471D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471D80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471D78u, 0x471D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471D80u;
label_471d80:
    // 0x471d80: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x471d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_471d84:
    // 0x471d84: 0xc105f9e  jal         func_417E78
label_471d88:
    if (ctx->pc == 0x471D88u) {
        ctx->pc = 0x471D8Cu;
        goto label_471d8c;
    }
    ctx->pc = 0x471D84u;
    SET_GPR_U32(ctx, 31, 0x471D8Cu);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x471D84u, 0x471D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471D8Cu;
label_471d8c:
    // 0x471d8c: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x471d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_471d90:
    // 0x471d90: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x471d90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
label_471d94:
    // 0x471d94: 0x27b101c0  addiu       $s1, $sp, 0x1C0
    ctx->pc = 0x471d94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_471d98:
    // 0x471d98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x471d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_471d9c:
    // 0x471d9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x471d9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_471da0:
    // 0x471da0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x471da0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_471da4:
    // 0x471da4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x471da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_471da8:
    // 0x471da8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x471da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_471dac:
    // 0x471dac: 0x27bd01e0  addiu       $sp, $sp, 0x1E0
    ctx->pc = 0x471dacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_471db0:
    // 0x471db0: 0x3e00008  jr          $ra
label_471db4:
    if (ctx->pc == 0x471DB4u) {
        ctx->pc = 0x471DB8u;
        goto label_471db8;
    }
    ctx->pc = 0x471DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x471DB8u;
label_471db8:
    // 0x471db8: 0x0  nop
    ctx->pc = 0x471db8u;
    // NOP
label_471dbc:
    // 0x471dbc: 0x0  nop
    ctx->pc = 0x471dbcu;
    // NOP
    ctx->pc = 0x471dc0u;
}
