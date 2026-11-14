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

// Function: sub_003FBEA8
// Address: 0x3fbea8 - 0x3fc868
void sub_003FBEA8_0x3fbea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FBEA8_0x3fbea8");
#endif

    switch (ctx->pc) {
        case 0x3fbfc8u: goto label_3fbfc8;
        case 0x3fc138u: goto label_3fc138;
        case 0x3fc270u: goto label_3fc270;
        case 0x3fc398u: goto label_3fc398;
        case 0x3fc4f0u: goto label_3fc4f0;
        case 0x3fc5b8u: goto label_3fc5b8;
        case 0x3fc6c0u: goto label_3fc6c0;
        case 0x3fc7e0u: goto label_3fc7e0;
        default: break;
    }

    ctx->pc = 0x3fbea8u;

    // 0x3fbea8: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x3fbea8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x3fbeac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3fbeacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbeb0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3fbeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3fbeb4: 0x14620168  bne         $v1, $v0, . + 4 + (0x168 << 2)
    ctx->pc = 0x3FBEB4u;
    {
        const bool branch_taken_0x3fbeb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FBEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBEB4u;
        // 0x3fbeb8: 0xdc8a0000  ld          $t2, 0x0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbeb4) {
            ctx->pc = 0x3FC458u;
            goto label_3fc458;
        }
    }
    ctx->pc = 0x3FBEBCu;
    // 0x3fbebc: 0x90830011  lbu         $v1, 0x11($a0)
    ctx->pc = 0x3fbebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x3fbec0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3fbec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3fbec4: 0x146200c3  bne         $v1, $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x3FBEC4u;
    {
        const bool branch_taken_0x3fbec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FBEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBEC4u;
        // 0x3fbec8: 0x30c20080  andi        $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbec4) {
            ctx->pc = 0x3FC1D4u;
            goto label_3fc1d4;
        }
    }
    ctx->pc = 0x3FBECCu;
    // 0x3fbecc: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x3FBECCu;
    {
        const bool branch_taken_0x3fbecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBECCu;
        // 0x3fbed0: 0x24e60003  addiu       $a2, $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbecc) {
            ctx->pc = 0x3FC054u;
            goto label_3fc054;
        }
    }
    ctx->pc = 0x3FBED4u;
    // 0x3fbed4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3fbed4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fbed8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3fbed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3fbedc: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x3fbedcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3fbee0: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x3FBEE0u;
    {
        const bool branch_taken_0x3fbee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBEE0u;
        // 0x3fbee4: 0xa6078  dsll        $t4, $t2, 1 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbee0) {
            ctx->pc = 0x3FC1C0u;
            goto label_3fc1c0;
        }
    }
    ctx->pc = 0x3FBEE8u;
    // 0x3fbee8: 0x6542ffff  daddiu      $v0, $t2, -0x1
    ctx->pc = 0x3fbee8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4294967295);
    // 0x3fbeec: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3fbeecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbef0: 0x30480003  andi        $t0, $v0, 0x3
    ctx->pc = 0x3fbef0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3fbef4: 0x29420002  slti        $v0, $t2, 0x2
    ctx->pc = 0x3fbef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3fbef8: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3FBEF8u;
    {
        const bool branch_taken_0x3fbef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FBEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBEF8u;
        // 0x3fbefc: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbef8) {
            ctx->pc = 0x3FBF84u;
            goto label_3fbf84;
        }
    }
    ctx->pc = 0x3FBF00u;
    // 0x3fbf00: 0x1100002f  beqz        $t0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3FBF00u;
    {
        const bool branch_taken_0x3fbf00 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBF00u;
        // 0x3fbf04: 0x29020002  slti        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbf00) {
            ctx->pc = 0x3FBFC0u;
            goto label_3fbfc0;
        }
    }
    ctx->pc = 0x3FBF08u;
    // 0x3fbf08: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x3FBF08u;
    {
        const bool branch_taken_0x3fbf08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fbf08) {
            ctx->pc = 0x3FBF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FBF08u;
            // 0x3fbf0c: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FBF88u;
            goto label_3fbf88;
        }
    }
    ctx->pc = 0x3FBF10u;
    // 0x3fbf10: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x3fbf10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3fbf14: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3FBF14u;
    {
        const bool branch_taken_0x3fbf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fbf14) {
            ctx->pc = 0x3FBF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FBF14u;
            // 0x3fbf18: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FBF54u;
            goto label_3fbf54;
        }
    }
    ctx->pc = 0x3FBF1Cu;
    // 0x3fbf1c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3fbf1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fbf20: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x3fbf20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3fbf24: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3fbf24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fbf28: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fbf28u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fbf2c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fbf2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fbf30: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3fbf30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fbf34: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3fbf34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fbf38: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fbf38u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fbf3c: 0x24e30002  addiu       $v1, $a3, 0x2
    ctx->pc = 0x3fbf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x3fbf40: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fbf40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fbf44: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3fbf44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fbf48: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x3fbf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fbf4c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fbf4cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fbf50: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3fbf50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3fbf54:
    // 0x3fbf54: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x3fbf54u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x3fbf58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3fbf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3fbf5c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3fbf5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fbf60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fbf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fbf64: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3fbf64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3fbf68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3fbf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3fbf6c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3fbf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fbf70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fbf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fbf74: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3fbf74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3fbf78: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3fbf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3fbf7c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3fbf7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fbf80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fbf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3fbf84:
    // 0x3fbf84: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3fbf84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3fbf88:
    // 0x3fbf88: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x3fbf88u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x3fbf8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3fbf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3fbf90: 0x12a382b  sltu        $a3, $t1, $t2
    ctx->pc = 0x3fbf90u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3fbf94: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3fbf94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fbf98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fbf98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fbf9c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3fbf9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3fbfa0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3fbfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3fbfa4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3fbfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fbfa8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fbfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fbfac: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3fbfacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3fbfb0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3fbfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3fbfb4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3fbfb4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fbfb8: 0x10e00081  beqz        $a3, . + 4 + (0x81 << 2)
    ctx->pc = 0x3FBFB8u;
    {
        const bool branch_taken_0x3fbfb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBFB8u;
        // 0x3fbfbc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbfb8) {
            ctx->pc = 0x3FC1C0u;
            goto label_3fc1c0;
        }
    }
    ctx->pc = 0x3FBFC0u;
