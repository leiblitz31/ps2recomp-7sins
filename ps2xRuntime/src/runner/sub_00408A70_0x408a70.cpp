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

// Function: sub_00408A70
// Address: 0x408a70 - 0x408e08
void sub_00408A70_0x408a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408A70_0x408a70");
#endif

    switch (ctx->pc) {
        case 0x408a70u: goto label_408a70;
        case 0x408a74u: goto label_408a74;
        case 0x408a78u: goto label_408a78;
        case 0x408a7cu: goto label_408a7c;
        case 0x408a80u: goto label_408a80;
        case 0x408a84u: goto label_408a84;
        case 0x408a88u: goto label_408a88;
        case 0x408a8cu: goto label_408a8c;
        case 0x408a90u: goto label_408a90;
        case 0x408a94u: goto label_408a94;
        case 0x408a98u: goto label_408a98;
        case 0x408a9cu: goto label_408a9c;
        case 0x408aa0u: goto label_408aa0;
        case 0x408aa4u: goto label_408aa4;
        case 0x408aa8u: goto label_408aa8;
        case 0x408aacu: goto label_408aac;
        case 0x408ab0u: goto label_408ab0;
        case 0x408ab4u: goto label_408ab4;
        case 0x408ab8u: goto label_408ab8;
        case 0x408abcu: goto label_408abc;
        case 0x408ac0u: goto label_408ac0;
        case 0x408ac4u: goto label_408ac4;
        case 0x408ac8u: goto label_408ac8;
        case 0x408accu: goto label_408acc;
        case 0x408ad0u: goto label_408ad0;
        case 0x408ad4u: goto label_408ad4;
        case 0x408ad8u: goto label_408ad8;
        case 0x408adcu: goto label_408adc;
        case 0x408ae0u: goto label_408ae0;
        case 0x408ae4u: goto label_408ae4;
        case 0x408ae8u: goto label_408ae8;
        case 0x408aecu: goto label_408aec;
        case 0x408af0u: goto label_408af0;
        case 0x408af4u: goto label_408af4;
        case 0x408af8u: goto label_408af8;
        case 0x408afcu: goto label_408afc;
        case 0x408b00u: goto label_408b00;
        case 0x408b04u: goto label_408b04;
        case 0x408b08u: goto label_408b08;
        case 0x408b0cu: goto label_408b0c;
        case 0x408b10u: goto label_408b10;
        case 0x408b14u: goto label_408b14;
        case 0x408b18u: goto label_408b18;
        case 0x408b1cu: goto label_408b1c;
        case 0x408b20u: goto label_408b20;
        case 0x408b24u: goto label_408b24;
        case 0x408b28u: goto label_408b28;
        case 0x408b2cu: goto label_408b2c;
        case 0x408b30u: goto label_408b30;
        case 0x408b34u: goto label_408b34;
        case 0x408b38u: goto label_408b38;
        case 0x408b3cu: goto label_408b3c;
        case 0x408b40u: goto label_408b40;
        case 0x408b44u: goto label_408b44;
        case 0x408b48u: goto label_408b48;
        case 0x408b4cu: goto label_408b4c;
        case 0x408b50u: goto label_408b50;
        case 0x408b54u: goto label_408b54;
        case 0x408b58u: goto label_408b58;
        case 0x408b5cu: goto label_408b5c;
        case 0x408b60u: goto label_408b60;
        case 0x408b64u: goto label_408b64;
        case 0x408b68u: goto label_408b68;
        case 0x408b6cu: goto label_408b6c;
        case 0x408b70u: goto label_408b70;
        case 0x408b74u: goto label_408b74;
        case 0x408b78u: goto label_408b78;
        case 0x408b7cu: goto label_408b7c;
        case 0x408b80u: goto label_408b80;
        case 0x408b84u: goto label_408b84;
        case 0x408b88u: goto label_408b88;
        case 0x408b8cu: goto label_408b8c;
        case 0x408b90u: goto label_408b90;
        case 0x408b94u: goto label_408b94;
        case 0x408b98u: goto label_408b98;
        case 0x408b9cu: goto label_408b9c;
        case 0x408ba0u: goto label_408ba0;
        case 0x408ba4u: goto label_408ba4;
        case 0x408ba8u: goto label_408ba8;
        case 0x408bacu: goto label_408bac;
        case 0x408bb0u: goto label_408bb0;
        case 0x408bb4u: goto label_408bb4;
        case 0x408bb8u: goto label_408bb8;
        case 0x408bbcu: goto label_408bbc;
        case 0x408bc0u: goto label_408bc0;
        case 0x408bc4u: goto label_408bc4;
        case 0x408bc8u: goto label_408bc8;
        case 0x408bccu: goto label_408bcc;
        case 0x408bd0u: goto label_408bd0;
        case 0x408bd4u: goto label_408bd4;
        case 0x408bd8u: goto label_408bd8;
        case 0x408bdcu: goto label_408bdc;
        case 0x408be0u: goto label_408be0;
        case 0x408be4u: goto label_408be4;
        case 0x408be8u: goto label_408be8;
        case 0x408becu: goto label_408bec;
        case 0x408bf0u: goto label_408bf0;
        case 0x408bf4u: goto label_408bf4;
        case 0x408bf8u: goto label_408bf8;
        case 0x408bfcu: goto label_408bfc;
        case 0x408c00u: goto label_408c00;
        case 0x408c04u: goto label_408c04;
        case 0x408c08u: goto label_408c08;
        case 0x408c0cu: goto label_408c0c;
        case 0x408c10u: goto label_408c10;
        case 0x408c14u: goto label_408c14;
        case 0x408c18u: goto label_408c18;
        case 0x408c1cu: goto label_408c1c;
        case 0x408c20u: goto label_408c20;
        case 0x408c24u: goto label_408c24;
        case 0x408c28u: goto label_408c28;
        case 0x408c2cu: goto label_408c2c;
        case 0x408c30u: goto label_408c30;
        case 0x408c34u: goto label_408c34;
        case 0x408c38u: goto label_408c38;
        case 0x408c3cu: goto label_408c3c;
        case 0x408c40u: goto label_408c40;
        case 0x408c44u: goto label_408c44;
        case 0x408c48u: goto label_408c48;
        case 0x408c4cu: goto label_408c4c;
        case 0x408c50u: goto label_408c50;
        case 0x408c54u: goto label_408c54;
        case 0x408c58u: goto label_408c58;
        case 0x408c5cu: goto label_408c5c;
        case 0x408c60u: goto label_408c60;
        case 0x408c64u: goto label_408c64;
        case 0x408c68u: goto label_408c68;
        case 0x408c6cu: goto label_408c6c;
        case 0x408c70u: goto label_408c70;
        case 0x408c74u: goto label_408c74;
        case 0x408c78u: goto label_408c78;
        case 0x408c7cu: goto label_408c7c;
        case 0x408c80u: goto label_408c80;
        case 0x408c84u: goto label_408c84;
        case 0x408c88u: goto label_408c88;
        case 0x408c8cu: goto label_408c8c;
        case 0x408c90u: goto label_408c90;
        case 0x408c94u: goto label_408c94;
        case 0x408c98u: goto label_408c98;
        case 0x408c9cu: goto label_408c9c;
        case 0x408ca0u: goto label_408ca0;
        case 0x408ca4u: goto label_408ca4;
        case 0x408ca8u: goto label_408ca8;
        case 0x408cacu: goto label_408cac;
        case 0x408cb0u: goto label_408cb0;
        case 0x408cb4u: goto label_408cb4;
        case 0x408cb8u: goto label_408cb8;
        case 0x408cbcu: goto label_408cbc;
        case 0x408cc0u: goto label_408cc0;
        case 0x408cc4u: goto label_408cc4;
        case 0x408cc8u: goto label_408cc8;
        case 0x408cccu: goto label_408ccc;
        case 0x408cd0u: goto label_408cd0;
        case 0x408cd4u: goto label_408cd4;
        case 0x408cd8u: goto label_408cd8;
        case 0x408cdcu: goto label_408cdc;
        case 0x408ce0u: goto label_408ce0;
        case 0x408ce4u: goto label_408ce4;
        case 0x408ce8u: goto label_408ce8;
        case 0x408cecu: goto label_408cec;
        case 0x408cf0u: goto label_408cf0;
        case 0x408cf4u: goto label_408cf4;
        case 0x408cf8u: goto label_408cf8;
        case 0x408cfcu: goto label_408cfc;
        case 0x408d00u: goto label_408d00;
        case 0x408d04u: goto label_408d04;
        case 0x408d08u: goto label_408d08;
        case 0x408d0cu: goto label_408d0c;
        case 0x408d10u: goto label_408d10;
        case 0x408d14u: goto label_408d14;
        case 0x408d18u: goto label_408d18;
        case 0x408d1cu: goto label_408d1c;
        case 0x408d20u: goto label_408d20;
        case 0x408d24u: goto label_408d24;
        case 0x408d28u: goto label_408d28;
        case 0x408d2cu: goto label_408d2c;
        case 0x408d30u: goto label_408d30;
        case 0x408d34u: goto label_408d34;
        case 0x408d38u: goto label_408d38;
        case 0x408d3cu: goto label_408d3c;
        case 0x408d40u: goto label_408d40;
        case 0x408d44u: goto label_408d44;
        case 0x408d48u: goto label_408d48;
        case 0x408d4cu: goto label_408d4c;
        case 0x408d50u: goto label_408d50;
        case 0x408d54u: goto label_408d54;
        case 0x408d58u: goto label_408d58;
        case 0x408d5cu: goto label_408d5c;
        case 0x408d60u: goto label_408d60;
        case 0x408d64u: goto label_408d64;
        case 0x408d68u: goto label_408d68;
        case 0x408d6cu: goto label_408d6c;
        case 0x408d70u: goto label_408d70;
        case 0x408d74u: goto label_408d74;
        case 0x408d78u: goto label_408d78;
        case 0x408d7cu: goto label_408d7c;
        case 0x408d80u: goto label_408d80;
        case 0x408d84u: goto label_408d84;
        case 0x408d88u: goto label_408d88;
        case 0x408d8cu: goto label_408d8c;
        case 0x408d90u: goto label_408d90;
        case 0x408d94u: goto label_408d94;
        case 0x408d98u: goto label_408d98;
        case 0x408d9cu: goto label_408d9c;
        case 0x408da0u: goto label_408da0;
        case 0x408da4u: goto label_408da4;
        case 0x408da8u: goto label_408da8;
        case 0x408dacu: goto label_408dac;
        case 0x408db0u: goto label_408db0;
        case 0x408db4u: goto label_408db4;
        case 0x408db8u: goto label_408db8;
        case 0x408dbcu: goto label_408dbc;
        case 0x408dc0u: goto label_408dc0;
        case 0x408dc4u: goto label_408dc4;
        case 0x408dc8u: goto label_408dc8;
        case 0x408dccu: goto label_408dcc;
        case 0x408dd0u: goto label_408dd0;
        case 0x408dd4u: goto label_408dd4;
        case 0x408dd8u: goto label_408dd8;
        case 0x408ddcu: goto label_408ddc;
        case 0x408de0u: goto label_408de0;
        case 0x408de4u: goto label_408de4;
        case 0x408de8u: goto label_408de8;
        case 0x408decu: goto label_408dec;
        case 0x408df0u: goto label_408df0;
        case 0x408df4u: goto label_408df4;
        case 0x408df8u: goto label_408df8;
        case 0x408dfcu: goto label_408dfc;
        case 0x408e00u: goto label_408e00;
        case 0x408e04u: goto label_408e04;
        default: break;
    }

    ctx->pc = 0x408a70u;

