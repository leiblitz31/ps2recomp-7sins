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

// Function: sub_004A1980
// Address: 0x4a1980 - 0x4a1d60
void sub_004A1980_0x4a1980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1980_0x4a1980");
#endif

    switch (ctx->pc) {
        case 0x4a1980u: goto label_4a1980;
        case 0x4a1984u: goto label_4a1984;
        case 0x4a1988u: goto label_4a1988;
        case 0x4a198cu: goto label_4a198c;
        case 0x4a1990u: goto label_4a1990;
        case 0x4a1994u: goto label_4a1994;
        case 0x4a1998u: goto label_4a1998;
        case 0x4a199cu: goto label_4a199c;
        case 0x4a19a0u: goto label_4a19a0;
        case 0x4a19a4u: goto label_4a19a4;
        case 0x4a19a8u: goto label_4a19a8;
        case 0x4a19acu: goto label_4a19ac;
        case 0x4a19b0u: goto label_4a19b0;
        case 0x4a19b4u: goto label_4a19b4;
        case 0x4a19b8u: goto label_4a19b8;
        case 0x4a19bcu: goto label_4a19bc;
        case 0x4a19c0u: goto label_4a19c0;
        case 0x4a19c4u: goto label_4a19c4;
        case 0x4a19c8u: goto label_4a19c8;
        case 0x4a19ccu: goto label_4a19cc;
        case 0x4a19d0u: goto label_4a19d0;
        case 0x4a19d4u: goto label_4a19d4;
        case 0x4a19d8u: goto label_4a19d8;
        case 0x4a19dcu: goto label_4a19dc;
        case 0x4a19e0u: goto label_4a19e0;
        case 0x4a19e4u: goto label_4a19e4;
        case 0x4a19e8u: goto label_4a19e8;
        case 0x4a19ecu: goto label_4a19ec;
        case 0x4a19f0u: goto label_4a19f0;
        case 0x4a19f4u: goto label_4a19f4;
        case 0x4a19f8u: goto label_4a19f8;
        case 0x4a19fcu: goto label_4a19fc;
        case 0x4a1a00u: goto label_4a1a00;
        case 0x4a1a04u: goto label_4a1a04;
        case 0x4a1a08u: goto label_4a1a08;
        case 0x4a1a0cu: goto label_4a1a0c;
        case 0x4a1a10u: goto label_4a1a10;
        case 0x4a1a14u: goto label_4a1a14;
        case 0x4a1a18u: goto label_4a1a18;
        case 0x4a1a1cu: goto label_4a1a1c;
        case 0x4a1a20u: goto label_4a1a20;
        case 0x4a1a24u: goto label_4a1a24;
        case 0x4a1a28u: goto label_4a1a28;
        case 0x4a1a2cu: goto label_4a1a2c;
        case 0x4a1a30u: goto label_4a1a30;
        case 0x4a1a34u: goto label_4a1a34;
        case 0x4a1a38u: goto label_4a1a38;
        case 0x4a1a3cu: goto label_4a1a3c;
        case 0x4a1a40u: goto label_4a1a40;
        case 0x4a1a44u: goto label_4a1a44;
        case 0x4a1a48u: goto label_4a1a48;
        case 0x4a1a4cu: goto label_4a1a4c;
        case 0x4a1a50u: goto label_4a1a50;
        case 0x4a1a54u: goto label_4a1a54;
        case 0x4a1a58u: goto label_4a1a58;
        case 0x4a1a5cu: goto label_4a1a5c;
        case 0x4a1a60u: goto label_4a1a60;
        case 0x4a1a64u: goto label_4a1a64;
        case 0x4a1a68u: goto label_4a1a68;
        case 0x4a1a6cu: goto label_4a1a6c;
        case 0x4a1a70u: goto label_4a1a70;
        case 0x4a1a74u: goto label_4a1a74;
        case 0x4a1a78u: goto label_4a1a78;
        case 0x4a1a7cu: goto label_4a1a7c;
        case 0x4a1a80u: goto label_4a1a80;
        case 0x4a1a84u: goto label_4a1a84;
        case 0x4a1a88u: goto label_4a1a88;
        case 0x4a1a8cu: goto label_4a1a8c;
        case 0x4a1a90u: goto label_4a1a90;
        case 0x4a1a94u: goto label_4a1a94;
        case 0x4a1a98u: goto label_4a1a98;
        case 0x4a1a9cu: goto label_4a1a9c;
        case 0x4a1aa0u: goto label_4a1aa0;
        case 0x4a1aa4u: goto label_4a1aa4;
        case 0x4a1aa8u: goto label_4a1aa8;
        case 0x4a1aacu: goto label_4a1aac;
        case 0x4a1ab0u: goto label_4a1ab0;
        case 0x4a1ab4u: goto label_4a1ab4;
        case 0x4a1ab8u: goto label_4a1ab8;
        case 0x4a1abcu: goto label_4a1abc;
        case 0x4a1ac0u: goto label_4a1ac0;
        case 0x4a1ac4u: goto label_4a1ac4;
        case 0x4a1ac8u: goto label_4a1ac8;
        case 0x4a1accu: goto label_4a1acc;
        case 0x4a1ad0u: goto label_4a1ad0;
        case 0x4a1ad4u: goto label_4a1ad4;
        case 0x4a1ad8u: goto label_4a1ad8;
        case 0x4a1adcu: goto label_4a1adc;
        case 0x4a1ae0u: goto label_4a1ae0;
        case 0x4a1ae4u: goto label_4a1ae4;
        case 0x4a1ae8u: goto label_4a1ae8;
        case 0x4a1aecu: goto label_4a1aec;
        case 0x4a1af0u: goto label_4a1af0;
        case 0x4a1af4u: goto label_4a1af4;
        case 0x4a1af8u: goto label_4a1af8;
        case 0x4a1afcu: goto label_4a1afc;
        case 0x4a1b00u: goto label_4a1b00;
        case 0x4a1b04u: goto label_4a1b04;
        case 0x4a1b08u: goto label_4a1b08;
        case 0x4a1b0cu: goto label_4a1b0c;
        case 0x4a1b10u: goto label_4a1b10;
        case 0x4a1b14u: goto label_4a1b14;
        case 0x4a1b18u: goto label_4a1b18;
        case 0x4a1b1cu: goto label_4a1b1c;
        case 0x4a1b20u: goto label_4a1b20;
        case 0x4a1b24u: goto label_4a1b24;
        case 0x4a1b28u: goto label_4a1b28;
        case 0x4a1b2cu: goto label_4a1b2c;
        case 0x4a1b30u: goto label_4a1b30;
        case 0x4a1b34u: goto label_4a1b34;
        case 0x4a1b38u: goto label_4a1b38;
        case 0x4a1b3cu: goto label_4a1b3c;
        case 0x4a1b40u: goto label_4a1b40;
        case 0x4a1b44u: goto label_4a1b44;
        case 0x4a1b48u: goto label_4a1b48;
        case 0x4a1b4cu: goto label_4a1b4c;
        case 0x4a1b50u: goto label_4a1b50;
        case 0x4a1b54u: goto label_4a1b54;
        case 0x4a1b58u: goto label_4a1b58;
        case 0x4a1b5cu: goto label_4a1b5c;
        case 0x4a1b60u: goto label_4a1b60;
        case 0x4a1b64u: goto label_4a1b64;
        case 0x4a1b68u: goto label_4a1b68;
        case 0x4a1b6cu: goto label_4a1b6c;
        case 0x4a1b70u: goto label_4a1b70;
        case 0x4a1b74u: goto label_4a1b74;
        case 0x4a1b78u: goto label_4a1b78;
        case 0x4a1b7cu: goto label_4a1b7c;
        case 0x4a1b80u: goto label_4a1b80;
        case 0x4a1b84u: goto label_4a1b84;
        case 0x4a1b88u: goto label_4a1b88;
        case 0x4a1b8cu: goto label_4a1b8c;
        case 0x4a1b90u: goto label_4a1b90;
        case 0x4a1b94u: goto label_4a1b94;
        case 0x4a1b98u: goto label_4a1b98;
        case 0x4a1b9cu: goto label_4a1b9c;
        case 0x4a1ba0u: goto label_4a1ba0;
        case 0x4a1ba4u: goto label_4a1ba4;
        case 0x4a1ba8u: goto label_4a1ba8;
        case 0x4a1bacu: goto label_4a1bac;
        case 0x4a1bb0u: goto label_4a1bb0;
        case 0x4a1bb4u: goto label_4a1bb4;
        case 0x4a1bb8u: goto label_4a1bb8;
        case 0x4a1bbcu: goto label_4a1bbc;
        case 0x4a1bc0u: goto label_4a1bc0;
        case 0x4a1bc4u: goto label_4a1bc4;
        case 0x4a1bc8u: goto label_4a1bc8;
        case 0x4a1bccu: goto label_4a1bcc;
        case 0x4a1bd0u: goto label_4a1bd0;
        case 0x4a1bd4u: goto label_4a1bd4;
        case 0x4a1bd8u: goto label_4a1bd8;
        case 0x4a1bdcu: goto label_4a1bdc;
        case 0x4a1be0u: goto label_4a1be0;
        case 0x4a1be4u: goto label_4a1be4;
        case 0x4a1be8u: goto label_4a1be8;
        case 0x4a1becu: goto label_4a1bec;
        case 0x4a1bf0u: goto label_4a1bf0;
        case 0x4a1bf4u: goto label_4a1bf4;
        case 0x4a1bf8u: goto label_4a1bf8;
        case 0x4a1bfcu: goto label_4a1bfc;
        case 0x4a1c00u: goto label_4a1c00;
        case 0x4a1c04u: goto label_4a1c04;
        case 0x4a1c08u: goto label_4a1c08;
        case 0x4a1c0cu: goto label_4a1c0c;
        case 0x4a1c10u: goto label_4a1c10;
        case 0x4a1c14u: goto label_4a1c14;
        case 0x4a1c18u: goto label_4a1c18;
        case 0x4a1c1cu: goto label_4a1c1c;
        case 0x4a1c20u: goto label_4a1c20;
        case 0x4a1c24u: goto label_4a1c24;
        case 0x4a1c28u: goto label_4a1c28;
        case 0x4a1c2cu: goto label_4a1c2c;
        case 0x4a1c30u: goto label_4a1c30;
        case 0x4a1c34u: goto label_4a1c34;
        case 0x4a1c38u: goto label_4a1c38;
        case 0x4a1c3cu: goto label_4a1c3c;
        case 0x4a1c40u: goto label_4a1c40;
        case 0x4a1c44u: goto label_4a1c44;
        case 0x4a1c48u: goto label_4a1c48;
        case 0x4a1c4cu: goto label_4a1c4c;
        case 0x4a1c50u: goto label_4a1c50;
        case 0x4a1c54u: goto label_4a1c54;
        case 0x4a1c58u: goto label_4a1c58;
        case 0x4a1c5cu: goto label_4a1c5c;
        case 0x4a1c60u: goto label_4a1c60;
        case 0x4a1c64u: goto label_4a1c64;
        case 0x4a1c68u: goto label_4a1c68;
        case 0x4a1c6cu: goto label_4a1c6c;
        case 0x4a1c70u: goto label_4a1c70;
        case 0x4a1c74u: goto label_4a1c74;
        case 0x4a1c78u: goto label_4a1c78;
        case 0x4a1c7cu: goto label_4a1c7c;
        case 0x4a1c80u: goto label_4a1c80;
        case 0x4a1c84u: goto label_4a1c84;
        case 0x4a1c88u: goto label_4a1c88;
        case 0x4a1c8cu: goto label_4a1c8c;
        case 0x4a1c90u: goto label_4a1c90;
        case 0x4a1c94u: goto label_4a1c94;
        case 0x4a1c98u: goto label_4a1c98;
        case 0x4a1c9cu: goto label_4a1c9c;
        case 0x4a1ca0u: goto label_4a1ca0;
        case 0x4a1ca4u: goto label_4a1ca4;
        case 0x4a1ca8u: goto label_4a1ca8;
        case 0x4a1cacu: goto label_4a1cac;
        case 0x4a1cb0u: goto label_4a1cb0;
        case 0x4a1cb4u: goto label_4a1cb4;
        case 0x4a1cb8u: goto label_4a1cb8;
        case 0x4a1cbcu: goto label_4a1cbc;
        case 0x4a1cc0u: goto label_4a1cc0;
        case 0x4a1cc4u: goto label_4a1cc4;
        case 0x4a1cc8u: goto label_4a1cc8;
        case 0x4a1cccu: goto label_4a1ccc;
        case 0x4a1cd0u: goto label_4a1cd0;
        case 0x4a1cd4u: goto label_4a1cd4;
        case 0x4a1cd8u: goto label_4a1cd8;
        case 0x4a1cdcu: goto label_4a1cdc;
        case 0x4a1ce0u: goto label_4a1ce0;
        case 0x4a1ce4u: goto label_4a1ce4;
        case 0x4a1ce8u: goto label_4a1ce8;
        case 0x4a1cecu: goto label_4a1cec;
        case 0x4a1cf0u: goto label_4a1cf0;
        case 0x4a1cf4u: goto label_4a1cf4;
        case 0x4a1cf8u: goto label_4a1cf8;
        case 0x4a1cfcu: goto label_4a1cfc;
        case 0x4a1d00u: goto label_4a1d00;
        case 0x4a1d04u: goto label_4a1d04;
        case 0x4a1d08u: goto label_4a1d08;
        case 0x4a1d0cu: goto label_4a1d0c;
        case 0x4a1d10u: goto label_4a1d10;
        case 0x4a1d14u: goto label_4a1d14;
        case 0x4a1d18u: goto label_4a1d18;
        case 0x4a1d1cu: goto label_4a1d1c;
        case 0x4a1d20u: goto label_4a1d20;
        case 0x4a1d24u: goto label_4a1d24;
        case 0x4a1d28u: goto label_4a1d28;
        case 0x4a1d2cu: goto label_4a1d2c;
        case 0x4a1d30u: goto label_4a1d30;
        case 0x4a1d34u: goto label_4a1d34;
        case 0x4a1d38u: goto label_4a1d38;
        case 0x4a1d3cu: goto label_4a1d3c;
        case 0x4a1d40u: goto label_4a1d40;
        case 0x4a1d44u: goto label_4a1d44;
        case 0x4a1d48u: goto label_4a1d48;
        case 0x4a1d4cu: goto label_4a1d4c;
        case 0x4a1d50u: goto label_4a1d50;
        case 0x4a1d54u: goto label_4a1d54;
        case 0x4a1d58u: goto label_4a1d58;
        case 0x4a1d5cu: goto label_4a1d5c;
        default: break;
    }

    ctx->pc = 0x4a1980u;

