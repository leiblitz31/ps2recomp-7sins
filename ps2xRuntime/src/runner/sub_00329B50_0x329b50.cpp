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

// Function: sub_00329B50
// Address: 0x329b50 - 0x329e08
void sub_00329B50_0x329b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329B50_0x329b50");
#endif

    switch (ctx->pc) {
        case 0x329b50u: goto label_329b50;
        case 0x329b54u: goto label_329b54;
        case 0x329b58u: goto label_329b58;
        case 0x329b5cu: goto label_329b5c;
        case 0x329b60u: goto label_329b60;
        case 0x329b64u: goto label_329b64;
        case 0x329b68u: goto label_329b68;
        case 0x329b6cu: goto label_329b6c;
        case 0x329b70u: goto label_329b70;
        case 0x329b74u: goto label_329b74;
        case 0x329b78u: goto label_329b78;
        case 0x329b7cu: goto label_329b7c;
        case 0x329b80u: goto label_329b80;
        case 0x329b84u: goto label_329b84;
        case 0x329b88u: goto label_329b88;
        case 0x329b8cu: goto label_329b8c;
        case 0x329b90u: goto label_329b90;
        case 0x329b94u: goto label_329b94;
        case 0x329b98u: goto label_329b98;
        case 0x329b9cu: goto label_329b9c;
        case 0x329ba0u: goto label_329ba0;
        case 0x329ba4u: goto label_329ba4;
        case 0x329ba8u: goto label_329ba8;
        case 0x329bacu: goto label_329bac;
        case 0x329bb0u: goto label_329bb0;
        case 0x329bb4u: goto label_329bb4;
        case 0x329bb8u: goto label_329bb8;
        case 0x329bbcu: goto label_329bbc;
        case 0x329bc0u: goto label_329bc0;
        case 0x329bc4u: goto label_329bc4;
        case 0x329bc8u: goto label_329bc8;
        case 0x329bccu: goto label_329bcc;
        case 0x329bd0u: goto label_329bd0;
        case 0x329bd4u: goto label_329bd4;
        case 0x329bd8u: goto label_329bd8;
        case 0x329bdcu: goto label_329bdc;
        case 0x329be0u: goto label_329be0;
        case 0x329be4u: goto label_329be4;
        case 0x329be8u: goto label_329be8;
        case 0x329becu: goto label_329bec;
        case 0x329bf0u: goto label_329bf0;
        case 0x329bf4u: goto label_329bf4;
        case 0x329bf8u: goto label_329bf8;
        case 0x329bfcu: goto label_329bfc;
        case 0x329c00u: goto label_329c00;
        case 0x329c04u: goto label_329c04;
        case 0x329c08u: goto label_329c08;
        case 0x329c0cu: goto label_329c0c;
        case 0x329c10u: goto label_329c10;
        case 0x329c14u: goto label_329c14;
        case 0x329c18u: goto label_329c18;
        case 0x329c1cu: goto label_329c1c;
        case 0x329c20u: goto label_329c20;
        case 0x329c24u: goto label_329c24;
        case 0x329c28u: goto label_329c28;
        case 0x329c2cu: goto label_329c2c;
        case 0x329c30u: goto label_329c30;
        case 0x329c34u: goto label_329c34;
        case 0x329c38u: goto label_329c38;
        case 0x329c3cu: goto label_329c3c;
        case 0x329c40u: goto label_329c40;
        case 0x329c44u: goto label_329c44;
        case 0x329c48u: goto label_329c48;
        case 0x329c4cu: goto label_329c4c;
        case 0x329c50u: goto label_329c50;
        case 0x329c54u: goto label_329c54;
        case 0x329c58u: goto label_329c58;
        case 0x329c5cu: goto label_329c5c;
        case 0x329c60u: goto label_329c60;
        case 0x329c64u: goto label_329c64;
        case 0x329c68u: goto label_329c68;
        case 0x329c6cu: goto label_329c6c;
        case 0x329c70u: goto label_329c70;
        case 0x329c74u: goto label_329c74;
        case 0x329c78u: goto label_329c78;
        case 0x329c7cu: goto label_329c7c;
        case 0x329c80u: goto label_329c80;
        case 0x329c84u: goto label_329c84;
        case 0x329c88u: goto label_329c88;
        case 0x329c8cu: goto label_329c8c;
        case 0x329c90u: goto label_329c90;
        case 0x329c94u: goto label_329c94;
        case 0x329c98u: goto label_329c98;
        case 0x329c9cu: goto label_329c9c;
        case 0x329ca0u: goto label_329ca0;
        case 0x329ca4u: goto label_329ca4;
        case 0x329ca8u: goto label_329ca8;
        case 0x329cacu: goto label_329cac;
        case 0x329cb0u: goto label_329cb0;
        case 0x329cb4u: goto label_329cb4;
        case 0x329cb8u: goto label_329cb8;
        case 0x329cbcu: goto label_329cbc;
        case 0x329cc0u: goto label_329cc0;
        case 0x329cc4u: goto label_329cc4;
        case 0x329cc8u: goto label_329cc8;
        case 0x329cccu: goto label_329ccc;
        case 0x329cd0u: goto label_329cd0;
        case 0x329cd4u: goto label_329cd4;
        case 0x329cd8u: goto label_329cd8;
        case 0x329cdcu: goto label_329cdc;
        case 0x329ce0u: goto label_329ce0;
        case 0x329ce4u: goto label_329ce4;
        case 0x329ce8u: goto label_329ce8;
        case 0x329cecu: goto label_329cec;
        case 0x329cf0u: goto label_329cf0;
        case 0x329cf4u: goto label_329cf4;
        case 0x329cf8u: goto label_329cf8;
        case 0x329cfcu: goto label_329cfc;
        case 0x329d00u: goto label_329d00;
        case 0x329d04u: goto label_329d04;
        case 0x329d08u: goto label_329d08;
        case 0x329d0cu: goto label_329d0c;
        case 0x329d10u: goto label_329d10;
        case 0x329d14u: goto label_329d14;
        case 0x329d18u: goto label_329d18;
        case 0x329d1cu: goto label_329d1c;
        case 0x329d20u: goto label_329d20;
        case 0x329d24u: goto label_329d24;
        case 0x329d28u: goto label_329d28;
        case 0x329d2cu: goto label_329d2c;
        case 0x329d30u: goto label_329d30;
        case 0x329d34u: goto label_329d34;
        case 0x329d38u: goto label_329d38;
        case 0x329d3cu: goto label_329d3c;
        case 0x329d40u: goto label_329d40;
        case 0x329d44u: goto label_329d44;
        case 0x329d48u: goto label_329d48;
        case 0x329d4cu: goto label_329d4c;
        case 0x329d50u: goto label_329d50;
        case 0x329d54u: goto label_329d54;
        case 0x329d58u: goto label_329d58;
        case 0x329d5cu: goto label_329d5c;
        case 0x329d60u: goto label_329d60;
        case 0x329d64u: goto label_329d64;
        case 0x329d68u: goto label_329d68;
        case 0x329d6cu: goto label_329d6c;
        case 0x329d70u: goto label_329d70;
        case 0x329d74u: goto label_329d74;
        case 0x329d78u: goto label_329d78;
        case 0x329d7cu: goto label_329d7c;
        case 0x329d80u: goto label_329d80;
        case 0x329d84u: goto label_329d84;
        case 0x329d88u: goto label_329d88;
        case 0x329d8cu: goto label_329d8c;
        case 0x329d90u: goto label_329d90;
        case 0x329d94u: goto label_329d94;
        case 0x329d98u: goto label_329d98;
        case 0x329d9cu: goto label_329d9c;
        case 0x329da0u: goto label_329da0;
        case 0x329da4u: goto label_329da4;
        case 0x329da8u: goto label_329da8;
        case 0x329dacu: goto label_329dac;
        case 0x329db0u: goto label_329db0;
        case 0x329db4u: goto label_329db4;
        case 0x329db8u: goto label_329db8;
        case 0x329dbcu: goto label_329dbc;
        case 0x329dc0u: goto label_329dc0;
        case 0x329dc4u: goto label_329dc4;
        case 0x329dc8u: goto label_329dc8;
        case 0x329dccu: goto label_329dcc;
        case 0x329dd0u: goto label_329dd0;
        case 0x329dd4u: goto label_329dd4;
        case 0x329dd8u: goto label_329dd8;
        case 0x329ddcu: goto label_329ddc;
        case 0x329de0u: goto label_329de0;
        case 0x329de4u: goto label_329de4;
        case 0x329de8u: goto label_329de8;
        case 0x329decu: goto label_329dec;
        case 0x329df0u: goto label_329df0;
        case 0x329df4u: goto label_329df4;
        case 0x329df8u: goto label_329df8;
        case 0x329dfcu: goto label_329dfc;
        case 0x329e00u: goto label_329e00;
        case 0x329e04u: goto label_329e04;
        default: break;
    }

    ctx->pc = 0x329b50u;

