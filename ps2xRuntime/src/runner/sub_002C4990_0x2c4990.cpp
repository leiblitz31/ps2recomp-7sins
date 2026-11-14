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

// Function: sub_002C4990
// Address: 0x2c4990 - 0x2c4cf0
void sub_002C4990_0x2c4990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4990_0x2c4990");
#endif

    switch (ctx->pc) {
        case 0x2c4990u: goto label_2c4990;
        case 0x2c4994u: goto label_2c4994;
        case 0x2c4998u: goto label_2c4998;
        case 0x2c499cu: goto label_2c499c;
        case 0x2c49a0u: goto label_2c49a0;
        case 0x2c49a4u: goto label_2c49a4;
        case 0x2c49a8u: goto label_2c49a8;
        case 0x2c49acu: goto label_2c49ac;
        case 0x2c49b0u: goto label_2c49b0;
        case 0x2c49b4u: goto label_2c49b4;
        case 0x2c49b8u: goto label_2c49b8;
        case 0x2c49bcu: goto label_2c49bc;
        case 0x2c49c0u: goto label_2c49c0;
        case 0x2c49c4u: goto label_2c49c4;
        case 0x2c49c8u: goto label_2c49c8;
        case 0x2c49ccu: goto label_2c49cc;
        case 0x2c49d0u: goto label_2c49d0;
        case 0x2c49d4u: goto label_2c49d4;
        case 0x2c49d8u: goto label_2c49d8;
        case 0x2c49dcu: goto label_2c49dc;
        case 0x2c49e0u: goto label_2c49e0;
        case 0x2c49e4u: goto label_2c49e4;
        case 0x2c49e8u: goto label_2c49e8;
        case 0x2c49ecu: goto label_2c49ec;
        case 0x2c49f0u: goto label_2c49f0;
        case 0x2c49f4u: goto label_2c49f4;
        case 0x2c49f8u: goto label_2c49f8;
        case 0x2c49fcu: goto label_2c49fc;
        case 0x2c4a00u: goto label_2c4a00;
        case 0x2c4a04u: goto label_2c4a04;
        case 0x2c4a08u: goto label_2c4a08;
        case 0x2c4a0cu: goto label_2c4a0c;
        case 0x2c4a10u: goto label_2c4a10;
        case 0x2c4a14u: goto label_2c4a14;
        case 0x2c4a18u: goto label_2c4a18;
        case 0x2c4a1cu: goto label_2c4a1c;
        case 0x2c4a20u: goto label_2c4a20;
        case 0x2c4a24u: goto label_2c4a24;
        case 0x2c4a28u: goto label_2c4a28;
        case 0x2c4a2cu: goto label_2c4a2c;
        case 0x2c4a30u: goto label_2c4a30;
        case 0x2c4a34u: goto label_2c4a34;
        case 0x2c4a38u: goto label_2c4a38;
        case 0x2c4a3cu: goto label_2c4a3c;
        case 0x2c4a40u: goto label_2c4a40;
        case 0x2c4a44u: goto label_2c4a44;
        case 0x2c4a48u: goto label_2c4a48;
        case 0x2c4a4cu: goto label_2c4a4c;
        case 0x2c4a50u: goto label_2c4a50;
        case 0x2c4a54u: goto label_2c4a54;
        case 0x2c4a58u: goto label_2c4a58;
        case 0x2c4a5cu: goto label_2c4a5c;
        case 0x2c4a60u: goto label_2c4a60;
        case 0x2c4a64u: goto label_2c4a64;
        case 0x2c4a68u: goto label_2c4a68;
        case 0x2c4a6cu: goto label_2c4a6c;
        case 0x2c4a70u: goto label_2c4a70;
        case 0x2c4a74u: goto label_2c4a74;
        case 0x2c4a78u: goto label_2c4a78;
        case 0x2c4a7cu: goto label_2c4a7c;
        case 0x2c4a80u: goto label_2c4a80;
        case 0x2c4a84u: goto label_2c4a84;
        case 0x2c4a88u: goto label_2c4a88;
        case 0x2c4a8cu: goto label_2c4a8c;
        case 0x2c4a90u: goto label_2c4a90;
        case 0x2c4a94u: goto label_2c4a94;
        case 0x2c4a98u: goto label_2c4a98;
        case 0x2c4a9cu: goto label_2c4a9c;
        case 0x2c4aa0u: goto label_2c4aa0;
        case 0x2c4aa4u: goto label_2c4aa4;
        case 0x2c4aa8u: goto label_2c4aa8;
        case 0x2c4aacu: goto label_2c4aac;
        case 0x2c4ab0u: goto label_2c4ab0;
        case 0x2c4ab4u: goto label_2c4ab4;
        case 0x2c4ab8u: goto label_2c4ab8;
        case 0x2c4abcu: goto label_2c4abc;
        case 0x2c4ac0u: goto label_2c4ac0;
        case 0x2c4ac4u: goto label_2c4ac4;
        case 0x2c4ac8u: goto label_2c4ac8;
        case 0x2c4accu: goto label_2c4acc;
        case 0x2c4ad0u: goto label_2c4ad0;
        case 0x2c4ad4u: goto label_2c4ad4;
        case 0x2c4ad8u: goto label_2c4ad8;
        case 0x2c4adcu: goto label_2c4adc;
        case 0x2c4ae0u: goto label_2c4ae0;
        case 0x2c4ae4u: goto label_2c4ae4;
        case 0x2c4ae8u: goto label_2c4ae8;
        case 0x2c4aecu: goto label_2c4aec;
        case 0x2c4af0u: goto label_2c4af0;
        case 0x2c4af4u: goto label_2c4af4;
        case 0x2c4af8u: goto label_2c4af8;
        case 0x2c4afcu: goto label_2c4afc;
        case 0x2c4b00u: goto label_2c4b00;
        case 0x2c4b04u: goto label_2c4b04;
        case 0x2c4b08u: goto label_2c4b08;
        case 0x2c4b0cu: goto label_2c4b0c;
        case 0x2c4b10u: goto label_2c4b10;
        case 0x2c4b14u: goto label_2c4b14;
        case 0x2c4b18u: goto label_2c4b18;
        case 0x2c4b1cu: goto label_2c4b1c;
        case 0x2c4b20u: goto label_2c4b20;
        case 0x2c4b24u: goto label_2c4b24;
        case 0x2c4b28u: goto label_2c4b28;
        case 0x2c4b2cu: goto label_2c4b2c;
        case 0x2c4b30u: goto label_2c4b30;
        case 0x2c4b34u: goto label_2c4b34;
        case 0x2c4b38u: goto label_2c4b38;
        case 0x2c4b3cu: goto label_2c4b3c;
        case 0x2c4b40u: goto label_2c4b40;
        case 0x2c4b44u: goto label_2c4b44;
        case 0x2c4b48u: goto label_2c4b48;
        case 0x2c4b4cu: goto label_2c4b4c;
        case 0x2c4b50u: goto label_2c4b50;
        case 0x2c4b54u: goto label_2c4b54;
        case 0x2c4b58u: goto label_2c4b58;
        case 0x2c4b5cu: goto label_2c4b5c;
        case 0x2c4b60u: goto label_2c4b60;
        case 0x2c4b64u: goto label_2c4b64;
        case 0x2c4b68u: goto label_2c4b68;
        case 0x2c4b6cu: goto label_2c4b6c;
        case 0x2c4b70u: goto label_2c4b70;
        case 0x2c4b74u: goto label_2c4b74;
        case 0x2c4b78u: goto label_2c4b78;
        case 0x2c4b7cu: goto label_2c4b7c;
        case 0x2c4b80u: goto label_2c4b80;
        case 0x2c4b84u: goto label_2c4b84;
        case 0x2c4b88u: goto label_2c4b88;
        case 0x2c4b8cu: goto label_2c4b8c;
        case 0x2c4b90u: goto label_2c4b90;
        case 0x2c4b94u: goto label_2c4b94;
        case 0x2c4b98u: goto label_2c4b98;
        case 0x2c4b9cu: goto label_2c4b9c;
        case 0x2c4ba0u: goto label_2c4ba0;
        case 0x2c4ba4u: goto label_2c4ba4;
        case 0x2c4ba8u: goto label_2c4ba8;
        case 0x2c4bacu: goto label_2c4bac;
        case 0x2c4bb0u: goto label_2c4bb0;
        case 0x2c4bb4u: goto label_2c4bb4;
        case 0x2c4bb8u: goto label_2c4bb8;
        case 0x2c4bbcu: goto label_2c4bbc;
        case 0x2c4bc0u: goto label_2c4bc0;
        case 0x2c4bc4u: goto label_2c4bc4;
        case 0x2c4bc8u: goto label_2c4bc8;
        case 0x2c4bccu: goto label_2c4bcc;
        case 0x2c4bd0u: goto label_2c4bd0;
        case 0x2c4bd4u: goto label_2c4bd4;
        case 0x2c4bd8u: goto label_2c4bd8;
        case 0x2c4bdcu: goto label_2c4bdc;
        case 0x2c4be0u: goto label_2c4be0;
        case 0x2c4be4u: goto label_2c4be4;
        case 0x2c4be8u: goto label_2c4be8;
        case 0x2c4becu: goto label_2c4bec;
        case 0x2c4bf0u: goto label_2c4bf0;
        case 0x2c4bf4u: goto label_2c4bf4;
        case 0x2c4bf8u: goto label_2c4bf8;
        case 0x2c4bfcu: goto label_2c4bfc;
        case 0x2c4c00u: goto label_2c4c00;
        case 0x2c4c04u: goto label_2c4c04;
        case 0x2c4c08u: goto label_2c4c08;
        case 0x2c4c0cu: goto label_2c4c0c;
        case 0x2c4c10u: goto label_2c4c10;
        case 0x2c4c14u: goto label_2c4c14;
        case 0x2c4c18u: goto label_2c4c18;
        case 0x2c4c1cu: goto label_2c4c1c;
        case 0x2c4c20u: goto label_2c4c20;
        case 0x2c4c24u: goto label_2c4c24;
        case 0x2c4c28u: goto label_2c4c28;
        case 0x2c4c2cu: goto label_2c4c2c;
        case 0x2c4c30u: goto label_2c4c30;
        case 0x2c4c34u: goto label_2c4c34;
        case 0x2c4c38u: goto label_2c4c38;
        case 0x2c4c3cu: goto label_2c4c3c;
        case 0x2c4c40u: goto label_2c4c40;
        case 0x2c4c44u: goto label_2c4c44;
        case 0x2c4c48u: goto label_2c4c48;
        case 0x2c4c4cu: goto label_2c4c4c;
        case 0x2c4c50u: goto label_2c4c50;
        case 0x2c4c54u: goto label_2c4c54;
        case 0x2c4c58u: goto label_2c4c58;
        case 0x2c4c5cu: goto label_2c4c5c;
        case 0x2c4c60u: goto label_2c4c60;
        case 0x2c4c64u: goto label_2c4c64;
        case 0x2c4c68u: goto label_2c4c68;
        case 0x2c4c6cu: goto label_2c4c6c;
        case 0x2c4c70u: goto label_2c4c70;
        case 0x2c4c74u: goto label_2c4c74;
        case 0x2c4c78u: goto label_2c4c78;
        case 0x2c4c7cu: goto label_2c4c7c;
        case 0x2c4c80u: goto label_2c4c80;
        case 0x2c4c84u: goto label_2c4c84;
        case 0x2c4c88u: goto label_2c4c88;
        case 0x2c4c8cu: goto label_2c4c8c;
        case 0x2c4c90u: goto label_2c4c90;
        case 0x2c4c94u: goto label_2c4c94;
        case 0x2c4c98u: goto label_2c4c98;
        case 0x2c4c9cu: goto label_2c4c9c;
        case 0x2c4ca0u: goto label_2c4ca0;
        case 0x2c4ca4u: goto label_2c4ca4;
        case 0x2c4ca8u: goto label_2c4ca8;
        case 0x2c4cacu: goto label_2c4cac;
        case 0x2c4cb0u: goto label_2c4cb0;
        case 0x2c4cb4u: goto label_2c4cb4;
        case 0x2c4cb8u: goto label_2c4cb8;
        case 0x2c4cbcu: goto label_2c4cbc;
        case 0x2c4cc0u: goto label_2c4cc0;
        case 0x2c4cc4u: goto label_2c4cc4;
        case 0x2c4cc8u: goto label_2c4cc8;
        case 0x2c4cccu: goto label_2c4ccc;
        case 0x2c4cd0u: goto label_2c4cd0;
        case 0x2c4cd4u: goto label_2c4cd4;
        case 0x2c4cd8u: goto label_2c4cd8;
        case 0x2c4cdcu: goto label_2c4cdc;
        case 0x2c4ce0u: goto label_2c4ce0;
        case 0x2c4ce4u: goto label_2c4ce4;
        case 0x2c4ce8u: goto label_2c4ce8;
        case 0x2c4cecu: goto label_2c4cec;
        default: break;
    }

    ctx->pc = 0x2c4990u;

