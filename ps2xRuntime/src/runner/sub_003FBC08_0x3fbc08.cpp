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

// Function: sub_003FBC08
// Address: 0x3fbc08 - 0x3fbea8
void sub_003FBC08_0x3fbc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FBC08_0x3fbc08");
#endif

    switch (ctx->pc) {
        case 0x3fbc70u: goto label_3fbc70;
        case 0x3fbc8cu: goto label_3fbc8c;
        case 0x3fbc98u: goto label_3fbc98;
        case 0x3fbcd8u: goto label_3fbcd8;
        case 0x3fbce4u: goto label_3fbce4;
        case 0x3fbcfcu: goto label_3fbcfc;
        case 0x3fbd20u: goto label_3fbd20;
        case 0x3fbd48u: goto label_3fbd48;
        case 0x3fbd54u: goto label_3fbd54;
        case 0x3fbd68u: goto label_3fbd68;
        case 0x3fbdb0u: goto label_3fbdb0;
        case 0x3fbdbcu: goto label_3fbdbc;
        case 0x3fbdd4u: goto label_3fbdd4;
        default: break;
    }

    ctx->pc = 0x3fbc08u;

    // 0x3fbc08: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3fbc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3fbc0c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3fbc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3fbc10: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3fbc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3fbc14: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3fbc14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbc18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3fbc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3fbc1c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3fbc1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbc20: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3fbc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x3fbc24: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3fbc24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbc28: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3fbc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3fbc2c: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x3fbc2cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbc30: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3fbc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3fbc34: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3fbc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3fbc38: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3fbc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3fbc3c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3fbc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3fbc40: 0x12a00073  beqz        $s5, . + 4 + (0x73 << 2)
    ctx->pc = 0x3FBC40u;
    {
        const bool branch_taken_0x3fbc40 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBC40u;
        // 0x3fbc44: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbc40) {
            ctx->pc = 0x3FBE10u;
            goto label_3fbe10;
        }
    }
    ctx->pc = 0x3FBC48u;
    // 0x3fbc48: 0x12600072  beqz        $s3, . + 4 + (0x72 << 2)
    ctx->pc = 0x3FBC48u;
    {
        const bool branch_taken_0x3fbc48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBC48u;
        // 0x3fbc4c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbc48) {
            ctx->pc = 0x3FBE14u;
            goto label_3fbe14;
        }
    }
    ctx->pc = 0x3FBC50u;
    // 0x3fbc50: 0x13c0006f  beqz        $fp, . + 4 + (0x6F << 2)
    ctx->pc = 0x3FBC50u;
    {
        const bool branch_taken_0x3fbc50 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBC50u;
        // 0x3fbc54: 0x24100014  addiu       $s0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbc50) {
            ctx->pc = 0x3FBE10u;
            goto label_3fbe10;
        }
    }
    ctx->pc = 0x3FBC58u;
    // 0x3fbc58: 0x8e6500fc  lw          $a1, 0xFC($s3)
    ctx->pc = 0x3fbc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
    // 0x3fbc5c: 0xbe2821  addu        $a1, $a1, $fp
    ctx->pc = 0x3fbc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    // 0x3fbc60: 0xb02818  mult        $a1, $a1, $s0
    ctx->pc = 0x3fbc60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3fbc64: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3fbc64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3fbc68: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FBC68u;
    SET_GPR_U32(ctx, 31, 0x3FBC70u);
    ctx->pc = 0x3FBC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBC68u;
    // 0x3fbc6c: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FBC68u, 0x3FBC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBC70u;
label_3fbc70:
    // 0x3fbc70: 0x8e6600fc  lw          $a2, 0xFC($s3)
    ctx->pc = 0x3fbc70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
    // 0x3fbc74: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3fbc74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbc78: 0x8e6500f8  lw          $a1, 0xF8($s3)
    ctx->pc = 0x3fbc78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x3fbc7c: 0xd00018  mult        $zero, $a2, $s0
    ctx->pc = 0x3fbc7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3fbc80: 0x3012  mflo        $a2
    ctx->pc = 0x3fbc80u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3fbc84: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FBC84u;
    SET_GPR_U32(ctx, 31, 0x3FBC8Cu);
    ctx->pc = 0x3FBC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBC84u;
    // 0x3fbc88: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FBC84u, 0x3FBC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBC8Cu;