label_408a70:
    // 0x408a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x408a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_408a74:
    // 0x408a74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x408a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_408a78:
    // 0x408a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x408a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_408a7c:
    // 0x408a7c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_408a80:
    if (ctx->pc == 0x408A80u) {
        ctx->pc = 0x408A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408A7Cu;
        // 0x408a80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408A84u;
        goto label_408a84;
    }
    ctx->pc = 0x408A7Cu;
    {
        const bool branch_taken_0x408a7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x408A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408A7Cu;
        // 0x408a80: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408a7c) {
            ctx->pc = 0x408A88u;
            goto label_408a88;
        }
    }
    ctx->pc = 0x408A84u;
label_408a84:
    // 0x408a84: 0x5802b  sltu        $s0, $zero, $a1
    ctx->pc = 0x408a84u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_408a88:
    // 0x408a88: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
label_408a8c:
    if (ctx->pc == 0x408A8Cu) {
        ctx->pc = 0x408A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408A88u;
        // 0x408a8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408A90u;
        goto label_408a90;
    }
    ctx->pc = 0x408A88u;
    {
        const bool branch_taken_0x408a88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x408A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408A88u;
        // 0x408a8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408a88) {
            ctx->pc = 0x408B68u;
            goto label_408b68;
        }
    }
    ctx->pc = 0x408A90u;