label_2c4990:
    // 0x2c4990: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2c4990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2c4994:
    // 0x2c4994: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2c4994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2c4998:
    // 0x2c4998: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2c4998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2c499c:
    // 0x2c499c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c499cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2c49a0:
    // 0x2c49a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c49a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2c49a4:
    // 0x2c49a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c49a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2c49a8:
    // 0x2c49a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c49a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2c49ac:
    // 0x2c49ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c49acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c49b0:
    // 0x2c49b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c49b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c49b4:
    // 0x2c49b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c49b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c49b8:
    // 0x2c49b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c49b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c49bc:
    // 0x2c49bc: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x2c49bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_2c49c0:
    // 0x2c49c0: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x2c49c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
label_2c49c4:
    // 0x2c49c4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2c49c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2c49c8:
    // 0x2c49c8: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x2c49c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2c49cc:
    // 0x2c49cc: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2c49ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2c49d0:
    // 0x2c49d0: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x2c49d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2c49d4:
    // 0x2c49d4: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x2c49d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_2c49d8:
    // 0x2c49d8: 0x14600054  bnez        $v1, . + 4 + (0x54 << 2)
label_2c49dc:
    if (ctx->pc == 0x2C49DCu) {
        ctx->pc = 0x2C49E0u;
        goto label_2c49e0;
    }
    ctx->pc = 0x2C49D8u;
    {
        const bool branch_taken_0x2c49d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c49d8) {
            ctx->pc = 0x2C4B2Cu;
            goto label_2c4b2c;
        }
    }
    ctx->pc = 0x2C49E0u;
