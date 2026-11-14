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

// Function: sub_00412BB0
// Address: 0x412bb0 - 0x412c28
void sub_00412BB0_0x412bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412BB0_0x412bb0");
#endif

    switch (ctx->pc) {
        case 0x412bb0u: goto label_412bb0;
        case 0x412bb4u: goto label_412bb4;
        case 0x412bb8u: goto label_412bb8;
        case 0x412bbcu: goto label_412bbc;
        case 0x412bc0u: goto label_412bc0;
        case 0x412bc4u: goto label_412bc4;
        case 0x412bc8u: goto label_412bc8;
        case 0x412bccu: goto label_412bcc;
        case 0x412bd0u: goto label_412bd0;
        case 0x412bd4u: goto label_412bd4;
        case 0x412bd8u: goto label_412bd8;
        case 0x412bdcu: goto label_412bdc;
        case 0x412be0u: goto label_412be0;
        case 0x412be4u: goto label_412be4;
        case 0x412be8u: goto label_412be8;
        case 0x412becu: goto label_412bec;
        case 0x412bf0u: goto label_412bf0;
        case 0x412bf4u: goto label_412bf4;
        case 0x412bf8u: goto label_412bf8;
        case 0x412bfcu: goto label_412bfc;
        case 0x412c00u: goto label_412c00;
        case 0x412c04u: goto label_412c04;
        case 0x412c08u: goto label_412c08;
        case 0x412c0cu: goto label_412c0c;
        case 0x412c10u: goto label_412c10;
        case 0x412c14u: goto label_412c14;
        case 0x412c18u: goto label_412c18;
        case 0x412c1cu: goto label_412c1c;
        case 0x412c20u: goto label_412c20;
        case 0x412c24u: goto label_412c24;
        default: break;
    }

    ctx->pc = 0x412bb0u;

label_412bb0:
    // 0x412bb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x412bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_412bb4:
    // 0x412bb4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x412bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_412bb8:
    // 0x412bb8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x412bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_412bbc:
    // 0x412bbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x412bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_412bc0:
    // 0x412bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x412bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_412bc4:
    // 0x412bc4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x412bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_412bc8:
    // 0x412bc8: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x412bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_412bcc:
    // 0x412bcc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_412bd0:
    if (ctx->pc == 0x412BD0u) {
        ctx->pc = 0x412BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412BCCu;
        // 0x412bd0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412BD4u;
        goto label_412bd4;
    }
    ctx->pc = 0x412BCCu;
    {
        const bool branch_taken_0x412bcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x412BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412BCCu;
        // 0x412bd0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412bcc) {
            ctx->pc = 0x412C08u;
            goto label_412c08;
        }
    }
    ctx->pc = 0x412BD4u;
label_412bd4:
    // 0x412bd4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x412bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_412bd8:
    // 0x412bd8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_412bdc:
    if (ctx->pc == 0x412BDCu) {
        ctx->pc = 0x412BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412BD8u;
        // 0x412bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412BE0u;
        goto label_412be0;
    }
    ctx->pc = 0x412BD8u;
    {
        const bool branch_taken_0x412bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412BD8u;
        // 0x412bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412bd8) {
            ctx->pc = 0x412BFCu;
            goto label_412bfc;
        }
    }
    ctx->pc = 0x412BE0u;
label_412be0:
    // 0x412be0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x412be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_412be4:
    // 0x412be4: 0x40f809  jalr        $v0
label_412be8:
    if (ctx->pc == 0x412BE8u) {
        ctx->pc = 0x412BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412BE4u;
        // 0x412be8: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412BECu;
        goto label_412bec;
    }
    ctx->pc = 0x412BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x412BECu);
        ctx->pc = 0x412BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412BE4u;
        // 0x412be8: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412BE4u, 0x412BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412BECu;
label_412bec:
    // 0x412bec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x412becu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_412bf0:
    // 0x412bf0: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
label_412bf4:
    if (ctx->pc == 0x412BF4u) {
        ctx->pc = 0x412BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412BF0u;
        // 0x412bf4: 0x2622000c  addiu       $v0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412BF8u;
        goto label_412bf8;
    }
    ctx->pc = 0x412BF0u;
    {
        const bool branch_taken_0x412bf0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x412BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412BF0u;
        // 0x412bf4: 0x2622000c  addiu       $v0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412bf0) {
            ctx->pc = 0x412BFCu;
            goto label_412bfc;
        }
    }
    ctx->pc = 0x412BF8u;
label_412bf8:
    // 0x412bf8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x412bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_412bfc:
    // 0x412bfc: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x412bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_412c00:
    // 0x412c00: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
label_412c04:
    if (ctx->pc == 0x412C04u) {
        ctx->pc = 0x412C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412C00u;
        // 0x412c04: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412C08u;
        goto label_412c08;
    }
    ctx->pc = 0x412C00u;
    {
        const bool branch_taken_0x412c00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x412c00) {
            ctx->pc = 0x412C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412C00u;
            // 0x412c04: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412bd8;
        }
    }
    ctx->pc = 0x412C08u;
label_412c08:
    // 0x412c08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x412c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_412c0c:
    // 0x412c0c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x412c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_412c10:
    // 0x412c10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x412c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_412c14:
    // 0x412c14: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x412c14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_412c18:
    // 0x412c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x412c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_412c1c:
    // 0x412c1c: 0x3e00008  jr          $ra
label_412c20:
    if (ctx->pc == 0x412C20u) {
        ctx->pc = 0x412C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412C1Cu;
        // 0x412c20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412C24u;
        goto label_412c24;
    }
    ctx->pc = 0x412C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412C1Cu;
        // 0x412c20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x412C24u;
label_412c24:
    // 0x412c24: 0x0  nop
    ctx->pc = 0x412c24u;
    // NOP
    ctx->pc = 0x412c28u;
}