label_408a90:
    // 0x408a90: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x408a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_408a94:
    // 0x408a94: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x408a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_408a98:
    // 0x408a98: 0xc4a30028  lwc1        $f3, 0x28($a1)
    ctx->pc = 0x408a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_408a9c:
    // 0x408a9c: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x408a9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_408aa0:
    // 0x408aa0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x408aa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_408aa4:
    // 0x408aa4: 0x46030140  add.s       $f5, $f0, $f3
    ctx->pc = 0x408aa4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_408aa8:
    // 0x408aa8: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x408aa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_408aac:
    // 0x408aac: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_408ab0:
    if (ctx->pc == 0x408AB0u) {
        ctx->pc = 0x408AB4u;
        goto label_408ab4;
    }
    ctx->pc = 0x408AACu;
    {
        const bool branch_taken_0x408aac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x408aac) {
            ctx->pc = 0x408B18u;
            goto label_408b18;
        }
    }
    ctx->pc = 0x408AB4u;
label_408ab4:
    // 0x408ab4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x408ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_408ab8:
    // 0x408ab8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x408ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408abc:
    // 0x408abc: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x408abcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_408ac0:
    // 0x408ac0: 0x46000004  c1          0x4
    ctx->pc = 0x408ac0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_408ac4:
    // 0x408ac4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x408ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_408ac8:
    // 0x408ac8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x408ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_408acc:
    // 0x408acc: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x408accu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_408ad0:
    // 0x408ad0: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x408ad0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
