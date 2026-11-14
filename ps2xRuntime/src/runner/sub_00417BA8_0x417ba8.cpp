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

// Function: sub_00417BA8
// Address: 0x417ba8 - 0x417e58
void sub_00417BA8_0x417ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417BA8_0x417ba8");
#endif

    switch (ctx->pc) {
        case 0x417ba8u: goto label_417ba8;
        case 0x417bacu: goto label_417bac;
        case 0x417bb0u: goto label_417bb0;
        case 0x417bb4u: goto label_417bb4;
        case 0x417bb8u: goto label_417bb8;
        case 0x417bbcu: goto label_417bbc;
        case 0x417bc0u: goto label_417bc0;
        case 0x417bc4u: goto label_417bc4;
        case 0x417bc8u: goto label_417bc8;
        case 0x417bccu: goto label_417bcc;
        case 0x417bd0u: goto label_417bd0;
        case 0x417bd4u: goto label_417bd4;
        case 0x417bd8u: goto label_417bd8;
        case 0x417bdcu: goto label_417bdc;
        case 0x417be0u: goto label_417be0;
        case 0x417be4u: goto label_417be4;
        case 0x417be8u: goto label_417be8;
        case 0x417becu: goto label_417bec;
        case 0x417bf0u: goto label_417bf0;
        case 0x417bf4u: goto label_417bf4;
        case 0x417bf8u: goto label_417bf8;
        case 0x417bfcu: goto label_417bfc;
        case 0x417c00u: goto label_417c00;
        case 0x417c04u: goto label_417c04;
        case 0x417c08u: goto label_417c08;
        case 0x417c0cu: goto label_417c0c;
        case 0x417c10u: goto label_417c10;
        case 0x417c14u: goto label_417c14;
        case 0x417c18u: goto label_417c18;
        case 0x417c1cu: goto label_417c1c;
        case 0x417c20u: goto label_417c20;
        case 0x417c24u: goto label_417c24;
        case 0x417c28u: goto label_417c28;
        case 0x417c2cu: goto label_417c2c;
        case 0x417c30u: goto label_417c30;
        case 0x417c34u: goto label_417c34;
        case 0x417c38u: goto label_417c38;
        case 0x417c3cu: goto label_417c3c;
        case 0x417c40u: goto label_417c40;
        case 0x417c44u: goto label_417c44;
        case 0x417c48u: goto label_417c48;
        case 0x417c4cu: goto label_417c4c;
        case 0x417c50u: goto label_417c50;
        case 0x417c54u: goto label_417c54;
        case 0x417c58u: goto label_417c58;
        case 0x417c5cu: goto label_417c5c;
        case 0x417c60u: goto label_417c60;
        case 0x417c64u: goto label_417c64;
        case 0x417c68u: goto label_417c68;
        case 0x417c6cu: goto label_417c6c;
        case 0x417c70u: goto label_417c70;
        case 0x417c74u: goto label_417c74;
        case 0x417c78u: goto label_417c78;
        case 0x417c7cu: goto label_417c7c;
        case 0x417c80u: goto label_417c80;
        case 0x417c84u: goto label_417c84;
        case 0x417c88u: goto label_417c88;
        case 0x417c8cu: goto label_417c8c;
        case 0x417c90u: goto label_417c90;
        case 0x417c94u: goto label_417c94;
        case 0x417c98u: goto label_417c98;
        case 0x417c9cu: goto label_417c9c;
        case 0x417ca0u: goto label_417ca0;
        case 0x417ca4u: goto label_417ca4;
        case 0x417ca8u: goto label_417ca8;
        case 0x417cacu: goto label_417cac;
        case 0x417cb0u: goto label_417cb0;
        case 0x417cb4u: goto label_417cb4;
        case 0x417cb8u: goto label_417cb8;
        case 0x417cbcu: goto label_417cbc;
        case 0x417cc0u: goto label_417cc0;
        case 0x417cc4u: goto label_417cc4;
        case 0x417cc8u: goto label_417cc8;
        case 0x417cccu: goto label_417ccc;
        case 0x417cd0u: goto label_417cd0;
        case 0x417cd4u: goto label_417cd4;
        case 0x417cd8u: goto label_417cd8;
        case 0x417cdcu: goto label_417cdc;
        case 0x417ce0u: goto label_417ce0;
        case 0x417ce4u: goto label_417ce4;
        case 0x417ce8u: goto label_417ce8;
        case 0x417cecu: goto label_417cec;
        case 0x417cf0u: goto label_417cf0;
        case 0x417cf4u: goto label_417cf4;
        case 0x417cf8u: goto label_417cf8;
        case 0x417cfcu: goto label_417cfc;
        case 0x417d00u: goto label_417d00;
        case 0x417d04u: goto label_417d04;
        case 0x417d08u: goto label_417d08;
        case 0x417d0cu: goto label_417d0c;
        case 0x417d10u: goto label_417d10;
        case 0x417d14u: goto label_417d14;
        case 0x417d18u: goto label_417d18;
        case 0x417d1cu: goto label_417d1c;
        case 0x417d20u: goto label_417d20;
        case 0x417d24u: goto label_417d24;
        case 0x417d28u: goto label_417d28;
        case 0x417d2cu: goto label_417d2c;
        case 0x417d30u: goto label_417d30;
        case 0x417d34u: goto label_417d34;
        case 0x417d38u: goto label_417d38;
        case 0x417d3cu: goto label_417d3c;
        case 0x417d40u: goto label_417d40;
        case 0x417d44u: goto label_417d44;
        case 0x417d48u: goto label_417d48;
        case 0x417d4cu: goto label_417d4c;
        case 0x417d50u: goto label_417d50;
        case 0x417d54u: goto label_417d54;
        case 0x417d58u: goto label_417d58;
        case 0x417d5cu: goto label_417d5c;
        case 0x417d60u: goto label_417d60;
        case 0x417d64u: goto label_417d64;
        case 0x417d68u: goto label_417d68;
        case 0x417d6cu: goto label_417d6c;
        case 0x417d70u: goto label_417d70;
        case 0x417d74u: goto label_417d74;
        case 0x417d78u: goto label_417d78;
        case 0x417d7cu: goto label_417d7c;
        case 0x417d80u: goto label_417d80;
        case 0x417d84u: goto label_417d84;
        case 0x417d88u: goto label_417d88;
        case 0x417d8cu: goto label_417d8c;
        case 0x417d90u: goto label_417d90;
        case 0x417d94u: goto label_417d94;
        case 0x417d98u: goto label_417d98;
        case 0x417d9cu: goto label_417d9c;
        case 0x417da0u: goto label_417da0;
        case 0x417da4u: goto label_417da4;
        case 0x417da8u: goto label_417da8;
        case 0x417dacu: goto label_417dac;
        case 0x417db0u: goto label_417db0;
        case 0x417db4u: goto label_417db4;
        case 0x417db8u: goto label_417db8;
        case 0x417dbcu: goto label_417dbc;
        case 0x417dc0u: goto label_417dc0;
        case 0x417dc4u: goto label_417dc4;
        case 0x417dc8u: goto label_417dc8;
        case 0x417dccu: goto label_417dcc;
        case 0x417dd0u: goto label_417dd0;
        case 0x417dd4u: goto label_417dd4;
        case 0x417dd8u: goto label_417dd8;
        case 0x417ddcu: goto label_417ddc;
        case 0x417de0u: goto label_417de0;
        case 0x417de4u: goto label_417de4;
        case 0x417de8u: goto label_417de8;
        case 0x417decu: goto label_417dec;
        case 0x417df0u: goto label_417df0;
        case 0x417df4u: goto label_417df4;
        case 0x417df8u: goto label_417df8;
        case 0x417dfcu: goto label_417dfc;
        case 0x417e00u: goto label_417e00;
        case 0x417e04u: goto label_417e04;
        case 0x417e08u: goto label_417e08;
        case 0x417e0cu: goto label_417e0c;
        case 0x417e10u: goto label_417e10;
        case 0x417e14u: goto label_417e14;
        case 0x417e18u: goto label_417e18;
        case 0x417e1cu: goto label_417e1c;
        case 0x417e20u: goto label_417e20;
        case 0x417e24u: goto label_417e24;
        case 0x417e28u: goto label_417e28;
        case 0x417e2cu: goto label_417e2c;
        case 0x417e30u: goto label_417e30;
        case 0x417e34u: goto label_417e34;
        case 0x417e38u: goto label_417e38;
        case 0x417e3cu: goto label_417e3c;
        case 0x417e40u: goto label_417e40;
        case 0x417e44u: goto label_417e44;
        case 0x417e48u: goto label_417e48;
        case 0x417e4cu: goto label_417e4c;
        case 0x417e50u: goto label_417e50;
        case 0x417e54u: goto label_417e54;
        default: break;
    }

    ctx->pc = 0x417ba8u;