label_3fbfc0:
    // 0x3fbfc0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3fbfc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbfc4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3fbfc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3fbfc8:
    // 0x3fbfc8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3fbfc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fbfcc: 0x65290004  daddiu      $t1, $t1, 0x4
    ctx->pc = 0x3fbfccu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4);
    // 0x3fbfd0: 0x12a382b  sltu        $a3, $t1, $t2
    ctx->pc = 0x3fbfd0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3fbfd4: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3fbfd4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fbfd8: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3fbfd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3fbfdc: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x3fbfdcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fbfe0: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x3fbfe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3fbfe4: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3fbfe4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fbfe8: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x3fbfe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3fbfec: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x3fbfecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fbff0: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x3fbff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x3fbff4: 0xa0c30004  sb          $v1, 0x4($a2)
    ctx->pc = 0x3fbff4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fbff8: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x3fbff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x3fbffc: 0xa0c20005  sb          $v0, 0x5($a2)
    ctx->pc = 0x3fbffcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc000: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x3fc000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3fc004: 0xa0c30006  sb          $v1, 0x6($a2)
    ctx->pc = 0x3fc004u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc008: 0x90a20009  lbu         $v0, 0x9($a1)
    ctx->pc = 0x3fc008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x3fc00c: 0xa0c20007  sb          $v0, 0x7($a2)
    ctx->pc = 0x3fc00cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc010: 0x90a3000a  lbu         $v1, 0xA($a1)
    ctx->pc = 0x3fc010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x3fc014: 0xa0c30008  sb          $v1, 0x8($a2)
    ctx->pc = 0x3fc014u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc018: 0x90a2000c  lbu         $v0, 0xC($a1)
    ctx->pc = 0x3fc018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3fc01c: 0x24a5000d  addiu       $a1, $a1, 0xD
    ctx->pc = 0x3fc01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
    // 0x3fc020: 0xa0c20009  sb          $v0, 0x9($a2)
    ctx->pc = 0x3fc020u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc024: 0x24c6000a  addiu       $a2, $a2, 0xA
    ctx->pc = 0x3fc024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
    // 0x3fc028: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fc028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc02c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fc02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fc030: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc030u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc034: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fc034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fc038: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fc038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc03c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3fc03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3fc040: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc040u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc044: 0x14e0ffe0  bnez        $a3, . + 4 + (-0x20 << 2)
    ctx->pc = 0x3FC044u;
    {
        const bool branch_taken_0x3fc044 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC044u;
        // 0x3fc048: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc044) {
            ctx->pc = 0x3FBFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fbfc8;
        }
    }
    ctx->pc = 0x3FC04Cu;
    // 0x3fc04c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x3FC04Cu;
    {
        const bool branch_taken_0x3fc04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC04Cu;
        // 0x3fc050: 0x18a182d  daddu       $v1, $t4, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc04c) {
            ctx->pc = 0x3FC1C4u;
            goto label_3fc1c4;
        }
    }
    ctx->pc = 0x3FC054u;
label_3fc054:
    // 0x3fc054: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3fc054u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc058: 0x11400059  beqz        $t2, . + 4 + (0x59 << 2)
    ctx->pc = 0x3FC058u;
    {
        const bool branch_taken_0x3fc058 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC058u;
        // 0x3fc05c: 0xa6078  dsll        $t4, $t2, 1 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc058) {
            ctx->pc = 0x3FC1C0u;
            goto label_3fc1c0;
        }
    }
    ctx->pc = 0x3FC060u;
    // 0x3fc060: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3fc060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc064: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3fc064u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc068: 0x19400022  blez        $t2, . + 4 + (0x22 << 2)
    ctx->pc = 0x3FC068u;
    {
        const bool branch_taken_0x3fc068 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3FC06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC068u;
        // 0x3fc06c: 0x31430003  andi        $v1, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc068) {
            ctx->pc = 0x3FC0F4u;
            goto label_3fc0f4;
        }
    }
    ctx->pc = 0x3FC070u;
    // 0x3fc070: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x3FC070u;
    {
        const bool branch_taken_0x3fc070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC070u;
        // 0x3fc074: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc070) {
            ctx->pc = 0x3FC134u;
            goto label_3fc134;
        }
    }
    ctx->pc = 0x3FC078u;
    // 0x3fc078: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3FC078u;
    {
        const bool branch_taken_0x3fc078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC078u;
        // 0x3fc07c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc078) {
            ctx->pc = 0x3FC0F8u;
            goto label_3fc0f8;
        }
    }
    ctx->pc = 0x3FC080u;
    // 0x3fc080: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3fc080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3fc084: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3FC084u;
    {
        const bool branch_taken_0x3fc084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC084u;
        // 0x3fc088: 0x65290001  daddiu      $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc084) {
            ctx->pc = 0x3FC0C4u;
            goto label_3fc0c4;
        }
    }
    ctx->pc = 0x3FC08Cu;
    // 0x3fc08c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3fc08cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fc090: 0x24a60003  addiu       $a2, $a1, 0x3
    ctx->pc = 0x3fc090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x3fc094: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3fc094u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc098: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3fc098u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fc09c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3fc09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fc0a0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3fc0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc0a4: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3fc0a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc0a8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3fc0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fc0ac: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3fc0acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc0b0: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x3fc0b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fc0b4: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3fc0b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc0b8: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x3fc0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc0bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3fc0bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3fc0c0: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x3fc0c0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
label_3fc0c4:
    // 0x3fc0c4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3fc0c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3fc0c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3fc0c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3fc0cc: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc0d0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fc0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fc0d4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3fc0d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3fc0d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3fc0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3fc0dc: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc0e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fc0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fc0e4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3fc0e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3fc0e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3fc0e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3fc0ec: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc0f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fc0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3fc0f4:
    // 0x3fc0f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3fc0f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3fc0f8:
    // 0x3fc0f8: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x3fc0f8u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x3fc0fc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3fc0fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3fc100: 0x12a382b  sltu        $a3, $t1, $t2
    ctx->pc = 0x3fc100u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3fc104: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3fc104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3fc108: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc108u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc10c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fc10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fc110: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3fc110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3fc114: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3fc114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3fc118: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc118u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc11c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fc11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fc120: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3fc120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3fc124: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3fc124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3fc128: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc128u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc12c: 0x10e00024  beqz        $a3, . + 4 + (0x24 << 2)
    ctx->pc = 0x3FC12Cu;
    {
        const bool branch_taken_0x3fc12c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC12Cu;
        // 0x3fc130: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc12c) {
            ctx->pc = 0x3FC1C0u;
            goto label_3fc1c0;
        }
    }
    ctx->pc = 0x3FC134u;
