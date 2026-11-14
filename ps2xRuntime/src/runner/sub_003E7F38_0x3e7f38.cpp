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

// Function: sub_003E7F38
// Address: 0x3e7f38 - 0x3e8558
void sub_003E7F38_0x3e7f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7F38_0x3e7f38");
#endif

    switch (ctx->pc) {
        case 0x3e80a8u: goto label_3e80a8;
        case 0x3e8288u: goto label_3e8288;
        case 0x3e8460u: goto label_3e8460;
        case 0x3e8540u: goto label_3e8540;
        default: break;
    }

    ctx->pc = 0x3e7f38u;

    // 0x3e7f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e7f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e7f3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e7f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e7f40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e7f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e7f44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e7f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7f48: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x3e7f48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3e7f4c: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x3e7f4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3e7f50: 0x1040017c  beqz        $v0, . + 4 + (0x17C << 2)
    ctx->pc = 0x3E7F50u;
    {
        const bool branch_taken_0x3e7f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F50u;
        // 0x3e7f54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7f50) {
            ctx->pc = 0x3E8544u;
            goto label_3e8544;
        }
    }
    ctx->pc = 0x3E7F58u;
    // 0x3e7f58: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x3e7f58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x3e7f5c: 0x10620084  beq         $v1, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x3E7F5Cu;
    {
        const bool branch_taken_0x3e7f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E7F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F5Cu;
        // 0x3e7f60: 0xde090000  ld          $t1, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7f5c) {
            ctx->pc = 0x3E8170u;
            goto label_3e8170;
        }
    }
    ctx->pc = 0x3E7F64u;
    // 0x3e7f64: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e7f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e7f68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E7F68u;
    {
        const bool branch_taken_0x3e7f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F68u;
        // 0x3e7f6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7f68) {
            ctx->pc = 0x3E7F80u;
            goto label_3e7f80;
        }
    }
    ctx->pc = 0x3E7F70u;
    // 0x3e7f70: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E7F70u;
    {
        const bool branch_taken_0x3e7f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E7F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F70u;
        // 0x3e7f74: 0x65230007  daddiu      $v1, $t1, 0x7 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7f70) {
            ctx->pc = 0x3E7F94u;
            goto label_3e7f94;
        }
    }
    ctx->pc = 0x3E7F78u;
    // 0x3e7f78: 0x1000016a  b           . + 4 + (0x16A << 2)
    ctx->pc = 0x3E7F78u;
    {
        const bool branch_taken_0x3e7f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F78u;
        // 0x3e7f7c: 0x92020012  lbu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7f78) {
            ctx->pc = 0x3E8524u;
            goto label_3e8524;
        }
    }
    ctx->pc = 0x3E7F80u;
label_3e7f80:
    // 0x3e7f80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e7f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e7f84: 0x106200f2  beq         $v1, $v0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x3E7F84u;
    {
        const bool branch_taken_0x3e7f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E7F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F84u;
        // 0x3e7f88: 0x65220001  daddiu      $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7f84) {
            ctx->pc = 0x3E8350u;
            goto label_3e8350;
        }
    }
    ctx->pc = 0x3E7F8Cu;
    // 0x3e7f8c: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x3E7F8Cu;
    {
        const bool branch_taken_0x3e7f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7F8Cu;
        // 0x3e7f90: 0x92020012  lbu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7f8c) {
            ctx->pc = 0x3E8524u;
            goto label_3e8524;
        }
    }
    ctx->pc = 0x3E7F94u;