label_417ba8:
    // 0x417ba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x417ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_417bac:
    // 0x417bac: 0x8f83bdf8  lw          $v1, -0x4208($gp)
    ctx->pc = 0x417bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950392)));
label_417bb0:
    // 0x417bb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x417bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_417bb4:
    // 0x417bb4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x417bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_417bb8:
    // 0x417bb8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x417bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_417bbc:
    // 0x417bbc: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x417bbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_417bc0:
    // 0x417bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x417bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_417bc4:
    // 0x417bc4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x417bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_417bc8:
    // 0x417bc8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x417bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_417bcc:
    // 0x417bcc: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x417bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_417bd0:
    // 0x417bd0: 0x34a50005  ori         $a1, $a1, 0x5
    ctx->pc = 0x417bd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
label_417bd4:
    // 0x417bd4: 0x40f809  jalr        $v0
label_417bd8:
    if (ctx->pc == 0x417BD8u) {
        ctx->pc = 0x417BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417BD4u;
        // 0x417bd8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417BDCu;
        goto label_417bdc;
    }
    ctx->pc = 0x417BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x417BDCu);
        ctx->pc = 0x417BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417BD4u;
        // 0x417bd8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417BD4u, 0x417BDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x417BDCu;
label_417bdc:
    // 0x417bdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x417bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_417be0:
    // 0x417be0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_417be4:
    if (ctx->pc == 0x417BE4u) {
        ctx->pc = 0x417BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417BE0u;
        // 0x417be4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417BE8u;
        goto label_417be8;
    }
    ctx->pc = 0x417BE0u;
    {
        const bool branch_taken_0x417be0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x417BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417BE0u;
        // 0x417be4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417be0) {
            ctx->pc = 0x417BF0u;
            goto label_417bf0;
        }
    }
    ctx->pc = 0x417BE8u;