label_329b50:
    // 0x329b50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x329b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_329b54:
    // 0x329b54: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x329b54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_329b58:
    // 0x329b58: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x329b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_329b5c:
    // 0x329b5c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x329b5cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_329b60:
    // 0x329b60: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x329b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_329b64:
    // 0x329b64: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x329b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_329b68:
    // 0x329b68: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x329b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_329b6c:
    // 0x329b6c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x329b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_329b70:
    // 0x329b70: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x329b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_329b74:
    // 0x329b74: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x329b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_329b78:
    // 0x329b78: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x329b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_329b7c:
    // 0x329b7c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x329b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_329b80:
    // 0x329b80: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x329b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_329b84:
    // 0x329b84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x329b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_329b88:
    // 0x329b88: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x329b88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_329b8c:
    // 0x329b8c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x329b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_329b90:
    // 0x329b90: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x329b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_329b94:
    // 0x329b94: 0x10a0008d  beqz        $a1, . + 4 + (0x8D << 2)
label_329b98:
    if (ctx->pc == 0x329B98u) {
        ctx->pc = 0x329B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B94u;
        // 0x329b98: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329B9Cu;
        goto label_329b9c;
    }
    ctx->pc = 0x329B94u;
    {
        const bool branch_taken_0x329b94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x329B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B94u;
        // 0x329b98: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329b94) {
            ctx->pc = 0x329DCCu;
            goto label_329dcc;
        }
    }
    ctx->pc = 0x329B9Cu;
