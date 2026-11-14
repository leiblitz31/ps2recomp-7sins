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

// Function: sub_00321BC0
// Address: 0x321bc0 - 0x321e10
void sub_00321BC0_0x321bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321BC0_0x321bc0");
#endif

    switch (ctx->pc) {
        case 0x321bc0u: goto label_321bc0;
        case 0x321bc4u: goto label_321bc4;
        case 0x321bc8u: goto label_321bc8;
        case 0x321bccu: goto label_321bcc;
        case 0x321bd0u: goto label_321bd0;
        case 0x321bd4u: goto label_321bd4;
        case 0x321bd8u: goto label_321bd8;
        case 0x321bdcu: goto label_321bdc;
        case 0x321be0u: goto label_321be0;
        case 0x321be4u: goto label_321be4;
        case 0x321be8u: goto label_321be8;
        case 0x321becu: goto label_321bec;
        case 0x321bf0u: goto label_321bf0;
        case 0x321bf4u: goto label_321bf4;
        case 0x321bf8u: goto label_321bf8;
        case 0x321bfcu: goto label_321bfc;
        case 0x321c00u: goto label_321c00;
        case 0x321c04u: goto label_321c04;
        case 0x321c08u: goto label_321c08;
        case 0x321c0cu: goto label_321c0c;
        case 0x321c10u: goto label_321c10;
        case 0x321c14u: goto label_321c14;
        case 0x321c18u: goto label_321c18;
        case 0x321c1cu: goto label_321c1c;
        case 0x321c20u: goto label_321c20;
        case 0x321c24u: goto label_321c24;
        case 0x321c28u: goto label_321c28;
        case 0x321c2cu: goto label_321c2c;
        case 0x321c30u: goto label_321c30;
        case 0x321c34u: goto label_321c34;
        case 0x321c38u: goto label_321c38;
        case 0x321c3cu: goto label_321c3c;
        case 0x321c40u: goto label_321c40;
        case 0x321c44u: goto label_321c44;
        case 0x321c48u: goto label_321c48;
        case 0x321c4cu: goto label_321c4c;
        case 0x321c50u: goto label_321c50;
        case 0x321c54u: goto label_321c54;
        case 0x321c58u: goto label_321c58;
        case 0x321c5cu: goto label_321c5c;
        case 0x321c60u: goto label_321c60;
        case 0x321c64u: goto label_321c64;
        case 0x321c68u: goto label_321c68;
        case 0x321c6cu: goto label_321c6c;
        case 0x321c70u: goto label_321c70;
        case 0x321c74u: goto label_321c74;
        case 0x321c78u: goto label_321c78;
        case 0x321c7cu: goto label_321c7c;
        case 0x321c80u: goto label_321c80;
        case 0x321c84u: goto label_321c84;
        case 0x321c88u: goto label_321c88;
        case 0x321c8cu: goto label_321c8c;
        case 0x321c90u: goto label_321c90;
        case 0x321c94u: goto label_321c94;
        case 0x321c98u: goto label_321c98;
        case 0x321c9cu: goto label_321c9c;
        case 0x321ca0u: goto label_321ca0;
        case 0x321ca4u: goto label_321ca4;
        case 0x321ca8u: goto label_321ca8;
        case 0x321cacu: goto label_321cac;
        case 0x321cb0u: goto label_321cb0;
        case 0x321cb4u: goto label_321cb4;
        case 0x321cb8u: goto label_321cb8;
        case 0x321cbcu: goto label_321cbc;
        case 0x321cc0u: goto label_321cc0;
        case 0x321cc4u: goto label_321cc4;
        case 0x321cc8u: goto label_321cc8;
        case 0x321cccu: goto label_321ccc;
        case 0x321cd0u: goto label_321cd0;
        case 0x321cd4u: goto label_321cd4;
        case 0x321cd8u: goto label_321cd8;
        case 0x321cdcu: goto label_321cdc;
        case 0x321ce0u: goto label_321ce0;
        case 0x321ce4u: goto label_321ce4;
        case 0x321ce8u: goto label_321ce8;
        case 0x321cecu: goto label_321cec;
        case 0x321cf0u: goto label_321cf0;
        case 0x321cf4u: goto label_321cf4;
        case 0x321cf8u: goto label_321cf8;
        case 0x321cfcu: goto label_321cfc;
        case 0x321d00u: goto label_321d00;
        case 0x321d04u: goto label_321d04;
        case 0x321d08u: goto label_321d08;
        case 0x321d0cu: goto label_321d0c;
        case 0x321d10u: goto label_321d10;
        case 0x321d14u: goto label_321d14;
        case 0x321d18u: goto label_321d18;
        case 0x321d1cu: goto label_321d1c;
        case 0x321d20u: goto label_321d20;
        case 0x321d24u: goto label_321d24;
        case 0x321d28u: goto label_321d28;
        case 0x321d2cu: goto label_321d2c;
        case 0x321d30u: goto label_321d30;
        case 0x321d34u: goto label_321d34;
        case 0x321d38u: goto label_321d38;
        case 0x321d3cu: goto label_321d3c;
        case 0x321d40u: goto label_321d40;
        case 0x321d44u: goto label_321d44;
        case 0x321d48u: goto label_321d48;
        case 0x321d4cu: goto label_321d4c;
        case 0x321d50u: goto label_321d50;
        case 0x321d54u: goto label_321d54;
        case 0x321d58u: goto label_321d58;
        case 0x321d5cu: goto label_321d5c;
        case 0x321d60u: goto label_321d60;
        case 0x321d64u: goto label_321d64;
        case 0x321d68u: goto label_321d68;
        case 0x321d6cu: goto label_321d6c;
        case 0x321d70u: goto label_321d70;
        case 0x321d74u: goto label_321d74;
        case 0x321d78u: goto label_321d78;
        case 0x321d7cu: goto label_321d7c;
        case 0x321d80u: goto label_321d80;
        case 0x321d84u: goto label_321d84;
        case 0x321d88u: goto label_321d88;
        case 0x321d8cu: goto label_321d8c;
        case 0x321d90u: goto label_321d90;
        case 0x321d94u: goto label_321d94;
        case 0x321d98u: goto label_321d98;
        case 0x321d9cu: goto label_321d9c;
        case 0x321da0u: goto label_321da0;
        case 0x321da4u: goto label_321da4;
        case 0x321da8u: goto label_321da8;
        case 0x321dacu: goto label_321dac;
        case 0x321db0u: goto label_321db0;
        case 0x321db4u: goto label_321db4;
        case 0x321db8u: goto label_321db8;
        case 0x321dbcu: goto label_321dbc;
        case 0x321dc0u: goto label_321dc0;
        case 0x321dc4u: goto label_321dc4;
        case 0x321dc8u: goto label_321dc8;
        case 0x321dccu: goto label_321dcc;
        case 0x321dd0u: goto label_321dd0;
        case 0x321dd4u: goto label_321dd4;
        case 0x321dd8u: goto label_321dd8;
        case 0x321ddcu: goto label_321ddc;
        case 0x321de0u: goto label_321de0;
        case 0x321de4u: goto label_321de4;
        case 0x321de8u: goto label_321de8;
        case 0x321decu: goto label_321dec;
        case 0x321df0u: goto label_321df0;
        case 0x321df4u: goto label_321df4;
        case 0x321df8u: goto label_321df8;
        case 0x321dfcu: goto label_321dfc;
        case 0x321e00u: goto label_321e00;
        case 0x321e04u: goto label_321e04;
        case 0x321e08u: goto label_321e08;
        case 0x321e0cu: goto label_321e0c;
        default: break;
    }

    ctx->pc = 0x321bc0u;

