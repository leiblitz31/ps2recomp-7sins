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

// Function: sub_00387D00
// Address: 0x387d00 - 0x387fb0
void sub_00387D00_0x387d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387D00_0x387d00");
#endif

    switch (ctx->pc) {
        case 0x387d40u: goto label_387d40;
        case 0x387d5cu: goto label_387d5c;
        case 0x387d94u: goto label_387d94;
        case 0x387db0u: goto label_387db0;
        case 0x387dc8u: goto label_387dc8;
        case 0x387dfcu: goto label_387dfc;
        case 0x387e24u: goto label_387e24;
        case 0x387e40u: goto label_387e40;
        case 0x387e50u: goto label_387e50;
        case 0x387e64u: goto label_387e64;
        case 0x387e88u: goto label_387e88;
        case 0x387e9cu: goto label_387e9c;
        case 0x387eb0u: goto label_387eb0;
        case 0x387ec8u: goto label_387ec8;
        case 0x387edcu: goto label_387edc;
        case 0x387ef4u: goto label_387ef4;
        case 0x387efcu: goto label_387efc;
        case 0x387f1cu: goto label_387f1c;
        case 0x387f38u: goto label_387f38;
        case 0x387f5cu: goto label_387f5c;
        case 0x387f78u: goto label_387f78;
        case 0x387f88u: goto label_387f88;
        default: break;
    }

    ctx->pc = 0x387d00u;

    // 0x387d00: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x387d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x387d04: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x387d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x387d08: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x387d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x387d0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x387d0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387d10: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x387d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x387d14: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x387d14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387d18: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x387d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x387d1c: 0x27b40084  addiu       $s4, $sp, 0x84
    ctx->pc = 0x387d1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x387d20: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x387d20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387d24: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x387d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x387d28: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x387d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x387d2c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x387d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x387d30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x387d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x387d34: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x387d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x387d38: 0xc103322  jal         func_40CC88
    ctx->pc = 0x387D38u;
    SET_GPR_U32(ctx, 31, 0x387D40u);
    ctx->pc = 0x387D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387D38u;
    // 0x387d3c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x387D38u, 0x387D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387D40u;
label_387d40:
    // 0x387d40: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x387D40u;
    {
        const bool branch_taken_0x387d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D40u;
        // 0x387d44: 0x8fa20084  lw          $v0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387d40) {
            ctx->pc = 0x387D68u;
            goto label_387d68;
        }
    }
    ctx->pc = 0x387D48u;
    // 0x387d48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x387d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x387d4c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x387d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x387d50: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x387d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x387d54: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x387D54u;
    SET_GPR_U32(ctx, 31, 0x387D5Cu);
    ctx->pc = 0x387D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387D54u;
    // 0x387d58: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x387D54u, 0x387D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387D5Cu;
label_387d5c:
    // 0x387d5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x387d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387d60: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x387D60u;
    {
        const bool branch_taken_0x387d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D60u;
        // 0x387d64: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387d60) {
            ctx->pc = 0x387F80u;
            goto label_387f80;
        }
    }
    ctx->pc = 0x387D68u;
label_387d68:
    // 0x387d68: 0x3c10fffc  lui         $s0, 0xFFFC
    ctx->pc = 0x387d68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65532 << 16));
    // 0x387d6c: 0x3610b000  ori         $s0, $s0, 0xB000
    ctx->pc = 0x387d6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)45056);
    // 0x387d70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x387d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x387d74: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x387d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x387d78: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x387D78u;
    {
        const bool branch_taken_0x387d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D78u;
        // 0x387d7c: 0x700014a9  por         $v0, $zero, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387d78) {
            ctx->pc = 0x387F64u;
            goto label_387f64;
        }
    }
    ctx->pc = 0x387D80u;
    // 0x387d80: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x387d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x387d84: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x387d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x387d88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x387d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387d8c: 0xc10480a  jal         func_412028
    ctx->pc = 0x387D8Cu;
    SET_GPR_U32(ctx, 31, 0x387D94u);
    ctx->pc = 0x387D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387D8Cu;
    // 0x387d90: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x387D8Cu, 0x387D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387D94u;
