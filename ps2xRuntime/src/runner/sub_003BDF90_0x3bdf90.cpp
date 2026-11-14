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

// Function: sub_003BDF90
// Address: 0x3bdf90 - 0x3be4a8
void sub_003BDF90_0x3bdf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BDF90_0x3bdf90");
#endif

    switch (ctx->pc) {
        case 0x3be0a8u: goto label_3be0a8;
        case 0x3be108u: goto label_3be108;
        case 0x3be14cu: goto label_3be14c;
        case 0x3be178u: goto label_3be178;
        case 0x3be1e8u: goto label_3be1e8;
        case 0x3be248u: goto label_3be248;
        case 0x3be2a0u: goto label_3be2a0;
        case 0x3be310u: goto label_3be310;
        case 0x3be378u: goto label_3be378;
        case 0x3be3d0u: goto label_3be3d0;
        case 0x3be430u: goto label_3be430;
        case 0x3be480u: goto label_3be480;
        case 0x3be48cu: goto label_3be48c;
        default: break;
    }

    ctx->pc = 0x3bdf90u;

    // 0x3bdf90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bdf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bdf94: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x3bdf94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdf98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bdf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bdf9c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3bdf9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3bdfa0: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x3bdfa0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bdfa4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3bdfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3bdfa8: 0x24080420  addiu       $t0, $zero, 0x420
    ctx->pc = 0x3bdfa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x3bdfac: 0x8c860014  lw          $a2, 0x14($a0)
    ctx->pc = 0x3bdfacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3bdfb0: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x3bdfb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3bdfb4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3bdfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3bdfb8: 0x8c8b0018  lw          $t3, 0x18($a0)
    ctx->pc = 0x3bdfb8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3bdfbc: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x3bdfbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3bdfc0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x3bdfc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3bdfc4: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x3bdfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3bdfc8: 0x10e8007e  beq         $a3, $t0, . + 4 + (0x7E << 2)
    ctx->pc = 0x3BDFC8u;
    {
        const bool branch_taken_0x3bdfc8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        ctx->pc = 0x3BDFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDFC8u;
        // 0x3bdfcc: 0x80682d  daddu       $t5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdfc8) {
            ctx->pc = 0x3BE1C4u;
            goto label_3be1c4;
        }
    }
    ctx->pc = 0x3BDFD0u;
    // 0x3bdfd0: 0x2ce20421  sltiu       $v0, $a3, 0x421
    ctx->pc = 0x3bdfd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1057) ? 1 : 0);
    // 0x3bdfd4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3BDFD4u;
    {
        const bool branch_taken_0x3bdfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDFD4u;
        // 0x3bdfd8: 0x24020120  addiu       $v0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdfd4) {
            ctx->pc = 0x3BE020u;
            goto label_3be020;
        }
    }
    ctx->pc = 0x3BDFDCu;
    // 0x3bdfdc: 0x10e2005d  beq         $a3, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x3BDFDCu;
    {
        const bool branch_taken_0x3bdfdc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BDFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDFDCu;
        // 0x3bdfe0: 0x2ce20121  sltiu       $v0, $a3, 0x121 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)289) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdfdc) {
            ctx->pc = 0x3BE154u;
            goto label_3be154;
        }
    }
    ctx->pc = 0x3BDFE4u;
    // 0x3bdfe4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BDFE4u;
    {
        const bool branch_taken_0x3bdfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BDFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDFE4u;
        // 0x3bdfe8: 0x24020104  addiu       $v0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdfe4) {
            ctx->pc = 0x3BE004u;
            goto label_3be004;
        }
    }
    ctx->pc = 0x3BDFECu;
    // 0x3bdfec: 0x10e20025  beq         $a3, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3BDFECu;
    {
        const bool branch_taken_0x3bdfec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BDFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDFECu;
        // 0x3bdff0: 0x24020108  addiu       $v0, $zero, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdfec) {
            ctx->pc = 0x3BE084u;
            goto label_3be084;
        }
    }
    ctx->pc = 0x3BDFF4u;
    // 0x3bdff4: 0x10e20023  beq         $a3, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3BDFF4u;
    {
        const bool branch_taken_0x3bdff4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BDFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BDFF4u;
        // 0x3bdff8: 0x2402019d  addiu       $v0, $zero, 0x19D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bdff4) {
            ctx->pc = 0x3BE084u;
            goto label_3be084;
        }
    }
    ctx->pc = 0x3BDFFCu;
    // 0x3bdffc: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x3BDFFCu;
    {
        const bool branch_taken_0x3bdffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bdffc) {
            ctx->pc = 0x3BE470u;
            goto label_3be470;
        }
    }
    ctx->pc = 0x3BE004u;