label_321bc0:
    // 0x321bc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x321bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_321bc4:
    // 0x321bc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x321bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321bc8:
    // 0x321bc8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x321bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_321bcc:
    // 0x321bcc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x321bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_321bd0:
    // 0x321bd0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x321bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_321bd4:
    // 0x321bd4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x321bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_321bd8:
    // 0x321bd8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x321bd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_321bdc:
    // 0x321bdc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x321bdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_321be0:
    // 0x321be0: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x321be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_321be4:
    // 0x321be4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x321be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_321be8:
    // 0x321be8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x321be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_321bec:
    // 0x321bec: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x321becu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_321bf0:
    // 0x321bf0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x321bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_321bf4:
    // 0x321bf4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x321bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_321bf8:
    // 0x321bf8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x321bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_321bfc:
    // 0x321bfc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x321bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_321c00:
    // 0x321c00: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x321c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_321c04:
    // 0x321c04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x321c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_321c08:
    // 0x321c08: 0xc103322  jal         func_40CC88
label_321c0c:
    if (ctx->pc == 0x321C0Cu) {
        ctx->pc = 0x321C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C08u;
        // 0x321c0c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321C10u;
        goto label_321c10;
    }
    ctx->pc = 0x321C08u;
    SET_GPR_U32(ctx, 31, 0x321C10u);
    ctx->pc = 0x321C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321C08u;
    // 0x321c0c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x321C08u, 0x321C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321C10u;