label_329b9c:
    // 0x329b9c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x329b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_329ba0:
    // 0x329ba0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x329ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_329ba4:
    // 0x329ba4: 0x24570001  addiu       $s7, $v0, 0x1
    ctx->pc = 0x329ba4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_329ba8:
    // 0x329ba8: 0x2e3102b  sltu        $v0, $s7, $v1
    ctx->pc = 0x329ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_329bac:
    // 0x329bac: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
label_329bb0:
    if (ctx->pc == 0x329BB0u) {
        ctx->pc = 0x329BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BACu;
        // 0x329bb0: 0xafb7001c  sw          $s7, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329BB4u;
        goto label_329bb4;
    }
    ctx->pc = 0x329BACu;
    {
        const bool branch_taken_0x329bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329BACu;
        // 0x329bb0: 0xafb7001c  sw          $s7, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329bac) {
            ctx->pc = 0x329DB4u;
            goto label_329db4;
        }
    }
    ctx->pc = 0x329BB4u;
label_329bb4:
    // 0x329bb4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x329bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_329bb8:
    // 0x329bb8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x329bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_329bbc:
    // 0x329bbc: 0x2e44018  mult        $t0, $s7, $a0
    ctx->pc = 0x329bbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_329bc0:
    // 0x329bc0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x329bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_329bc4:
    // 0x329bc4: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x329bc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_329bc8:
    // 0x329bc8: 0x4600ad07  neg.s       $f20, $f21
    ctx->pc = 0x329bc8u;
    ctx->f[20] = FPU_NEG_S(ctx->f[21]);
label_329bcc:
    // 0x329bcc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x329bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_329bd0:
    // 0x329bd0: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x329bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_329bd4:
    // 0x329bd4: 0x1012  mflo        $v0
    ctx->pc = 0x329bd4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_329bd8:
    // 0x329bd8: 0x105f021  addu        $fp, $t0, $a1
    ctx->pc = 0x329bd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_329bdc:
    // 0x329bdc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x329bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_329be0:
    // 0x329be0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x329be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_329be4:
    // 0x329be4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x329be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_329be8:
    // 0x329be8: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x329be8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_329bec:
    // 0x329bec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x329becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_329bf0:
    // 0x329bf0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x329bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_329bf4:
    // 0x329bf4: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x329bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_329bf8:
    // 0x329bf8: 0x102b021  addu        $s6, $t0, $v0
    ctx->pc = 0x329bf8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_329bfc:
    // 0x329bfc: 0x0  nop
    ctx->pc = 0x329bfcu;
    // NOP