label_3e7f94:
    // 0x3e7f94: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x3e7f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x3e7f98: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e7f98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e7f9c: 0x6524ffff  daddiu      $a0, $t1, -0x1
    ctx->pc = 0x3e7f9cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4294967295);
    // 0x3e7fa0: 0xa25821  addu        $t3, $a1, $v0
    ctx->pc = 0x3e7fa0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3e7fa4: 0x42778  dsll        $a0, $a0, 29
    ctx->pc = 0x3e7fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 29);
    // 0x3e7fa8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3e7fa8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3e7fac: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x3e7facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3e7fb0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3e7fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3e7fb4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e7fb4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e7fb8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3e7fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3e7fbc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3e7fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3e7fc0: 0x2566ffff  addiu       $a2, $t3, -0x1
    ctx->pc = 0x3e7fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3e7fc4: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x3e7fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e7fc8: 0x11200155  beqz        $t1, . + 4 + (0x155 << 2)
    ctx->pc = 0x3E7FC8u;
    {
        const bool branch_taken_0x3e7fc8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7FC8u;
        // 0x3e7fcc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7fc8) {
            ctx->pc = 0x3E8520u;
            goto label_3e8520;
        }
    }
    ctx->pc = 0x3E7FD0u;
    // 0x3e7fd0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3e7fd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7fd4: 0x240a0007  addiu       $t2, $zero, 0x7
    ctx->pc = 0x3e7fd4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3e7fd8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3e7fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7fdc: 0x19200022  blez        $t1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3E7FDCu;
    {
        const bool branch_taken_0x3e7fdc = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3E7FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7FDCu;
        // 0x3e7fe0: 0x31230003  andi        $v1, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7fdc) {
            ctx->pc = 0x3E8068u;
            goto label_3e8068;
        }
    }
    ctx->pc = 0x3E7FE4u;
    // 0x3e7fe4: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3E7FE4u;
    {
        const bool branch_taken_0x3e7fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7FE4u;
        // 0x3e7fe8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7fe4) {
            ctx->pc = 0x3E80A4u;
            goto label_3e80a4;
        }
    }
    ctx->pc = 0x3E7FECu;
    // 0x3e7fec: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E7FECu;
    {
        const bool branch_taken_0x3e7fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7fec) {
            ctx->pc = 0x3E7FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7FECu;
            // 0x3e7ff0: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E806Cu;
            goto label_3e806c;
        }
    }
    ctx->pc = 0x3E7FF4u;
    // 0x3e7ff4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e7ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e7ff8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3E7FF8u;
    {
        const bool branch_taken_0x3e7ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e7ff8) {
            ctx->pc = 0x3E7FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7FF8u;
            // 0x3e7ffc: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8038u;
            goto label_3e8038;
        }
    }
    ctx->pc = 0x3E8000u;
    // 0x3e8000: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e8000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e8004: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e8004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e8008: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e8008u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e800c: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e800cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e8010: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e8010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3e8014: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E8014u;
    {
        const bool branch_taken_0x3e8014 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E8018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8014u;
        // 0x3e8018: 0xa162ffff  sb          $v0, -0x1($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 4294967295), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8014) {
            ctx->pc = 0x3E8028u;
            goto label_3e8028;
        }
    }
    ctx->pc = 0x3E801Cu;
    // 0x3e801c: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x3e801cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e8020: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E8020u;
    {
        const bool branch_taken_0x3e8020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8020u;
        // 0x3e8024: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8020) {
            ctx->pc = 0x3E802Cu;
            goto label_3e802c;
        }
    }
    ctx->pc = 0x3E8028u;
label_3e8028:
    // 0x3e8028: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x3e8028u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
label_3e802c:
    // 0x3e802c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e802cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e8030: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3e8030u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3e8034: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e8034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e8038:
    // 0x3e8038: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e8038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e803c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e803cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e8040: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e8040u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e8044: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e8044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3e8048: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E8048u;
    {
        const bool branch_taken_0x3e8048 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8048u;
        // 0x3e804c: 0xa1020000  sb          $v0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8048) {
            ctx->pc = 0x3E805Cu;
            goto label_3e805c;
        }
    }
    ctx->pc = 0x3E8050u;
    // 0x3e8050: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e8050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8054: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E8054u;
    {
        const bool branch_taken_0x3e8054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8054u;
        // 0x3e8058: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8054) {
            ctx->pc = 0x3E8060u;
            goto label_3e8060;
        }
    }
    ctx->pc = 0x3E805Cu;
label_3e805c:
    // 0x3e805c: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x3e805cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
label_3e8060:
    // 0x3e8060: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e8060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e8064: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3e8064u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
label_3e8068:
    // 0x3e8068: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e8068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e806c:
    // 0x3e806c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e806cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e8070: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e8070u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e8074: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e8074u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e8078: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e8078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3e807c: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E807Cu;
    {
        const bool branch_taken_0x3e807c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E807Cu;
        // 0x3e8080: 0xa1020000  sb          $v0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e807c) {
            ctx->pc = 0x3E8090u;
            goto label_3e8090;
        }
    }
    ctx->pc = 0x3E8084u;
    // 0x3e8084: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e8084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8088: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E8088u;
    {
        const bool branch_taken_0x3e8088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8088u;
        // 0x3e808c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8088) {
            ctx->pc = 0x3E8094u;
            goto label_3e8094;
        }
    }
    ctx->pc = 0x3E8090u;