label_387d94:
    // 0x387d94: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x387d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x387d98: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x387D98u;
    {
        const bool branch_taken_0x387d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x387D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D98u;
        // 0x387d9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387d98) {
            ctx->pc = 0x387DC0u;
            goto label_387dc0;
        }
    }
    ctx->pc = 0x387DA0u;
    // 0x387da0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x387da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x387da4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x387da4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x387da8: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x387DA8u;
    SET_GPR_U32(ctx, 31, 0x387DB0u);
    ctx->pc = 0x387DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387DA8u;
    // 0x387dac: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x387DA8u, 0x387DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387DB0u;
label_387db0:
    // 0x387db0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x387db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x387db4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x387DB4u;
    {
        const bool branch_taken_0x387db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387DB4u;
        // 0x387db8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387db4) {
            ctx->pc = 0x387F80u;
            goto label_387f80;
        }
    }
    ctx->pc = 0x387DBCu;
    // 0x387dbc: 0x0  nop
    ctx->pc = 0x387dbcu;
    // NOP
label_387dc0:
    // 0x387dc0: 0xc0e2094  jal         func_388250
    ctx->pc = 0x387DC0u;
    SET_GPR_U32(ctx, 31, 0x387DC8u);
    ctx->pc = 0x388250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388250u, 0x387DC0u, 0x387DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387DC8u;
label_387dc8:
    // 0x387dc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x387dc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387dcc: 0x1220006e  beqz        $s1, . + 4 + (0x6E << 2)
    ctx->pc = 0x387DCCu;
    {
        const bool branch_taken_0x387dcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x387DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387DCCu;
        // 0x387dd0: 0x93a20018  lbu         $v0, 0x18($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387dcc) {
            ctx->pc = 0x387F88u;
            goto label_387f88;
        }
    }
    ctx->pc = 0x387DD4u;
    // 0x387dd4: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x387dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x387dd8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x387dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x387ddc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x387DDCu;
    {
        const bool branch_taken_0x387ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x387DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387DDCu;
        // 0x387de0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ddc) {
            ctx->pc = 0x387DFCu;
            goto label_387dfc;
        }
    }
    ctx->pc = 0x387DE4u;
    // 0x387de4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x387de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387de8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x387de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x387dec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x387decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x387df0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x387df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x387df4: 0xc0e2686  jal         func_389A18
    ctx->pc = 0x387DF4u;
    SET_GPR_U32(ctx, 31, 0x387DFCu);
    ctx->pc = 0x387DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387DF4u;
    // 0x387df8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x387DF4u, 0x387DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387DFCu;
label_387dfc:
    // 0x387dfc: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x387dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x387e00: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x387E00u;
    {
        const bool branch_taken_0x387e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E00u;
        // 0x387e04: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e00) {
            ctx->pc = 0x387E2Cu;
            goto label_387e2c;
        }
    }
    ctx->pc = 0x387E08u;
    // 0x387e08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x387e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387e0c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x387e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x387e10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x387e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387e14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x387e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x387e18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x387e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x387e1c: 0xc0e2836  jal         func_38A0D8
    ctx->pc = 0x387E1Cu;
    SET_GPR_U32(ctx, 31, 0x387E24u);
    ctx->pc = 0x387E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387E1Cu;
    // 0x387e20: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x387E1Cu, 0x387E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387E24u;
label_387e24:
    // 0x387e24: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x387E24u;
    {
        const bool branch_taken_0x387e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E24u;
        // 0x387e28: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e24) {
            ctx->pc = 0x387F00u;
            goto label_387f00;
        }
    }
    ctx->pc = 0x387E2Cu;
label_387e2c:
    // 0x387e2c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x387e2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387e30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x387e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387e34: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x387e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x387e38: 0xc103322  jal         func_40CC88
    ctx->pc = 0x387E38u;
    SET_GPR_U32(ctx, 31, 0x387E40u);
    ctx->pc = 0x387E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387E38u;
    // 0x387e3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x387E38u, 0x387E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387E40u;
label_387e40:
    // 0x387e40: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x387E40u;
    {
        const bool branch_taken_0x387e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E40u;
        // 0x387e44: 0x8fa20084  lw          $v0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e40) {
            ctx->pc = 0x387E70u;
            goto label_387e70;
        }
    }
    ctx->pc = 0x387E48u;
    // 0x387e48: 0xc0e27ae  jal         func_389EB8
    ctx->pc = 0x387E48u;
    SET_GPR_U32(ctx, 31, 0x387E50u);
    ctx->pc = 0x387E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387E48u;
    // 0x387e4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389EB8u, 0x387E48u, 0x387E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387E50u;