label_4a1980:
    // 0x4a1980: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x4a1980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_4a1984:
    // 0x4a1984: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x4a1984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_4a1988:
    // 0x4a1988: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x4a1988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_4a198c:
    // 0x4a198c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a198cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a1990:
    // 0x4a1990: 0xafa50074  sw          $a1, 0x74($sp)
    ctx->pc = 0x4a1990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 5));
label_4a1994:
    // 0x4a1994: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4a1994u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4a1998:
    // 0x4a1998: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x4a1998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_4a199c:
    // 0x4a199c: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x4a199cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_4a19a0:
    // 0x4a19a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4a19a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a19a4:
    // 0x4a19a4: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x4a19a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_4a19a8:
    // 0x4a19a8: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x4a19a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_4a19ac:
    // 0x4a19ac: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x4a19acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_4a19b0:
    // 0x4a19b0: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x4a19b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_4a19b4:
    // 0x4a19b4: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x4a19b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_4a19b8:
    // 0x4a19b8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4a19b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4a19bc:
    // 0x4a19bc: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x4a19bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
label_4a19c0:
    // 0x4a19c0: 0xc12976a  jal         func_4A5DA8
label_4a19c4:
    if (ctx->pc == 0x4A19C4u) {
        ctx->pc = 0x4A19C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A19C0u;
        // 0x4a19c4: 0xafa8007c  sw          $t0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A19C8u;
        goto label_4a19c8;
    }
    ctx->pc = 0x4A19C0u;
    SET_GPR_U32(ctx, 31, 0x4A19C8u);
    ctx->pc = 0x4A19C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A19C0u;
    // 0x4a19c4: 0xafa8007c  sw          $t0, 0x7C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5DA8u, 0x4A19C0u, 0x4A19C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A19C8u;