label_3fc134:
    // 0x3fc134: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3fc134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3fc138:
    // 0x3fc138: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3fc138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3fc13c: 0x65290004  daddiu      $t1, $t1, 0x4
    ctx->pc = 0x3fc13cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4);
    // 0x3fc140: 0x12a382b  sltu        $a3, $t1, $t2
    ctx->pc = 0x3fc140u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3fc144: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3fc144u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc148: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x3fc148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3fc14c: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x3fc14cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc150: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x3fc150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3fc154: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3fc154u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc158: 0x90a20005  lbu         $v0, 0x5($a1)
    ctx->pc = 0x3fc158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x3fc15c: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x3fc15cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc160: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x3fc160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x3fc164: 0xa0c30004  sb          $v1, 0x4($a2)
    ctx->pc = 0x3fc164u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc168: 0x90a20007  lbu         $v0, 0x7($a1)
    ctx->pc = 0x3fc168u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x3fc16c: 0xa0c20005  sb          $v0, 0x5($a2)
    ctx->pc = 0x3fc16cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc170: 0x90a30009  lbu         $v1, 0x9($a1)
    ctx->pc = 0x3fc170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x3fc174: 0xa0c30006  sb          $v1, 0x6($a2)
    ctx->pc = 0x3fc174u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc178: 0x90a2000a  lbu         $v0, 0xA($a1)
    ctx->pc = 0x3fc178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x3fc17c: 0xa0c20007  sb          $v0, 0x7($a2)
    ctx->pc = 0x3fc17cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc180: 0x90a3000b  lbu         $v1, 0xB($a1)
    ctx->pc = 0x3fc180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x3fc184: 0x24a5000d  addiu       $a1, $a1, 0xD
    ctx->pc = 0x3fc184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
    // 0x3fc188: 0xa0c30008  sb          $v1, 0x8($a2)
    ctx->pc = 0x3fc188u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc18c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fc18cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc190: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fc190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fc194: 0xa0c20009  sb          $v0, 0x9($a2)
    ctx->pc = 0x3fc194u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc198: 0x24c6000a  addiu       $a2, $a2, 0xA
    ctx->pc = 0x3fc198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
    // 0x3fc19c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fc19cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc1a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fc1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fc1a4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc1a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fc1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fc1ac: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fc1acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc1b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fc1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fc1b4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc1b8: 0x14e0ffdf  bnez        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3FC1B8u;
    {
        const bool branch_taken_0x3fc1b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC1B8u;
        // 0x3fc1bc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc1b8) {
            ctx->pc = 0x3FC138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fc138;
        }
    }
    ctx->pc = 0x3FC1C0u;
label_3fc1c0:
    // 0x3fc1c0: 0x18a182d  daddu       $v1, $t4, $t2
    ctx->pc = 0x3fc1c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 10));
label_3fc1c4:
    // 0x3fc1c4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x3fc1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3fc1c8: 0xa0820013  sb          $v0, 0x13($a0)
    ctx->pc = 0x3fc1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc1cc: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x3FC1CCu;
    {
        const bool branch_taken_0x3fc1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC1CCu;
        // 0x3fc1d0: 0xfc830008  sd          $v1, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc1cc) {
            ctx->pc = 0x3FC44Cu;
            goto label_3fc44c;
        }
    }
    ctx->pc = 0x3FC1D4u;
label_3fc1d4:
    // 0x3fc1d4: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x3FC1D4u;
    {
        const bool branch_taken_0x3fc1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC1D4u;
        // 0x3fc1d8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc1d4) {
            ctx->pc = 0x3FC314u;
            goto label_3fc314;
        }
    }
    ctx->pc = 0x3FC1DCu;
    // 0x3fc1dc: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3fc1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3fc1e0: 0x24a60006  addiu       $a2, $a1, 0x6
    ctx->pc = 0x3fc1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x3fc1e4: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x3fc1e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3fc1e8: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x3FC1E8u;
    {
        const bool branch_taken_0x3fc1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC1E8u;
        // 0x3fc1ec: 0xa6078  dsll        $t4, $t2, 1 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc1e8) {
            ctx->pc = 0x3FC438u;
            goto label_3fc438;
        }
    }
    ctx->pc = 0x3FC1F0u;
    // 0x3fc1f0: 0x6542ffff  daddiu      $v0, $t2, -0x1
    ctx->pc = 0x3fc1f0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4294967295);
    // 0x3fc1f4: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x3fc1f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc1f8: 0x30460001  andi        $a2, $v0, 0x1
    ctx->pc = 0x3fc1f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3fc1fc: 0x29420002  slti        $v0, $t2, 0x2
    ctx->pc = 0x3fc1fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3fc200: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FC200u;
    {
        const bool branch_taken_0x3fc200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC200u;
        // 0x3fc204: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc200) {
            ctx->pc = 0x3FC210u;
            goto label_3fc210;
        }
    }
    ctx->pc = 0x3FC208u;
    // 0x3fc208: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x3FC208u;
    {
        const bool branch_taken_0x3fc208 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC208u;
        // 0x3fc20c: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc208) {
            ctx->pc = 0x3FC26Cu;
            goto label_3fc26c;
        }
    }
    ctx->pc = 0x3FC210u;