label_387e50:
    // 0x387e50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x387e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x387e54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x387e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x387e58: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x387e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x387e5c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x387E5Cu;
    SET_GPR_U32(ctx, 31, 0x387E64u);
    ctx->pc = 0x387E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387E5Cu;
    // 0x387e60: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x387E5Cu, 0x387E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387E64u;
label_387e64:
    // 0x387e64: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x387e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x387e68: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x387E68u;
    {
        const bool branch_taken_0x387e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387E68u;
        // 0x387e6c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387e68) {
            ctx->pc = 0x387F80u;
            goto label_387f80;
        }
    }
    ctx->pc = 0x387E70u;
label_387e70:
    // 0x387e70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x387e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x387e74: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x387e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x387e78: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x387E78u;
    {
        const bool branch_taken_0x387e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x387e78) {
            ctx->pc = 0x387EC0u;
            goto label_387ec0;
        }
    }
    ctx->pc = 0x387E80u;
    // 0x387e80: 0xc0e303e  jal         func_38C0F8
    ctx->pc = 0x387E80u;
    SET_GPR_U32(ctx, 31, 0x387E88u);
    ctx->pc = 0x387E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387E80u;
    // 0x387e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C0F8u, 0x387E80u, 0x387E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387E88u;
label_387e88:
    // 0x387e88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x387e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387e8c: 0x56000016  bnel        $s0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x387E8Cu;
    {
        const bool branch_taken_0x387e8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x387e8c) {
            ctx->pc = 0x387E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387E8Cu;
            // 0x387e90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387EE8u;
            goto label_387ee8;
        }
    }
    ctx->pc = 0x387E94u;
    // 0x387e94: 0xc0e27ae  jal         func_389EB8
    ctx->pc = 0x387E94u;
    SET_GPR_U32(ctx, 31, 0x387E9Cu);
    ctx->pc = 0x387E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387E94u;
    // 0x387e98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389EB8u, 0x387E94u, 0x387E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387E9Cu;
label_387e9c:
    // 0x387e9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x387e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x387ea0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x387ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x387ea4: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x387ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x387ea8: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x387EA8u;
    SET_GPR_U32(ctx, 31, 0x387EB0u);
    ctx->pc = 0x387EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387EA8u;
    // 0x387eac: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x387EA8u, 0x387EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387EB0u;
label_387eb0:
    // 0x387eb0: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x387eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x387eb4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x387EB4u;
    {
        const bool branch_taken_0x387eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387EB4u;
        // 0x387eb8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387eb4) {
            ctx->pc = 0x387F80u;
            goto label_387f80;
        }
    }
    ctx->pc = 0x387EBCu;
    // 0x387ebc: 0x0  nop
    ctx->pc = 0x387ebcu;
    // NOP
label_387ec0:
    // 0x387ec0: 0xc0e27ae  jal         func_389EB8
    ctx->pc = 0x387EC0u;
    SET_GPR_U32(ctx, 31, 0x387EC8u);
    ctx->pc = 0x387EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387EC0u;
    // 0x387ec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389EB8u, 0x387EC0u, 0x387EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387EC8u;
label_387ec8:
    // 0x387ec8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x387ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x387ecc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x387eccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x387ed0: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x387ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x387ed4: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x387ED4u;
    SET_GPR_U32(ctx, 31, 0x387EDCu);
    ctx->pc = 0x387ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387ED4u;
    // 0x387ed8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x387ED4u, 0x387EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387EDCu;
label_387edc:
    // 0x387edc: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x387edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x387ee0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x387EE0u;
    {
        const bool branch_taken_0x387ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387EE0u;
        // 0x387ee4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ee0) {
            ctx->pc = 0x387F80u;
            goto label_387f80;
        }
    }
    ctx->pc = 0x387EE8u;
label_387ee8:
    // 0x387ee8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x387ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387eec: 0xc0e2836  jal         func_38A0D8
    ctx->pc = 0x387EECu;
    SET_GPR_U32(ctx, 31, 0x387EF4u);
    ctx->pc = 0x387EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387EECu;
    // 0x387ef0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x387EECu, 0x387EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387EF4u;