label_408ad4:
    // 0x408ad4: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x408ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_408ad8:
    // 0x408ad8: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x408ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408adc:
    // 0x408adc: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x408adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408ae0:
    // 0x408ae0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x408ae0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_408ae4:
    // 0x408ae4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x408ae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_408ae8:
    // 0x408ae8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x408ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_408aec:
    // 0x408aec: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x408aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408af0:
    // 0x408af0: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x408af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408af4:
    // 0x408af4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x408af4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_408af8:
    // 0x408af8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x408af8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_408afc:
    // 0x408afc: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x408afcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_408b00:
    // 0x408b00: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x408b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_408b04:
    // 0x408b04: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x408b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408b08:
    // 0x408b08: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x408b08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_408b0c:
    // 0x408b0c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x408b0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_408b10:
    // 0x408b10: 0x10000015  b           . + 4 + (0x15 << 2)
label_408b14:
    if (ctx->pc == 0x408B14u) {
        ctx->pc = 0x408B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408B10u;
        // 0x408b14: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x408B18u;
        goto label_408b18;
    }
    ctx->pc = 0x408B10u;
    {
        const bool branch_taken_0x408b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408B10u;
        // 0x408b14: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x408b10) {
            ctx->pc = 0x408B68u;
            goto label_408b68;
        }
    }
    ctx->pc = 0x408B18u;
label_408b18:
    // 0x408b18: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x408b18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_408b1c:
    // 0x408b1c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_408b20:
    if (ctx->pc == 0x408B20u) {
        ctx->pc = 0x408B24u;
        goto label_408b24;
    }
    ctx->pc = 0x408B1Cu;
    {
        const bool branch_taken_0x408b1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x408b1c) {
            ctx->pc = 0x408B3Cu;
            goto label_408b3c;
        }
    }
    ctx->pc = 0x408B24u;
label_408b24:
    // 0x408b24: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x408b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_408b28:
    // 0x408b28: 0x0  nop
    ctx->pc = 0x408b28u;
    // NOP
label_408b2c:
    // 0x408b2c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_408b30:
    if (ctx->pc == 0x408B30u) {
        ctx->pc = 0x408B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408B2Cu;
        // 0x408b30: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408B34u;
        goto label_408b34;
    }
    ctx->pc = 0x408B2Cu;
    {
        const bool branch_taken_0x408b2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x408B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408B2Cu;
        // 0x408b30: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408b2c) {
            ctx->pc = 0x408B54u;
            goto label_408b54;
        }
    }
    ctx->pc = 0x408B34u;
label_408b34:
    // 0x408b34: 0x10000009  b           . + 4 + (0x9 << 2)
label_408b38:
    if (ctx->pc == 0x408B38u) {
        ctx->pc = 0x408B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408B34u;
        // 0x408b38: 0x24428d08  addiu       $v0, $v0, -0x72F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408B3Cu;
        goto label_408b3c;
    }
    ctx->pc = 0x408B34u;
    {
        const bool branch_taken_0x408b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408B34u;
        // 0x408b38: 0x24428d08  addiu       $v0, $v0, -0x72F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408b34) {
            ctx->pc = 0x408B5Cu;
            goto label_408b5c;
        }
    }
    ctx->pc = 0x408B3Cu;
label_408b3c:
    // 0x408b3c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x408b3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_408b40:
    // 0x408b40: 0x0  nop
    ctx->pc = 0x408b40u;
    // NOP