label_3e8090:
    // 0x3e8090: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x3e8090u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
label_3e8094:
    // 0x3e8094: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3e8094u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3e8098: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x3e8098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3e809c: 0x10400120  beqz        $v0, . + 4 + (0x120 << 2)
    ctx->pc = 0x3E809Cu;
    {
        const bool branch_taken_0x3e809c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E80A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E809Cu;
        // 0x3e80a0: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e809c) {
            ctx->pc = 0x3E8520u;
            goto label_3e8520;
        }
    }
    ctx->pc = 0x3E80A4u;
label_3e80a4:
    // 0x3e80a4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3e80a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3e80a8:
    // 0x3e80a8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e80a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e80ac: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e80acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e80b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e80b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e80b4: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e80b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e80b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e80b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3e80bc: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E80BCu;
    {
        const bool branch_taken_0x3e80bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E80C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E80BCu;
        // 0x3e80c0: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e80bc) {
            ctx->pc = 0x3E80D0u;
            goto label_3e80d0;
        }
    }
    ctx->pc = 0x3E80C4u;
    // 0x3e80c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e80c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e80c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E80C8u;
    {
        const bool branch_taken_0x3e80c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E80CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E80C8u;
        // 0x3e80cc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e80c8) {
            ctx->pc = 0x3E80D4u;
            goto label_3e80d4;
        }
    }
    ctx->pc = 0x3E80D0u;
label_3e80d0:
    // 0x3e80d0: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x3e80d0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
label_3e80d4:
    // 0x3e80d4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e80d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e80d8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e80d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e80dc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e80dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e80e0: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e80e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e80e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e80e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3e80e8: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E80E8u;
    {
        const bool branch_taken_0x3e80e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E80ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E80E8u;
        // 0x3e80ec: 0xa0a2ffff  sb          $v0, -0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294967295), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e80e8) {
            ctx->pc = 0x3E80FCu;
            goto label_3e80fc;
        }
    }
    ctx->pc = 0x3E80F0u;
    // 0x3e80f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e80f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e80f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E80F4u;
    {
        const bool branch_taken_0x3e80f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E80F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E80F4u;
        // 0x3e80f8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e80f4) {
            ctx->pc = 0x3E8100u;
            goto label_3e8100;
        }
    }
    ctx->pc = 0x3E80FCu;
label_3e80fc:
    // 0x3e80fc: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x3e80fcu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
label_3e8100:
    // 0x3e8100: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e8100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e8104: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e8104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e8108: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e8108u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e810c: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e810cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e8110: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e8110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3e8114: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E8114u;
    {
        const bool branch_taken_0x3e8114 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E8118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8114u;
        // 0x3e8118: 0xa0a2fffe  sb          $v0, -0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294967294), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8114) {
            ctx->pc = 0x3E8128u;
            goto label_3e8128;
        }
    }
    ctx->pc = 0x3E811Cu;
    // 0x3e811c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e811cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8120: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E8120u;
    {
        const bool branch_taken_0x3e8120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8120u;
        // 0x3e8124: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8120) {
            ctx->pc = 0x3E812Cu;
            goto label_3e812c;
        }
    }
    ctx->pc = 0x3E8128u;
label_3e8128:
    // 0x3e8128: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x3e8128u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
label_3e812c:
    // 0x3e812c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e812cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e8130: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e8130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e8134: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e8134u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e8138: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e8138u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e813c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e813cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3e8140: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E8140u;
    {
        const bool branch_taken_0x3e8140 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E8144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8140u;
        // 0x3e8144: 0xa0a2fffd  sb          $v0, -0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294967293), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8140) {
            ctx->pc = 0x3E8154u;
            goto label_3e8154;
        }
    }
    ctx->pc = 0x3E8148u;
    // 0x3e8148: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e8148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e814c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E814Cu;
    {
        const bool branch_taken_0x3e814c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E814Cu;
        // 0x3e8150: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e814c) {
            ctx->pc = 0x3E8158u;
            goto label_3e8158;
        }
    }
    ctx->pc = 0x3E8154u;
label_3e8154:
    // 0x3e8154: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x3e8154u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