label_417be8:
    // 0x417be8: 0x1000003d  b           . + 4 + (0x3D << 2)
label_417bec:
    if (ctx->pc == 0x417BECu) {
        ctx->pc = 0x417BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417BE8u;
        // 0x417bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417BF0u;
        goto label_417bf0;
    }
    ctx->pc = 0x417BE8u;
    {
        const bool branch_taken_0x417be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x417BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417BE8u;
        // 0x417bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417be8) {
            ctx->pc = 0x417CE0u;
            goto label_417ce0;
        }
    }
    ctx->pc = 0x417BF0u;
label_417bf0:
    // 0x417bf0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x417bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_417bf4:
    // 0x417bf4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x417bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_417bf8:
    // 0x417bf8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x417bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_417bfc:
    // 0x417bfc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x417bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_417c00:
    // 0x417c00: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x417c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_417c04:
    // 0x417c04: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x417c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_417c08:
    // 0x417c08: 0x244284b8  addiu       $v0, $v0, -0x7B48
    ctx->pc = 0x417c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935736));
label_417c0c:
    // 0x417c0c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x417c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_417c10:
    // 0x417c10: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x417c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_417c14:
    // 0x417c14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x417c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_417c18:
    // 0x417c18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x417c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_417c1c:
    // 0x417c1c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x417c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_417c20:
    // 0x417c20: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x417c20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_417c24:
    // 0x417c24: 0x24638580  addiu       $v1, $v1, -0x7A80
    ctx->pc = 0x417c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935936));