label_329c00:
    // 0x329c00: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x329c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_329c04:
    // 0x329c04: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x329c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_329c08:
    // 0x329c08: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x329c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_329c0c:
    // 0x329c0c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x329c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_329c10:
    // 0x329c10: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x329c10u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_329c14:
    // 0x329c14: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x329c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_329c18:
    // 0x329c18: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x329c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_329c1c:
    // 0x329c1c: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x329c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_329c20:
    // 0x329c20: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x329c20u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_329c24:
    // 0x329c24: 0x4604a036  c.le.s      $f20, $f4
    ctx->pc = 0x329c24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_329c28:
    // 0x329c28: 0x0  nop
    ctx->pc = 0x329c28u;
    // NOP
label_329c2c:
    // 0x329c2c: 0x4500005a  bc1f        . + 4 + (0x5A << 2)
label_329c30:
    if (ctx->pc == 0x329C30u) {
        ctx->pc = 0x329C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C2Cu;
        // 0x329c30: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C34u;
        goto label_329c34;
    }
    ctx->pc = 0x329C2Cu;
    {
        const bool branch_taken_0x329c2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x329C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C2Cu;
        // 0x329c30: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x329c2c) {
            ctx->pc = 0x329D98u;
            goto label_329d98;
        }
    }
    ctx->pc = 0x329C34u;
label_329c34:
    // 0x329c34: 0x46152036  c.le.s      $f4, $f21
    ctx->pc = 0x329c34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_329c38:
    // 0x329c38: 0x0  nop
    ctx->pc = 0x329c38u;
    // NOP
label_329c3c:
    // 0x329c3c: 0x45000057  bc1f        . + 4 + (0x57 << 2)
label_329c40:
    if (ctx->pc == 0x329C40u) {
        ctx->pc = 0x329C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C3Cu;
        // 0x329c40: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C44u;
        goto label_329c44;
    }
    ctx->pc = 0x329C3Cu;
    {
        const bool branch_taken_0x329c3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x329C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C3Cu;
        // 0x329c40: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329c3c) {
            ctx->pc = 0x329D9Cu;
            goto label_329d9c;
        }
    }
    ctx->pc = 0x329C44u;
label_329c44:
    // 0x329c44: 0x4603a036  c.le.s      $f20, $f3
    ctx->pc = 0x329c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_329c48:
    // 0x329c48: 0x0  nop
    ctx->pc = 0x329c48u;
    // NOP
label_329c4c:
    // 0x329c4c: 0x45020054  bc1fl       . + 4 + (0x54 << 2)
label_329c50:
    if (ctx->pc == 0x329C50u) {
        ctx->pc = 0x329C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C4Cu;
        // 0x329c50: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C54u;
        goto label_329c54;
    }
    ctx->pc = 0x329C4Cu;
    {
        const bool branch_taken_0x329c4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x329c4c) {
            ctx->pc = 0x329C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329C4Cu;
            // 0x329c50: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329DA0u;
            goto label_329da0;
        }
    }
    ctx->pc = 0x329C54u;
label_329c54:
    // 0x329c54: 0x46151836  c.le.s      $f3, $f21
    ctx->pc = 0x329c54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_329c58:
    // 0x329c58: 0x0  nop
    ctx->pc = 0x329c58u;
    // NOP
label_329c5c:
    // 0x329c5c: 0x45020050  bc1fl       . + 4 + (0x50 << 2)
label_329c60:
    if (ctx->pc == 0x329C60u) {
        ctx->pc = 0x329C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C5Cu;
        // 0x329c60: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C64u;
        goto label_329c64;
    }
    ctx->pc = 0x329C5Cu;
    {
        const bool branch_taken_0x329c5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x329c5c) {
            ctx->pc = 0x329C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329C5Cu;
            // 0x329c60: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329DA0u;
            goto label_329da0;
        }
    }
    ctx->pc = 0x329C64u;
label_329c64:
    // 0x329c64: 0x4602a036  c.le.s      $f20, $f2
    ctx->pc = 0x329c64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_329c68:
    // 0x329c68: 0x0  nop
    ctx->pc = 0x329c68u;
    // NOP
label_329c6c:
    // 0x329c6c: 0x4502004c  bc1fl       . + 4 + (0x4C << 2)