label_4a19c8:
    // 0x4a19c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_4a19cc:
    if (ctx->pc == 0x4A19CCu) {
        ctx->pc = 0x4A19CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A19C8u;
        // 0x4a19cc: 0x8fa4007c  lw          $a0, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A19D0u;
        goto label_4a19d0;
    }
    ctx->pc = 0x4A19C8u;
    {
        const bool branch_taken_0x4a19c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A19CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A19C8u;
        // 0x4a19cc: 0x8fa4007c  lw          $a0, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a19c8) {
            ctx->pc = 0x4A19FCu;
            goto label_4a19fc;
        }
    }
    ctx->pc = 0x4A19D0u;
label_4a19d0:
    // 0x4a19d0: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x4a19d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4a19d4:
    // 0x4a19d4: 0xc0bb778  jal         func_2EDDE0
label_4a19d8:
    if (ctx->pc == 0x4A19D8u) {
        ctx->pc = 0x4A19D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A19D4u;
        // 0x4a19d8: 0x8fa50074  lw          $a1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A19DCu;
        goto label_4a19dc;
    }
    ctx->pc = 0x4A19D4u;
    SET_GPR_U32(ctx, 31, 0x4A19DCu);
    ctx->pc = 0x4A19D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A19D4u;
    // 0x4a19d8: 0x8fa50074  lw          $a1, 0x74($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4A19D4u, 0x4A19DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A19DCu;
label_4a19dc:
    // 0x4a19dc: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_4a19e0:
    if (ctx->pc == 0x4A19E0u) {
        ctx->pc = 0x4A19E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A19DCu;
        // 0x4a19e0: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A19E4u;
        goto label_4a19e4;
    }
    ctx->pc = 0x4A19DCu;
    {
        const bool branch_taken_0x4a19dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A19E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A19DCu;
        // 0x4a19e0: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a19dc) {
            ctx->pc = 0x4A1D2Cu;
            goto label_4a1d2c;
        }
    }
    ctx->pc = 0x4A19E4u;
label_4a19e4:
    // 0x4a19e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a19e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a19e8:
    // 0x4a19e8: 0x10000014  b           . + 4 + (0x14 << 2)
label_4a19ec:
    if (ctx->pc == 0x4A19ECu) {
        ctx->pc = 0x4A19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A19E8u;
        // 0x4a19ec: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A19F0u;
        goto label_4a19f0;
    }
    ctx->pc = 0x4A19E8u;
    {
        const bool branch_taken_0x4a19e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A19ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A19E8u;
        // 0x4a19ec: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a19e8) {
            ctx->pc = 0x4A1A3Cu;
            goto label_4a1a3c;
        }
    }
    ctx->pc = 0x4A19F0u;
label_4a19f0:
    // 0x4a19f0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a19f4:
    // 0x4a19f4: 0x10000021  b           . + 4 + (0x21 << 2)
label_4a19f8:
    if (ctx->pc == 0x4A19F8u) {
        ctx->pc = 0x4A19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A19F4u;
        // 0x4a19f8: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A19FCu;
        goto label_4a19fc;
    }
    ctx->pc = 0x4A19F4u;
    {
        const bool branch_taken_0x4a19f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A19F4u;
        // 0x4a19f8: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a19f4) {
            ctx->pc = 0x4A1A7Cu;
            goto label_4a1a7c;
        }
    }
    ctx->pc = 0x4A19FCu;
label_4a19fc:
    // 0x4a19fc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x4a19fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_4a1a00:
    // 0x4a1a00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a1a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1a04:
    // 0x4a1a04: 0x24505f10  addiu       $s0, $v0, 0x5F10
    ctx->pc = 0x4a1a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24336));