label_417c28:
    // 0x417c28: 0xc7838044  lwc1        $f3, -0x7FBC($gp)
    ctx->pc = 0x417c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_417c2c:
    // 0x417c2c: 0x24428528  addiu       $v0, $v0, -0x7AD8
    ctx->pc = 0x417c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935848));
label_417c30:
    // 0x417c30: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x417c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_417c34:
    // 0x417c34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x417c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_417c38:
    // 0x417c38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x417c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_417c3c:
    // 0x417c3c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x417c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_417c40:
    // 0x417c40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x417c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_417c44:
    // 0x417c44: 0xe6040078  swc1        $f4, 0x78($s0)
    ctx->pc = 0x417c44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_417c48:
    // 0x417c48: 0xe6030080  swc1        $f3, 0x80($s0)
    ctx->pc = 0x417c48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_417c4c:
    // 0x417c4c: 0xe6020084  swc1        $f2, 0x84($s0)
    ctx->pc = 0x417c4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_417c50:
    // 0x417c50: 0xe604007c  swc1        $f4, 0x7C($s0)
    ctx->pc = 0x417c50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
label_417c54:
    // 0x417c54: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x417c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_417c58:
    // 0x417c58: 0xe6010088  swc1        $f1, 0x88($s0)
    ctx->pc = 0x417c58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
label_417c5c:
    // 0x417c5c: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x417c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
label_417c60:
    // 0x417c60: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x417c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
label_417c64:
    // 0x417c64: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x417c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_417c68:
    // 0x417c68: 0xc7828048  lwc1        $f2, -0x7FB8($gp)
    ctx->pc = 0x417c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_417c6c:
    // 0x417c6c: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x417c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_417c70:
    // 0x417c70: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x417c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_417c74:
    // 0x417c74: 0xc783804c  lwc1        $f3, -0x7FB4($gp)
    ctx->pc = 0x417c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_417c78:
    // 0x417c78: 0x46010181  sub.s       $f6, $f0, $f1
    ctx->pc = 0x417c78u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_417c7c:
    // 0x417c7c: 0xc7848050  lwc1        $f4, -0x7FB0($gp)
    ctx->pc = 0x417c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_417c80:
    // 0x417c80: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x417c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_417c84:
    // 0x417c84: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x417c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_417c88:
    // 0x417c88: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x417c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_417c8c:
    // 0x417c8c: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x417c8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_417c90:
    // 0x417c90: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x417c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_417c94:
    // 0x417c94: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x417c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_417c98:
    // 0x417c98: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x417c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_417c9c:
    // 0x417c9c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x417c9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_417ca0:
    // 0x417ca0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x417ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_417ca4:
    // 0x417ca4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x417ca4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_417ca8:
    // 0x417ca8: 0x46010181  sub.s       $f6, $f0, $f1
    ctx->pc = 0x417ca8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_417cac:
    // 0x417cac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x417cacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_417cb0:
    // 0x417cb0: 0x460330c3  div.s       $f3, $f6, $f3
    ctx->pc = 0x417cb0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[6], ctx->f[3]); }
label_417cb4:
    // 0x417cb4: 0x46041902  mul.s       $f4, $f3, $f4
    ctx->pc = 0x417cb4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_417cb8:
    // 0x417cb8: 0xe603008c  swc1        $f3, 0x8C($s0)
    ctx->pc = 0x417cb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_417cbc:
    // 0x417cbc: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x417cbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_417cc0:
    // 0x417cc0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x417cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_417cc4:
    // 0x417cc4: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x417cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_417cc8:
    // 0x417cc8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x417cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_417ccc:
    // 0x417ccc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x417cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_417cd0:
    // 0x417cd0: 0x2484c898  addiu       $a0, $a0, -0x3768
    ctx->pc = 0x417cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953112));