label_321c10:
    // 0x321c10: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
label_321c14:
    if (ctx->pc == 0x321C14u) {
        ctx->pc = 0x321C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C10u;
        // 0x321c14: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321C18u;
        goto label_321c18;
    }
    ctx->pc = 0x321C10u;
    {
        const bool branch_taken_0x321c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C10u;
        // 0x321c14: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321c10) {
            ctx->pc = 0x321DD4u;
            goto label_321dd4;
        }
    }
    ctx->pc = 0x321C18u;
label_321c18:
    // 0x321c18: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x321c18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_321c1c:
    // 0x321c1c: 0x8c62e998  lw          $v0, -0x1668($v1)
    ctx->pc = 0x321c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961560)));
label_321c20:
    // 0x321c20: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x321c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_321c24:
    // 0x321c24: 0x8cc4b1b4  lw          $a0, -0x4E4C($a2)
    ctx->pc = 0x321c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294947252)));
label_321c28:
    // 0x321c28: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x321c28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_321c2c:
    // 0x321c2c: 0x34a50112  ori         $a1, $a1, 0x112
    ctx->pc = 0x321c2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)274);
label_321c30:
    // 0x321c30: 0x40f809  jalr        $v0
label_321c34:
    if (ctx->pc == 0x321C34u) {
        ctx->pc = 0x321C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C30u;
        // 0x321c34: 0xafb00008  sw          $s0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321C38u;
        goto label_321c38;
    }
    ctx->pc = 0x321C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321C38u);
        ctx->pc = 0x321C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C30u;
        // 0x321c34: 0xafb00008  sw          $s0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321C30u, 0x321C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321C38u;
label_321c38:
    // 0x321c38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x321c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321c3c:
    // 0x321c3c: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_321c40:
    if (ctx->pc == 0x321C40u) {
        ctx->pc = 0x321C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C3Cu;
        // 0x321c40: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321C44u;
        goto label_321c44;
    }
    ctx->pc = 0x321C3Cu;
    {
        const bool branch_taken_0x321c3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x321C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C3Cu;
        // 0x321c40: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321c3c) {
            ctx->pc = 0x321CA0u;
            goto label_321ca0;
        }
    }
    ctx->pc = 0x321C44u;
label_321c44:
    // 0x321c44: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x321c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
label_321c48:
    // 0x321c48: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x321c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_321c4c:
    // 0x321c4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x321c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_321c50:
    // 0x321c50: 0x24622608  addiu       $v0, $v1, 0x2608
    ctx->pc = 0x321c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 9736));