label_4a1a08:
    // 0x4a1a08: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x4a1a08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4a1a0c:
    // 0x4a1a0c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x4a1a0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a1a10:
    // 0x4a1a10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a1a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a1a14:
    // 0x4a1a14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4a1a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a1a18:
    // 0x4a1a18: 0xc1297fc  jal         func_4A5FF0
label_4a1a1c:
    if (ctx->pc == 0x4A1A1Cu) {
        ctx->pc = 0x4A1A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1A18u;
        // 0x4a1a1c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1A20u;
        goto label_4a1a20;
    }
    ctx->pc = 0x4A1A18u;
    SET_GPR_U32(ctx, 31, 0x4A1A20u);
    ctx->pc = 0x4A1A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1A18u;
    // 0x4a1a1c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FF0u, 0x4A1A18u, 0x4A1A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1A20u;
label_4a1a20:
    // 0x4a1a20: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_4a1a24:
    if (ctx->pc == 0x4A1A24u) {
        ctx->pc = 0x4A1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1A20u;
        // 0x4a1a24: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1A28u;
        goto label_4a1a28;
    }
    ctx->pc = 0x4A1A20u;
    {
        const bool branch_taken_0x4a1a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1A20u;
        // 0x4a1a24: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1a20) {
            ctx->pc = 0x4A19E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a19e4;
        }
    }
    ctx->pc = 0x4A1A28u;
label_4a1a28:
    // 0x4a1a28: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x4a1a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_4a1a2c:
    // 0x4a1a2c: 0x2e220033  sltiu       $v0, $s1, 0x33
    ctx->pc = 0x4a1a2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_4a1a30:
    // 0x4a1a30: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_4a1a34:
    if (ctx->pc == 0x4A1A34u) {
        ctx->pc = 0x4A1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1A30u;
        // 0x4a1a34: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1A38u;
        goto label_4a1a38;
    }
    ctx->pc = 0x4A1A30u;
    {
        const bool branch_taken_0x4a1a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1A30u;
        // 0x4a1a34: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1a30) {
            ctx->pc = 0x4A1A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1a10;
        }
    }
    ctx->pc = 0x4A1A38u;
label_4a1a38:
    // 0x4a1a38: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4a1a38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1a3c:
    // 0x4a1a3c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x4a1a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_4a1a40:
    // 0x4a1a40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a1a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1a44:
    // 0x4a1a44: 0x24505f10  addiu       $s0, $v0, 0x5F10
    ctx->pc = 0x4a1a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24336));
label_4a1a48:
    // 0x4a1a48: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x4a1a48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a1a4c:
    // 0x4a1a4c: 0x0  nop
    ctx->pc = 0x4a1a4cu;
    // NOP
label_4a1a50:
    // 0x4a1a50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a1a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a1a54:
    // 0x4a1a54: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4a1a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a1a58:
    // 0x4a1a58: 0xc1297fc  jal         func_4A5FF0
label_4a1a5c:
    if (ctx->pc == 0x4A1A5Cu) {
        ctx->pc = 0x4A1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1A58u;
        // 0x4a1a5c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1A60u;
        goto label_4a1a60;
    }
    ctx->pc = 0x4A1A58u;
    SET_GPR_U32(ctx, 31, 0x4A1A60u);
    ctx->pc = 0x4A1A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1A58u;
    // 0x4a1a5c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FF0u, 0x4A1A58u, 0x4A1A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1A60u;
label_4a1a60:
    // 0x4a1a60: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_4a1a64:
    if (ctx->pc == 0x4A1A64u) {
        ctx->pc = 0x4A1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1A60u;
        // 0x4a1a64: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1A68u;
        goto label_4a1a68;
    }
    ctx->pc = 0x4A1A60u;
    {
        const bool branch_taken_0x4a1a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1A60u;
        // 0x4a1a64: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1a60) {
            ctx->pc = 0x4A19F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a19f0;
        }
    }
    ctx->pc = 0x4A1A68u;
label_4a1a68:
    // 0x4a1a68: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x4a1a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_4a1a6c:
    // 0x4a1a6c: 0x2e220033  sltiu       $v0, $s1, 0x33
    ctx->pc = 0x4a1a6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_4a1a70:
    // 0x4a1a70: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_4a1a74:
    if (ctx->pc == 0x4A1A74u) {
        ctx->pc = 0x4A1A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1A70u;
        // 0x4a1a74: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1A78u;
        goto label_4a1a78;
    }
    ctx->pc = 0x4A1A70u;
    {
        const bool branch_taken_0x4a1a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1A70u;
        // 0x4a1a74: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1a70) {
            ctx->pc = 0x4A1A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1a50;
        }
    }
    ctx->pc = 0x4A1A78u;
label_4a1a78:
    // 0x4a1a78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a1a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1a7c:
    // 0x4a1a7c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a1a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4a1a80:
    // 0x4a1a80: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4a1a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a1a84:
    // 0x4a1a84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a1a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4a1a88:
    // 0x4a1a88: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x4a1a88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4a1a8c:
    // 0x4a1a8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a1a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a1a90:
    // 0x4a1a90: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4a1a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4a1a94:
    // 0x4a1a94: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x4a1a94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4a1a98:
    // 0x4a1a98: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x4a1a98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4a1a9c:
    // 0x4a1a9c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x4a1a9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a1aa0:
    // 0x4a1aa0: 0xc12849e  jal         func_4A1278
label_4a1aa4:
    if (ctx->pc == 0x4A1AA4u) {
        ctx->pc = 0x4A1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1AA0u;
        // 0x4a1aa4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1AA8u;
        goto label_4a1aa8;
    }
    ctx->pc = 0x4A1AA0u;
    SET_GPR_U32(ctx, 31, 0x4A1AA8u);
    ctx->pc = 0x4A1AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1AA0u;
    // 0x4a1aa4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1278u, 0x4A1AA0u, 0x4A1AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1AA8u;