label_2c49e0:
    // 0x2c49e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c49e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c49e4:
    // 0x2c49e4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c49e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c49e8:
    // 0x2c49e8: 0xc085538  jal         func_2154E0
label_2c49ec:
    if (ctx->pc == 0x2C49ECu) {
        ctx->pc = 0x2C49F0u;
        goto label_2c49f0;
    }
    ctx->pc = 0x2C49E8u;
    SET_GPR_U32(ctx, 31, 0x2C49F0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C49E8u, 0x2C49F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C49F0u;
label_2c49f0:
    // 0x2c49f0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c49f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c49f4:
    // 0x2c49f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c49f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c49f8:
    // 0x2c49f8: 0xc096ffc  jal         func_25BFF0
label_2c49fc:
    if (ctx->pc == 0x2C49FCu) {
        ctx->pc = 0x2C4A00u;
        goto label_2c4a00;
    }
    ctx->pc = 0x2C49F8u;
    SET_GPR_U32(ctx, 31, 0x2C4A00u);
    ctx->pc = 0x25BFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BFF0u, 0x2C49F8u, 0x2C4A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A00u;
label_2c4a00:
    // 0x2c4a00: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_2c4a04:
    if (ctx->pc == 0x2C4A04u) {
        ctx->pc = 0x2C4A08u;
        goto label_2c4a08;
    }
    ctx->pc = 0x2C4A00u;
    {
        const bool branch_taken_0x2c4a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4a00) {
            ctx->pc = 0x2C4A98u;
            goto label_2c4a98;
        }
    }
    ctx->pc = 0x2C4A08u;