label_3e8158:
    // 0x3e8158: 0x64e70004  daddiu      $a3, $a3, 0x4
    ctx->pc = 0x3e8158u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4);
    // 0x3e815c: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x3e815cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3e8160: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x3E8160u;
    {
        const bool branch_taken_0x3e8160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8160u;
        // 0x3e8164: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8160) {
            ctx->pc = 0x3E80A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e80a8;
        }
    }
    ctx->pc = 0x3E8168u;
    // 0x3e8168: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x3E8168u;
    {
        const bool branch_taken_0x3e8168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8168u;
        // 0x3e816c: 0x92020012  lbu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8168) {
            ctx->pc = 0x3E8524u;
            goto label_3e8524;
        }
    }
    ctx->pc = 0x3E8170u;
label_3e8170:
    // 0x3e8170: 0x65220003  daddiu      $v0, $t1, 0x3
    ctx->pc = 0x3e8170u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)3);
    // 0x3e8174: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x3e8174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x3e8178: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e8178u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e817c: 0x6524ffff  daddiu      $a0, $t1, -0x1
    ctx->pc = 0x3e817cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4294967295);
    // 0x3e8180: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3e8180u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3e8184: 0xa35821  addu        $t3, $a1, $v1
    ctx->pc = 0x3e8184u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3e8188: 0x427b8  dsll        $a0, $a0, 30
    ctx->pc = 0x3e8188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 30);
    // 0x3e818c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3e818cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3e8190: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3e8190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3e8194: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3e8194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3e8198: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3e8198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3e819c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3e819cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3e81a0: 0x2563ffff  addiu       $v1, $t3, -0x1
    ctx->pc = 0x3e81a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3e81a4: 0x22078  dsll        $a0, $v0, 1
    ctx->pc = 0x3e81a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 1);
    // 0x3e81a8: 0x112000dd  beqz        $t1, . + 4 + (0xDD << 2)
    ctx->pc = 0x3E81A8u;
    {
        const bool branch_taken_0x3e81a8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E81ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E81A8u;
        // 0x3e81ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e81a8) {
            ctx->pc = 0x3E8520u;
            goto label_3e8520;
        }
    }
    ctx->pc = 0x3E81B0u;
    // 0x3e81b0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3e81b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e81b4: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x3e81b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3e81b8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3e81b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e81bc: 0x19200022  blez        $t1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3E81BCu;
    {
        const bool branch_taken_0x3e81bc = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3E81C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E81BCu;
        // 0x3e81c0: 0x31230003  andi        $v1, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e81bc) {
            ctx->pc = 0x3E8248u;
            goto label_3e8248;
        }
    }
    ctx->pc = 0x3E81C4u;
    // 0x3e81c4: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3E81C4u;
    {
        const bool branch_taken_0x3e81c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E81C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E81C4u;
        // 0x3e81c8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e81c4) {
            ctx->pc = 0x3E8284u;
            goto label_3e8284;
        }
    }
    ctx->pc = 0x3E81CCu;
    // 0x3e81cc: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E81CCu;
    {
        const bool branch_taken_0x3e81cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e81cc) {
            ctx->pc = 0x3E81D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E81CCu;
            // 0x3e81d0: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E824Cu;
            goto label_3e824c;
        }
    }
    ctx->pc = 0x3E81D4u;
    // 0x3e81d4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e81d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e81d8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3E81D8u;
    {
        const bool branch_taken_0x3e81d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e81d8) {
            ctx->pc = 0x3E81DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E81D8u;
            // 0x3e81dc: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8218u;
            goto label_3e8218;
        }
    }
    ctx->pc = 0x3E81E0u;
    // 0x3e81e0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e81e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e81e4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e81e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e81e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e81e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e81ec: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e81ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e81f0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3e81f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3e81f4: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E81F4u;
    {
        const bool branch_taken_0x3e81f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E81F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E81F4u;
        // 0x3e81f8: 0xa162ffff  sb          $v0, -0x1($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 4294967295), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e81f4) {
            ctx->pc = 0x3E8208u;
            goto label_3e8208;
        }
    }
    ctx->pc = 0x3E81FCu;
    // 0x3e81fc: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x3e81fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e8200: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E8200u;
    {
        const bool branch_taken_0x3e8200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8200u;
        // 0x3e8204: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8200) {
            ctx->pc = 0x3E820Cu;
            goto label_3e820c;
        }
    }
    ctx->pc = 0x3E8208u;
label_3e8208:
    // 0x3e8208: 0x64840002  daddiu      $a0, $a0, 0x2
    ctx->pc = 0x3e8208u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)2);