label_4a1aa8:
    // 0x4a1aa8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a1aa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1aac:
    // 0x4a1aac: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x4a1aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_4a1ab0:
    // 0x4a1ab0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x4a1ab0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1ab4:
    // 0x4a1ab4: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x4a1ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4a1ab8:
    // 0x4a1ab8: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x4a1ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4a1abc:
    // 0x4a1abc: 0x6a63000f  ldl         $v1, 0xF($s3)
    ctx->pc = 0x4a1abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4a1ac0:
    // 0x4a1ac0: 0x6e630008  ldr         $v1, 0x8($s3)
    ctx->pc = 0x4a1ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4a1ac4:
    // 0x4a1ac4: 0x6a640017  ldl         $a0, 0x17($s3)
    ctx->pc = 0x4a1ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4a1ac8:
    // 0x4a1ac8: 0x6e640010  ldr         $a0, 0x10($s3)
    ctx->pc = 0x4a1ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4a1acc:
    // 0x4a1acc: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x4a1accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_4a1ad0:
    // 0x4a1ad0: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x4a1ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a1ad4:
    // 0x4a1ad4: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x4a1ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a1ad8:
    // 0x4a1ad8: 0xb3a3003f  sdl         $v1, 0x3F($sp)
    ctx->pc = 0x4a1ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a1adc:
    // 0x4a1adc: 0xb7a30038  sdr         $v1, 0x38($sp)
    ctx->pc = 0x4a1adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a1ae0:
    // 0x4a1ae0: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x4a1ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a1ae4:
    // 0x4a1ae4: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x4a1ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a1ae8:
    // 0x4a1ae8: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x4a1ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_4a1aec:
    // 0x4a1aec: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x4a1aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_4a1af0:
    // 0x4a1af0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x4a1af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_4a1af4:
    // 0x4a1af4: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x4a1af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_4a1af8:
    // 0x4a1af8: 0xa3a0005c  sb          $zero, 0x5C($sp)
    ctx->pc = 0x4a1af8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 92), (uint8_t)GPR_U32(ctx, 0));
label_4a1afc:
    // 0x4a1afc: 0xa3a0005d  sb          $zero, 0x5D($sp)
    ctx->pc = 0x4a1afcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 93), (uint8_t)GPR_U32(ctx, 0));
label_4a1b00:
    // 0x4a1b00: 0xa3a00068  sb          $zero, 0x68($sp)
    ctx->pc = 0x4a1b00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 0));
label_4a1b04:
    // 0x4a1b04: 0xa3a00069  sb          $zero, 0x69($sp)
    ctx->pc = 0x4a1b04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 105), (uint8_t)GPR_U32(ctx, 0));
label_4a1b08:
    // 0x4a1b08: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4a1b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4a1b0c:
    // 0x4a1b0c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x4a1b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_4a1b10:
    // 0x4a1b10: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x4a1b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4a1b14:
    // 0x4a1b14: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x4a1b14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_4a1b18:
    // 0x4a1b18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a1b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a1b1c:
    // 0x4a1b1c: 0xc127cc2  jal         func_49F308
label_4a1b20:
    if (ctx->pc == 0x4A1B20u) {
        ctx->pc = 0x4A1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1B1Cu;
        // 0x4a1b20: 0x34c60806  ori         $a2, $a2, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1B24u;
        goto label_4a1b24;
    }
    ctx->pc = 0x4A1B1Cu;
    SET_GPR_U32(ctx, 31, 0x4A1B24u);
    ctx->pc = 0x4A1B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1B1Cu;
    // 0x4a1b20: 0x34c60806  ori         $a2, $a2, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F308u, 0x4A1B1Cu, 0x4A1B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1B24u;
label_4a1b24:
    // 0x4a1b24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a1b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a1b28:
    // 0x4a1b28: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_4a1b2c:
    if (ctx->pc == 0x4A1B2Cu) {
        ctx->pc = 0x4A1B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1B28u;
        // 0x4a1b2c: 0x8e730008  lw          $s3, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1B30u;
        goto label_4a1b30;
    }
    ctx->pc = 0x4A1B28u;
    {
        const bool branch_taken_0x4a1b28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a1b28) {
            ctx->pc = 0x4A1B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A1B28u;
            // 0x4a1b2c: 0x8e730008  lw          $s3, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A1B38u;
            goto label_4a1b38;
        }
    }
    ctx->pc = 0x4A1B30u;
label_4a1b30:
    // 0x4a1b30: 0x1000007e  b           . + 4 + (0x7E << 2)
label_4a1b34:
    if (ctx->pc == 0x4A1B34u) {
        ctx->pc = 0x4A1B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1B30u;
        // 0x4a1b34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1B38u;
        goto label_4a1b38;
    }
    ctx->pc = 0x4A1B30u;
    {
        const bool branch_taken_0x4a1b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1B30u;
        // 0x4a1b34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1b30) {
            ctx->pc = 0x4A1D2Cu;
            goto label_4a1d2c;
        }
    }
    ctx->pc = 0x4A1B38u;
label_4a1b38:
    // 0x4a1b38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a1b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a1b3c:
    // 0x4a1b3c: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x4a1b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_4a1b40:
    // 0x4a1b40: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x4a1b40u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1b44:
    // 0x4a1b44: 0xafb30084  sw          $s3, 0x84($sp)
    ctx->pc = 0x4a1b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 19));
label_4a1b48:
    // 0x4a1b48: 0xc0bb778  jal         func_2EDDE0
label_4a1b4c:
    if (ctx->pc == 0x4A1B4Cu) {
        ctx->pc = 0x4A1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1B48u;
        // 0x4a1b4c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1B50u;
        goto label_4a1b50;
    }
    ctx->pc = 0x4A1B48u;
    SET_GPR_U32(ctx, 31, 0x4A1B50u);
    ctx->pc = 0x4A1B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1B48u;
    // 0x4a1b4c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4A1B48u, 0x4A1B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1B50u;
label_4a1b50:
    // 0x4a1b50: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x4a1b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_4a1b54:
    // 0x4a1b54: 0x242182b  sltu        $v1, $s2, $v0
    ctx->pc = 0x4a1b54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a1b58:
    // 0x4a1b58: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
label_4a1b5c:
    if (ctx->pc == 0x4A1B5Cu) {
        ctx->pc = 0x4A1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1B58u;
        // 0x4a1b5c: 0x27b60050  addiu       $s6, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1B60u;
        goto label_4a1b60;
    }
    ctx->pc = 0x4A1B58u;
    {
        const bool branch_taken_0x4a1b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1B58u;
        // 0x4a1b5c: 0x27b60050  addiu       $s6, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1b58) {
            ctx->pc = 0x4A1D04u;
            goto label_4a1d04;
        }
    }
    ctx->pc = 0x4A1B60u;
label_4a1b60:
    // 0x4a1b60: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x4a1b60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4a1b64:
    // 0x4a1b64: 0x0  nop
    ctx->pc = 0x4a1b64u;
    // NOP
label_4a1b68:
    // 0x4a1b68: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4a1b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a1b6c:
    // 0x4a1b6c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4a1b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4a1b70:
    // 0x4a1b70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a1b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a1b74:
    // 0x4a1b74: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x4a1b74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a1b78:
    // 0x4a1b78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a1b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a1b7c:
    // 0x4a1b7c: 0xc1297da  jal         func_4A5F68
label_4a1b80:
    if (ctx->pc == 0x4A1B80u) {
        ctx->pc = 0x4A1B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1B7Cu;
        // 0x4a1b80: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1B84u;
        goto label_4a1b84;
    }
    ctx->pc = 0x4A1B7Cu;
    SET_GPR_U32(ctx, 31, 0x4A1B84u);
    ctx->pc = 0x4A1B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1B7Cu;
    // 0x4a1b80: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5F68u, 0x4A1B7Cu, 0x4A1B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1B84u;