label_321c54:
    // 0x321c54: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x321c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_321c58:
    // 0x321c58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x321c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_321c5c:
    // 0x321c5c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x321c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_321c60:
    // 0x321c60: 0x2622003c  addiu       $v0, $s1, 0x3C
    ctx->pc = 0x321c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_321c64:
    // 0x321c64: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x321c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_321c68:
    // 0x321c68: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x321c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_321c6c:
    // 0x321c6c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x321c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_321c70:
    // 0x321c70: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x321c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_321c74:
    // 0x321c74: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x321c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_321c78:
    // 0x321c78: 0xac40ffdc  sw          $zero, -0x24($v0)
    ctx->pc = 0x321c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967260), GPR_U32(ctx, 0));
label_321c7c:
    // 0x321c7c: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x321c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
label_321c80:
    // 0x321c80: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x321c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
label_321c84:
    // 0x321c84: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x321c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
label_321c88:
    // 0x321c88: 0xac40fff0  sw          $zero, -0x10($v0)
    ctx->pc = 0x321c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 0));
label_321c8c:
    // 0x321c8c: 0xac40ffec  sw          $zero, -0x14($v0)
    ctx->pc = 0x321c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967276), GPR_U32(ctx, 0));
label_321c90:
    // 0x321c90: 0xac40ffe8  sw          $zero, -0x18($v0)
    ctx->pc = 0x321c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967272), GPR_U32(ctx, 0));
label_321c94:
    // 0x321c94: 0xac40ffe4  sw          $zero, -0x1C($v0)
    ctx->pc = 0x321c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967268), GPR_U32(ctx, 0));
label_321c98:
    // 0x321c98: 0xac40ffe0  sw          $zero, -0x20($v0)
    ctx->pc = 0x321c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967264), GPR_U32(ctx, 0));
label_321c9c:
    // 0x321c9c: 0x0  nop
    ctx->pc = 0x321c9cu;
    // NOP
label_321ca0:
    // 0x321ca0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x321ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_321ca4:
    // 0x321ca4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x321ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_321ca8:
    // 0x321ca8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x321ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321cac:
    // 0x321cac: 0xc10480a  jal         func_412028
label_321cb0:
    if (ctx->pc == 0x321CB0u) {
        ctx->pc = 0x321CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CACu;
        // 0x321cb0: 0x26360018  addiu       $s6, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321CB4u;
        goto label_321cb4;
    }
    ctx->pc = 0x321CACu;
    SET_GPR_U32(ctx, 31, 0x321CB4u);
    ctx->pc = 0x321CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321CACu;
    // 0x321cb0: 0x26360018  addiu       $s6, $s1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x321CACu, 0x321CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321CB4u;
label_321cb4:
    // 0x321cb4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x321cb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321cb8:
    // 0x321cb8: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x321cb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_321cbc:
    // 0x321cbc: 0x0  nop
    ctx->pc = 0x321cbcu;
    // NOP
label_321cc0:
    // 0x321cc0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x321cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_321cc4:
    // 0x321cc4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_321cc8:
    if (ctx->pc == 0x321CC8u) {
        ctx->pc = 0x321CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CC4u;
        // 0x321cc8: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321CCCu;
        goto label_321ccc;
    }
    ctx->pc = 0x321CC4u;
    {
        const bool branch_taken_0x321cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321cc4) {
            ctx->pc = 0x321CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321CC4u;
            // 0x321cc8: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321D0Cu;
            goto label_321d0c;
        }
    }
    ctx->pc = 0x321CCCu;
label_321ccc:
    // 0x321ccc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x321cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_321cd0:
    // 0x321cd0: 0x1262000d  beq         $s3, $v0, . + 4 + (0xD << 2)
label_321cd4:
    if (ctx->pc == 0x321CD4u) {
        ctx->pc = 0x321CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CD0u;
        // 0x321cd4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321CD8u;
        goto label_321cd8;
    }
    ctx->pc = 0x321CD0u;
    {
        const bool branch_taken_0x321cd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x321CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CD0u;
        // 0x321cd4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321cd0) {
            ctx->pc = 0x321D08u;
            goto label_321d08;
        }
    }
    ctx->pc = 0x321CD8u;