label_417cd4:
    // 0x417cd4: 0xc104c80  jal         func_413200
label_417cd8:
    if (ctx->pc == 0x417CD8u) {
        ctx->pc = 0x417CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417CD4u;
        // 0x417cd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417CDCu;
        goto label_417cdc;
    }
    ctx->pc = 0x417CD4u;
    SET_GPR_U32(ctx, 31, 0x417CDCu);
    ctx->pc = 0x417CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417CD4u;
    // 0x417cd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x417CD4u, 0x417CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417CDCu;
label_417cdc:
    // 0x417cdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x417cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_417ce0:
    // 0x417ce0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x417ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_417ce4:
    // 0x417ce4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x417ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_417ce8:
    // 0x417ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x417ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_417cec:
    // 0x417cec: 0x3e00008  jr          $ra
label_417cf0:
    if (ctx->pc == 0x417CF0u) {
        ctx->pc = 0x417CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417CECu;
        // 0x417cf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417CF4u;
        goto label_417cf4;
    }
    ctx->pc = 0x417CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417CECu;
        // 0x417cf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417CF4u;
label_417cf4:
    // 0x417cf4: 0x0  nop
    ctx->pc = 0x417cf4u;
    // NOP
label_417cf8:
    // 0x417cf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x417cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_417cfc:
    // 0x417cfc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x417cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_417d00:
    // 0x417d00: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x417d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_417d04:
    // 0x417d04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x417d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_417d08:
    // 0x417d08: 0xc105eea  jal         func_417BA8
label_417d0c:
    if (ctx->pc == 0x417D0Cu) {
        ctx->pc = 0x417D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417D08u;
        // 0x417d0c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417D10u;
        goto label_417d10;
    }
    ctx->pc = 0x417D08u;
    SET_GPR_U32(ctx, 31, 0x417D10u);
    ctx->pc = 0x417D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417D08u;
    // 0x417d0c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417BA8u;
    goto label_417ba8;
    ctx->pc = 0x417D10u;
label_417d10:
    // 0x417d10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x417d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_417d14:
    // 0x417d14: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_417d18:
    if (ctx->pc == 0x417D18u) {
        ctx->pc = 0x417D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417D14u;
        // 0x417d18: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417D1Cu;
        goto label_417d1c;
    }
    ctx->pc = 0x417D14u;
    {
        const bool branch_taken_0x417d14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x417d14) {
            ctx->pc = 0x417D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x417D14u;
            // 0x417d18: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x417D24u;
            goto label_417d24;
        }
    }
    ctx->pc = 0x417D1Cu;
label_417d1c:
    // 0x417d1c: 0x10000049  b           . + 4 + (0x49 << 2)
label_417d20:
    if (ctx->pc == 0x417D20u) {
        ctx->pc = 0x417D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417D1Cu;
        // 0x417d20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417D24u;
        goto label_417d24;
    }
    ctx->pc = 0x417D1Cu;
    {
        const bool branch_taken_0x417d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x417D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417D1Cu;
        // 0x417d20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417d1c) {
            ctx->pc = 0x417E44u;
            goto label_417e44;
        }
    }
    ctx->pc = 0x417D24u;
label_417d24:
    // 0x417d24: 0xc1083aa  jal         func_420EA8
label_417d28:
    if (ctx->pc == 0x417D28u) {
        ctx->pc = 0x417D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417D24u;
        // 0x417d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417D2Cu;
        goto label_417d2c;
    }
    ctx->pc = 0x417D24u;
    SET_GPR_U32(ctx, 31, 0x417D2Cu);
    ctx->pc = 0x417D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417D24u;
    // 0x417d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420EA8u, 0x417D24u, 0x417D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417D2Cu;