label_3be004:
    // 0x3be004: 0x24020404  addiu       $v0, $zero, 0x404
    ctx->pc = 0x3be004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
    // 0x3be008: 0x10e20035  beq         $a3, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3BE008u;
    {
        const bool branch_taken_0x3be008 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BE00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE008u;
        // 0x3be00c: 0x24020408  addiu       $v0, $zero, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be008) {
            ctx->pc = 0x3BE0E0u;
            goto label_3be0e0;
        }
    }
    ctx->pc = 0x3BE010u;
    // 0x3be010: 0x10e20033  beq         $a3, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x3BE010u;
    {
        const bool branch_taken_0x3be010 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BE014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE010u;
        // 0x3be014: 0x2402019d  addiu       $v0, $zero, 0x19D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be010) {
            ctx->pc = 0x3BE0E0u;
            goto label_3be0e0;
        }
    }
    ctx->pc = 0x3BE018u;
    // 0x3be018: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x3BE018u;
    {
        const bool branch_taken_0x3be018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be018) {
            ctx->pc = 0x3BE470u;
            goto label_3be470;
        }
    }
    ctx->pc = 0x3BE020u;
label_3be020:
    // 0x3be020: 0x24020f20  addiu       $v0, $zero, 0xF20
    ctx->pc = 0x3be020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3872));
    // 0x3be024: 0x10e20096  beq         $a3, $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x3BE024u;
    {
        const bool branch_taken_0x3be024 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BE028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE024u;
        // 0x3be028: 0x2ce20f21  sltiu       $v0, $a3, 0xF21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3873) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be024) {
            ctx->pc = 0x3BE280u;
            goto label_3be280;
        }
    }
    ctx->pc = 0x3BE02Cu;
    // 0x3be02c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BE02Cu;
    {
        const bool branch_taken_0x3be02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE02Cu;
        // 0x3be030: 0x24020808  addiu       $v0, $zero, 0x808 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be02c) {
            ctx->pc = 0x3BE04Cu;
            goto label_3be04c;
        }
    }
    ctx->pc = 0x3BE034u;
    // 0x3be034: 0x10e20042  beq         $a3, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x3BE034u;
    {
        const bool branch_taken_0x3be034 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BE038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE034u;
        // 0x3be038: 0x24020820  addiu       $v0, $zero, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be034) {
            ctx->pc = 0x3BE140u;
            goto label_3be140;
        }
    }
    ctx->pc = 0x3BE03Cu;
    // 0x3be03c: 0x10e2007d  beq         $a3, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x3BE03Cu;
    {
        const bool branch_taken_0x3be03c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BE040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE03Cu;
        // 0x3be040: 0x2402019d  addiu       $v0, $zero, 0x19D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be03c) {
            ctx->pc = 0x3BE234u;
            goto label_3be234;
        }
    }
    ctx->pc = 0x3BE044u;
    // 0x3be044: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x3BE044u;
    {
        const bool branch_taken_0x3be044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be044) {
            ctx->pc = 0x3BE470u;
            goto label_3be470;
        }
    }
    ctx->pc = 0x3BE04Cu;
label_3be04c:
    // 0x3be04c: 0x24021820  addiu       $v0, $zero, 0x1820
    ctx->pc = 0x3be04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6176));
    // 0x3be050: 0x10e200c1  beq         $a3, $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x3BE050u;
    {
        const bool branch_taken_0x3be050 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE050u;
        // 0x3be054: 0x2ce21821  sltiu       $v0, $a3, 0x1821 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)6177) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be050) {
            ctx->pc = 0x3BE358u;
            goto label_3be358;
        }
    }
    ctx->pc = 0x3BE058u;
    // 0x3be058: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BE058u;
    {
        const bool branch_taken_0x3be058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE058u;
        // 0x3be05c: 0x24021020  addiu       $v0, $zero, 0x1020 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be058) {
            ctx->pc = 0x3BE070u;
            goto label_3be070;
        }
    }
    ctx->pc = 0x3BE060u;
    // 0x3be060: 0x10e200a1  beq         $a3, $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x3BE060u;
    {
        const bool branch_taken_0x3be060 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BE064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE060u;
        // 0x3be064: 0x2402019d  addiu       $v0, $zero, 0x19D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be060) {
            ctx->pc = 0x3BE2E8u;
            goto label_3be2e8;
        }
    }
    ctx->pc = 0x3BE068u;
    // 0x3be068: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x3BE068u;
    {
        const bool branch_taken_0x3be068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be068) {
            ctx->pc = 0x3BE470u;
            goto label_3be470;
        }
    }
    ctx->pc = 0x3BE070u;