label_3fc210:
    // 0x3fc210: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3fc210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc214: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x3fc214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3fc218: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3fc218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fc21c: 0x24ab000c  addiu       $t3, $a1, 0xC
    ctx->pc = 0x3fc21cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x3fc220: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x3fc220u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc224: 0x12a402b  sltu        $t0, $t1, $t2
    ctx->pc = 0x3fc224u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3fc228: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3fc228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc22c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3fc22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fc230: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x3fc230u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc234: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3fc234u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc238: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3fc238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fc23c: 0xa0a30008  sb          $v1, 0x8($a1)
    ctx->pc = 0x3fc23cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc240: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3fc240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc244: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3fc244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fc248: 0xa0a20009  sb          $v0, 0x9($a1)
    ctx->pc = 0x3fc248u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc24c: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3fc24cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc250: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3fc250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fc254: 0xa0a3000a  sb          $v1, 0xA($a1)
    ctx->pc = 0x3fc254u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc258: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x3fc258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x3fc25c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3fc25cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc260: 0x11000075  beqz        $t0, . + 4 + (0x75 << 2)
    ctx->pc = 0x3FC260u;
    {
        const bool branch_taken_0x3fc260 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC260u;
        // 0x3fc264: 0xa0a2000b  sb          $v0, 0xB($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc260) {
            ctx->pc = 0x3FC438u;
            goto label_3fc438;
        }
    }
    ctx->pc = 0x3FC268u;
    // 0x3fc268: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x3fc268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3fc26c:
    // 0x3fc26c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3fc26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3fc270:
    // 0x3fc270: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3fc270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc274: 0x65290002  daddiu      $t1, $t1, 0x2
    ctx->pc = 0x3fc274u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)2);
    // 0x3fc278: 0x12a402b  sltu        $t0, $t1, $t2
    ctx->pc = 0x3fc278u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3fc27c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3fc27cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc280: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3fc280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3fc284: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x3fc284u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc288: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x3fc288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3fc28c: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3fc28cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc290: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x3fc290u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3fc294: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x3fc294u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc298: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x3fc298u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3fc29c: 0xa0c30004  sb          $v1, 0x4($a2)
    ctx->pc = 0x3fc29cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc2a0: 0x90a20005  lbu         $v0, 0x5($a1)
    ctx->pc = 0x3fc2a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x3fc2a4: 0xa0c20005  sb          $v0, 0x5($a2)
    ctx->pc = 0x3fc2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc2a8: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x3fc2a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3fc2ac: 0x24a50009  addiu       $a1, $a1, 0x9
    ctx->pc = 0x3fc2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9));
    // 0x3fc2b0: 0xa0c30006  sb          $v1, 0x6($a2)
    ctx->pc = 0x3fc2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc2b4: 0x24c60007  addiu       $a2, $a2, 0x7
    ctx->pc = 0x3fc2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x3fc2b8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fc2b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc2bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fc2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fc2c0: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc2c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fc2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fc2c8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fc2c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc2cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fc2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fc2d0: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc2d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fc2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fc2d8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fc2d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc2dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fc2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fc2e0: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc2e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fc2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fc2e8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fc2e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc2ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fc2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fc2f0: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc2f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fc2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fc2f8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fc2f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc2fc: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x3fc2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x3fc300: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc300u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc304: 0x1500ffda  bnez        $t0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x3FC304u;
    {
        const bool branch_taken_0x3fc304 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC304u;
        // 0x3fc308: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc304) {
            ctx->pc = 0x3FC270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fc270;
        }
    }
    ctx->pc = 0x3FC30Cu;
    // 0x3fc30c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x3FC30Cu;
    {
        const bool branch_taken_0x3fc30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC30Cu;
        // 0x3fc310: 0x18a102d  daddu       $v0, $t4, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc30c) {
            ctx->pc = 0x3FC43Cu;
            goto label_3fc43c;
        }
    }
    ctx->pc = 0x3FC314u;
label_3fc314:
    // 0x3fc314: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3fc314u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc318: 0x11400047  beqz        $t2, . + 4 + (0x47 << 2)
    ctx->pc = 0x3FC318u;
    {
        const bool branch_taken_0x3fc318 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC318u;
        // 0x3fc31c: 0xa6078  dsll        $t4, $t2, 1 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc318) {
            ctx->pc = 0x3FC438u;
            goto label_3fc438;
        }
    }
    ctx->pc = 0x3FC320u;
    // 0x3fc320: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3fc320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc324: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3fc324u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc328: 0x19400003  blez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FC328u;
    {
        const bool branch_taken_0x3fc328 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3FC32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC328u;
        // 0x3fc32c: 0x31420001  andi        $v0, $t2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc328) {
            ctx->pc = 0x3FC338u;
            goto label_3fc338;
        }
    }
    ctx->pc = 0x3FC330u;
    // 0x3fc330: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3FC330u;
    {
        const bool branch_taken_0x3fc330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc330) {
            ctx->pc = 0x3FC334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FC330u;
            // 0x3fc334: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FC398u;
            goto label_3fc398;
        }
    }
    ctx->pc = 0x3FC338u;