label_3fbc8c:
    // 0x3fbc8c: 0x8e6500f8  lw          $a1, 0xF8($s3)
    ctx->pc = 0x3fbc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x3fbc90: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3FBC90u;
    SET_GPR_U32(ctx, 31, 0x3FBC98u);
    ctx->pc = 0x3FBC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBC90u;
    // 0x3fbc94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3FBC90u, 0x3FBC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBC98u;
label_3fbc98:
    // 0x3fbc98: 0x1bc00055  blez        $fp, . + 4 + (0x55 << 2)
    ctx->pc = 0x3FBC98u;
    {
        const bool branch_taken_0x3fbc98 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x3FBC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBC98u;
        // 0x3fbc9c: 0xae6000f8  sw          $zero, 0xF8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbc98) {
            ctx->pc = 0x3FBDF0u;
            goto label_3fbdf0;
        }
    }
    ctx->pc = 0x3FBCA0u;
    // 0x3fbca0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3fbca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbca4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3fbca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3fbca8: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x3fbca8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbcac: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x3fbcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x3fbcb0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3FBCB0u;
    {
        const bool branch_taken_0x3fbcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBCB0u;
        // 0x3fbcb4: 0x2651000c  addiu       $s1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbcb0) {
            ctx->pc = 0x3FBD18u;
            goto label_3fbd18;
        }
    }
    ctx->pc = 0x3FBCB8u;
    // 0x3fbcb8: 0x8e6400fc  lw          $a0, 0xFC($s3)
    ctx->pc = 0x3fbcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
    // 0x3fbcbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fbcbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbcc0: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x3fbcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x3fbcc4: 0x27d6ffff  addiu       $s6, $fp, -0x1
    ctx->pc = 0x3fbcc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x3fbcc8: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x3fbcc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3fbccc: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x3fbcccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x3fbcd0: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x3FBCD0u;
    SET_GPR_U32(ctx, 31, 0x3FBCD8u);
    ctx->pc = 0x3FBCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBCD0u;
    // 0x3fbcd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x3FBCD0u, 0x3FBCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBCD8u;
label_3fbcd8:
    // 0x3fbcd8: 0x9e45000c  lwu         $a1, 0xC($s2)
    ctx->pc = 0x3fbcd8u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3fbcdc: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FBCDCu;
    SET_GPR_U32(ctx, 31, 0x3FBCE4u);
    ctx->pc = 0x3FBCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBCDCu;
    // 0x3fbce0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FBCDCu, 0x3FBCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBCE4u;
label_3fbce4:
    // 0x3fbce4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3fbce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3fbce8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fbce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbcec: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x3fbcecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3fbcf0: 0x8e25fffc  lw          $a1, -0x4($s1)
    ctx->pc = 0x3fbcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x3fbcf4: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FBCF4u;
    SET_GPR_U32(ctx, 31, 0x3FBCFCu);
    ctx->pc = 0x3FBCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBCF4u;
    // 0x3fbcf8: 0x26510020  addiu       $s1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FBCF4u, 0x3FBCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBCFCu;
label_3fbcfc:
    // 0x3fbcfc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x3fbcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3fbd00: 0x26520014  addiu       $s2, $s2, 0x14
    ctx->pc = 0x3fbd00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x3fbd04: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x3fbd04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x3fbd08: 0x92a300f8  lbu         $v1, 0xF8($s5)
    ctx->pc = 0x3fbd08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x3fbd0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3fbd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3fbd10: 0x12c00037  beqz        $s6, . + 4 + (0x37 << 2)
    ctx->pc = 0x3FBD10u;
    {
        const bool branch_taken_0x3fbd10 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBD10u;
        // 0x3fbd14: 0xa2030010  sb          $v1, 0x10($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbd10) {
            ctx->pc = 0x3FBDF0u;
            goto label_3fbdf0;
        }
    }
    ctx->pc = 0x3FBD18u;
label_3fbd18:
    // 0x3fbd18: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x3fbd18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbd1c: 0x0  nop
    ctx->pc = 0x3fbd1cu;
    // NOP