label_3be070:
    // 0x3be070: 0x24022020  addiu       $v0, $zero, 0x2020
    ctx->pc = 0x3be070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8224));
    // 0x3be074: 0x10e200e6  beq         $a3, $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x3BE074u;
    {
        const bool branch_taken_0x3be074 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BE078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE074u;
        // 0x3be078: 0x2402019d  addiu       $v0, $zero, 0x19D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be074) {
            ctx->pc = 0x3BE410u;
            goto label_3be410;
        }
    }
    ctx->pc = 0x3BE07Cu;
    // 0x3be07c: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x3BE07Cu;
    {
        const bool branch_taken_0x3be07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be07c) {
            ctx->pc = 0x3BE470u;
            goto label_3be470;
        }
    }
    ctx->pc = 0x3BE084u;
label_3be084:
    // 0x3be084: 0x91470000  lbu         $a3, 0x0($t2)
    ctx->pc = 0x3be084u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3be088: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x3be088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be08c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3be08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3be090: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3be090u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3be094: 0x104000ff  beqz        $v0, . + 4 + (0xFF << 2)
    ctx->pc = 0x3BE094u;
    {
        const bool branch_taken_0x3be094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE094u;
        // 0x3be098: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be094) {
            ctx->pc = 0x3BE494u;
            goto label_3be494;
        }
    }
    ctx->pc = 0x3BE09Cu;
    // 0x3be09c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x3be09cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be0a0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3be0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be0a4: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x3be0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_3be0a8:
    // 0x3be0a8: 0x671007  srav        $v0, $a3, $v1
    ctx->pc = 0x3be0a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x3be0ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3be0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3be0b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3be0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3be0b4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3be0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3be0b8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BE0B8u;
    {
        const bool branch_taken_0x3be0b8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3BE0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE0B8u;
        // 0x3be0bc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be0b8) {
            ctx->pc = 0x3BE0CCu;
            goto label_3be0cc;
        }
    }
    ctx->pc = 0x3BE0C0u;
    // 0x3be0c0: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x3be0c0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3be0c4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3be0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3be0c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3be0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3be0cc:
    // 0x3be0cc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3be0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be0d0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3BE0D0u;
    {
        const bool branch_taken_0x3be0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BE0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE0D0u;
        // 0x3be0d4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be0d0) {
            ctx->pc = 0x3BE0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3be0a8;
        }
    }
    ctx->pc = 0x3BE0D8u;
    // 0x3be0d8: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x3BE0D8u;
    {
        const bool branch_taken_0x3be0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE0D8u;
        // 0x3be0dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be0d8) {
            ctx->pc = 0x3BE498u;
            goto label_3be498;
        }
    }
    ctx->pc = 0x3BE0E0u;
label_3be0e0:
    // 0x3be0e0: 0x91470000  lbu         $a3, 0x0($t2)
    ctx->pc = 0x3be0e0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3be0e4: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x3be0e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be0e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3be0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3be0ec: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3be0ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3be0f0: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x3BE0F0u;
    {
        const bool branch_taken_0x3be0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE0F0u;
        // 0x3be0f4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be0f0) {
            ctx->pc = 0x3BE494u;
            goto label_3be494;
        }
    }
    ctx->pc = 0x3BE0F8u;
    // 0x3be0f8: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x3be0f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be0fc: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3be0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be100: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x3be100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be104: 0x0  nop
    ctx->pc = 0x3be104u;
    // NOP