label_3fc338:
    // 0x3fc338: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3fc338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x3fc33c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3fc33cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fc340: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3fc340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc344: 0x24a60006  addiu       $a2, $a1, 0x6
    ctx->pc = 0x3fc344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x3fc348: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3fc348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fc34c: 0x12a402b  sltu        $t0, $t1, $t2
    ctx->pc = 0x3fc34cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3fc350: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3fc350u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc354: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3fc354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc358: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3fc358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fc35c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3fc35cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc360: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3fc360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc364: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3fc364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fc368: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x3fc368u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc36c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3fc36cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc370: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3fc370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fc374: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x3fc374u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc378: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3fc378u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc37c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3fc37cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fc380: 0xa0a30004  sb          $v1, 0x4($a1)
    ctx->pc = 0x3fc380u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc384: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x3fc384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fc388: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3fc388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc38c: 0x1100002a  beqz        $t0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3FC38Cu;
    {
        const bool branch_taken_0x3fc38c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC38Cu;
        // 0x3fc390: 0xa0a20005  sb          $v0, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc38c) {
            ctx->pc = 0x3FC438u;
            goto label_3fc438;
        }
    }
    ctx->pc = 0x3FC394u;
    // 0x3fc394: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3fc394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3fc398:
    // 0x3fc398: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x3fc398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3fc39c: 0x65290002  daddiu      $t1, $t1, 0x2
    ctx->pc = 0x3fc39cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)2);
    // 0x3fc3a0: 0x12a402b  sltu        $t0, $t1, $t2
    ctx->pc = 0x3fc3a0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3fc3a4: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3fc3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc3a8: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x3fc3a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3fc3ac: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x3fc3acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc3b0: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x3fc3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3fc3b4: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3fc3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc3b8: 0x90a20005  lbu         $v0, 0x5($a1)
    ctx->pc = 0x3fc3b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x3fc3bc: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x3fc3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc3c0: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x3fc3c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x3fc3c4: 0xa0c30004  sb          $v1, 0x4($a2)
    ctx->pc = 0x3fc3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc3c8: 0x90a20007  lbu         $v0, 0x7($a1)
    ctx->pc = 0x3fc3c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x3fc3cc: 0x24a5000a  addiu       $a1, $a1, 0xA
    ctx->pc = 0x3fc3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x3fc3d0: 0xa0c20005  sb          $v0, 0x5($a2)
    ctx->pc = 0x3fc3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc3d4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3fc3d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc3d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fc3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fc3dc: 0xa0c30006  sb          $v1, 0x6($a2)
    ctx->pc = 0x3fc3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc3e0: 0x24c60007  addiu       $a2, $a2, 0x7
    ctx->pc = 0x3fc3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x3fc3e4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fc3e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc3e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fc3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fc3ec: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc3f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fc3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fc3f4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fc3f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc3f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fc3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fc3fc: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc400: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fc400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fc404: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fc404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc408: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fc408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fc40c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc40cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc410: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fc410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fc414: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fc414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc418: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fc418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fc41c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc41cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc420: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fc420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fc424: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fc424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc428: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fc428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fc42c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc42cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc430: 0x1500ffd9  bnez        $t0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x3FC430u;
    {
        const bool branch_taken_0x3fc430 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC430u;
        // 0x3fc434: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc430) {
            ctx->pc = 0x3FC398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fc398;
        }
    }
    ctx->pc = 0x3FC438u;
label_3fc438:
    // 0x3fc438: 0x18a102d  daddu       $v0, $t4, $t2
    ctx->pc = 0x3fc438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 10));
label_3fc43c:
    // 0x3fc43c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3fc43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3fc440: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x3fc440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x3fc444: 0xa0830013  sb          $v1, 0x13($a0)
    ctx->pc = 0x3fc444u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc448: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x3fc448u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
label_3fc44c:
    // 0x3fc44c: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x3fc44cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3fc450: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x3FC450u;
    {
        const bool branch_taken_0x3fc450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC450u;
        // 0x3fc454: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc450) {
            ctx->pc = 0x3FC854u;
            goto label_3fc854;
        }
    }
    ctx->pc = 0x3FC458u;
label_3fc458:
    // 0x3fc458: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3fc458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3fc45c: 0x14620100  bne         $v1, $v0, . + 4 + (0x100 << 2)
    ctx->pc = 0x3FC45Cu;
    {
        const bool branch_taken_0x3fc45c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FC460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC45Cu;
        // 0x3fc460: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc45c) {
            ctx->pc = 0x3FC860u;
            goto label_3fc860;
        }
    }
    ctx->pc = 0x3FC464u;
    // 0x3fc464: 0x90830011  lbu         $v1, 0x11($a0)
    ctx->pc = 0x3fc464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x3fc468: 0x14620064  bne         $v1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x3FC468u;
    {
        const bool branch_taken_0x3fc468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FC46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC468u;
        // 0x3fc46c: 0x30c20080  andi        $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc468) {
            ctx->pc = 0x3FC5FCu;
            goto label_3fc5fc;
        }
    }
    ctx->pc = 0x3FC470u;
    // 0x3fc470: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3FC470u;
    {
        const bool branch_taken_0x3fc470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fc470) {
            ctx->pc = 0x3FC52Cu;
            goto label_3fc52c;
        }
    }
    ctx->pc = 0x3FC478u;
    // 0x3fc478: 0x1140005d  beqz        $t2, . + 4 + (0x5D << 2)
    ctx->pc = 0x3FC478u;
    {
        const bool branch_taken_0x3fc478 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC478u;
        // 0x3fc47c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc478) {
            ctx->pc = 0x3FC5F0u;
            goto label_3fc5f0;
        }
    }
    ctx->pc = 0x3FC480u;
    // 0x3fc480: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3fc480u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc484: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3fc484u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc488: 0x19400010  blez        $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x3FC488u;
    {
        const bool branch_taken_0x3fc488 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3FC48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC488u;
        // 0x3fc48c: 0x31460003  andi        $a2, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc488) {
            ctx->pc = 0x3FC4CCu;
            goto label_3fc4cc;
        }
    }
    ctx->pc = 0x3FC490u;
    // 0x3fc490: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x3FC490u;
    {
        const bool branch_taken_0x3fc490 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC490u;
        // 0x3fc494: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc490) {
            ctx->pc = 0x3FC4E8u;
            goto label_3fc4e8;
        }
    }
    ctx->pc = 0x3FC498u;
    // 0x3fc498: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3FC498u;
    {
        const bool branch_taken_0x3fc498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fc498) {
            ctx->pc = 0x3FC49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FC498u;
            // 0x3fc49c: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FC4D0u;
            goto label_3fc4d0;
        }
    }
    ctx->pc = 0x3FC4A0u;
    // 0x3fc4a0: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x3fc4a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3fc4a4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FC4A4u;
    {
        const bool branch_taken_0x3fc4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fc4a4) {
            ctx->pc = 0x3FC4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FC4A4u;
            // 0x3fc4a8: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FC4BCu;
            goto label_3fc4bc;
        }
    }
    ctx->pc = 0x3FC4ACu;
    // 0x3fc4ac: 0x24a80001  addiu       $t0, $a1, 0x1
    ctx->pc = 0x3fc4acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fc4b0: 0x24e30002  addiu       $v1, $a3, 0x2
    ctx->pc = 0x3fc4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x3fc4b4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3fc4b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fc4b8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3fc4b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3fc4bc:
    // 0x3fc4bc: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x3fc4bcu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x3fc4c0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3fc4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3fc4c4: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3fc4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc4c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3fc4c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3fc4cc:
    // 0x3fc4cc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3fc4ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3fc4d0:
    // 0x3fc4d0: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x3fc4d0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x3fc4d4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3fc4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3fc4d8: 0x12a382b  sltu        $a3, $t1, $t2
    ctx->pc = 0x3fc4d8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3fc4dc: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3fc4dcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc4e0: 0x10e00043  beqz        $a3, . + 4 + (0x43 << 2)
    ctx->pc = 0x3FC4E0u;
    {
        const bool branch_taken_0x3fc4e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC4E0u;
        // 0x3fc4e4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc4e0) {
            ctx->pc = 0x3FC5F0u;
            goto label_3fc5f0;
        }
    }
    ctx->pc = 0x3FC4E8u;