label_3e820c:
    // 0x3e820c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e820cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e8210: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3e8210u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3e8214: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e8214u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e8218:
    // 0x3e8218: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e8218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e821c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e821cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e8220: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e8220u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e8224: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3e8224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3e8228: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E8228u;
    {
        const bool branch_taken_0x3e8228 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8228u;
        // 0x3e822c: 0xa1020000  sb          $v0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8228) {
            ctx->pc = 0x3E823Cu;
            goto label_3e823c;
        }
    }
    ctx->pc = 0x3E8230u;
    // 0x3e8230: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e8230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8234: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E8234u;
    {
        const bool branch_taken_0x3e8234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8234u;
        // 0x3e8238: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8234) {
            ctx->pc = 0x3E8240u;
            goto label_3e8240;
        }
    }
    ctx->pc = 0x3E823Cu;
label_3e823c:
    // 0x3e823c: 0x64840002  daddiu      $a0, $a0, 0x2
    ctx->pc = 0x3e823cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)2);
label_3e8240:
    // 0x3e8240: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e8240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e8244: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3e8244u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
label_3e8248:
    // 0x3e8248: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e8248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e824c:
    // 0x3e824c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e824cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e8250: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e8250u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e8254: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e8254u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e8258: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3e8258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3e825c: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E825Cu;
    {
        const bool branch_taken_0x3e825c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E825Cu;
        // 0x3e8260: 0xa1020000  sb          $v0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e825c) {
            ctx->pc = 0x3E8270u;
            goto label_3e8270;
        }
    }
    ctx->pc = 0x3E8264u;
    // 0x3e8264: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e8264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8268: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E8268u;
    {
        const bool branch_taken_0x3e8268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8268u;
        // 0x3e826c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8268) {
            ctx->pc = 0x3E8274u;
            goto label_3e8274;
        }
    }
    ctx->pc = 0x3E8270u;
label_3e8270:
    // 0x3e8270: 0x64840002  daddiu      $a0, $a0, 0x2
    ctx->pc = 0x3e8270u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)2);
label_3e8274:
    // 0x3e8274: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3e8274u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3e8278: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x3e8278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3e827c: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x3E827Cu;
    {
        const bool branch_taken_0x3e827c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E827Cu;
        // 0x3e8280: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e827c) {
            ctx->pc = 0x3E8520u;
            goto label_3e8520;
        }
    }
    ctx->pc = 0x3E8284u;
label_3e8284:
    // 0x3e8284: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3e8284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3e8288:
    // 0x3e8288: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e8288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e828c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e828cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e8290: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e8290u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e8294: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e8294u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e8298: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3e8298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3e829c: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E829Cu;
    {
        const bool branch_taken_0x3e829c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E82A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E829Cu;
        // 0x3e82a0: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e829c) {
            ctx->pc = 0x3E82B0u;
            goto label_3e82b0;
        }
    }
    ctx->pc = 0x3E82A4u;
    // 0x3e82a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e82a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e82a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E82A8u;
    {
        const bool branch_taken_0x3e82a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E82ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E82A8u;
        // 0x3e82ac: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e82a8) {
            ctx->pc = 0x3E82B4u;
            goto label_3e82b4;
        }
    }
    ctx->pc = 0x3E82B0u;
label_3e82b0:
    // 0x3e82b0: 0x64840002  daddiu      $a0, $a0, 0x2
    ctx->pc = 0x3e82b0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)2);
label_3e82b4:
    // 0x3e82b4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e82b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e82b8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e82b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e82bc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e82bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e82c0: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e82c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e82c4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3e82c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3e82c8: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E82C8u;
    {
        const bool branch_taken_0x3e82c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E82CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E82C8u;
        // 0x3e82cc: 0xa0a2ffff  sb          $v0, -0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294967295), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e82c8) {
            ctx->pc = 0x3E82DCu;
            goto label_3e82dc;
        }
    }
    ctx->pc = 0x3E82D0u;
    // 0x3e82d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e82d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e82d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E82D4u;
    {
        const bool branch_taken_0x3e82d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E82D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E82D4u;
        // 0x3e82d8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e82d4) {
            ctx->pc = 0x3E82E0u;
            goto label_3e82e0;
        }
    }
    ctx->pc = 0x3E82DCu;
label_3e82dc:
    // 0x3e82dc: 0x64840002  daddiu      $a0, $a0, 0x2
    ctx->pc = 0x3e82dcu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)2);