label_3be108:
    // 0x3be108: 0x671007  srav        $v0, $a3, $v1
    ctx->pc = 0x3be108u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x3be10c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3be10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3be110: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x3be110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x3be114: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3be114u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3be118: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BE118u;
    {
        const bool branch_taken_0x3be118 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3BE11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE118u;
        // 0x3be11c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be118) {
            ctx->pc = 0x3BE12Cu;
            goto label_3be12c;
        }
    }
    ctx->pc = 0x3BE120u;
    // 0x3be120: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x3be120u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3be124: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3be124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3be128: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3be128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3be12c:
    // 0x3be12c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3be12cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be130: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3BE130u;
    {
        const bool branch_taken_0x3be130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BE134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE130u;
        // 0x3be134: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be130) {
            ctx->pc = 0x3BE108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3be108;
        }
    }
    ctx->pc = 0x3BE138u;
    // 0x3be138: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x3BE138u;
    {
        const bool branch_taken_0x3be138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE138u;
        // 0x3be13c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be138) {
            ctx->pc = 0x3BE498u;
            goto label_3be498;
        }
    }
    ctx->pc = 0x3BE140u;
label_3be140:
    // 0x3be140: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3be140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be144: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3BE144u;
    SET_GPR_U32(ctx, 31, 0x3BE14Cu);
    ctx->pc = 0x3BE148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE144u;
    // 0x3be148: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3BE144u, 0x3BE14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE14Cu;
label_3be14c:
    // 0x3be14c: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x3BE14Cu;
    {
        const bool branch_taken_0x3be14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE14Cu;
        // 0x3be150: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be14c) {
            ctx->pc = 0x3BE498u;
            goto label_3be498;
        }
    }
    ctx->pc = 0x3BE154u;
label_3be154:
    // 0x3be154: 0x91470000  lbu         $a3, 0x0($t2)
    ctx->pc = 0x3be154u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3be158: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x3be158u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be15c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3be15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3be160: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3be160u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3be164: 0x104000cb  beqz        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x3BE164u;
    {
        const bool branch_taken_0x3be164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE164u;
        // 0x3be168: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be164) {
            ctx->pc = 0x3BE494u;
            goto label_3be494;
        }
    }
    ctx->pc = 0x3BE16Cu;
    // 0x3be16c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x3be16cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be170: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3be170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be174: 0x0  nop
    ctx->pc = 0x3be174u;
    // NOP
label_3be178:
    // 0x3be178: 0x671007  srav        $v0, $a3, $v1
    ctx->pc = 0x3be178u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x3be17c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3be17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3be180: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3be180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3be184: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3be184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3be188: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x3be188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3be18c: 0x88480003  lwl         $t0, 0x3($v0)
    ctx->pc = 0x3be18cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x3be190: 0x98480000  lwr         $t0, 0x0($v0)
    ctx->pc = 0x3be190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x3be194: 0xa8880003  swl         $t0, 0x3($a0)
    ctx->pc = 0x3be194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3be198: 0xb8880000  swr         $t0, 0x0($a0)
    ctx->pc = 0x3be198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3be19c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BE19Cu;
    {
        const bool branch_taken_0x3be19c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3BE1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE19Cu;
        // 0x3be1a0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be19c) {
            ctx->pc = 0x3BE1B0u;
            goto label_3be1b0;
        }
    }
    ctx->pc = 0x3BE1A4u;
    // 0x3be1a4: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x3be1a4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3be1a8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3be1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3be1ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3be1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3be1b0:
    // 0x3be1b0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3be1b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be1b4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3BE1B4u;
    {
        const bool branch_taken_0x3be1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BE1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE1B4u;
        // 0x3be1b8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be1b4) {
            ctx->pc = 0x3BE178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3be178;
        }
    }
    ctx->pc = 0x3BE1BCu;
    // 0x3be1bc: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x3BE1BCu;
    {
        const bool branch_taken_0x3be1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE1BCu;
        // 0x3be1c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be1bc) {
            ctx->pc = 0x3BE498u;
            goto label_3be498;
        }
    }
    ctx->pc = 0x3BE1C4u;
label_3be1c4:
    // 0x3be1c4: 0x91470000  lbu         $a3, 0x0($t2)
    ctx->pc = 0x3be1c4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3be1c8: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x3be1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be1cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3be1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3be1d0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3be1d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3be1d4: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x3BE1D4u;
    {
        const bool branch_taken_0x3be1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE1D4u;
        // 0x3be1d8: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be1d4) {
            ctx->pc = 0x3BE494u;
            goto label_3be494;
        }
    }
    ctx->pc = 0x3BE1DCu;
    // 0x3be1dc: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x3be1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be1e0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3be1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be1e4: 0x0  nop
    ctx->pc = 0x3be1e4u;
    // NOP