label_321cd8:
    // 0x321cd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x321cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_321cdc:
    // 0x321cdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x321cdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321ce0:
    // 0x321ce0: 0xc103322  jal         func_40CC88
label_321ce4:
    if (ctx->pc == 0x321CE4u) {
        ctx->pc = 0x321CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CE0u;
        // 0x321ce4: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321CE8u;
        goto label_321ce8;
    }
    ctx->pc = 0x321CE0u;
    SET_GPR_U32(ctx, 31, 0x321CE8u);
    ctx->pc = 0x321CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321CE0u;
    // 0x321ce4: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x321CE0u, 0x321CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321CE8u;
label_321ce8:
    // 0x321ce8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_321cec:
    if (ctx->pc == 0x321CECu) {
        ctx->pc = 0x321CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CE8u;
        // 0x321cec: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321CF0u;
        goto label_321cf0;
    }
    ctx->pc = 0x321CE8u;
    {
        const bool branch_taken_0x321ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321ce8) {
            ctx->pc = 0x321CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321CE8u;
            // 0x321cec: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321D0Cu;
            goto label_321d0c;
        }
    }
    ctx->pc = 0x321CF0u;
label_321cf0:
    // 0x321cf0: 0xc0e303e  jal         func_38C0F8
label_321cf4:
    if (ctx->pc == 0x321CF4u) {
        ctx->pc = 0x321CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CF0u;
        // 0x321cf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321CF8u;
        goto label_321cf8;
    }
    ctx->pc = 0x321CF0u;
    SET_GPR_U32(ctx, 31, 0x321CF8u);
    ctx->pc = 0x321CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321CF0u;
    // 0x321cf4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C0F8u, 0x321CF0u, 0x321CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321CF8u;
label_321cf8:
    // 0x321cf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x321cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321cfc:
    // 0x321cfc: 0xc0e3444  jal         func_38D110
label_321d00:
    if (ctx->pc == 0x321D00u) {
        ctx->pc = 0x321D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321CFCu;
        // 0x321d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D04u;
        goto label_321d04;
    }
    ctx->pc = 0x321CFCu;
    SET_GPR_U32(ctx, 31, 0x321D04u);
    ctx->pc = 0x321D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321CFCu;
    // 0x321d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D110u, 0x321CFCu, 0x321D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D04u;
label_321d04:
    // 0x321d04: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x321d04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_321d08:
    // 0x321d08: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x321d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_321d0c:
    // 0x321d0c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_321d10:
    if (ctx->pc == 0x321D10u) {
        ctx->pc = 0x321D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D0Cu;
        // 0x321d10: 0x26630001  addiu       $v1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D14u;
        goto label_321d14;
    }
    ctx->pc = 0x321D0Cu;
    {
        const bool branch_taken_0x321d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D0Cu;
        // 0x321d10: 0x26630001  addiu       $v1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d0c) {
            ctx->pc = 0x321D50u;
            goto label_321d50;
        }
    }
    ctx->pc = 0x321D14u;
label_321d14:
    // 0x321d14: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x321d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_321d18:
    // 0x321d18: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_321d1c:
    if (ctx->pc == 0x321D1Cu) {
        ctx->pc = 0x321D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D18u;
        // 0x321d1c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D20u;
        goto label_321d20;
    }
    ctx->pc = 0x321D18u;
    {
        const bool branch_taken_0x321d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x321D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D18u;
        // 0x321d1c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d18) {
            ctx->pc = 0x321D50u;
            goto label_321d50;
        }
    }
    ctx->pc = 0x321D20u;
label_321d20:
    // 0x321d20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x321d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_321d24:
    // 0x321d24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x321d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321d28:
    // 0x321d28: 0xc103322  jal         func_40CC88
label_321d2c:
    if (ctx->pc == 0x321D2Cu) {
        ctx->pc = 0x321D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D28u;
        // 0x321d2c: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D30u;
        goto label_321d30;
    }
    ctx->pc = 0x321D28u;
    SET_GPR_U32(ctx, 31, 0x321D30u);
    ctx->pc = 0x321D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321D28u;
    // 0x321d2c: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x321D28u, 0x321D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D30u;