label_3e82e0:
    // 0x3e82e0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e82e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e82e4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e82e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e82e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e82e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e82ec: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e82ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e82f0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3e82f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3e82f4: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E82F4u;
    {
        const bool branch_taken_0x3e82f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E82F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E82F4u;
        // 0x3e82f8: 0xa0a2fffe  sb          $v0, -0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294967294), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e82f4) {
            ctx->pc = 0x3E8308u;
            goto label_3e8308;
        }
    }
    ctx->pc = 0x3E82FCu;
    // 0x3e82fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e82fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8300: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E8300u;
    {
        const bool branch_taken_0x3e8300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8300u;
        // 0x3e8304: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8300) {
            ctx->pc = 0x3E830Cu;
            goto label_3e830c;
        }
    }
    ctx->pc = 0x3E8308u;
label_3e8308:
    // 0x3e8308: 0x64840002  daddiu      $a0, $a0, 0x2
    ctx->pc = 0x3e8308u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)2);
label_3e830c:
    // 0x3e830c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e830cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e8310: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e8310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e8314: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e8314u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e8318: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e8318u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e831c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3e831cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3e8320: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E8320u;
    {
        const bool branch_taken_0x3e8320 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E8324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8320u;
        // 0x3e8324: 0xa0a2fffd  sb          $v0, -0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294967293), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8320) {
            ctx->pc = 0x3E8334u;
            goto label_3e8334;
        }
    }
    ctx->pc = 0x3E8328u;
    // 0x3e8328: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e8328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e832c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E832Cu;
    {
        const bool branch_taken_0x3e832c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E832Cu;
        // 0x3e8330: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e832c) {
            ctx->pc = 0x3E8338u;
            goto label_3e8338;
        }
    }
    ctx->pc = 0x3E8334u;
label_3e8334:
    // 0x3e8334: 0x64840002  daddiu      $a0, $a0, 0x2
    ctx->pc = 0x3e8334u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)2);
label_3e8338:
    // 0x3e8338: 0x64e70004  daddiu      $a3, $a3, 0x4
    ctx->pc = 0x3e8338u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4);
    // 0x3e833c: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x3e833cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3e8340: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x3E8340u;
    {
        const bool branch_taken_0x3e8340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8340u;
        // 0x3e8344: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8340) {
            ctx->pc = 0x3E8288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e8288;
        }
    }
    ctx->pc = 0x3E8348u;
    // 0x3e8348: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x3E8348u;
    {
        const bool branch_taken_0x3e8348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8348u;
        // 0x3e834c: 0x92020012  lbu         $v0, 0x12($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8348) {
            ctx->pc = 0x3E8524u;
            goto label_3e8524;
        }
    }
    ctx->pc = 0x3E8350u;
label_3e8350:
    // 0x3e8350: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x3e8350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x3e8354: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e8354u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e8358: 0x6524ffff  daddiu      $a0, $t1, -0x1
    ctx->pc = 0x3e8358u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4294967295);
    // 0x3e835c: 0xa35821  addu        $t3, $a1, $v1
    ctx->pc = 0x3e835cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3e8360: 0x427f8  dsll        $a0, $a0, 31
    ctx->pc = 0x3e8360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 31);
    // 0x3e8364: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3e8364u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3e8368: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3e8368u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3e836c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e836cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3e8370: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3e8370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3e8374: 0x2563ffff  addiu       $v1, $t3, -0x1
    ctx->pc = 0x3e8374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x3e8378: 0x220b8  dsll        $a0, $v0, 2
    ctx->pc = 0x3e8378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 2);
    // 0x3e837c: 0x11200068  beqz        $t1, . + 4 + (0x68 << 2)
    ctx->pc = 0x3E837Cu;
    {
        const bool branch_taken_0x3e837c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E837Cu;
        // 0x3e8380: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e837c) {
            ctx->pc = 0x3E8520u;
            goto label_3e8520;
        }
    }
    ctx->pc = 0x3E8384u;
    // 0x3e8384: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3e8384u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8388: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3e8388u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e838c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3e838cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8390: 0x19200022  blez        $t1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3E8390u;
    {
        const bool branch_taken_0x3e8390 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3E8394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8390u;
        // 0x3e8394: 0x31230003  andi        $v1, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8390) {
            ctx->pc = 0x3E841Cu;
            goto label_3e841c;
        }
    }
    ctx->pc = 0x3E8398u;
    // 0x3e8398: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3E8398u;
    {
        const bool branch_taken_0x3e8398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8398u;
        // 0x3e839c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8398) {
            ctx->pc = 0x3E8458u;
            goto label_3e8458;
        }
    }
    ctx->pc = 0x3E83A0u;
    // 0x3e83a0: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E83A0u;
    {
        const bool branch_taken_0x3e83a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e83a0) {
            ctx->pc = 0x3E83A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E83A0u;
            // 0x3e83a4: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8420u;
            goto label_3e8420;
        }
    }
    ctx->pc = 0x3E83A8u;
    // 0x3e83a8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3e83a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e83ac: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3E83ACu;
    {
        const bool branch_taken_0x3e83ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e83ac) {
            ctx->pc = 0x3E83B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E83ACu;
            // 0x3e83b0: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E83ECu;
            goto label_3e83ec;
        }
    }
    ctx->pc = 0x3E83B4u;
    // 0x3e83b4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3e83b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e83b8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e83b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e83bc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e83bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e83c0: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e83c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e83c4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e83c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e83c8: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E83C8u;
    {
        const bool branch_taken_0x3e83c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E83CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E83C8u;
        // 0x3e83cc: 0xa162ffff  sb          $v0, -0x1($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 4294967295), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e83c8) {
            ctx->pc = 0x3E83DCu;
            goto label_3e83dc;
        }
    }
    ctx->pc = 0x3E83D0u;
    // 0x3e83d0: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x3e83d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e83d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E83D4u;
    {
        const bool branch_taken_0x3e83d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E83D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E83D4u;
        // 0x3e83d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e83d4) {
            ctx->pc = 0x3E83E0u;
            goto label_3e83e0;
        }
    }
    ctx->pc = 0x3E83DCu;