label_2c4a08:
    // 0x2c4a08: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2c4a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2c4a0c:
    // 0x2c4a0c: 0x8c440098  lw          $a0, 0x98($v0)
    ctx->pc = 0x2c4a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_2c4a10:
    // 0x2c4a10: 0xc090018  jal         func_240060
label_2c4a14:
    if (ctx->pc == 0x2C4A14u) {
        ctx->pc = 0x2C4A18u;
        goto label_2c4a18;
    }
    ctx->pc = 0x2C4A10u;
    SET_GPR_U32(ctx, 31, 0x2C4A18u);
    ctx->pc = 0x240060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240060u, 0x2C4A10u, 0x2C4A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A18u;
label_2c4a18:
    // 0x2c4a18: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c4a18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4a1c:
    // 0x2c4a1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c4a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c4a20:
    // 0x2c4a20: 0xc08feb4  jal         func_23FAD0
label_2c4a24:
    if (ctx->pc == 0x2C4A24u) {
        ctx->pc = 0x2C4A28u;
        goto label_2c4a28;
    }
    ctx->pc = 0x2C4A20u;
    SET_GPR_U32(ctx, 31, 0x2C4A28u);
    ctx->pc = 0x23FAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAD0u, 0x2C4A20u, 0x2C4A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A28u;
label_2c4a28:
    // 0x2c4a28: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c4a28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4a2c:
    // 0x2c4a2c: 0x10000012  b           . + 4 + (0x12 << 2)
label_2c4a30:
    if (ctx->pc == 0x2C4A30u) {
        ctx->pc = 0x2C4A34u;
        goto label_2c4a34;
    }
    ctx->pc = 0x2C4A2Cu;
    {
        const bool branch_taken_0x2c4a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4a2c) {
            ctx->pc = 0x2C4A78u;
            goto label_2c4a78;
        }
    }
    ctx->pc = 0x2C4A34u;
label_2c4a34:
    // 0x2c4a34: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x2c4a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c4a38:
    // 0x2c4a38: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c4a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c4a3c:
    // 0x2c4a3c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2c4a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2c4a40:
    // 0x2c4a40: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_2c4a44:
    if (ctx->pc == 0x2C4A44u) {
        ctx->pc = 0x2C4A48u;
        goto label_2c4a48;
    }
    ctx->pc = 0x2C4A40u;
    {
        const bool branch_taken_0x2c4a40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c4a40) {
            ctx->pc = 0x2C4A74u;
            goto label_2c4a74;
        }
    }
    ctx->pc = 0x2C4A48u;
label_2c4a48:
    // 0x2c4a48: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2c4a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2c4a4c:
    // 0x2c4a4c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2c4a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2c4a50:
    // 0x2c4a50: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2c4a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2c4a54:
    // 0x2c4a54: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_2c4a58:
    if (ctx->pc == 0x2C4A58u) {
        ctx->pc = 0x2C4A5Cu;
        goto label_2c4a5c;
    }
    ctx->pc = 0x2C4A54u;
    {
        const bool branch_taken_0x2c4a54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c4a54) {
            ctx->pc = 0x2C4A74u;
            goto label_2c4a74;
        }
    }
    ctx->pc = 0x2C4A5Cu;
label_2c4a5c:
    // 0x2c4a5c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2c4a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_2c4a60:
    // 0x2c4a60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c4a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c4a64:
    // 0x2c4a64: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2c4a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2c4a68:
    // 0x2c4a68: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2c4a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2c4a6c:
    // 0x2c4a6c: 0x10000062  b           . + 4 + (0x62 << 2)
label_2c4a70:
    if (ctx->pc == 0x2C4A70u) {
        ctx->pc = 0x2C4A74u;
        goto label_2c4a74;
    }
    ctx->pc = 0x2C4A6Cu;
    {
        const bool branch_taken_0x2c4a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4a6c) {
            ctx->pc = 0x2C4BF8u;
            goto label_2c4bf8;
        }
    }
    ctx->pc = 0x2C4A74u;
label_2c4a74:
    // 0x2c4a74: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x2c4a74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_2c4a78:
    // 0x2c4a78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c4a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c4a7c:
    // 0x2c4a7c: 0xc08feac  jal         func_23FAB0