label_329c70:
    if (ctx->pc == 0x329C70u) {
        ctx->pc = 0x329C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C6Cu;
        // 0x329c70: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C74u;
        goto label_329c74;
    }
    ctx->pc = 0x329C6Cu;
    {
        const bool branch_taken_0x329c6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x329c6c) {
            ctx->pc = 0x329C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329C6Cu;
            // 0x329c70: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329DA0u;
            goto label_329da0;
        }
    }
    ctx->pc = 0x329C74u;
label_329c74:
    // 0x329c74: 0x46151036  c.le.s      $f2, $f21
    ctx->pc = 0x329c74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_329c78:
    // 0x329c78: 0x0  nop
    ctx->pc = 0x329c78u;
    // NOP
label_329c7c:
    // 0x329c7c: 0x45000047  bc1f        . + 4 + (0x47 << 2)
label_329c80:
    if (ctx->pc == 0x329C80u) {
        ctx->pc = 0x329C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C7Cu;
        // 0x329c80: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C84u;
        goto label_329c84;
    }
    ctx->pc = 0x329C7Cu;
    {
        const bool branch_taken_0x329c7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x329C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C7Cu;
        // 0x329c80: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329c7c) {
            ctx->pc = 0x329D9Cu;
            goto label_329d9c;
        }
    }
    ctx->pc = 0x329C84u;
label_329c84:
    // 0x329c84: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x329c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_329c88:
    // 0x329c88: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x329c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_329c8c:
    // 0x329c8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x329c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_329c90:
    // 0x329c90: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x329c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_329c94:
    // 0x329c94: 0x14820017  bne         $a0, $v0, . + 4 + (0x17 << 2)
label_329c98:
    if (ctx->pc == 0x329C98u) {
        ctx->pc = 0x329C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C94u;
        // 0x329c98: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329C9Cu;
        goto label_329c9c;
    }
    ctx->pc = 0x329C94u;
    {
        const bool branch_taken_0x329c94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x329C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329C94u;
        // 0x329c98: 0x8fa30018  lw          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329c94) {
            ctx->pc = 0x329CF4u;
            goto label_329cf4;
        }
    }
    ctx->pc = 0x329C9Cu;
label_329c9c:
    // 0x329c9c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x329c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_329ca0:
    // 0x329ca0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x329ca0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_329ca4:
    // 0x329ca4: 0x2455e880  addiu       $s5, $v0, -0x1780
    ctx->pc = 0x329ca4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_329ca8:
    // 0x329ca8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x329ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_329cac:
    // 0x329cac: 0x8ea20108  lw          $v0, 0x108($s5)
    ctx->pc = 0x329cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 264)));
label_329cb0:
    // 0x329cb0: 0x132040  sll         $a0, $s3, 1
    ctx->pc = 0x329cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_329cb4:
    // 0x329cb4: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x329cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_329cb8:
    // 0x329cb8: 0x40f809  jalr        $v0
label_329cbc:
    if (ctx->pc == 0x329CBCu) {
        ctx->pc = 0x329CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CB8u;
        // 0x329cbc: 0x34a50123  ori         $a1, $a1, 0x123 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)291);
        ctx->in_delay_slot = false;
        ctx->pc = 0x329CC0u;
        goto label_329cc0;
    }
    ctx->pc = 0x329CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x329CC0u);
        ctx->pc = 0x329CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CB8u;
        // 0x329cbc: 0x34a50123  ori         $a1, $a1, 0x123 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)291);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329CB8u, 0x329CC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329CC0u;
label_329cc0:
    // 0x329cc0: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_329cc4:
    if (ctx->pc == 0x329CC4u) {
        ctx->pc = 0x329CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CC0u;
        // 0x329cc4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329CC8u;
        goto label_329cc8;
    }
    ctx->pc = 0x329CC0u;
    {
        const bool branch_taken_0x329cc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x329CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CC0u;
        // 0x329cc4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329cc0) {
            ctx->pc = 0x329CE8u;
            goto label_329ce8;
        }
    }
    ctx->pc = 0x329CC8u;
label_329cc8:
    // 0x329cc8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x329cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_329ccc:
    // 0x329ccc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x329cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_329cd0:
    // 0x329cd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x329cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_329cd4:
    // 0x329cd4: 0xc0bb778  jal         func_2EDDE0
label_329cd8:
    if (ctx->pc == 0x329CD8u) {
        ctx->pc = 0x329CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CD4u;
        // 0x329cd8: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329CDCu;
        goto label_329cdc;
    }
    ctx->pc = 0x329CD4u;
    SET_GPR_U32(ctx, 31, 0x329CDCu);
    ctx->pc = 0x329CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CD4u;
    // 0x329cd8: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x329CD4u, 0x329CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329CDCu;