label_3be1e8:
    // 0x3be1e8: 0x671007  srav        $v0, $a3, $v1
    ctx->pc = 0x3be1e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x3be1ec: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3be1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3be1f0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x3be1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x3be1f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3be1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3be1f8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x3be1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3be1fc: 0x88480003  lwl         $t0, 0x3($v0)
    ctx->pc = 0x3be1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x3be200: 0x98480000  lwr         $t0, 0x0($v0)
    ctx->pc = 0x3be200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x3be204: 0xa8880003  swl         $t0, 0x3($a0)
    ctx->pc = 0x3be204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3be208: 0xb8880000  swr         $t0, 0x0($a0)
    ctx->pc = 0x3be208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3be20c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BE20Cu;
    {
        const bool branch_taken_0x3be20c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3BE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE20Cu;
        // 0x3be210: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be20c) {
            ctx->pc = 0x3BE220u;
            goto label_3be220;
        }
    }
    ctx->pc = 0x3BE214u;
    // 0x3be214: 0x90a70000  lbu         $a3, 0x0($a1)
    ctx->pc = 0x3be214u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3be218: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3be218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3be21c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3be21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3be220:
    // 0x3be220: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3be220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be224: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3BE224u;
    {
        const bool branch_taken_0x3be224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BE228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE224u;
        // 0x3be228: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be224) {
            ctx->pc = 0x3BE1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3be1e8;
        }
    }
    ctx->pc = 0x3BE22Cu;
    // 0x3be22c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x3BE22Cu;
    {
        const bool branch_taken_0x3be22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE22Cu;
        // 0x3be230: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be22c) {
            ctx->pc = 0x3BE498u;
            goto label_3be498;
        }
    }
    ctx->pc = 0x3BE234u;
label_3be234:
    // 0x3be234: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x3be234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be238: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x3BE238u;
    {
        const bool branch_taken_0x3be238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE238u;
        // 0x3be23c: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be238) {
            ctx->pc = 0x3BE494u;
            goto label_3be494;
        }
    }
    ctx->pc = 0x3BE240u;
    // 0x3be240: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x3be240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be244: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3be244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3be248:
    // 0x3be248: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3be248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3be24c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3be24cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be250: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3be250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3be254: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3be254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3be258: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3be258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3be25c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x3be25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3be260: 0x88470003  lwl         $a3, 0x3($v0)
    ctx->pc = 0x3be260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x3be264: 0x98470000  lwr         $a3, 0x0($v0)
    ctx->pc = 0x3be264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x3be268: 0xa8870003  swl         $a3, 0x3($a0)
    ctx->pc = 0x3be268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3be26c: 0xb8870000  swr         $a3, 0x0($a0)
    ctx->pc = 0x3be26cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3be270: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x3BE270u;
    {
        const bool branch_taken_0x3be270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BE274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE270u;
        // 0x3be274: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be270) {
            ctx->pc = 0x3BE248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3be248;
        }
    }
    ctx->pc = 0x3BE278u;
    // 0x3be278: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x3BE278u;
    {
        const bool branch_taken_0x3be278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE278u;
        // 0x3be27c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be278) {
            ctx->pc = 0x3BE498u;
            goto label_3be498;
        }
    }
    ctx->pc = 0x3BE280u;
label_3be280:
    // 0x3be280: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x3be280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be284: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x3BE284u;
    {
        const bool branch_taken_0x3be284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE284u;
        // 0x3be288: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be284) {
            ctx->pc = 0x3BE494u;
            goto label_3be494;
        }
    }
    ctx->pc = 0x3BE28Cu;
    // 0x3be28c: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x3be28cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be290: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x3be290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be294: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3be294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be298: 0x2409fff8  addiu       $t1, $zero, -0x8
    ctx->pc = 0x3be298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x3be29c: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x3be29cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3be2a0:
    // 0x3be2a0: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x3be2a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3be2a4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3be2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be2a8: 0xa0ca0003  sb          $t2, 0x3($a2)
    ctx->pc = 0x3be2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x3be2ac: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3be2acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x3be2b0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x3be2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3be2b4: 0x311c3  sra         $v0, $v1, 7
    ctx->pc = 0x3be2b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
    // 0x3be2b8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3be2b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x3be2bc: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x3be2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x3be2c0: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x3be2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x3be2c4: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x3be2c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x3be2c8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3be2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3be2cc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3be2ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3be2d0: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x3be2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3be2d4: 0xa0c40002  sb          $a0, 0x2($a2)
    ctx->pc = 0x3be2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3be2d8: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x3BE2D8u;
    {
        const bool branch_taken_0x3be2d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BE2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE2D8u;
        // 0x3be2dc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be2d8) {
            ctx->pc = 0x3BE2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3be2a0;
        }
    }
    ctx->pc = 0x3BE2E0u;
    // 0x3be2e0: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x3BE2E0u;
    {
        const bool branch_taken_0x3be2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE2E0u;
        // 0x3be2e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be2e0) {
            ctx->pc = 0x3BE498u;
            goto label_3be498;
        }
    }
    ctx->pc = 0x3BE2E8u;