label_387ef4:
    // 0x387ef4: 0xc0e3414  jal         func_38D050
    ctx->pc = 0x387EF4u;
    SET_GPR_U32(ctx, 31, 0x387EFCu);
    ctx->pc = 0x387EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387EF4u;
    // 0x387ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x387EF4u, 0x387EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387EFCu;
label_387efc:
    // 0x387efc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x387efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_387f00:
    // 0x387f00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x387f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387f04: 0x2450ada0  addiu       $s0, $v0, -0x5260
    ctx->pc = 0x387f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946208));
    // 0x387f08: 0xaf80bd28  sw          $zero, -0x42D8($gp)
    ctx->pc = 0x387f08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950184), GPR_U32(ctx, 0));
    // 0x387f0c: 0xaf80bd2c  sw          $zero, -0x42D4($gp)
    ctx->pc = 0x387f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950188), GPR_U32(ctx, 0));
    // 0x387f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x387f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387f14: 0xc1049e2  jal         func_412788
    ctx->pc = 0x387F14u;
    SET_GPR_U32(ctx, 31, 0x387F1Cu);
    ctx->pc = 0x387F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387F14u;
    // 0x387f18: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412788u, 0x387F14u, 0x387F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387F1Cu;
label_387f1c:
    // 0x387f1c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x387F1Cu;
    {
        const bool branch_taken_0x387f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387F1Cu;
        // 0x387f20: 0x8f85bd28  lw          $a1, -0x42D8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387f1c) {
            ctx->pc = 0x387F48u;
            goto label_387f48;
        }
    }
    ctx->pc = 0x387F24u;
    // 0x387f24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x387f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x387f28: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x387f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x387f2c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x387f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x387f30: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x387F30u;
    SET_GPR_U32(ctx, 31, 0x387F38u);
    ctx->pc = 0x387F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387F30u;
    // 0x387f34: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x387F30u, 0x387F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387F38u;
label_387f38:
    // 0x387f38: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x387f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x387f3c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x387F3Cu;
    {
        const bool branch_taken_0x387f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387F3Cu;
        // 0x387f40: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387f3c) {
            ctx->pc = 0x387F80u;
            goto label_387f80;
        }
    }
    ctx->pc = 0x387F44u;
    // 0x387f44: 0x0  nop
    ctx->pc = 0x387f44u;
    // NOP
label_387f48:
    // 0x387f48: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x387F48u;
    {
        const bool branch_taken_0x387f48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x387F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387F48u;
        // 0x387f4c: 0x8f87bd2c  lw          $a3, -0x42D4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387f48) {
            ctx->pc = 0x387F5Cu;
            goto label_387f5c;
        }
    }
    ctx->pc = 0x387F50u;
    // 0x387f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x387f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387f54: 0xc104b0a  jal         func_412C28
    ctx->pc = 0x387F54u;
    SET_GPR_U32(ctx, 31, 0x387F5Cu);
    ctx->pc = 0x387F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387F54u;
    // 0x387f58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412C28u, 0x387F54u, 0x387F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387F5Cu;
label_387f5c:
    // 0x387f5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x387F5Cu;
    {
        const bool branch_taken_0x387f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387F5Cu;
        // 0x387f60: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387f5c) {
            ctx->pc = 0x387F8Cu;
            goto label_387f8c;
        }
    }
    ctx->pc = 0x387F64u;
label_387f64:
    // 0x387f64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x387f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x387f68: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x387f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x387f6c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x387f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x387f70: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x387F70u;
    SET_GPR_U32(ctx, 31, 0x387F78u);
    ctx->pc = 0x387F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387F70u;
    // 0x387f74: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x387F70u, 0x387F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387F78u;
label_387f78:
    // 0x387f78: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x387f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x387f7c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x387f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_387f80:
    // 0x387f80: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x387F80u;
    SET_GPR_U32(ctx, 31, 0x387F88u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x387F80u, 0x387F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387F88u;
label_387f88:
    // 0x387f88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x387f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387f8c:
    // 0x387f8c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x387f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x387f90: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x387f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x387f94: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x387f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x387f98: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x387f98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x387f9c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x387f9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x387fa0: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x387fa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x387fa4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x387fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x387fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x387FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387FA8u;
        // 0x387fac: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387FB0u;
}