label_408b44:
    // 0x408b44: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_408b48:
    if (ctx->pc == 0x408B48u) {
        ctx->pc = 0x408B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408B44u;
        // 0x408b48: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408B4Cu;
        goto label_408b4c;
    }
    ctx->pc = 0x408B44u;
    {
        const bool branch_taken_0x408b44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x408B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408B44u;
        // 0x408b48: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408b44) {
            ctx->pc = 0x408B54u;
            goto label_408b54;
        }
    }
    ctx->pc = 0x408B4Cu;
label_408b4c:
    // 0x408b4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_408b50:
    if (ctx->pc == 0x408B50u) {
        ctx->pc = 0x408B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408B4Cu;
        // 0x408b50: 0x24428d88  addiu       $v0, $v0, -0x7278 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408B54u;
        goto label_408b54;
    }
    ctx->pc = 0x408B4Cu;
    {
        const bool branch_taken_0x408b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408B4Cu;
        // 0x408b50: 0x24428d88  addiu       $v0, $v0, -0x7278 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408b4c) {
            ctx->pc = 0x408B5Cu;
            goto label_408b5c;
        }
    }
    ctx->pc = 0x408B54u;
label_408b54:
    // 0x408b54: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x408b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_408b58:
    // 0x408b58: 0x24428e08  addiu       $v0, $v0, -0x71F8
    ctx->pc = 0x408b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938120));
label_408b5c:
    // 0x408b5c: 0x40f809  jalr        $v0
label_408b60:
    if (ctx->pc == 0x408B60u) {
        ctx->pc = 0x408B64u;
        goto label_408b64;
    }
    ctx->pc = 0x408B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x408B64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408B5Cu, 0x408B64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x408B64u;
label_408b64:
    // 0x408b64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x408b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_408b68:
    // 0x408b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x408b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_408b6c:
    // 0x408b6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x408b6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_408b70:
    // 0x408b70: 0x3e00008  jr          $ra
label_408b74:
    if (ctx->pc == 0x408B74u) {
        ctx->pc = 0x408B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408B70u;
        // 0x408b74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408B78u;
        goto label_408b78;
    }
    ctx->pc = 0x408B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408B70u;
        // 0x408b74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x408B78u;
label_408b78:
    // 0x408b78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x408b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_408b7c:
    // 0x408b7c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x408b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_408b80:
    // 0x408b80: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x408b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_408b84:
    // 0x408b84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x408b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_408b88:
    // 0x408b88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x408b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_408b8c:
    // 0x408b8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x408b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_408b90:
    // 0x408b90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x408b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_408b94:
    // 0x408b94: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x408b94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_408b98:
    // 0x408b98: 0x1200003b  beqz        $s0, . + 4 + (0x3B << 2)
label_408b9c:
    if (ctx->pc == 0x408B9Cu) {
        ctx->pc = 0x408B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408B98u;
        // 0x408b9c: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x408BA0u;
        goto label_408ba0;
    }
    ctx->pc = 0x408B98u;
    {
        const bool branch_taken_0x408b98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x408B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408B98u;
        // 0x408b9c: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x408b98) {
            ctx->pc = 0x408C88u;
            goto label_408c88;
        }
    }
    ctx->pc = 0x408BA0u;
label_408ba0:
    // 0x408ba0: 0x1220003b  beqz        $s1, . + 4 + (0x3B << 2)
label_408ba4:
    if (ctx->pc == 0x408BA4u) {
        ctx->pc = 0x408BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408BA0u;
        // 0x408ba4: 0x24020195  addiu       $v0, $zero, 0x195 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408BA8u;
        goto label_408ba8;
    }
    ctx->pc = 0x408BA0u;
    {
        const bool branch_taken_0x408ba0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x408BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408BA0u;
        // 0x408ba4: 0x24020195  addiu       $v0, $zero, 0x195 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408ba0) {
            ctx->pc = 0x408C90u;
            goto label_408c90;
        }
    }
    ctx->pc = 0x408BA8u;
label_408ba8:
    // 0x408ba8: 0x12400039  beqz        $s2, . + 4 + (0x39 << 2)
label_408bac:
    if (ctx->pc == 0x408BACu) {
        ctx->pc = 0x408BB0u;
        goto label_408bb0;
    }
    ctx->pc = 0x408BA8u;
    {
        const bool branch_taken_0x408ba8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x408ba8) {
            ctx->pc = 0x408C90u;
            goto label_408c90;
        }
    }
    ctx->pc = 0x408BB0u;