label_3fc4e8:
    // 0x3fc4e8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3fc4e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc4ec: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3fc4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3fc4f0:
    // 0x3fc4f0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3fc4f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc4f4: 0x65290004  daddiu      $t1, $t1, 0x4
    ctx->pc = 0x3fc4f4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4);
    // 0x3fc4f8: 0x12a382b  sltu        $a3, $t1, $t2
    ctx->pc = 0x3fc4f8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3fc4fc: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3fc4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc500: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x3fc500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3fc504: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x3fc504u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc508: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x3fc508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3fc50c: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3fc50cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc510: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x3fc510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x3fc514: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3fc514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3fc518: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x3fc518u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc51c: 0x14e0fff4  bnez        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x3FC51Cu;
    {
        const bool branch_taken_0x3fc51c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC51Cu;
        // 0x3fc520: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc51c) {
            ctx->pc = 0x3FC4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fc4f0;
        }
    }
    ctx->pc = 0x3FC524u;
    // 0x3fc524: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3FC524u;
    {
        const bool branch_taken_0x3fc524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC524u;
        // 0x3fc528: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc524) {
            ctx->pc = 0x3FC5F4u;
            goto label_3fc5f4;
        }
    }
    ctx->pc = 0x3FC52Cu;
label_3fc52c:
    // 0x3fc52c: 0x11400030  beqz        $t2, . + 4 + (0x30 << 2)
    ctx->pc = 0x3FC52Cu;
    {
        const bool branch_taken_0x3fc52c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC52Cu;
        // 0x3fc530: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc52c) {
            ctx->pc = 0x3FC5F0u;
            goto label_3fc5f0;
        }
    }
    ctx->pc = 0x3FC534u;
    // 0x3fc534: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3fc534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc538: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3fc538u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc53c: 0x19400014  blez        $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x3FC53Cu;
    {
        const bool branch_taken_0x3fc53c = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3FC540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC53Cu;
        // 0x3fc540: 0x31460003  andi        $a2, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc53c) {
            ctx->pc = 0x3FC590u;
            goto label_3fc590;
        }
    }
    ctx->pc = 0x3FC544u;
    // 0x3fc544: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x3FC544u;
    {
        const bool branch_taken_0x3fc544 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC544u;
        // 0x3fc548: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc544) {
            ctx->pc = 0x3FC5B0u;
            goto label_3fc5b0;
        }
    }
    ctx->pc = 0x3FC54Cu;
    // 0x3fc54c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3FC54Cu;
    {
        const bool branch_taken_0x3fc54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC54Cu;
        // 0x3fc550: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc54c) {
            ctx->pc = 0x3FC594u;
            goto label_3fc594;
        }
    }
    ctx->pc = 0x3FC554u;
    // 0x3fc554: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x3fc554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3fc558: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3FC558u;
    {
        const bool branch_taken_0x3fc558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC558u;
        // 0x3fc55c: 0x65290001  daddiu      $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc558) {
            ctx->pc = 0x3FC580u;
            goto label_3fc580;
        }
    }
    ctx->pc = 0x3FC560u;
    // 0x3fc560: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3fc560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fc564: 0x24a80001  addiu       $t0, $a1, 0x1
    ctx->pc = 0x3fc564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fc568: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3fc568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc56c: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x3fc56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fc570: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3fc570u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fc574: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3fc574u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc578: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3fc578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3fc57c: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x3fc57cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
label_3fc580:
    // 0x3fc580: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3fc580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3fc584: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3fc584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3fc588: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3fc588u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc58c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3fc58cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3fc590:
    // 0x3fc590: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3fc590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3fc594:
    // 0x3fc594: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x3fc594u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x3fc598: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3fc598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3fc59c: 0x12a382b  sltu        $a3, $t1, $t2
    ctx->pc = 0x3fc59cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3fc5a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3fc5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3fc5a4: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3fc5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc5a8: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x3FC5A8u;
    {
        const bool branch_taken_0x3fc5a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC5A8u;
        // 0x3fc5ac: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc5a8) {
            ctx->pc = 0x3FC5F0u;
            goto label_3fc5f0;
        }
    }
    ctx->pc = 0x3FC5B0u;
label_3fc5b0:
    // 0x3fc5b0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3fc5b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc5b4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3fc5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3fc5b8:
    // 0x3fc5b8: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3fc5b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3fc5bc: 0x65290004  daddiu      $t1, $t1, 0x4
    ctx->pc = 0x3fc5bcu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4);
    // 0x3fc5c0: 0x12a382b  sltu        $a3, $t1, $t2
    ctx->pc = 0x3fc5c0u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3fc5c4: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3fc5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc5c8: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x3fc5c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3fc5cc: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x3fc5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc5d0: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x3fc5d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x3fc5d4: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x3fc5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x3fc5d8: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3fc5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc5dc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fc5dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc5e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fc5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fc5e4: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x3fc5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc5e8: 0x14e0fff3  bnez        $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x3FC5E8u;
    {
        const bool branch_taken_0x3fc5e8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC5E8u;
        // 0x3fc5ec: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc5e8) {
            ctx->pc = 0x3FC5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fc5b8;
        }
    }
    ctx->pc = 0x3FC5F0u;
label_3fc5f0:
    // 0x3fc5f0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3fc5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3fc5f4:
    // 0x3fc5f4: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x3FC5F4u;
    {
        const bool branch_taken_0x3fc5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC5F4u;
        // 0x3fc5f8: 0xfc8a0008  sd          $t2, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc5f4) {
            ctx->pc = 0x3FC848u;
            goto label_3fc848;
        }
    }
    ctx->pc = 0x3FC5FCu;