label_329cdc:
    // 0x329cdc: 0x8ea3010c  lw          $v1, 0x10C($s5)
    ctx->pc = 0x329cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
label_329ce0:
    // 0x329ce0: 0x60f809  jalr        $v1
label_329ce4:
    if (ctx->pc == 0x329CE4u) {
        ctx->pc = 0x329CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CE0u;
        // 0x329ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329CE8u;
        goto label_329ce8;
    }
    ctx->pc = 0x329CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x329CE8u);
        ctx->pc = 0x329CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CE0u;
        // 0x329ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329CE0u, 0x329CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329CE8u;
label_329ce8:
    // 0x329ce8: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x329ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_329cec:
    // 0x329cec: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x329cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_329cf0:
    // 0x329cf0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x329cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_329cf4:
    // 0x329cf4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x329cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_329cf8:
    // 0x329cf8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x329cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_329cfc:
    // 0x329cfc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x329cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_329d00:
    // 0x329d00: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x329d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_329d04:
    // 0x329d04: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x329d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_329d08:
    // 0x329d08: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x329d08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_329d0c:
    // 0x329d0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x329d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_329d10:
    // 0x329d10: 0xa4570000  sh          $s7, 0x0($v0)
    ctx->pc = 0x329d10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 23));
label_329d14:
    // 0x329d14: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x329d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_329d18:
    // 0x329d18: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x329d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_329d1c:
    // 0x329d1c: 0x54820017  bnel        $a0, $v0, . + 4 + (0x17 << 2)
label_329d20:
    if (ctx->pc == 0x329D20u) {
        ctx->pc = 0x329D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D1Cu;
        // 0x329d20: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D24u;
        goto label_329d24;
    }
    ctx->pc = 0x329D1Cu;
    {
        const bool branch_taken_0x329d1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x329d1c) {
            ctx->pc = 0x329D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329D1Cu;
            // 0x329d20: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329D7Cu;
            goto label_329d7c;
        }
    }
    ctx->pc = 0x329D24u;
label_329d24:
    // 0x329d24: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x329d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_329d28:
    // 0x329d28: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x329d28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_329d2c:
    // 0x329d2c: 0x2453e880  addiu       $s3, $v0, -0x1780
    ctx->pc = 0x329d2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_329d30:
    // 0x329d30: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x329d30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_329d34:
    // 0x329d34: 0x8e620108  lw          $v0, 0x108($s3)
    ctx->pc = 0x329d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_329d38:
    // 0x329d38: 0x122040  sll         $a0, $s2, 1
    ctx->pc = 0x329d38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_329d3c:
    // 0x329d3c: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x329d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_329d40:
    // 0x329d40: 0x40f809  jalr        $v0
label_329d44:
    if (ctx->pc == 0x329D44u) {
        ctx->pc = 0x329D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D40u;
        // 0x329d44: 0x34a50123  ori         $a1, $a1, 0x123 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)291);
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D48u;
        goto label_329d48;
    }
    ctx->pc = 0x329D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x329D48u);
        ctx->pc = 0x329D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D40u;
        // 0x329d44: 0x34a50123  ori         $a1, $a1, 0x123 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)291);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329D40u, 0x329D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329D48u;
label_329d48:
    // 0x329d48: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_329d4c:
    if (ctx->pc == 0x329D4Cu) {
        ctx->pc = 0x329D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D48u;
        // 0x329d4c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D50u;
        goto label_329d50;
    }
    ctx->pc = 0x329D48u;
    {
        const bool branch_taken_0x329d48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x329D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D48u;
        // 0x329d4c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329d48) {
            ctx->pc = 0x329D70u;
            goto label_329d70;
        }
    }
    ctx->pc = 0x329D50u;
label_329d50:
    // 0x329d50: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x329d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_329d54:
    // 0x329d54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x329d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_329d58:
    // 0x329d58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x329d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329d5c:
    // 0x329d5c: 0xc0bb778  jal         func_2EDDE0
label_329d60:
    if (ctx->pc == 0x329D60u) {
        ctx->pc = 0x329D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D5Cu;
        // 0x329d60: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D64u;
        goto label_329d64;
    }
    ctx->pc = 0x329D5Cu;
    SET_GPR_U32(ctx, 31, 0x329D64u);
    ctx->pc = 0x329D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329D5Cu;
    // 0x329d60: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x329D5Cu, 0x329D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D64u;