label_4a1b84:
    // 0x4a1b84: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4a1b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a1b88:
    // 0x4a1b88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4a1b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a1b8c:
    // 0x4a1b8c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4a1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4a1b90:
    // 0x4a1b90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a1b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4a1b94:
    // 0x4a1b94: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4a1b98:
    if (ctx->pc == 0x4A1B98u) {
        ctx->pc = 0x4A1B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1B94u;
        // 0x4a1b98: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1B9Cu;
        goto label_4a1b9c;
    }
    ctx->pc = 0x4A1B94u;
    {
        const bool branch_taken_0x4a1b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1B94u;
        // 0x4a1b98: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1b94) {
            ctx->pc = 0x4A1BA0u;
            goto label_4a1ba0;
        }
    }
    ctx->pc = 0x4A1B9Cu;
label_4a1b9c:
    // 0x4a1b9c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4a1b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4a1ba0:
    // 0x4a1ba0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x4a1ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_4a1ba4:
    // 0x4a1ba4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4a1ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a1ba8:
    // 0x4a1ba8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4a1ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4a1bac:
    // 0x4a1bac: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x4a1bacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_4a1bb0:
    // 0x4a1bb0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x4a1bb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4a1bb4:
    // 0x4a1bb4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a1bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4a1bb8:
    // 0x4a1bb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4a1bb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1bbc:
    // 0x4a1bbc: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x4a1bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_4a1bc0:
    // 0x4a1bc0: 0x40f809  jalr        $v0
label_4a1bc4:
    if (ctx->pc == 0x4A1BC4u) {
        ctx->pc = 0x4A1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1BC0u;
        // 0x4a1bc4: 0x27a90070  addiu       $t1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1BC8u;
        goto label_4a1bc8;
    }
    ctx->pc = 0x4A1BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A1BC8u);
        ctx->pc = 0x4A1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1BC0u;
        // 0x4a1bc4: 0x27a90070  addiu       $t1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1BC0u, 0x4A1BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A1BC8u;
label_4a1bc8:
    // 0x4a1bc8: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x4a1bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4a1bcc:
    // 0x4a1bcc: 0x3c2182b  sltu        $v1, $fp, $v0
    ctx->pc = 0x4a1bccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a1bd0:
    // 0x4a1bd0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_4a1bd4:
    if (ctx->pc == 0x4A1BD4u) {
        ctx->pc = 0x4A1BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1BD0u;
        // 0x4a1bd4: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1BD8u;
        goto label_4a1bd8;
    }
    ctx->pc = 0x4A1BD0u;
    {
        const bool branch_taken_0x4a1bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1BD0u;
        // 0x4a1bd4: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1bd0) {
            ctx->pc = 0x4A1C20u;
            goto label_4a1c20;
        }
    }
    ctx->pc = 0x4A1BD8u;
label_4a1bd8:
    // 0x4a1bd8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_4a1bdc:
    if (ctx->pc == 0x4A1BDCu) {
        ctx->pc = 0x4A1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1BD8u;
        // 0x4a1bdc: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1BE0u;
        goto label_4a1be0;
    }
    ctx->pc = 0x4A1BD8u;
    {
        const bool branch_taken_0x4a1bd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1BD8u;
        // 0x4a1bdc: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1bd8) {
            ctx->pc = 0x4A1BECu;
            goto label_4a1bec;
        }
    }
    ctx->pc = 0x4A1BE0u;
label_4a1be0:
    // 0x4a1be0: 0xc127cae  jal         func_49F2B8
label_4a1be4:
    if (ctx->pc == 0x4A1BE4u) {
        ctx->pc = 0x4A1BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1BE0u;
        // 0x4a1be4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1BE8u;
        goto label_4a1be8;
    }
    ctx->pc = 0x4A1BE0u;
    SET_GPR_U32(ctx, 31, 0x4A1BE8u);
    ctx->pc = 0x4A1BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1BE0u;
    // 0x4a1be4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A1BE0u, 0x4A1BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1BE8u;
label_4a1be8:
    // 0x4a1be8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x4a1be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_4a1bec:
    // 0x4a1bec: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x4a1becu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_4a1bf0:
    // 0x4a1bf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a1bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a1bf4:
    // 0x4a1bf4: 0xc127cc2  jal         func_49F308
label_4a1bf8:
    if (ctx->pc == 0x4A1BF8u) {
        ctx->pc = 0x4A1BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1BF4u;
        // 0x4a1bf8: 0x34c60806  ori         $a2, $a2, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1BFCu;
        goto label_4a1bfc;
    }
    ctx->pc = 0x4A1BF4u;
    SET_GPR_U32(ctx, 31, 0x4A1BFCu);
    ctx->pc = 0x4A1BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1BF4u;
    // 0x4a1bf8: 0x34c60806  ori         $a2, $a2, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F308u, 0x4A1BF4u, 0x4A1BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1BFCu;
label_4a1bfc:
    // 0x4a1bfc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a1bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a1c00:
    // 0x4a1c00: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
label_4a1c04:
    if (ctx->pc == 0x4A1C04u) {
        ctx->pc = 0x4A1C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1C00u;
        // 0x4a1c04: 0x8fbe0058  lw          $fp, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1C08u;
        goto label_4a1c08;
    }
    ctx->pc = 0x4A1C00u;
    {
        const bool branch_taken_0x4a1c00 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1C00u;
        // 0x4a1c04: 0x8fbe0058  lw          $fp, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1c00) {
            ctx->pc = 0x4A1C20u;
            goto label_4a1c20;
        }
    }
    ctx->pc = 0x4A1C08u;
label_4a1c08:
    // 0x4a1c08: 0x12200048  beqz        $s1, . + 4 + (0x48 << 2)
label_4a1c0c:
    if (ctx->pc == 0x4A1C0Cu) {
        ctx->pc = 0x4A1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1C08u;
        // 0x4a1c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1C10u;
        goto label_4a1c10;
    }
    ctx->pc = 0x4A1C08u;
    {
        const bool branch_taken_0x4a1c08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1C08u;
        // 0x4a1c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1c08) {
            ctx->pc = 0x4A1D2Cu;
            goto label_4a1d2c;
        }
    }
    ctx->pc = 0x4A1C10u;
label_4a1c10:
    // 0x4a1c10: 0xc127cae  jal         func_49F2B8
label_4a1c14:
    if (ctx->pc == 0x4A1C14u) {
        ctx->pc = 0x4A1C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1C10u;
        // 0x4a1c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1C18u;
        goto label_4a1c18;
    }
    ctx->pc = 0x4A1C10u;
    SET_GPR_U32(ctx, 31, 0x4A1C18u);
    ctx->pc = 0x4A1C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1C10u;
    // 0x4a1c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A1C10u, 0x4A1C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1C18u;