label_3fc5fc:
    // 0x3fc5fc: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x3FC5FCu;
    {
        const bool branch_taken_0x3fc5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC5FCu;
        // 0x3fc600: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc5fc) {
            ctx->pc = 0x3FC724u;
            goto label_3fc724;
        }
    }
    ctx->pc = 0x3FC604u;
    // 0x3fc604: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3fc604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x3fc608: 0x24a60002  addiu       $a2, $a1, 0x2
    ctx->pc = 0x3fc608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3fc60c: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x3fc60cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3fc610: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x3FC610u;
    {
        const bool branch_taken_0x3fc610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC610u;
        // 0x3fc614: 0xa6078  dsll        $t4, $t2, 1 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc610) {
            ctx->pc = 0x3FC840u;
            goto label_3fc840;
        }
    }
    ctx->pc = 0x3FC618u;
    // 0x3fc618: 0x6542ffff  daddiu      $v0, $t2, -0x1
    ctx->pc = 0x3fc618u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4294967295);
    // 0x3fc61c: 0x30480003  andi        $t0, $v0, 0x3
    ctx->pc = 0x3fc61cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3fc620: 0x29420002  slti        $v0, $t2, 0x2
    ctx->pc = 0x3fc620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3fc624: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3FC624u;
    {
        const bool branch_taken_0x3fc624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC624u;
        // 0x3fc628: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc624) {
            ctx->pc = 0x3FC68Cu;
            goto label_3fc68c;
        }
    }
    ctx->pc = 0x3FC62Cu;
    // 0x3fc62c: 0x11000022  beqz        $t0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3FC62Cu;
    {
        const bool branch_taken_0x3fc62c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC62Cu;
        // 0x3fc630: 0x29020002  slti        $v0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc62c) {
            ctx->pc = 0x3FC6B8u;
            goto label_3fc6b8;
        }
    }
    ctx->pc = 0x3FC634u;
    // 0x3fc634: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3FC634u;
    {
        const bool branch_taken_0x3fc634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fc634) {
            ctx->pc = 0x3FC638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FC634u;
            // 0x3fc638: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FC690u;
            goto label_3fc690;
        }
    }
    ctx->pc = 0x3FC63Cu;
    // 0x3fc63c: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x3fc63cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3fc640: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3FC640u;
    {
        const bool branch_taken_0x3fc640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fc640) {
            ctx->pc = 0x3FC644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FC640u;
            // 0x3fc644: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FC66Cu;
            goto label_3fc66c;
        }
    }
    ctx->pc = 0x3FC648u;
    // 0x3fc648: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3fc648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc64c: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x3fc64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3fc650: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3fc650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fc654: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x3fc654u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3fc658: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x3fc658u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc65c: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x3fc65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x3fc660: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3fc660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc664: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x3fc664u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc668: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3fc668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3fc66c:
    // 0x3fc66c: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x3fc66cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x3fc670: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3fc670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3fc674: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc674u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc678: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fc678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fc67c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3fc67cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3fc680: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x3fc680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x3fc684: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc684u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc688: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fc688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3fc68c:
    // 0x3fc68c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3fc68cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3fc690:
    // 0x3fc690: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x3fc690u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x3fc694: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3fc694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3fc698: 0x12a382b  sltu        $a3, $t1, $t2
    ctx->pc = 0x3fc698u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3fc69c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc69cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc6a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3fc6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3fc6a4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3fc6a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3fc6a8: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x3fc6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x3fc6ac: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc6acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc6b0: 0x10e00063  beqz        $a3, . + 4 + (0x63 << 2)
    ctx->pc = 0x3FC6B0u;
    {
        const bool branch_taken_0x3fc6b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC6B0u;
        // 0x3fc6b4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc6b0) {
            ctx->pc = 0x3FC840u;
            goto label_3fc840;
        }
    }
    ctx->pc = 0x3FC6B8u;
label_3fc6b8:
    // 0x3fc6b8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3fc6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc6bc: 0x0  nop
    ctx->pc = 0x3fc6bcu;
    // NOP
label_3fc6c0:
    // 0x3fc6c0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3fc6c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc6c4: 0x65290004  daddiu      $t1, $t1, 0x4
    ctx->pc = 0x3fc6c4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4);
    // 0x3fc6c8: 0x12a382b  sltu        $a3, $t1, $t2
    ctx->pc = 0x3fc6c8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3fc6cc: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3fc6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc6d0: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3fc6d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x3fc6d4: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x3fc6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc6d8: 0x90a30004  lbu         $v1, 0x4($a1)
    ctx->pc = 0x3fc6d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3fc6dc: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3fc6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc6e0: 0x90a20005  lbu         $v0, 0x5($a1)
    ctx->pc = 0x3fc6e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x3fc6e4: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x3fc6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc6e8: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x3fc6e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3fc6ec: 0xa0c30004  sb          $v1, 0x4($a2)
    ctx->pc = 0x3fc6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc6f0: 0x90a20009  lbu         $v0, 0x9($a1)
    ctx->pc = 0x3fc6f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x3fc6f4: 0xa0c20005  sb          $v0, 0x5($a2)
    ctx->pc = 0x3fc6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc6f8: 0x90a3000c  lbu         $v1, 0xC($a1)
    ctx->pc = 0x3fc6f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3fc6fc: 0x24a5000d  addiu       $a1, $a1, 0xD
    ctx->pc = 0x3fc6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
    // 0x3fc700: 0xa0c30006  sb          $v1, 0x6($a2)
    ctx->pc = 0x3fc700u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc704: 0x24c60007  addiu       $a2, $a2, 0x7
    ctx->pc = 0x3fc704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x3fc708: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fc708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc70c: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x3fc70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x3fc710: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc710u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc714: 0x14e0ffea  bnez        $a3, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3FC714u;
    {
        const bool branch_taken_0x3fc714 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC714u;
        // 0x3fc718: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc714) {
            ctx->pc = 0x3FC6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fc6c0;
        }
    }
    ctx->pc = 0x3FC71Cu;
    // 0x3fc71c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x3FC71Cu;
    {
        const bool branch_taken_0x3fc71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC71Cu;
        // 0x3fc720: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc71c) {
            ctx->pc = 0x3FC844u;
            goto label_3fc844;
        }
    }
    ctx->pc = 0x3FC724u;