label_3e83dc:
    // 0x3e83dc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3e83dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e83e0:
    // 0x3e83e0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e83e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e83e4: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3e83e4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3e83e8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e83e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e83ec:
    // 0x3e83ec: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e83ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e83f0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e83f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e83f4: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e83f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e83f8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e83f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e83fc: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E83FCu;
    {
        const bool branch_taken_0x3e83fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E8400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E83FCu;
        // 0x3e8400: 0xa1020000  sb          $v0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e83fc) {
            ctx->pc = 0x3E8410u;
            goto label_3e8410;
        }
    }
    ctx->pc = 0x3E8404u;
    // 0x3e8404: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e8404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8408: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E8408u;
    {
        const bool branch_taken_0x3e8408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8408u;
        // 0x3e840c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8408) {
            ctx->pc = 0x3E8414u;
            goto label_3e8414;
        }
    }
    ctx->pc = 0x3E8410u;
label_3e8410:
    // 0x3e8410: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3e8410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e8414:
    // 0x3e8414: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3e8414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e8418: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3e8418u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
label_3e841c:
    // 0x3e841c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e841cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e8420:
    // 0x3e8420: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e8420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e8424: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e8424u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e8428: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e8428u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e842c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e842cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e8430: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E8430u;
    {
        const bool branch_taken_0x3e8430 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E8434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8430u;
        // 0x3e8434: 0xa1020000  sb          $v0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8430) {
            ctx->pc = 0x3E8444u;
            goto label_3e8444;
        }
    }
    ctx->pc = 0x3E8438u;
    // 0x3e8438: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e8438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e843c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E843Cu;
    {
        const bool branch_taken_0x3e843c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E843Cu;
        // 0x3e8440: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e843c) {
            ctx->pc = 0x3E8448u;
            goto label_3e8448;
        }
    }
    ctx->pc = 0x3E8444u;
label_3e8444:
    // 0x3e8444: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3e8444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e8448:
    // 0x3e8448: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x3e8448u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x3e844c: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x3e844cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3e8450: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x3E8450u;
    {
        const bool branch_taken_0x3e8450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8450u;
        // 0x3e8454: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8450) {
            ctx->pc = 0x3E8520u;
            goto label_3e8520;
        }
    }
    ctx->pc = 0x3E8458u;
label_3e8458:
    // 0x3e8458: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3e8458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e845c: 0x0  nop
    ctx->pc = 0x3e845cu;
    // NOP
label_3e8460:
    // 0x3e8460: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e8460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e8464: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e8464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e8468: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e8468u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e846c: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e846cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e8470: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e8470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e8474: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E8474u;
    {
        const bool branch_taken_0x3e8474 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E8478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8474u;
        // 0x3e8478: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8474) {
            ctx->pc = 0x3E8488u;
            goto label_3e8488;
        }
    }
    ctx->pc = 0x3E847Cu;
    // 0x3e847c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e847cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8480: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E8480u;
    {
        const bool branch_taken_0x3e8480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8480u;
        // 0x3e8484: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8480) {
            ctx->pc = 0x3E848Cu;
            goto label_3e848c;
        }
    }
    ctx->pc = 0x3E8488u;