label_4a1c18:
    // 0x4a1c18: 0x10000044  b           . + 4 + (0x44 << 2)
label_4a1c1c:
    if (ctx->pc == 0x4A1C1Cu) {
        ctx->pc = 0x4A1C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1C18u;
        // 0x4a1c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1C20u;
        goto label_4a1c20;
    }
    ctx->pc = 0x4A1C18u;
    {
        const bool branch_taken_0x4a1c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1C18u;
        // 0x4a1c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1c18) {
            ctx->pc = 0x4A1D2Cu;
            goto label_4a1d2c;
        }
    }
    ctx->pc = 0x4A1C20u;
label_4a1c20:
    // 0x4a1c20: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x4a1c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_4a1c24:
    // 0x4a1c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a1c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a1c28:
    // 0x4a1c28: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x4a1c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_4a1c2c:
    // 0x4a1c2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a1c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a1c30:
    // 0x4a1c30: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x4a1c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_4a1c34:
    // 0x4a1c34: 0x2a80b  movn        $s5, $zero, $v0
    ctx->pc = 0x4a1c34u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_4a1c38:
    // 0x4a1c38: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x4a1c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
label_4a1c3c:
    // 0x4a1c3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a1c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a1c40:
    // 0x4a1c40: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x4a1c40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_4a1c44:
    // 0x4a1c44: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x4a1c44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4a1c48:
    // 0x4a1c48: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4a1c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a1c4c:
    // 0x4a1c4c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x4a1c4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a1c50:
    // 0x4a1c50: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a1c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4a1c54:
    // 0x4a1c54: 0x40f809  jalr        $v0
label_4a1c58:
    if (ctx->pc == 0x4A1C58u) {
        ctx->pc = 0x4A1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1C54u;
        // 0x4a1c58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1C5Cu;
        goto label_4a1c5c;
    }
    ctx->pc = 0x4A1C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A1C5Cu);
        ctx->pc = 0x4A1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1C54u;
        // 0x4a1c58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1C54u, 0x4A1C5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A1C5Cu;
label_4a1c5c:
    // 0x4a1c5c: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
label_4a1c60:
    if (ctx->pc == 0x4A1C60u) {
        ctx->pc = 0x4A1C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1C5Cu;
        // 0x4a1c60: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1C64u;
        goto label_4a1c64;
    }
    ctx->pc = 0x4A1C5Cu;
    {
        const bool branch_taken_0x4a1c5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A1C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1C5Cu;
        // 0x4a1c60: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1c5c) {
            ctx->pc = 0x4A1C8Cu;
            goto label_4a1c8c;
        }
    }
    ctx->pc = 0x4A1C64u;
label_4a1c64:
    // 0x4a1c64: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_4a1c68:
    if (ctx->pc == 0x4A1C68u) {
        ctx->pc = 0x4A1C6Cu;
        goto label_4a1c6c;
    }
    ctx->pc = 0x4A1C64u;
    {
        const bool branch_taken_0x4a1c64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a1c64) {
            ctx->pc = 0x4A1C74u;
            goto label_4a1c74;
        }
    }
    ctx->pc = 0x4A1C6Cu;
label_4a1c6c:
    // 0x4a1c6c: 0xc127cae  jal         func_49F2B8
label_4a1c70:
    if (ctx->pc == 0x4A1C70u) {
        ctx->pc = 0x4A1C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1C6Cu;
        // 0x4a1c70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1C74u;
        goto label_4a1c74;
    }
    ctx->pc = 0x4A1C6Cu;
    SET_GPR_U32(ctx, 31, 0x4A1C74u);
    ctx->pc = 0x4A1C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1C6Cu;
    // 0x4a1c70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A1C6Cu, 0x4A1C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1C74u;
label_4a1c74:
    // 0x4a1c74: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
label_4a1c78:
    if (ctx->pc == 0x4A1C78u) {
        ctx->pc = 0x4A1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1C74u;
        // 0x4a1c78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1C7Cu;
        goto label_4a1c7c;
    }
    ctx->pc = 0x4A1C74u;
    {
        const bool branch_taken_0x4a1c74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1C74u;
        // 0x4a1c78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1c74) {
            ctx->pc = 0x4A1D2Cu;
            goto label_4a1d2c;
        }
    }
    ctx->pc = 0x4A1C7Cu;
label_4a1c7c:
    // 0x4a1c7c: 0xc127cae  jal         func_49F2B8
label_4a1c80:
    if (ctx->pc == 0x4A1C80u) {
        ctx->pc = 0x4A1C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1C7Cu;
        // 0x4a1c80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1C84u;
        goto label_4a1c84;
    }
    ctx->pc = 0x4A1C7Cu;
    SET_GPR_U32(ctx, 31, 0x4A1C84u);
    ctx->pc = 0x4A1C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1C7Cu;
    // 0x4a1c80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A1C7Cu, 0x4A1C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1C84u;
label_4a1c84:
    // 0x4a1c84: 0x10000029  b           . + 4 + (0x29 << 2)
label_4a1c88:
    if (ctx->pc == 0x4A1C88u) {
        ctx->pc = 0x4A1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1C84u;
        // 0x4a1c88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1C8Cu;
        goto label_4a1c8c;
    }
    ctx->pc = 0x4A1C84u;
    {
        const bool branch_taken_0x4a1c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1C84u;
        // 0x4a1c88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1c84) {
            ctx->pc = 0x4A1D2Cu;
            goto label_4a1d2c;
        }
    }
    ctx->pc = 0x4A1C8Cu;
label_4a1c8c:
    // 0x4a1c8c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x4a1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4a1c90:
    // 0x4a1c90: 0x16e20005  bne         $s7, $v0, . + 4 + (0x5 << 2)
label_4a1c94:
    if (ctx->pc == 0x4A1C94u) {
        ctx->pc = 0x4A1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1C90u;
        // 0x4a1c94: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1C98u;
        goto label_4a1c98;
    }
    ctx->pc = 0x4A1C90u;
    {
        const bool branch_taken_0x4a1c90 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1C90u;
        // 0x4a1c94: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1c90) {
            ctx->pc = 0x4A1CA8u;
            goto label_4a1ca8;
        }
    }
    ctx->pc = 0x4A1C98u;
label_4a1c98:
    // 0x4a1c98: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x4a1c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_4a1c9c:
    // 0x4a1c9c: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x4a1c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_4a1ca0:
    // 0x4a1ca0: 0x10000005  b           . + 4 + (0x5 << 2)