label_2c4a80:
    if (ctx->pc == 0x2C4A80u) {
        ctx->pc = 0x2C4A84u;
        goto label_2c4a84;
    }
    ctx->pc = 0x2C4A7Cu;
    SET_GPR_U32(ctx, 31, 0x2C4A84u);
    ctx->pc = 0x23FAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAB0u, 0x2C4A7Cu, 0x2C4A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A84u;
label_2c4a84:
    // 0x2c4a84: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
label_2c4a88:
    if (ctx->pc == 0x2C4A88u) {
        ctx->pc = 0x2C4A8Cu;
        goto label_2c4a8c;
    }
    ctx->pc = 0x2C4A84u;
    {
        const bool branch_taken_0x2c4a84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c4a84) {
            ctx->pc = 0x2C4A98u;
            goto label_2c4a98;
        }
    }
    ctx->pc = 0x2C4A8Cu;
label_2c4a8c:
    // 0x2c4a8c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2c4a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2c4a90:
    // 0x2c4a90: 0x1473ffe8  bne         $v1, $s3, . + 4 + (-0x18 << 2)
label_2c4a94:
    if (ctx->pc == 0x2C4A94u) {
        ctx->pc = 0x2C4A98u;
        goto label_2c4a98;
    }
    ctx->pc = 0x2C4A90u;
    {
        const bool branch_taken_0x2c4a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x2c4a90) {
            ctx->pc = 0x2C4A34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4a34;
        }
    }
    ctx->pc = 0x2C4A98u;
label_2c4a98:
    // 0x2c4a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c4a9c:
    // 0x2c4a9c: 0xa2020010  sb          $v0, 0x10($s0)
    ctx->pc = 0x2c4a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 2));
label_2c4aa0:
    // 0x2c4aa0: 0xc0434e0  jal         func_10D380
label_2c4aa4:
    if (ctx->pc == 0x2C4AA4u) {
        ctx->pc = 0x2C4AA8u;
        goto label_2c4aa8;
    }
    ctx->pc = 0x2C4AA0u;
    SET_GPR_U32(ctx, 31, 0x2C4AA8u);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x2C4AA0u, 0x2C4AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4AA8u;
label_2c4aa8:
    // 0x2c4aa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c4aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4aac:
    // 0x2c4aac: 0xc0434d8  jal         func_10D360
label_2c4ab0:
    if (ctx->pc == 0x2C4AB0u) {
        ctx->pc = 0x2C4AB4u;
        goto label_2c4ab4;
    }
    ctx->pc = 0x2C4AACu;
    SET_GPR_U32(ctx, 31, 0x2C4AB4u);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x2C4AACu, 0x2C4AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4AB4u;
label_2c4ab4:
    // 0x2c4ab4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2c4ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2c4ab8:
    // 0x2c4ab8: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2c4ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2c4abc:
    // 0x2c4abc: 0xc041b38  jal         func_106CE0
label_2c4ac0:
    if (ctx->pc == 0x2C4AC0u) {
        ctx->pc = 0x2C4AC4u;
        goto label_2c4ac4;
    }
    ctx->pc = 0x2C4ABCu;
    SET_GPR_U32(ctx, 31, 0x2C4AC4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2C4ABCu, 0x2C4AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4AC4u;
label_2c4ac4:
    // 0x2c4ac4: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x2c4ac4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2c4ac8:
    // 0x2c4ac8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c4ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4acc:
    // 0x2c4acc: 0xc044edc  jal         func_113B70
label_2c4ad0:
    if (ctx->pc == 0x2C4AD0u) {
        ctx->pc = 0x2C4AD4u;
        goto label_2c4ad4;
    }
    ctx->pc = 0x2C4ACCu;
    SET_GPR_U32(ctx, 31, 0x2C4AD4u);
    ctx->pc = 0x113B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B70u, 0x2C4ACCu, 0x2C4AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4AD4u;
label_2c4ad4:
    // 0x2c4ad4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c4ad4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4ad8:
    // 0x2c4ad8: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2c4ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2c4adc:
    // 0x2c4adc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c4adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c4ae0:
    // 0x2c4ae0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c4ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c4ae4:
    // 0x2c4ae4: 0xc0b2724  jal         func_2C9C90
label_2c4ae8:
    if (ctx->pc == 0x2C4AE8u) {
        ctx->pc = 0x2C4AECu;
        goto label_2c4aec;
    }
    ctx->pc = 0x2C4AE4u;
    SET_GPR_U32(ctx, 31, 0x2C4AECu);
    ctx->pc = 0x2C9C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9C90u, 0x2C4AE4u, 0x2C4AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4AECu;
label_2c4aec:
    // 0x2c4aec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c4aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c4af0:
    // 0x2c4af0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c4af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4af4:
    // 0x2c4af4: 0xc097004  jal         func_25C010
label_2c4af8:
    if (ctx->pc == 0x2C4AF8u) {
        ctx->pc = 0x2C4AFCu;
        goto label_2c4afc;
    }
    ctx->pc = 0x2C4AF4u;
    SET_GPR_U32(ctx, 31, 0x2C4AFCu);
    ctx->pc = 0x25C010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C010u, 0x2C4AF4u, 0x2C4AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4AFCu;
label_2c4afc:
    // 0x2c4afc: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_2c4b00:
    if (ctx->pc == 0x2C4B00u) {
        ctx->pc = 0x2C4B04u;
        goto label_2c4b04;
    }
    ctx->pc = 0x2C4AFCu;
    {
        const bool branch_taken_0x2c4afc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4afc) {
            ctx->pc = 0x2C4B18u;
            goto label_2c4b18;
        }
    }
    ctx->pc = 0x2C4B04u;