label_329d64:
    // 0x329d64: 0x8e63010c  lw          $v1, 0x10C($s3)
    ctx->pc = 0x329d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_329d68:
    // 0x329d68: 0x60f809  jalr        $v1
label_329d6c:
    if (ctx->pc == 0x329D6Cu) {
        ctx->pc = 0x329D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D68u;
        // 0x329d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329D70u;
        goto label_329d70;
    }
    ctx->pc = 0x329D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x329D70u);
        ctx->pc = 0x329D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D68u;
        // 0x329d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329D68u, 0x329D70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329D70u;
label_329d70:
    // 0x329d70: 0xafd20004  sw          $s2, 0x4($fp)
    ctx->pc = 0x329d70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 18));
label_329d74:
    // 0x329d74: 0xafd10008  sw          $s1, 0x8($fp)
    ctx->pc = 0x329d74u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 17));
label_329d78:
    // 0x329d78: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x329d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_329d7c:
    // 0x329d7c: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x329d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_329d80:
    // 0x329d80: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x329d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_329d84:
    // 0x329d84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x329d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_329d88:
    // 0x329d88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x329d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_329d8c:
    // 0x329d8c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x329d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_329d90:
    // 0x329d90: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x329d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_329d94:
    // 0x329d94: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x329d94u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_329d98:
    // 0x329d98: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x329d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_329d9c:
    // 0x329d9c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x329d9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_329da0:
    // 0x329da0: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x329da0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_329da4:
    // 0x329da4: 0x27de000c  addiu       $fp, $fp, 0xC
    ctx->pc = 0x329da4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
label_329da8:
    // 0x329da8: 0x2e5102b  sltu        $v0, $s7, $a1
    ctx->pc = 0x329da8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_329dac:
    // 0x329dac: 0x1440ff94  bnez        $v0, . + 4 + (-0x6C << 2)
label_329db0:
    if (ctx->pc == 0x329DB0u) {
        ctx->pc = 0x329DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DACu;
        // 0x329db0: 0x26d6000c  addiu       $s6, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329DB4u;
        goto label_329db4;
    }
    ctx->pc = 0x329DACu;
    {
        const bool branch_taken_0x329dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DACu;
        // 0x329db0: 0x26d6000c  addiu       $s6, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329dac) {
            ctx->pc = 0x329C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329c00;
        }
    }
    ctx->pc = 0x329DB4u;
label_329db4:
    // 0x329db4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x329db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_329db8:
    // 0x329db8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x329db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_329dbc:
    // 0x329dbc: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x329dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_329dc0:
    // 0x329dc0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x329dc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_329dc4:
    // 0x329dc4: 0x1440ff76  bnez        $v0, . + 4 + (-0x8A << 2)
label_329dc8:
    if (ctx->pc == 0x329DC8u) {
        ctx->pc = 0x329DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DC4u;
        // 0x329dc8: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329DCCu;
        goto label_329dcc;
    }
    ctx->pc = 0x329DC4u;
    {
        const bool branch_taken_0x329dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329DC4u;
        // 0x329dc8: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329dc4) {
            ctx->pc = 0x329BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329ba0;
        }
    }
    ctx->pc = 0x329DCCu;
label_329dcc:
    // 0x329dcc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x329dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_329dd0:
    // 0x329dd0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x329dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_329dd4:
    // 0x329dd4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x329dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_329dd8:
    // 0x329dd8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x329dd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_329ddc:
    // 0x329ddc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x329ddcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_329de0:
    // 0x329de0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x329de0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_329de4:
    // 0x329de4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x329de4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_329de8:
    // 0x329de8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x329de8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_329dec:
    // 0x329dec: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x329decu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_329df0:
    // 0x329df0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x329df0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_329df4:
    // 0x329df4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x329df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_329df8:
    // 0x329df8: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x329df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_329dfc:
    // 0x329dfc: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x329dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_329e00:
    // 0x329e00: 0x3e00008  jr          $ra
label_329e04:
    if (ctx->pc == 0x329E04u) {
        ctx->pc = 0x329E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E00u;
        // 0x329e04: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E08u;
        goto label_fallthrough_0x329e00;
    }
    ctx->pc = 0x329E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E00u;
        // 0x329e04: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x329e00:
    ctx->pc = 0x329E08u;
}