label_4a1ca4:
    if (ctx->pc == 0x4A1CA4u) {
        ctx->pc = 0x4A1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1CA0u;
        // 0x4a1ca4: 0xae830014  sw          $v1, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1CA8u;
        goto label_4a1ca8;
    }
    ctx->pc = 0x4A1CA0u;
    {
        const bool branch_taken_0x4a1ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1CA0u;
        // 0x4a1ca4: 0xae830014  sw          $v1, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1ca0) {
            ctx->pc = 0x4A1CB8u;
            goto label_4a1cb8;
        }
    }
    ctx->pc = 0x4A1CA8u;
label_4a1ca8:
    // 0x4a1ca8: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_4a1cac:
    if (ctx->pc == 0x4A1CACu) {
        ctx->pc = 0x4A1CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1CA8u;
        // 0x4a1cac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1CB0u;
        goto label_4a1cb0;
    }
    ctx->pc = 0x4A1CA8u;
    {
        const bool branch_taken_0x4a1ca8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1CA8u;
        // 0x4a1cac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1ca8) {
            ctx->pc = 0x4A1CBCu;
            goto label_4a1cbc;
        }
    }
    ctx->pc = 0x4A1CB0u;
label_4a1cb0:
    // 0x4a1cb0: 0xc129822  jal         func_4A6088
label_4a1cb4:
    if (ctx->pc == 0x4A1CB4u) {
        ctx->pc = 0x4A1CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1CB0u;
        // 0x4a1cb4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1CB8u;
        goto label_4a1cb8;
    }
    ctx->pc = 0x4A1CB0u;
    SET_GPR_U32(ctx, 31, 0x4A1CB8u);
    ctx->pc = 0x4A1CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1CB0u;
    // 0x4a1cb4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6088u, 0x4A1CB0u, 0x4A1CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1CB8u;
label_4a1cb8:
    // 0x4a1cb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a1cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a1cbc:
    // 0x4a1cbc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x4a1cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_4a1cc0:
    // 0x4a1cc0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x4a1cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a1cc4:
    // 0x4a1cc4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x4a1cc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a1cc8:
    // 0x4a1cc8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4a1cc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a1ccc:
    // 0x4a1ccc: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x4a1cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_4a1cd0:
    // 0x4a1cd0: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x4a1cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_4a1cd4:
    // 0x4a1cd4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x4a1cd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_4a1cd8:
    // 0x4a1cd8: 0xdfa30060  ld          $v1, 0x60($sp)
    ctx->pc = 0x4a1cd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4a1cdc:
    // 0x4a1cdc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4a1cdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_4a1ce0:
    // 0x4a1ce0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x4a1ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_4a1ce4:
    // 0x4a1ce4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x4a1ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_4a1ce8:
    // 0x4a1ce8: 0xafbe0084  sw          $fp, 0x84($sp)
    ctx->pc = 0x4a1ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 30));
label_4a1cec:
    // 0x4a1cec: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x4a1cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_4a1cf0:
    // 0x4a1cf0: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x4a1cf0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a1cf4:
    // 0x4a1cf4: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x4a1cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
label_4a1cf8:
    // 0x4a1cf8: 0x2e5102b  sltu        $v0, $s7, $a1
    ctx->pc = 0x4a1cf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4a1cfc:
    // 0x4a1cfc: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
label_4a1d00:
    if (ctx->pc == 0x4A1D00u) {
        ctx->pc = 0x4A1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1CFCu;
        // 0x4a1d00: 0xafa40078  sw          $a0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1D04u;
        goto label_4a1d04;
    }
    ctx->pc = 0x4A1CFCu;
    {
        const bool branch_taken_0x4a1cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1CFCu;
        // 0x4a1d00: 0xafa40078  sw          $a0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1cfc) {
            ctx->pc = 0x4A1B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a1b68;
        }
    }
    ctx->pc = 0x4A1D04u;
label_4a1d04:
    // 0x4a1d04: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x4a1d04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_4a1d08:
    // 0x4a1d08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a1d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a1d0c:
    // 0x4a1d0c: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x4a1d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_4a1d10:
    // 0x4a1d10: 0xc0bb778  jal         func_2EDDE0
label_4a1d14:
    if (ctx->pc == 0x4A1D14u) {
        ctx->pc = 0x4A1D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1D10u;
        // 0x4a1d14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1D18u;
        goto label_4a1d18;
    }
    ctx->pc = 0x4A1D10u;
    SET_GPR_U32(ctx, 31, 0x4A1D18u);
    ctx->pc = 0x4A1D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1D10u;
    // 0x4a1d14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4A1D10u, 0x4A1D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1D18u;
label_4a1d18:
    // 0x4a1d18: 0xc127cae  jal         func_49F2B8
label_4a1d1c:
    if (ctx->pc == 0x4A1D1Cu) {
        ctx->pc = 0x4A1D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1D18u;
        // 0x4a1d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1D20u;
        goto label_4a1d20;
    }
    ctx->pc = 0x4A1D18u;
    SET_GPR_U32(ctx, 31, 0x4A1D20u);
    ctx->pc = 0x4A1D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1D18u;
    // 0x4a1d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A1D18u, 0x4A1D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1D20u;
label_4a1d20:
    // 0x4a1d20: 0xc127cae  jal         func_49F2B8
label_4a1d24:
    if (ctx->pc == 0x4A1D24u) {
        ctx->pc = 0x4A1D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1D20u;
        // 0x4a1d24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1D28u;
        goto label_4a1d28;
    }
    ctx->pc = 0x4A1D20u;
    SET_GPR_U32(ctx, 31, 0x4A1D28u);
    ctx->pc = 0x4A1D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1D20u;
    // 0x4a1d24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A1D20u, 0x4A1D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1D28u;
label_4a1d28:
    // 0x4a1d28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a1d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a1d2c:
    // 0x4a1d2c: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x4a1d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_4a1d30:
    // 0x4a1d30: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x4a1d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_4a1d34:
    // 0x4a1d34: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x4a1d34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_4a1d38:
    // 0x4a1d38: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x4a1d38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4a1d3c:
    // 0x4a1d3c: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x4a1d3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4a1d40:
    // 0x4a1d40: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x4a1d40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4a1d44:
    // 0x4a1d44: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x4a1d44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4a1d48:
    // 0x4a1d48: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x4a1d48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4a1d4c:
    // 0x4a1d4c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x4a1d4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4a1d50:
    // 0x4a1d50: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4a1d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4a1d54:
    // 0x4a1d54: 0x3e00008  jr          $ra
label_4a1d58:
    if (ctx->pc == 0x4A1D58u) {
        ctx->pc = 0x4A1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1D54u;
        // 0x4a1d58: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1D5Cu;
        goto label_4a1d5c;
    }
    ctx->pc = 0x4A1D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1D54u;
        // 0x4a1d58: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A1D5Cu;
label_4a1d5c:
    // 0x4a1d5c: 0x0  nop
    ctx->pc = 0x4a1d5cu;
    // NOP
    ctx->pc = 0x4a1d60u;
}