label_2c4b04:
    // 0x2c4b04: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c4b04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c4b08:
    // 0x2c4b08: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2c4b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c4b0c:
    // 0x2c4b0c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2c4b0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c4b10:
    // 0x2c4b10: 0x45000039  bc1f        . + 4 + (0x39 << 2)
label_2c4b14:
    if (ctx->pc == 0x2C4B14u) {
        ctx->pc = 0x2C4B18u;
        goto label_2c4b18;
    }
    ctx->pc = 0x2C4B10u;
    {
        const bool branch_taken_0x2c4b10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4b10) {
            ctx->pc = 0x2C4BF8u;
            goto label_2c4bf8;
        }
    }
    ctx->pc = 0x2C4B18u;
label_2c4b18:
    // 0x2c4b18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c4b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c4b1c:
    // 0x2c4b1c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2c4b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2c4b20:
    // 0x2c4b20: 0xa064000c  sb          $a0, 0xC($v1)
    ctx->pc = 0x2c4b20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 4));
label_2c4b24:
    // 0x2c4b24: 0x10000034  b           . + 4 + (0x34 << 2)
label_2c4b28:
    if (ctx->pc == 0x2C4B28u) {
        ctx->pc = 0x2C4B2Cu;
        goto label_2c4b2c;
    }
    ctx->pc = 0x2C4B24u;
    {
        const bool branch_taken_0x2c4b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4b24) {
            ctx->pc = 0x2C4BF8u;
            goto label_2c4bf8;
        }
    }
    ctx->pc = 0x2C4B2Cu;
label_2c4b2c:
    // 0x2c4b2c: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2c4b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2c4b30:
    // 0x2c4b30: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2c4b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c4b34:
    // 0x2c4b34: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2c4b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c4b38:
    // 0x2c4b38: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c4b38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2c4b3c:
    // 0x2c4b3c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2c4b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2c4b40:
    // 0x2c4b40: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2c4b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c4b44:
    // 0x2c4b44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c4b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c4b48:
    // 0x2c4b48: 0x0  nop
    ctx->pc = 0x2c4b48u;
    // NOP
label_2c4b4c:
    // 0x2c4b4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c4b4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c4b50:
    // 0x2c4b50: 0x45000029  bc1f        . + 4 + (0x29 << 2)
label_2c4b54:
    if (ctx->pc == 0x2C4B54u) {
        ctx->pc = 0x2C4B58u;
        goto label_2c4b58;
    }
    ctx->pc = 0x2C4B50u;
    {
        const bool branch_taken_0x2c4b50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c4b50) {
            ctx->pc = 0x2C4BF8u;
            goto label_2c4bf8;
        }
    }
    ctx->pc = 0x2C4B58u;
label_2c4b58:
    // 0x2c4b58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c4b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c4b5c:
    // 0x2c4b5c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2c4b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2c4b60:
    // 0x2c4b60: 0xa043000c  sb          $v1, 0xC($v0)
    ctx->pc = 0x2c4b60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 3));
label_2c4b64:
    // 0x2c4b64: 0xc0434e0  jal         func_10D380
label_2c4b68:
    if (ctx->pc == 0x2C4B68u) {
        ctx->pc = 0x2C4B6Cu;
        goto label_2c4b6c;
    }
    ctx->pc = 0x2C4B64u;
    SET_GPR_U32(ctx, 31, 0x2C4B6Cu);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x2C4B64u, 0x2C4B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B6Cu;
label_2c4b6c:
    // 0x2c4b6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c4b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4b70:
    // 0x2c4b70: 0xc0434d8  jal         func_10D360
label_2c4b74:
    if (ctx->pc == 0x2C4B74u) {
        ctx->pc = 0x2C4B78u;
        goto label_2c4b78;
    }
    ctx->pc = 0x2C4B70u;
    SET_GPR_U32(ctx, 31, 0x2C4B78u);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x2C4B70u, 0x2C4B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B78u;
label_2c4b78:
    // 0x2c4b78: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2c4b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_2c4b7c:
    // 0x2c4b7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c4b80:
    // 0x2c4b80: 0xc09138c  jal         func_244E30