label_3be2e8:
    // 0x3be2e8: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x3be2e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be2ec: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x3BE2ECu;
    {
        const bool branch_taken_0x3be2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE2ECu;
        // 0x3be2f0: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be2ec) {
            ctx->pc = 0x3BE494u;
            goto label_3be494;
        }
    }
    ctx->pc = 0x3BE2F4u;
    // 0x3be2f4: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x3be2f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be2f8: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x3be2f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be2fc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3be2fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be300: 0x2409fff8  addiu       $t1, $zero, -0x8
    ctx->pc = 0x3be300u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x3be304: 0x240bfffc  addiu       $t3, $zero, -0x4
    ctx->pc = 0x3be304u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x3be308: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x3be308u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3be30c: 0x0  nop
    ctx->pc = 0x3be30cu;
    // NOP
label_3be310:
    // 0x3be310: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x3be310u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3be314: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3be314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be318: 0xa0ca0003  sb          $t2, 0x3($a2)
    ctx->pc = 0x3be318u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x3be31c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3be31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x3be320: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x3be320u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3be324: 0x31203  sra         $v0, $v1, 8
    ctx->pc = 0x3be324u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
    // 0x3be328: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x3be328u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x3be32c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x3be32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x3be330: 0x6b1824  and         $v1, $v1, $t3
    ctx->pc = 0x3be330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x3be334: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x3be334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
    // 0x3be338: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x3be338u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3be33c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3be33cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3be340: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x3be340u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3be344: 0xa0c40002  sb          $a0, 0x2($a2)
    ctx->pc = 0x3be344u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3be348: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x3BE348u;
    {
        const bool branch_taken_0x3be348 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BE34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE348u;
        // 0x3be34c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be348) {
            ctx->pc = 0x3BE310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3be310;
        }
    }
    ctx->pc = 0x3BE350u;
    // 0x3be350: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x3BE350u;
    {
        const bool branch_taken_0x3be350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE350u;
        // 0x3be354: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be350) {
            ctx->pc = 0x3BE498u;
            goto label_3be498;
        }
    }
    ctx->pc = 0x3BE358u;
label_3be358:
    // 0x3be358: 0x11800017  beqz        $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x3BE358u;
    {
        const bool branch_taken_0x3be358 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE358u;
        // 0x3be35c: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be358) {
            ctx->pc = 0x3BE3B8u;
            goto label_3be3b8;
        }
    }
    ctx->pc = 0x3BE360u;
    // 0x3be360: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x3BE360u;
    {
        const bool branch_taken_0x3be360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE360u;
        // 0x3be364: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be360) {
            ctx->pc = 0x3BE494u;
            goto label_3be494;
        }
    }
    ctx->pc = 0x3BE368u;
    // 0x3be368: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x3be368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be36c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3be36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be370: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3be370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be374: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3be374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3be378:
    // 0x3be378: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3be378u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3be37c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3be37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be380: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3be380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3be384: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3be384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3be388: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3be388u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3be38c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3be38cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3be390: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3be390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3be394: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x3be394u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3be398: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3be398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3be39c: 0xa0c80003  sb          $t0, 0x3($a2)
    ctx->pc = 0x3be39cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x3be3a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3be3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3be3a4: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3be3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3be3a8: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3BE3A8u;
    {
        const bool branch_taken_0x3be3a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BE3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE3A8u;
        // 0x3be3ac: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be3a8) {
            ctx->pc = 0x3BE378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3be378;
        }
    }
    ctx->pc = 0x3BE3B0u;
    // 0x3be3b0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3BE3B0u;
    {
        const bool branch_taken_0x3be3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE3B0u;
        // 0x3be3b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be3b0) {
            ctx->pc = 0x3BE498u;
            goto label_3be498;
        }
    }
    ctx->pc = 0x3BE3B8u;
