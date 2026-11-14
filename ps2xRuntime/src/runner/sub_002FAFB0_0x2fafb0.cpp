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

// Function: sub_002FAFB0
// Address: 0x2fafb0 - 0x2fb068
void sub_002FAFB0_0x2fafb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAFB0_0x2fafb0");
#endif

    ctx->pc = 0x2fafb0u;

    // 0x2fafb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fafb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fafb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fafb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fafb8: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2fafb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fafbc: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2fafbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2fafc0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FAFC0u;
    {
        const bool branch_taken_0x2fafc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFC0u;
        // 0x2fafc4: 0x8c880004  lw          $t0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fafc0) {
            ctx->pc = 0x2FB004u;
            goto label_2fb004;
        }
    }
    ctx->pc = 0x2FAFC8u;
    // 0x2fafc8: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2FAFC8u;
    {
        const bool branch_taken_0x2fafc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFC8u;
        // 0x2fafcc: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fafc8) {
            ctx->pc = 0x2FB018u;
            goto label_2fb018;
        }
    }
    ctx->pc = 0x2FAFD0u;
    // 0x2fafd0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2fafd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fafd4: 0x2882ff82  slti        $v0, $a0, -0x7E
    ctx->pc = 0x2fafd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x2fafd8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2FAFD8u;
    {
        const bool branch_taken_0x2fafd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fafd8) {
            ctx->pc = 0x2FAFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAFD8u;
            // 0x2fafdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB014u;
            goto label_2fb014;
        }
    }
    ctx->pc = 0x2FAFE0u;
    // 0x2fafe0: 0x28820081  slti        $v0, $a0, 0x81
    ctx->pc = 0x2fafe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x2fafe4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FAFE4u;
    {
        const bool branch_taken_0x2fafe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fafe4) {
            ctx->pc = 0x2FAFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAFE4u;
            // 0x2fafe8: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB004u;
            goto label_2fb004;
        }
    }
    ctx->pc = 0x2FAFECu;
    // 0x2fafec: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2fafecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2faff0: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FAFF0u;
    {
        const bool branch_taken_0x2faff0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FAFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFF0u;
        // 0x2faff4: 0x2487007f  addiu       $a3, $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faff0) {
            ctx->pc = 0x2FB010u;
            goto label_2fb010;
        }
    }
    ctx->pc = 0x2FAFF8u;
    // 0x2faff8: 0x4a30006  bgezl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FAFF8u;
    {
        const bool branch_taken_0x2faff8 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2faff8) {
            ctx->pc = 0x2FAFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAFF8u;
            // 0x2faffc: 0x529c2  srl         $a1, $a1, 7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB014u;
            goto label_2fb014;
        }
    }
    ctx->pc = 0x2FB000u;
    // 0x2fb000: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2fb000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2fb004:
    // 0x2fb004: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB004u;
    {
        const bool branch_taken_0x2fb004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB004u;
        // 0x2fb008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb004) {
            ctx->pc = 0x2FB014u;
            goto label_2fb014;
        }
    }
    ctx->pc = 0x2FB00Cu;
    // 0x2fb00c: 0x0  nop
    ctx->pc = 0x2fb00cu;
    // NOP
label_2fb010:
    // 0x2fb010: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x2fb010u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_2fb014:
    // 0x2fb014: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x2fb014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_2fb018:
    // 0x2fb018: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x2fb018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
    // 0x2fb01c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fb01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fb020: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2fb020u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2fb024: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2fb024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2fb028: 0x3c03807f  lui         $v1, 0x807F
    ctx->pc = 0x2fb028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32895 << 16));
    // 0x2fb02c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2fb02cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2fb030: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2fb030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2fb034: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2fb034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2fb038: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x2fb038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2fb03c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2fb03cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2fb040: 0x81fc0  sll         $v1, $t0, 31
    ctx->pc = 0x2fb040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 31));
    // 0x2fb044: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x2fb044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x2fb048: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fb048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fb04c: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x2fb04cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x2fb050: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2fb050u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2fb054: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2fb054u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2fb058: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2fb058u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb05c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB064u;
    // 0x2fb064: 0x0  nop
    ctx->pc = 0x2fb064u;
    // NOP
    ctx->pc = 0x2fb068u;
}