label_408bb0:
    // 0x408bb0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x408bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408bb4:
    // 0x408bb4: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x408bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_408bb8:
    // 0x408bb8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x408bb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_408bbc:
    // 0x408bbc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x408bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408bc0:
    // 0x408bc0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x408bc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_408bc4:
    // 0x408bc4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x408bc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_408bc8:
    // 0x408bc8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x408bc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_408bcc:
    // 0x408bcc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x408bccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_408bd0:
    // 0x408bd0: 0x46000304  c1          0x304
    ctx->pc = 0x408bd0u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_408bd4:
    // 0x408bd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x408bd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408bd8:
    // 0x408bd8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x408bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_408bdc:
    // 0x408bdc: 0x0  nop
    ctx->pc = 0x408bdcu;
    // NOP
label_408be0:
    // 0x408be0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_408be4:
    if (ctx->pc == 0x408BE4u) {
        ctx->pc = 0x408BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408BE0u;
        // 0x408be4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x408BE8u;
        goto label_408be8;
    }
    ctx->pc = 0x408BE0u;
    {
        const bool branch_taken_0x408be0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x408BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408BE0u;
        // 0x408be4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x408be0) {
            ctx->pc = 0x408BF8u;
            goto label_408bf8;
        }
    }
    ctx->pc = 0x408BE8u;
label_408be8:
    // 0x408be8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x408be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_408bec:
    // 0x408bec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x408becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_408bf0:
    // 0x408bf0: 0x460c0503  div.s       $f20, $f0, $f12
    ctx->pc = 0x408bf0u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
label_408bf4:
    // 0x408bf4: 0x0  nop
    ctx->pc = 0x408bf4u;
    // NOP
label_408bf8:
    // 0x408bf8: 0xc0c39d6  jal         func_30E758
label_408bfc:
    if (ctx->pc == 0x408BFCu) {
        ctx->pc = 0x408BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408BF8u;
        // 0x408bfc: 0xc60d000c  lwc1        $f13, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x408C00u;
        goto label_408c00;
    }
    ctx->pc = 0x408BF8u;
    SET_GPR_U32(ctx, 31, 0x408C00u);
    ctx->pc = 0x408BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408BF8u;
    // 0x408bfc: 0xc60d000c  lwc1        $f13, 0xC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E758u, 0x408BF8u, 0x408C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408C00u;
label_408c00:
    // 0x408c00: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x408c00u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_408c04:
    // 0x408c04: 0xc78080b4  lwc1        $f0, -0x7F4C($gp)
    ctx->pc = 0x408c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408c08:
    // 0x408c08: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x408c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_408c0c:
    // 0x408c0c: 0x0  nop
    ctx->pc = 0x408c0cu;
    // NOP
label_408c10:
    // 0x408c10: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_408c14:
    if (ctx->pc == 0x408C14u) {
        ctx->pc = 0x408C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408C10u;
        // 0x408c14: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x408C18u;
        goto label_408c18;
    }
    ctx->pc = 0x408C10u;
    {
        const bool branch_taken_0x408c10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x408C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408C10u;
        // 0x408c14: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x408c10) {
            ctx->pc = 0x408C58u;
            goto label_408c58;
        }
    }
    ctx->pc = 0x408C18u;
label_408c18:
    // 0x408c18: 0x4600a087  neg.s       $f2, $f20
    ctx->pc = 0x408c18u;
    ctx->f[2] = FPU_NEG_S(ctx->f[20]);
label_408c1c:
    // 0x408c1c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x408c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_408c20:
    // 0x408c20: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x408c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_408c24:
    // 0x408c24: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x408c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408c28:
    // 0x408c28: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x408c28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_408c2c:
    // 0x408c2c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x408c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_408c30:
    // 0x408c30: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x408c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408c34:
    // 0x408c34: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x408c34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_408c38:
    // 0x408c38: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x408c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_408c3c:
    // 0x408c3c: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x408c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408c40:
    // 0x408c40: 0xc7808184  lwc1        $f0, -0x7E7C($gp)
    ctx->pc = 0x408c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408c44:
    // 0x408c44: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x408c44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_408c48:
    // 0x408c48: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x408c48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_408c4c:
    // 0x408c4c: 0x10000018  b           . + 4 + (0x18 << 2)
label_408c50:
    if (ctx->pc == 0x408C50u) {
        ctx->pc = 0x408C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408C4Cu;
        // 0x408c50: 0xe6410000  swc1        $f1, 0x0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x408C54u;
        goto label_408c54;
    }
    ctx->pc = 0x408C4Cu;
    {
        const bool branch_taken_0x408c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408C4Cu;
        // 0x408c50: 0xe6410000  swc1        $f1, 0x0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x408c4c) {
            ctx->pc = 0x408CB0u;
            goto label_408cb0;
        }
    }
    ctx->pc = 0x408C54u;