label_321d30:
    // 0x321d30: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_321d34:
    if (ctx->pc == 0x321D34u) {
        ctx->pc = 0x321D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D30u;
        // 0x321d34: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D38u;
        goto label_321d38;
    }
    ctx->pc = 0x321D30u;
    {
        const bool branch_taken_0x321d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x321d30) {
            ctx->pc = 0x321D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321D30u;
            // 0x321d34: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321D54u;
            goto label_321d54;
        }
    }
    ctx->pc = 0x321D38u;
label_321d38:
    // 0x321d38: 0xc0e303e  jal         func_38C0F8
label_321d3c:
    if (ctx->pc == 0x321D3Cu) {
        ctx->pc = 0x321D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D38u;
        // 0x321d3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D40u;
        goto label_321d40;
    }
    ctx->pc = 0x321D38u;
    SET_GPR_U32(ctx, 31, 0x321D40u);
    ctx->pc = 0x321D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321D38u;
    // 0x321d3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C0F8u, 0x321D38u, 0x321D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D40u;
label_321d40:
    // 0x321d40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x321d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_321d44:
    // 0x321d44: 0xc0e3444  jal         func_38D110
label_321d48:
    if (ctx->pc == 0x321D48u) {
        ctx->pc = 0x321D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D44u;
        // 0x321d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D4Cu;
        goto label_321d4c;
    }
    ctx->pc = 0x321D44u;
    SET_GPR_U32(ctx, 31, 0x321D4Cu);
    ctx->pc = 0x321D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321D44u;
    // 0x321d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D110u, 0x321D44u, 0x321D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D4Cu;
label_321d4c:
    // 0x321d4c: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x321d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_321d50:
    // 0x321d50: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x321d50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_321d54:
    // 0x321d54: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x321d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
label_321d58:
    // 0x321d58: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_321d5c:
    if (ctx->pc == 0x321D5Cu) {
        ctx->pc = 0x321D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D58u;
        // 0x321d5c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D60u;
        goto label_321d60;
    }
    ctx->pc = 0x321D58u;
    {
        const bool branch_taken_0x321d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D58u;
        // 0x321d5c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321d58) {
            ctx->pc = 0x321CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321cc0;
        }
    }
    ctx->pc = 0x321D60u;
label_321d60:
    // 0x321d60: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x321d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_321d64:
    // 0x321d64: 0x4420009  bltzl       $v0, . + 4 + (0x9 << 2)
label_321d68:
    if (ctx->pc == 0x321D68u) {
        ctx->pc = 0x321D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D64u;
        // 0x321d68: 0x8ea30048  lw          $v1, 0x48($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D6Cu;
        goto label_321d6c;
    }
    ctx->pc = 0x321D64u;
    {
        const bool branch_taken_0x321d64 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x321d64) {
            ctx->pc = 0x321D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321D64u;
            // 0x321d68: 0x8ea30048  lw          $v1, 0x48($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321D8Cu;
            goto label_321d8c;
        }
    }
    ctx->pc = 0x321D6Cu;
label_321d6c:
    // 0x321d6c: 0x8eb00018  lw          $s0, 0x18($s5)
    ctx->pc = 0x321d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_321d70:
    // 0x321d70: 0xc0e3444  jal         func_38D110
label_321d74:
    if (ctx->pc == 0x321D74u) {
        ctx->pc = 0x321D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321D70u;
        // 0x321d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321D78u;
        goto label_321d78;
    }
    ctx->pc = 0x321D70u;
    SET_GPR_U32(ctx, 31, 0x321D78u);
    ctx->pc = 0x321D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321D70u;
    // 0x321d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D110u, 0x321D70u, 0x321D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321D78u;