label_2c4b84:
    if (ctx->pc == 0x2C4B84u) {
        ctx->pc = 0x2C4B88u;
        goto label_2c4b88;
    }
    ctx->pc = 0x2C4B80u;
    SET_GPR_U32(ctx, 31, 0x2C4B88u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x2C4B80u, 0x2C4B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B88u;
label_2c4b88:
    // 0x2c4b88: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x2c4b88u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2c4b8c:
    // 0x2c4b8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c4b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4b90:
    // 0x2c4b90: 0xc044da4  jal         func_113690
label_2c4b94:
    if (ctx->pc == 0x2C4B94u) {
        ctx->pc = 0x2C4B98u;
        goto label_2c4b98;
    }
    ctx->pc = 0x2C4B90u;
    SET_GPR_U32(ctx, 31, 0x2C4B98u);
    ctx->pc = 0x113690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113690u, 0x2C4B90u, 0x2C4B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B98u;
label_2c4b98:
    // 0x2c4b98: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2c4b98u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4b9c:
    // 0x2c4b9c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2c4b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2c4ba0:
    // 0x2c4ba0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c4ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c4ba4:
    // 0x2c4ba4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2c4ba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c4ba8:
    // 0x2c4ba8: 0xc0b2724  jal         func_2C9C90
label_2c4bac:
    if (ctx->pc == 0x2C4BACu) {
        ctx->pc = 0x2C4BB0u;
        goto label_2c4bb0;
    }
    ctx->pc = 0x2C4BA8u;
    SET_GPR_U32(ctx, 31, 0x2C4BB0u);
    ctx->pc = 0x2C9C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9C90u, 0x2C4BA8u, 0x2C4BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BB0u;
label_2c4bb0:
    // 0x2c4bb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c4bb4:
    // 0x2c4bb4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c4bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c4bb8:
    // 0x2c4bb8: 0xc085538  jal         func_2154E0
label_2c4bbc:
    if (ctx->pc == 0x2C4BBCu) {
        ctx->pc = 0x2C4BC0u;
        goto label_2c4bc0;
    }
    ctx->pc = 0x2C4BB8u;
    SET_GPR_U32(ctx, 31, 0x2C4BC0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C4BB8u, 0x2C4BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BC0u;
label_2c4bc0:
    // 0x2c4bc0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c4bc0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4bc4:
    // 0x2c4bc4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2c4bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c4bc8:
    // 0x2c4bc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c4bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4bcc:
    // 0x2c4bcc: 0xc097004  jal         func_25C010
label_2c4bd0:
    if (ctx->pc == 0x2C4BD0u) {
        ctx->pc = 0x2C4BD4u;
        goto label_2c4bd4;
    }
    ctx->pc = 0x2C4BCCu;
    SET_GPR_U32(ctx, 31, 0x2C4BD4u);
    ctx->pc = 0x25C010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C010u, 0x2C4BCCu, 0x2C4BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BD4u;
label_2c4bd4:
    // 0x2c4bd4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2c4bd8:
    if (ctx->pc == 0x2C4BD8u) {
        ctx->pc = 0x2C4BDCu;
        goto label_2c4bdc;
    }
    ctx->pc = 0x2C4BD4u;
    {
        const bool branch_taken_0x2c4bd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4bd4) {
            ctx->pc = 0x2C4BF8u;
            goto label_2c4bf8;
        }
    }
    ctx->pc = 0x2C4BDCu;
label_2c4bdc:
    // 0x2c4bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4be0:
    // 0x2c4be0: 0xc096750  jal         func_259D40
label_2c4be4:
    if (ctx->pc == 0x2C4BE4u) {
        ctx->pc = 0x2C4BE8u;
        goto label_2c4be8;
    }
    ctx->pc = 0x2C4BE0u;
    SET_GPR_U32(ctx, 31, 0x2C4BE8u);
    ctx->pc = 0x259D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259D40u, 0x2C4BE0u, 0x2C4BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BE8u;
label_2c4be8:
    // 0x2c4be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4bec:
    // 0x2c4bec: 0xc119c5c  jal         func_467170
label_2c4bf0:
    if (ctx->pc == 0x2C4BF0u) {
        ctx->pc = 0x2C4BF4u;
        goto label_2c4bf4;
    }
    ctx->pc = 0x2C4BECu;
    SET_GPR_U32(ctx, 31, 0x2C4BF4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2C4BECu, 0x2C4BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4BF4u;
label_2c4bf4:
    // 0x2c4bf4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c4bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4bf8:
    // 0x2c4bf8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2c4bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2c4bfc:
    // 0x2c4bfc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2c4bfcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c4c00:
    // 0x2c4c00: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2c4c00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c4c04:
    // 0x2c4c04: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c4c04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c4c08:
    // 0x2c4c08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c4c08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c4c0c:
    // 0x2c4c0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c4c0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c4c10:
    // 0x2c4c10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c4c10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c4c14:
    // 0x2c4c14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c4c14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c4c18:
    // 0x2c4c18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c4c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c4c1c:
    // 0x2c4c1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c4c20:
    // 0x2c4c20: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2c4c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2c4c24:
    // 0x2c4c24: 0x3e00008  jr          $ra
label_2c4c28:
    if (ctx->pc == 0x2C4C28u) {
        ctx->pc = 0x2C4C2Cu;
        goto label_2c4c2c;
    }
    ctx->pc = 0x2C4C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4C2Cu;
label_2c4c2c:
    // 0x2c4c2c: 0x0  nop
    ctx->pc = 0x2c4c2cu;
    // NOP
label_2c4c30:
    // 0x2c4c30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c4c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2c4c34:
    // 0x2c4c34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c4c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2c4c38:
    // 0x2c4c38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c4c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c4c3c:
    // 0x2c4c3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c4c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c4c40:
    // 0x2c4c40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c4c44:
    // 0x2c4c44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c4c48:
    // 0x2c4c48: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2c4c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_2c4c4c:
    // 0x2c4c4c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2c4c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2c4c50:
    // 0x2c4c50: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2c4c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2c4c54:
    // 0x2c4c54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c4c54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c4c58:
    // 0x2c4c58: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2c4c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2c4c5c:
    // 0x2c4c5c: 0x320f809  jalr        $t9
label_2c4c60:
    if (ctx->pc == 0x2C4C60u) {
        ctx->pc = 0x2C4C64u;
        goto label_2c4c64;
    }
    ctx->pc = 0x2C4C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C4C64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4C5Cu, 0x2C4C64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C4C64u;
label_2c4c64:
    // 0x2c4c64: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x2c4c64u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c4c68:
    // 0x2c4c68: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2c4c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2c4c6c:
    // 0x2c4c6c: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2c4c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2c4c70:
    // 0x2c4c70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c4c70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c4c74:
    // 0x2c4c74: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2c4c74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2c4c78:
    // 0x2c4c78: 0x320f809  jalr        $t9
label_2c4c7c:
    if (ctx->pc == 0x2C4C7Cu) {
        ctx->pc = 0x2C4C80u;
        goto label_2c4c80;
    }
    ctx->pc = 0x2C4C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C4C80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4C78u, 0x2C4C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C4C80u;
label_2c4c80:
    // 0x2c4c80: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2c4c80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c4c84:
    // 0x2c4c84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c4c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4c88:
    // 0x2c4c88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c4c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4c8c:
    // 0x2c4c8c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_2c4c90:
    if (ctx->pc == 0x2C4C90u) {
        ctx->pc = 0x2C4C94u;
        goto label_2c4c94;
    }
    ctx->pc = 0x2C4C8Cu;
    {
        const bool branch_taken_0x2c4c8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4c8c) {
            ctx->pc = 0x2C4CA4u;
            goto label_2c4ca4;
        }
    }
    ctx->pc = 0x2C4C94u;
label_2c4c94:
    // 0x2c4c94: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_2c4c98:
    if (ctx->pc == 0x2C4C98u) {
        ctx->pc = 0x2C4C9Cu;
        goto label_2c4c9c;
    }
    ctx->pc = 0x2C4C94u;
    {
        const bool branch_taken_0x2c4c94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4c94) {
            ctx->pc = 0x2C4CA4u;
            goto label_2c4ca4;
        }
    }
    ctx->pc = 0x2C4C9Cu;