label_408c54:
    // 0x408c54: 0x0  nop
    ctx->pc = 0x408c54u;
    // NOP
label_408c58:
    // 0x408c58: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x408c58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_408c5c:
    // 0x408c5c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x408c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_408c60:
    // 0x408c60: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x408c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408c64:
    // 0x408c64: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x408c64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_408c68:
    // 0x408c68: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x408c68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_408c6c:
    // 0x408c6c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x408c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408c70:
    // 0x408c70: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x408c70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_408c74:
    // 0x408c74: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x408c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_408c78:
    // 0x408c78: 0xc7818184  lwc1        $f1, -0x7E7C($gp)
    ctx->pc = 0x408c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408c7c:
    // 0x408c7c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x408c7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_408c80:
    // 0x408c80: 0x1000000b  b           . + 4 + (0xB << 2)
label_408c84:
    if (ctx->pc == 0x408C84u) {
        ctx->pc = 0x408C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408C80u;
        // 0x408c84: 0xe6410000  swc1        $f1, 0x0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x408C88u;
        goto label_408c88;
    }
    ctx->pc = 0x408C80u;
    {
        const bool branch_taken_0x408c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408C80u;
        // 0x408c84: 0xe6410000  swc1        $f1, 0x0($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x408c80) {
            ctx->pc = 0x408CB0u;
            goto label_408cb0;
        }
    }
    ctx->pc = 0x408C88u;
label_408c88:
    // 0x408c88: 0x24020195  addiu       $v0, $zero, 0x195
    ctx->pc = 0x408c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
label_408c8c:
    // 0x408c8c: 0x0  nop
    ctx->pc = 0x408c8cu;
    // NOP
label_408c90:
    // 0x408c90: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x408c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_408c94:
    // 0x408c94: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x408c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_408c98:
    // 0x408c98: 0xc1035f6  jal         func_40D7D8
label_408c9c:
    if (ctx->pc == 0x408C9Cu) {
        ctx->pc = 0x408C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408C98u;
        // 0x408c9c: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        ctx->pc = 0x408CA0u;
        goto label_408ca0;
    }
    ctx->pc = 0x408C98u;
    SET_GPR_U32(ctx, 31, 0x408CA0u);
    ctx->pc = 0x408C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408C98u;
    // 0x408c9c: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x408C98u, 0x408CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408CA0u;
label_408ca0:
    // 0x408ca0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x408ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_408ca4:
    // 0x408ca4: 0xc103628  jal         func_40D8A0
label_408ca8:
    if (ctx->pc == 0x408CA8u) {
        ctx->pc = 0x408CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408CA4u;
        // 0x408ca8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408CACu;
        goto label_408cac;
    }
    ctx->pc = 0x408CA4u;
    SET_GPR_U32(ctx, 31, 0x408CACu);
    ctx->pc = 0x408CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408CA4u;
    // 0x408ca8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x408CA4u, 0x408CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408CACu;
label_408cac:
    // 0x408cac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x408cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_408cb0:
    // 0x408cb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x408cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_408cb4:
    // 0x408cb4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x408cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_408cb8:
    // 0x408cb8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x408cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_408cbc:
    // 0x408cbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x408cbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_408cc0:
    // 0x408cc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x408cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_408cc4:
    // 0x408cc4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x408cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_408cc8:
    // 0x408cc8: 0x3e00008  jr          $ra
label_408ccc:
    if (ctx->pc == 0x408CCCu) {
        ctx->pc = 0x408CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408CC8u;
        // 0x408ccc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408CD0u;
        goto label_408cd0;
    }
    ctx->pc = 0x408CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408CC8u;
        // 0x408ccc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x408CD0u;
label_408cd0:
    // 0x408cd0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x408cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408cd4:
    // 0x408cd4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x408cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408cd8:
    // 0x408cd8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x408cd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_408cdc:
    // 0x408cdc: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x408cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_408ce0:
    // 0x408ce0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x408ce0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_408ce4:
    // 0x408ce4: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x408ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_408ce8:
    // 0x408ce8: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x408ce8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_408cec:
    // 0x408cec: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x408cecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_408cf0:
    // 0x408cf0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x408cf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_408cf4:
    // 0x408cf4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x408cf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_408cf8:
    // 0x408cf8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x408cf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_408cfc:
    // 0x408cfc: 0x46000004  c1          0x4
    ctx->pc = 0x408cfcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_408d00:
    // 0x408d00: 0x3e00008  jr          $ra