label_417d2c:
    // 0x417d2c: 0xc6200068  lwc1        $f0, 0x68($s1)
    ctx->pc = 0x417d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_417d30:
    // 0x417d30: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x417d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_417d34:
    // 0x417d34: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x417d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_417d38:
    // 0x417d38: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x417d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_417d3c:
    // 0x417d3c: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x417d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
label_417d40:
    // 0x417d40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x417d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_417d44:
    // 0x417d44: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x417d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_417d48:
    // 0x417d48: 0xc620006c  lwc1        $f0, 0x6C($s1)
    ctx->pc = 0x417d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_417d4c:
    // 0x417d4c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x417d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_417d50:
    // 0x417d50: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x417d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
label_417d54:
    // 0x417d54: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x417d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_417d58:
    // 0x417d58: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x417d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_417d5c:
    // 0x417d5c: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x417d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_417d60:
    // 0x417d60: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x417d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_417d64:
    // 0x417d64: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x417d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_417d68:
    // 0x417d68: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x417d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_417d6c:
    // 0x417d6c: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x417d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_417d70:
    // 0x417d70: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x417d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_417d74:
    // 0x417d74: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x417d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_417d78:
    // 0x417d78: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x417d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_417d7c:
    // 0x417d7c: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x417d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_417d80:
    // 0x417d80: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x417d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_417d84:
    // 0x417d84: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x417d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
label_417d88:
    // 0x417d88: 0xc620007c  lwc1        $f0, 0x7C($s1)
    ctx->pc = 0x417d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_417d8c:
    // 0x417d8c: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x417d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
label_417d90:
    // 0x417d90: 0xc6210080  lwc1        $f1, 0x80($s1)
    ctx->pc = 0x417d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_417d94:
    // 0x417d94: 0xe6010080  swc1        $f1, 0x80($s0)
    ctx->pc = 0x417d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_417d98:
    // 0x417d98: 0xc6220084  lwc1        $f2, 0x84($s1)
    ctx->pc = 0x417d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_417d9c:
    // 0x417d9c: 0xe6020084  swc1        $f2, 0x84($s0)
    ctx->pc = 0x417d9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_417da0:
    // 0x417da0: 0xc6200088  lwc1        $f0, 0x88($s1)
    ctx->pc = 0x417da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_417da4:
    // 0x417da4: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x417da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
label_417da8:
    // 0x417da8: 0xc486001c  lwc1        $f6, 0x1C($a0)
    ctx->pc = 0x417da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_417dac:
    // 0x417dac: 0x10c50006  beq         $a2, $a1, . + 4 + (0x6 << 2)
label_417db0:
    if (ctx->pc == 0x417DB0u) {
        ctx->pc = 0x417DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417DACu;
        // 0x417db0: 0xc4850018  lwc1        $f5, 0x18($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x417DB4u;
        goto label_417db4;
    }
    ctx->pc = 0x417DACu;
    {
        const bool branch_taken_0x417dac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x417DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417DACu;
        // 0x417db0: 0xc4850018  lwc1        $f5, 0x18($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x417dac) {
            ctx->pc = 0x417DC8u;
            goto label_417dc8;
        }
    }
    ctx->pc = 0x417DB4u;
label_417db4:
    // 0x417db4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x417db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_417db8:
    // 0x417db8: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
label_417dbc:
    if (ctx->pc == 0x417DBCu) {
        ctx->pc = 0x417DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417DB8u;
        // 0x417dbc: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x417DC0u;
        goto label_417dc0;
    }
    ctx->pc = 0x417DB8u;
    {
        const bool branch_taken_0x417db8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x417DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417DB8u;
        // 0x417dbc: 0x46001106  mov.s       $f4, $f2 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x417db8) {
            ctx->pc = 0x417DC8u;
            goto label_417dc8;
        }
    }
    ctx->pc = 0x417DC0u;
label_417dc0:
    // 0x417dc0: 0x10000007  b           . + 4 + (0x7 << 2)