label_3fbd20:
    // 0x3fbd20: 0x8e6400fc  lw          $a0, 0xFC($s3)
    ctx->pc = 0x3fbd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
    // 0x3fbd24: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3fbd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3fbd28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3fbd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fbd2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fbd2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbd30: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x3fbd30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3fbd34: 0x26d6fffe  addiu       $s6, $s6, -0x2
    ctx->pc = 0x3fbd34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967294));
    // 0x3fbd38: 0x572021  addu        $a0, $v0, $s7
    ctx->pc = 0x3fbd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x3fbd3c: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3fbd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3fbd40: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x3FBD40u;
    SET_GPR_U32(ctx, 31, 0x3FBD48u);
    ctx->pc = 0x3FBD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBD40u;
    // 0x3fbd44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x3FBD40u, 0x3FBD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBD48u;
label_3fbd48:
    // 0x3fbd48: 0x9e250000  lwu         $a1, 0x0($s1)
    ctx->pc = 0x3fbd48u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3fbd4c: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FBD4Cu;
    SET_GPR_U32(ctx, 31, 0x3FBD54u);
    ctx->pc = 0x3FBD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBD4Cu;
    // 0x3fbd50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FBD4Cu, 0x3FBD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBD54u;
label_3fbd54:
    // 0x3fbd54: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3fbd54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3fbd58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fbd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbd5c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3fbd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3fbd60: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FBD60u;
    SET_GPR_U32(ctx, 31, 0x3FBD68u);
    ctx->pc = 0x3FBD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBD60u;
    // 0x3fbd64: 0x8e85fffc  lw          $a1, -0x4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FBD60u, 0x3FBD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBD68u;
label_3fbd68:
    // 0x3fbd68: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3fbd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fbd6c: 0x26450014  addiu       $a1, $s2, 0x14
    ctx->pc = 0x3fbd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x3fbd70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3fbd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3fbd74: 0x26520028  addiu       $s2, $s2, 0x28
    ctx->pc = 0x3fbd74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x3fbd78: 0x24820014  addiu       $v0, $a0, 0x14
    ctx->pc = 0x3fbd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x3fbd7c: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x3fbd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x3fbd80: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3fbd80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3fbd84: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x3fbd84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x3fbd88: 0x92a300f8  lbu         $v1, 0xF8($s5)
    ctx->pc = 0x3fbd88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x3fbd8c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3fbd8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3fbd90: 0xa2030010  sb          $v1, 0x10($s0)
    ctx->pc = 0x3fbd90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fbd94: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3fbd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3fbd98: 0x8e6400fc  lw          $a0, 0xFC($s3)
    ctx->pc = 0x3fbd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
    // 0x3fbd9c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3fbd9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3fbda0: 0x772021  addu        $a0, $v1, $s7
    ctx->pc = 0x3fbda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x3fbda4: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x3fbda4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3fbda8: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x3FBDA8u;
    SET_GPR_U32(ctx, 31, 0x3FBDB0u);
    ctx->pc = 0x3FBDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBDA8u;
    // 0x3fbdac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x3FBDA8u, 0x3FBDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBDB0u;
label_3fbdb0:
    // 0x3fbdb0: 0x9e250014  lwu         $a1, 0x14($s1)
    ctx->pc = 0x3fbdb0u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3fbdb4: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FBDB4u;
    SET_GPR_U32(ctx, 31, 0x3FBDBCu);
    ctx->pc = 0x3FBDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBDB4u;
    // 0x3fbdb8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FBDB4u, 0x3FBDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBDBCu;
label_3fbdbc:
    // 0x3fbdbc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3fbdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3fbdc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fbdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbdc4: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x3fbdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3fbdc8: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x3fbdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3fbdcc: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FBDCCu;
    SET_GPR_U32(ctx, 31, 0x3FBDD4u);
    ctx->pc = 0x3FBDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBDCCu;
    // 0x3fbdd0: 0x26940028  addiu       $s4, $s4, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FBDCCu, 0x3FBDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBDD4u;
label_3fbdd4:
    // 0x3fbdd4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3fbdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3fbdd8: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x3fbdd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x3fbddc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x3fbddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x3fbde0: 0x92a300f8  lbu         $v1, 0xF8($s5)
    ctx->pc = 0x3fbde0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x3fbde4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3fbde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3fbde8: 0x16c0ffcd  bnez        $s6, . + 4 + (-0x33 << 2)
    ctx->pc = 0x3FBDE8u;
    {
        const bool branch_taken_0x3fbde8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FBDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBDE8u;
        // 0x3fbdec: 0xa2030010  sb          $v1, 0x10($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbde8) {
            ctx->pc = 0x3FBD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fbd20;
        }
    }
    ctx->pc = 0x3FBDF0u;