label_3fc724:
    // 0x3fc724: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3fc724u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc728: 0x11400045  beqz        $t2, . + 4 + (0x45 << 2)
    ctx->pc = 0x3FC728u;
    {
        const bool branch_taken_0x3fc728 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC728u;
        // 0x3fc72c: 0xa6078  dsll        $t4, $t2, 1 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc728) {
            ctx->pc = 0x3FC840u;
            goto label_3fc840;
        }
    }
    ctx->pc = 0x3FC730u;
    // 0x3fc730: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3fc730u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc734: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3fc734u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc738: 0x1940001b  blez        $t2, . + 4 + (0x1B << 2)
    ctx->pc = 0x3FC738u;
    {
        const bool branch_taken_0x3fc738 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3FC73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC738u;
        // 0x3fc73c: 0x31460003  andi        $a2, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc738) {
            ctx->pc = 0x3FC7A8u;
            goto label_3fc7a8;
        }
    }
    ctx->pc = 0x3FC740u;
    // 0x3fc740: 0x10c00025  beqz        $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x3FC740u;
    {
        const bool branch_taken_0x3fc740 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC740u;
        // 0x3fc744: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc740) {
            ctx->pc = 0x3FC7D8u;
            goto label_3fc7d8;
        }
    }
    ctx->pc = 0x3FC748u;
    // 0x3fc748: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3FC748u;
    {
        const bool branch_taken_0x3fc748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC748u;
        // 0x3fc74c: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc748) {
            ctx->pc = 0x3FC7ACu;
            goto label_3fc7ac;
        }
    }
    ctx->pc = 0x3FC750u;
    // 0x3fc750: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x3fc750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3fc754: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3FC754u;
    {
        const bool branch_taken_0x3fc754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC754u;
        // 0x3fc758: 0x65290001  daddiu      $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc754) {
            ctx->pc = 0x3FC788u;
            goto label_3fc788;
        }
    }
    ctx->pc = 0x3FC75Cu;
    // 0x3fc75c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3fc75cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x3fc760: 0x24a80002  addiu       $t0, $a1, 0x2
    ctx->pc = 0x3fc760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3fc764: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3fc764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc768: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3fc768u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fc76c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3fc76cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fc770: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3fc770u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc774: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x3fc774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3fc778: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x3fc778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3fc77c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3fc77cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc780: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3fc780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3fc784: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x3fc784u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
label_3fc788:
    // 0x3fc788: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3fc788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3fc78c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3fc78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3fc790: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3fc790u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc794: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3fc794u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3fc798: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3fc798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3fc79c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3fc79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3fc7a0: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3fc7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc7a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3fc7a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3fc7a8:
    // 0x3fc7a8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3fc7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_3fc7ac:
    // 0x3fc7ac: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x3fc7acu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x3fc7b0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3fc7b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3fc7b4: 0x12a382b  sltu        $a3, $t1, $t2
    ctx->pc = 0x3fc7b4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3fc7b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3fc7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3fc7bc: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3fc7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc7c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3fc7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3fc7c4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3fc7c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3fc7c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3fc7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3fc7cc: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x3fc7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc7d0: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x3FC7D0u;
    {
        const bool branch_taken_0x3fc7d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC7D0u;
        // 0x3fc7d4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc7d0) {
            ctx->pc = 0x3FC840u;
            goto label_3fc840;
        }
    }
    ctx->pc = 0x3FC7D8u;
label_3fc7d8:
    // 0x3fc7d8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3fc7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fc7dc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3fc7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3fc7e0:
    // 0x3fc7e0: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x3fc7e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3fc7e4: 0x65290004  daddiu      $t1, $t1, 0x4
    ctx->pc = 0x3fc7e4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4);
    // 0x3fc7e8: 0x12a382b  sltu        $a3, $t1, $t2
    ctx->pc = 0x3fc7e8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3fc7ec: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3fc7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc7f0: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x3fc7f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3fc7f4: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x3fc7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc7f8: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x3fc7f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x3fc7fc: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3fc7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc800: 0x90a20007  lbu         $v0, 0x7($a1)
    ctx->pc = 0x3fc800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x3fc804: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x3fc804u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc808: 0x90a3000a  lbu         $v1, 0xA($a1)
    ctx->pc = 0x3fc808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x3fc80c: 0xa0c30004  sb          $v1, 0x4($a2)
    ctx->pc = 0x3fc80cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc810: 0x90a2000b  lbu         $v0, 0xB($a1)
    ctx->pc = 0x3fc810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x3fc814: 0x24a5000e  addiu       $a1, $a1, 0xE
    ctx->pc = 0x3fc814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
    // 0x3fc818: 0xa0c20005  sb          $v0, 0x5($a2)
    ctx->pc = 0x3fc818u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc81c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3fc81cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc820: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fc820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fc824: 0xa0c30006  sb          $v1, 0x6($a2)
    ctx->pc = 0x3fc824u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc828: 0x24c60007  addiu       $a2, $a2, 0x7
    ctx->pc = 0x3fc828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x3fc82c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3fc82cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3fc830: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3fc830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3fc834: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3fc834u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc838: 0x14e0ffe9  bnez        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3FC838u;
    {
        const bool branch_taken_0x3fc838 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FC83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC838u;
        // 0x3fc83c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc838) {
            ctx->pc = 0x3FC7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fc7e0;
        }
    }
    ctx->pc = 0x3FC840u;
label_3fc840:
    // 0x3fc840: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3fc840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3fc844:
    // 0x3fc844: 0xfc8c0008  sd          $t4, 0x8($a0)
    ctx->pc = 0x3fc844u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 12));
label_3fc848:
    // 0x3fc848: 0xa0820013  sb          $v0, 0x13($a0)
    ctx->pc = 0x3fc848u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fc84c: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x3fc84cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3fc850: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fc850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fc854:
    // 0x3fc854: 0xa0830012  sb          $v1, 0x12($a0)
    ctx->pc = 0x3fc854u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x3fc858: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x3fc858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x3fc85c: 0xa0820010  sb          $v0, 0x10($a0)
    ctx->pc = 0x3fc85cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 2));
label_3fc860:
    // 0x3fc860: 0x3e00008  jr          $ra
    ctx->pc = 0x3FC860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FC860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FC868u;
}