label_417dc4:
    if (ctx->pc == 0x417DC4u) {
        ctx->pc = 0x417DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417DC0u;
        // 0x417dc4: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x417DC8u;
        goto label_417dc8;
    }
    ctx->pc = 0x417DC0u;
    {
        const bool branch_taken_0x417dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x417DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417DC0u;
        // 0x417dc4: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x417dc0) {
            ctx->pc = 0x417DE0u;
            goto label_417de0;
        }
    }
    ctx->pc = 0x417DC8u;
label_417dc8:
    // 0x417dc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x417dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_417dcc:
    // 0x417dcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x417dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_417dd0:
    // 0x417dd0: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x417dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_417dd4:
    // 0x417dd4: 0xc6020080  lwc1        $f2, 0x80($s0)
    ctx->pc = 0x417dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_417dd8:
    // 0x417dd8: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x417dd8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_417ddc:
    // 0x417ddc: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x417ddcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_417de0:
    // 0x417de0: 0x46053041  sub.s       $f1, $f6, $f5
    ctx->pc = 0x417de0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_417de4:
    // 0x417de4: 0xc7808048  lwc1        $f0, -0x7FB8($gp)
    ctx->pc = 0x417de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_417de8:
    // 0x417de8: 0x460220c1  sub.s       $f3, $f4, $f2
    ctx->pc = 0x417de8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_417dec:
    // 0x417dec: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x417decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_417df0:
    // 0x417df0: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x417df0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_417df4:
    // 0x417df4: 0x2484c898  addiu       $a0, $a0, -0x3768
    ctx->pc = 0x417df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953112));
label_417df8:
    // 0x417df8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x417df8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_417dfc:
    // 0x417dfc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x417dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_417e00:
    // 0x417e00: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x417e00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_417e04:
    // 0x417e04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x417e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_417e08:
    // 0x417e08: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x417e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_417e0c:
    // 0x417e0c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x417e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_417e10:
    // 0x417e10: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x417e10u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_417e14:
    // 0x417e14: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x417e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_417e18:
    // 0x417e18: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x417e18u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_417e1c:
    // 0x417e1c: 0x46053041  sub.s       $f1, $f6, $f5
    ctx->pc = 0x417e1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_417e20:
    // 0x417e20: 0x46053000  add.s       $f0, $f6, $f5
    ctx->pc = 0x417e20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_417e24:
    // 0x417e24: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x417e24u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
label_417e28:
    // 0x417e28: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x417e28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_417e2c:
    // 0x417e2c: 0xe601008c  swc1        $f1, 0x8C($s0)
    ctx->pc = 0x417e2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_417e30:
    // 0x417e30: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x417e30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_417e34:
    // 0x417e34: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x417e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_417e38:
    // 0x417e38: 0xc104cbe  jal         func_4132F8
label_417e3c:
    if (ctx->pc == 0x417E3Cu) {
        ctx->pc = 0x417E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417E38u;
        // 0x417e3c: 0xe6000090  swc1        $f0, 0x90($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x417E40u;
        goto label_417e40;
    }
    ctx->pc = 0x417E38u;
    SET_GPR_U32(ctx, 31, 0x417E40u);
    ctx->pc = 0x417E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417E38u;
    // 0x417e3c: 0xe6000090  swc1        $f0, 0x90($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4132F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4132F8u, 0x417E38u, 0x417E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417E40u;
label_417e40:
    // 0x417e40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x417e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_417e44:
    // 0x417e44: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x417e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_417e48:
    // 0x417e48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x417e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_417e4c:
    // 0x417e4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x417e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_417e50:
    // 0x417e50: 0x3e00008  jr          $ra
label_417e54:
    if (ctx->pc == 0x417E54u) {
        ctx->pc = 0x417E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417E50u;
        // 0x417e54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417E58u;
        goto label_fallthrough_0x417e50;
    }
    ctx->pc = 0x417E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417E50u;
        // 0x417e54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x417e50:
    ctx->pc = 0x417E58u;
}