label_2c4c9c:
    // 0x2c4c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c4c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c4ca0:
    // 0x2c4ca0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2c4ca0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c4ca4:
    // 0x2c4ca4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2c4ca8:
    if (ctx->pc == 0x2C4CA8u) {
        ctx->pc = 0x2C4CACu;
        goto label_2c4cac;
    }
    ctx->pc = 0x2C4CA4u;
    {
        const bool branch_taken_0x2c4ca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4ca4) {
            ctx->pc = 0x2C4CC8u;
            goto label_2c4cc8;
        }
    }
    ctx->pc = 0x2C4CACu;
label_2c4cac:
    // 0x2c4cac: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2c4cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2c4cb0:
    // 0x2c4cb0: 0xc08ec70  jal         func_23B1C0
label_2c4cb4:
    if (ctx->pc == 0x2C4CB4u) {
        ctx->pc = 0x2C4CB8u;
        goto label_2c4cb8;
    }
    ctx->pc = 0x2C4CB0u;
    SET_GPR_U32(ctx, 31, 0x2C4CB8u);
    ctx->pc = 0x23B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1C0u, 0x2C4CB0u, 0x2C4CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4CB8u;
label_2c4cb8:
    // 0x2c4cb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2c4cbc:
    if (ctx->pc == 0x2C4CBCu) {
        ctx->pc = 0x2C4CC0u;
        goto label_2c4cc0;
    }
    ctx->pc = 0x2C4CB8u;
    {
        const bool branch_taken_0x2c4cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4cb8) {
            ctx->pc = 0x2C4CC8u;
            goto label_2c4cc8;
        }
    }
    ctx->pc = 0x2C4CC0u;
label_2c4cc0:
    // 0x2c4cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c4cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c4cc4:
    // 0x2c4cc4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2c4cc4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c4cc8:
    // 0x2c4cc8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c4cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c4ccc:
    // 0x2c4ccc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c4cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c4cd0:
    // 0x2c4cd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c4cd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c4cd4:
    // 0x2c4cd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c4cd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c4cd8:
    // 0x2c4cd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c4cd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c4cdc:
    // 0x2c4cdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c4ce0:
    // 0x2c4ce0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2c4ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2c4ce4:
    // 0x2c4ce4: 0x3e00008  jr          $ra
label_2c4ce8:
    if (ctx->pc == 0x2C4CE8u) {
        ctx->pc = 0x2C4CECu;
        goto label_2c4cec;
    }
    ctx->pc = 0x2C4CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4CECu;
label_2c4cec:
    // 0x2c4cec: 0x0  nop
    ctx->pc = 0x2c4cecu;
    // NOP
    ctx->pc = 0x2c4cf0u;
}