label_3fbdf0:
    // 0x3fbdf0: 0x8e6200fc  lw          $v0, 0xFC($s3)
    ctx->pc = 0x3fbdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
    // 0x3fbdf4: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x3fbdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3fbdf8: 0xde6300f0  ld          $v1, 0xF0($s3)
    ctx->pc = 0x3fbdf8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x3fbdfc: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x3fbdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x3fbe00: 0xae7700f8  sw          $s7, 0xF8($s3)
    ctx->pc = 0x3fbe00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 248), GPR_U32(ctx, 23));
    // 0x3fbe04: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3fbe04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3fbe08: 0xae6200fc  sw          $v0, 0xFC($s3)
    ctx->pc = 0x3fbe08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 252), GPR_U32(ctx, 2));
    // 0x3fbe0c: 0xfe6300f0  sd          $v1, 0xF0($s3)
    ctx->pc = 0x3fbe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 3));
label_3fbe10:
    // 0x3fbe10: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3fbe10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3fbe14:
    // 0x3fbe14: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3fbe14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3fbe18: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3fbe18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3fbe1c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3fbe1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3fbe20: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3fbe20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3fbe24: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3fbe24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fbe28: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3fbe28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fbe2c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3fbe2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fbe30: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3fbe30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fbe34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3fbe34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fbe38: 0x3e00008  jr          $ra
    ctx->pc = 0x3FBE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FBE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBE38u;
        // 0x3fbe3c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FBE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FBE40u;
    // 0x3fbe40: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3FBE40u;
    {
        const bool branch_taken_0x3fbe40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fbe40) {
            ctx->pc = 0x3FBE78u;
            goto label_3fbe78;
        }
    }
    ctx->pc = 0x3FBE48u;
    // 0x3fbe48: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x3FBE48u;
    {
        const bool branch_taken_0x3fbe48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fbe48) {
            ctx->pc = 0x3FBE78u;
            goto label_3fbe78;
        }
    }
    ctx->pc = 0x3FBE50u;
    // 0x3fbe50: 0x4c00009  bltz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3FBE50u;
    {
        const bool branch_taken_0x3fbe50 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x3fbe50) {
            ctx->pc = 0x3FBE78u;
            goto label_3fbe78;
        }
    }
    ctx->pc = 0x3FBE58u;
    // 0x3fbe58: 0x8ca200fc  lw          $v0, 0xFC($a1)
    ctx->pc = 0x3fbe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 252)));
    // 0x3fbe5c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3fbe5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3fbe60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FBE60u;
    {
        const bool branch_taken_0x3fbe60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBE60u;
        // 0x3fbe64: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbe60) {
            ctx->pc = 0x3FBE78u;
            goto label_3fbe78;
        }
    }
    ctx->pc = 0x3FBE68u;
    // 0x3fbe68: 0x8ca300f8  lw          $v1, 0xF8($a1)
    ctx->pc = 0x3fbe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x3fbe6c: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x3fbe6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3fbe70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fbe70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3fbe74: 0xa0470010  sb          $a3, 0x10($v0)
    ctx->pc = 0x3fbe74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 7));
label_3fbe78:
    // 0x3fbe78: 0x3e00008  jr          $ra
    ctx->pc = 0x3FBE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FBE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FBE80u;
    // 0x3fbe80: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FBE80u;
    {
        const bool branch_taken_0x3fbe80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fbe80) {
            ctx->pc = 0x3FBE9Cu;
            goto label_3fbe9c;
        }
    }
    ctx->pc = 0x3FBE88u;
    // 0x3fbe88: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FBE88u;
    {
        const bool branch_taken_0x3fbe88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBE88u;
        // 0x3fbe8c: 0x61827  nor         $v1, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbe88) {
            ctx->pc = 0x3FBE9Cu;
            goto label_3fbe9c;
        }
    }
    ctx->pc = 0x3FBE90u;
    // 0x3fbe90: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3fbe90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3fbe94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3fbe94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3fbe98: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x3fbe98u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
label_3fbe9c:
    // 0x3fbe9c: 0x3e00008  jr          $ra
    ctx->pc = 0x3FBE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FBE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FBEA4u;
    // 0x3fbea4: 0x0  nop
    ctx->pc = 0x3fbea4u;
    // NOP
    ctx->pc = 0x3fbea8u;
}