label_321d78:
    // 0x321d78: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x321d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_321d7c:
    // 0x321d7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x321d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_321d80:
    // 0x321d80: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x321d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_321d84:
    // 0x321d84: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x321d84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_321d88:
    // 0x321d88: 0x8ea30048  lw          $v1, 0x48($s5)
    ctx->pc = 0x321d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_321d8c:
    // 0x321d8c: 0x3c040032  lui         $a0, 0x32
    ctx->pc = 0x321d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
label_321d90:
    // 0x321d90: 0x24822608  addiu       $v0, $a0, 0x2608
    ctx->pc = 0x321d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 9736));
label_321d94:
    // 0x321d94: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x321d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_321d98:
    // 0x321d98: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x321d98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_321d9c:
    // 0x321d9c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x321d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_321da0:
    // 0x321da0: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x321da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
label_321da4:
    // 0x321da4: 0x24622730  addiu       $v0, $v1, 0x2730
    ctx->pc = 0x321da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 10032));
label_321da8:
    // 0x321da8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_321dac:
    if (ctx->pc == 0x321DACu) {
        ctx->pc = 0x321DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DA8u;
        // 0x321dac: 0xaea20048  sw          $v0, 0x48($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321DB0u;
        goto label_321db0;
    }
    ctx->pc = 0x321DA8u;
    {
        const bool branch_taken_0x321da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DA8u;
        // 0x321dac: 0xaea20048  sw          $v0, 0x48($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321da8) {
            ctx->pc = 0x321DC0u;
            goto label_321dc0;
        }
    }
    ctx->pc = 0x321DB0u;
label_321db0:
    // 0x321db0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x321db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_321db4:
    // 0x321db4: 0x24429850  addiu       $v0, $v0, -0x67B0
    ctx->pc = 0x321db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940752));
label_321db8:
    // 0x321db8: 0xaea20048  sw          $v0, 0x48($s5)
    ctx->pc = 0x321db8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 2));
label_321dbc:
    // 0x321dbc: 0x0  nop
    ctx->pc = 0x321dbcu;
    // NOP
label_321dc0:
    // 0x321dc0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x321dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_321dc4:
    // 0x321dc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321dc8:
    // 0x321dc8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x321dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_321dcc:
    // 0x321dcc: 0x10000003  b           . + 4 + (0x3 << 2)
label_321dd0:
    if (ctx->pc == 0x321DD0u) {
        ctx->pc = 0x321DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DCCu;
        // 0x321dd0: 0xac910000  sw          $s1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321DD4u;
        goto label_321dd4;
    }
    ctx->pc = 0x321DCCu;
    {
        const bool branch_taken_0x321dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321DCCu;
        // 0x321dd0: 0xac910000  sw          $s1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321dcc) {
            ctx->pc = 0x321DDCu;
            goto label_321ddc;
        }
    }
    ctx->pc = 0x321DD4u;
label_321dd4:
    // 0x321dd4: 0x2b01021  addu        $v0, $s5, $s0
    ctx->pc = 0x321dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_321dd8:
    // 0x321dd8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x321dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_321ddc:
    // 0x321ddc: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x321ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_321de0:
    // 0x321de0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x321de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_321de4:
    // 0x321de4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x321de4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_321de8:
    // 0x321de8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x321de8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_321dec:
    // 0x321dec: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x321decu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_321df0:
    // 0x321df0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x321df0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_321df4:
    // 0x321df4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x321df4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_321df8:
    // 0x321df8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x321df8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_321dfc:
    // 0x321dfc: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x321dfcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_321e00:
    // 0x321e00: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x321e00u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_321e04:
    // 0x321e04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x321e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_321e08:
    // 0x321e08: 0x3e00008  jr          $ra
label_321e0c:
    if (ctx->pc == 0x321E0Cu) {
        ctx->pc = 0x321E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E08u;
        // 0x321e0c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321E10u;
        goto label_fallthrough_0x321e08;
    }
    ctx->pc = 0x321E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321E08u;
        // 0x321e0c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x321e08:
    ctx->pc = 0x321E10u;
}