label_3e8488:
    // 0x3e8488: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3e8488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e848c:
    // 0x3e848c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e848cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e8490: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e8490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e8494: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e8494u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e8498: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e8498u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e849c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e849cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e84a0: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E84A0u;
    {
        const bool branch_taken_0x3e84a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E84A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E84A0u;
        // 0x3e84a4: 0xa0a2ffff  sb          $v0, -0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294967295), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e84a0) {
            ctx->pc = 0x3E84B4u;
            goto label_3e84b4;
        }
    }
    ctx->pc = 0x3E84A8u;
    // 0x3e84a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e84a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e84ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E84ACu;
    {
        const bool branch_taken_0x3e84ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E84B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E84ACu;
        // 0x3e84b0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e84ac) {
            ctx->pc = 0x3E84B8u;
            goto label_3e84b8;
        }
    }
    ctx->pc = 0x3E84B4u;
label_3e84b4:
    // 0x3e84b4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3e84b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e84b8:
    // 0x3e84b8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e84b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e84bc: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e84bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e84c0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e84c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e84c4: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e84c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e84c8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e84c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e84cc: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E84CCu;
    {
        const bool branch_taken_0x3e84cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E84CCu;
        // 0x3e84d0: 0xa0a2fffe  sb          $v0, -0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294967294), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e84cc) {
            ctx->pc = 0x3E84E0u;
            goto label_3e84e0;
        }
    }
    ctx->pc = 0x3E84D4u;
    // 0x3e84d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e84d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e84d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E84D8u;
    {
        const bool branch_taken_0x3e84d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E84DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E84D8u;
        // 0x3e84dc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e84d8) {
            ctx->pc = 0x3E84E4u;
            goto label_3e84e4;
        }
    }
    ctx->pc = 0x3E84E0u;
label_3e84e0:
    // 0x3e84e0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3e84e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e84e4:
    // 0x3e84e4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3e84e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e84e8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3e84e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3e84ec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3e84ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3e84f0: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x3e84f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x3e84f4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e84f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e84f8: 0x148a0004  bne         $a0, $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E84F8u;
    {
        const bool branch_taken_0x3e84f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 10));
        ctx->pc = 0x3E84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E84F8u;
        // 0x3e84fc: 0xa0a2fffd  sb          $v0, -0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294967293), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e84f8) {
            ctx->pc = 0x3E850Cu;
            goto label_3e850c;
        }
    }
    ctx->pc = 0x3E8500u;
    // 0x3e8500: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e8500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8504: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E8504u;
    {
        const bool branch_taken_0x3e8504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8504u;
        // 0x3e8508: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8504) {
            ctx->pc = 0x3E8510u;
            goto label_3e8510;
        }
    }
    ctx->pc = 0x3E850Cu;
label_3e850c:
    // 0x3e850c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3e850cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e8510:
    // 0x3e8510: 0x64e70004  daddiu      $a3, $a3, 0x4
    ctx->pc = 0x3e8510u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4);
    // 0x3e8514: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x3e8514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3e8518: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x3E8518u;
    {
        const bool branch_taken_0x3e8518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8518u;
        // 0x3e851c: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8518) {
            ctx->pc = 0x3E8460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e8460;
        }
    }
    ctx->pc = 0x3E8520u;
label_3e8520:
    // 0x3e8520: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x3e8520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_3e8524:
    // 0x3e8524: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e8524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e8528: 0x92050012  lbu         $a1, 0x12($s0)
    ctx->pc = 0x3e8528u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x3e852c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x3e852cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8530: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3e8530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e8534: 0xa2030011  sb          $v1, 0x11($s0)
    ctx->pc = 0x3e8534u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e8538: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3E8538u;
    SET_GPR_U32(ctx, 31, 0x3E8540u);
    ctx->pc = 0x3E853Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8538u;
    // 0x3e853c: 0xa2020013  sb          $v0, 0x13($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3E8538u, 0x3E8540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8540u;
label_3e8540:
    // 0x3e8540: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x3e8540u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
label_3e8544:
    // 0x3e8544: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e8544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e8548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e8548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e854c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E854Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E854Cu;
        // 0x3e8550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E854Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8554u;
    // 0x3e8554: 0x0  nop
    ctx->pc = 0x3e8554u;
    // NOP
    ctx->pc = 0x3e8558u;
}