label_408d04:
    if (ctx->pc == 0x408D04u) {
        ctx->pc = 0x408D08u;
        goto label_408d08;
    }
    ctx->pc = 0x408D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x408D08u;
label_408d08:
    // 0x408d08: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x408d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408d0c:
    // 0x408d0c: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x408d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_408d10:
    // 0x408d10: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x408d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408d14:
    // 0x408d14: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x408d14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_408d18:
    // 0x408d18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x408d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_408d1c:
    // 0x408d1c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x408d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_408d20:
    // 0x408d20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x408d20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_408d24:
    // 0x408d24: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x408d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_408d28:
    // 0x408d28: 0x46000004  c1          0x4
    ctx->pc = 0x408d28u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_408d2c:
    // 0x408d2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x408d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_408d30:
    // 0x408d30: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x408d30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_408d34:
    // 0x408d34: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x408d34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_408d38:
    // 0x408d38: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x408d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_408d3c:
    // 0x408d3c: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x408d3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
label_408d40:
    // 0x408d40: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x408d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_408d44:
    // 0x408d44: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x408d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408d48:
    // 0x408d48: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x408d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408d4c:
    // 0x408d4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x408d4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_408d50:
    // 0x408d50: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x408d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_408d54:
    // 0x408d54: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x408d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_408d58:
    // 0x408d58: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x408d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408d5c:
    // 0x408d5c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x408d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408d60:
    // 0x408d60: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x408d60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_408d64:
    // 0x408d64: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x408d64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_408d68:
    // 0x408d68: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x408d68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_408d6c:
    // 0x408d6c: 0xc4a20020  lwc1        $f2, 0x20($a1)
    ctx->pc = 0x408d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_408d70:
    // 0x408d70: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x408d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408d74:
    // 0x408d74: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x408d74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_408d78:
    // 0x408d78: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x408d78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_408d7c:
    // 0x408d7c: 0x3e00008  jr          $ra
label_408d80:
    if (ctx->pc == 0x408D80u) {
        ctx->pc = 0x408D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408D7Cu;
        // 0x408d80: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x408D84u;
        goto label_408d84;
    }
    ctx->pc = 0x408D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408D7Cu;
        // 0x408d80: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x408D84u;
label_408d84:
    // 0x408d84: 0x0  nop
    ctx->pc = 0x408d84u;
    // NOP
label_408d88:
    // 0x408d88: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x408d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408d8c:
    // 0x408d8c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x408d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_408d90:
    // 0x408d90: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x408d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408d94:
    // 0x408d94: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x408d94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_408d98:
    // 0x408d98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x408d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_408d9c:
    // 0x408d9c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x408d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_408da0:
    // 0x408da0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x408da0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_408da4:
    // 0x408da4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x408da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_408da8:
    // 0x408da8: 0x46000004  c1          0x4
    ctx->pc = 0x408da8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_408dac:
    // 0x408dac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x408dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_408db0:
    // 0x408db0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x408db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_408db4:
    // 0x408db4: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x408db4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_408db8:
    // 0x408db8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x408db8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_408dbc:
    // 0x408dbc: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x408dbcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
label_408dc0:
    // 0x408dc0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x408dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_408dc4:
    // 0x408dc4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x408dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408dc8:
    // 0x408dc8: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x408dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408dcc:
    // 0x408dcc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x408dccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_408dd0:
    // 0x408dd0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x408dd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_408dd4:
    // 0x408dd4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x408dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_408dd8:
    // 0x408dd8: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x408dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408ddc:
    // 0x408ddc: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x408ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408de0:
    // 0x408de0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x408de0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_408de4:
    // 0x408de4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x408de4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_408de8:
    // 0x408de8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x408de8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_408dec:
    // 0x408dec: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x408decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_408df0:
    // 0x408df0: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x408df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408df4:
    // 0x408df4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x408df4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_408df8:
    // 0x408df8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x408df8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_408dfc:
    // 0x408dfc: 0x3e00008  jr          $ra
label_408e00:
    if (ctx->pc == 0x408E00u) {
        ctx->pc = 0x408E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408DFCu;
        // 0x408e00: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x408E04u;
        goto label_408e04;
    }
    ctx->pc = 0x408DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408DFCu;
        // 0x408e00: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x408E04u;
label_408e04:
    // 0x408e04: 0x0  nop
    ctx->pc = 0x408e04u;
    // NOP
    ctx->pc = 0x408e08u;
}