label_3be3b8:
    // 0x3be3b8: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3BE3B8u;
    {
        const bool branch_taken_0x3be3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE3B8u;
        // 0x3be3bc: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be3b8) {
            ctx->pc = 0x3BE494u;
            goto label_3be494;
        }
    }
    ctx->pc = 0x3BE3C0u;
    // 0x3be3c0: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x3be3c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be3c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3be3c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be3c8: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3be3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be3cc: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3be3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3be3d0:
    // 0x3be3d0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3be3d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3be3d4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3be3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be3d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3be3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3be3dc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3be3dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3be3e0: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3be3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3be3e4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3be3e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3be3e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3be3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3be3ec: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x3be3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3be3f0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3be3f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3be3f4: 0xa0c80003  sb          $t0, 0x3($a2)
    ctx->pc = 0x3be3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x3be3f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3be3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3be3fc: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3be3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3be400: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3BE400u;
    {
        const bool branch_taken_0x3be400 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BE404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE400u;
        // 0x3be404: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be400) {
            ctx->pc = 0x3BE3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3be3d0;
        }
    }
    ctx->pc = 0x3BE408u;
    // 0x3be408: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3BE408u;
    {
        const bool branch_taken_0x3be408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE408u;
        // 0x3be40c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be408) {
            ctx->pc = 0x3BE498u;
            goto label_3be498;
        }
    }
    ctx->pc = 0x3BE410u;
label_3be410:
    // 0x3be410: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x3be410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be414: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3BE414u;
    {
        const bool branch_taken_0x3be414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE414u;
        // 0x3be418: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be414) {
            ctx->pc = 0x3BE494u;
            goto label_3be494;
        }
    }
    ctx->pc = 0x3BE41Cu;
    // 0x3be41c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x3be41cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be420: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3be420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be424: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x3be424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be428: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3be428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3be42c: 0x0  nop
    ctx->pc = 0x3be42cu;
    // NOP
label_3be430:
    // 0x3be430: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3be430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3be434: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3be434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be438: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3be438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3be43c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3be43cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3be440: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3be440u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3be444: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3be444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3be448: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3be448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3be44c: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x3be44cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3be450: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3be450u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3be454: 0xa0c80003  sb          $t0, 0x3($a2)
    ctx->pc = 0x3be454u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x3be458: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3be458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3be45c: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x3be45cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3be460: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3BE460u;
    {
        const bool branch_taken_0x3be460 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE460u;
        // 0x3be464: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be460) {
            ctx->pc = 0x3BE430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3be430;
        }
    }
    ctx->pc = 0x3BE468u;
    // 0x3be468: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3BE468u;
    {
        const bool branch_taken_0x3be468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE468u;
        // 0x3be46c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be468) {
            ctx->pc = 0x3BE498u;
            goto label_3be498;
        }
    }
    ctx->pc = 0x3BE470u;
label_3be470:
    // 0x3be470: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3be470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3be474: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3be474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3be478: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x3BE478u;
    SET_GPR_U32(ctx, 31, 0x3BE480u);
    ctx->pc = 0x3BE47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE478u;
    // 0x3be47c: 0x34840008  ori         $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BE478u, 0x3BE480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE480u;
label_3be480:
    // 0x3be480: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3be480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be484: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x3BE484u;
    SET_GPR_U32(ctx, 31, 0x3BE48Cu);
    ctx->pc = 0x3BE488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE484u;
    // 0x3be488: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3BE484u, 0x3BE48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE48Cu;
label_3be48c:
    // 0x3be48c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3BE48Cu;
    {
        const bool branch_taken_0x3be48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE48Cu;
        // 0x3be490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be48c) {
            ctx->pc = 0x3BE498u;
            goto label_3be498;
        }
    }
    ctx->pc = 0x3BE494u;
label_3be494:
    // 0x3be494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3be494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3be498:
    // 0x3be498: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3be498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3be49c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BE49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE49Cu;
        // 0x3be4a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BE4A4u;
    // 0x3be4a4: 0x0  nop
    ctx->pc = 0x3be4a4u;
    // NOP
    ctx->pc = 0x3be4a8u;
}
