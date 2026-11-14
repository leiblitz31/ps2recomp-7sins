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

// Function: sub_00307DC8
// Address: 0x307dc8 - 0x307ec8
void sub_00307DC8_0x307dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307DC8_0x307dc8");
#endif

    switch (ctx->pc) {
        case 0x307e08u: goto label_307e08;
        case 0x307e14u: goto label_307e14;
        case 0x307e24u: goto label_307e24;
        case 0x307e38u: goto label_307e38;
        case 0x307e50u: goto label_307e50;
        case 0x307e64u: goto label_307e64;
        case 0x307e80u: goto label_307e80;
        default: break;
    }

    ctx->pc = 0x307dc8u;

    // 0x307dc8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x307dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x307dcc: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x307dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x307dd0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x307dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x307dd4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x307dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x307dd8: 0x3c150030  lui         $s5, 0x30
    ctx->pc = 0x307dd8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)48 << 16));
    // 0x307ddc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x307ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x307de0: 0x3c140030  lui         $s4, 0x30
    ctx->pc = 0x307de0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)48 << 16));
    // 0x307de4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x307de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x307de8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x307de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x307dec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x307decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x307df0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x307df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x307df4: 0x245012a0  addiu       $s0, $v0, 0x12A0
    ctx->pc = 0x307df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4768));
    // 0x307df8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x307df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x307dfc: 0x8c4412a0  lw          $a0, 0x12A0($v0)
    ctx->pc = 0x307dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4F12A0u));
    // 0x307e00: 0xc0c1fb2  jal         func_307EC8
    ctx->pc = 0x307E00u;
    SET_GPR_U32(ctx, 31, 0x307E08u);
    ctx->pc = 0x307E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E00u;
    // 0x307e04: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307EC8u, 0x307E00u, 0x307E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E08u;
label_307e08:
    // 0x307e08: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x307e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x307e0c: 0xc0c1fb2  jal         func_307EC8
    ctx->pc = 0x307E0Cu;
    SET_GPR_U32(ctx, 31, 0x307E14u);
    ctx->pc = 0x307E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E0Cu;
    // 0x307e10: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307EC8u, 0x307E0Cu, 0x307E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E14u;
label_307e14:
    // 0x307e14: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x307e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x307e18: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x307e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x307e1c: 0xc0c1f60  jal         func_307D80
    ctx->pc = 0x307E1Cu;
    SET_GPR_U32(ctx, 31, 0x307E24u);
    ctx->pc = 0x307E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E1Cu;
    // 0x307e20: 0x26a67d40  addiu       $a2, $s5, 0x7D40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307D80u, 0x307E1Cu, 0x307E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E24u;
label_307e24:
    // 0x307e24: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x307e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307e28: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x307e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x307e2c: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x307e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x307e30: 0xc0c1f60  jal         func_307D80
    ctx->pc = 0x307E30u;
    SET_GPR_U32(ctx, 31, 0x307E38u);
    ctx->pc = 0x307E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E30u;
    // 0x307e34: 0x26867d08  addiu       $a2, $s4, 0x7D08 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307D80u, 0x307E30u, 0x307E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E38u;
label_307e38:
    // 0x307e38: 0x2671fdf4  addiu       $s1, $s3, -0x20C
    ctx->pc = 0x307e38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
    // 0x307e3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x307e3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307e40: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x307e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
    // 0x307e44: 0x12300014  beq         $s1, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x307E44u;
    {
        const bool branch_taken_0x307e44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x307E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E44u;
        // 0x307e48: 0x3c16004f  lui         $s6, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307e44) {
            ctx->pc = 0x307E98u;
            goto label_307e98;
        }
    }
    ctx->pc = 0x307E4Cu;
    // 0x307e4c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x307e4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_307e50:
    // 0x307e50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x307E50u;
    {
        const bool branch_taken_0x307e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E50u;
        // 0x307e54: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307e50) {
            ctx->pc = 0x307E70u;
            goto label_307e70;
        }
    }
    ctx->pc = 0x307E58u;
    // 0x307e58: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x307e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x307e5c: 0xc0c1f60  jal         func_307D80
    ctx->pc = 0x307E5Cu;
    SET_GPR_U32(ctx, 31, 0x307E64u);
    ctx->pc = 0x307E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E5Cu;
    // 0x307e60: 0x26a67d40  addiu       $a2, $s5, 0x7D40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307D80u, 0x307E5Cu, 0x307E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E64u;
label_307e64:
    // 0x307e64: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x307e64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307e68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x307E68u;
    {
        const bool branch_taken_0x307e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E68u;
        // 0x307e6c: 0x2671fdf4  addiu       $s1, $s3, -0x20C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307e68) {
            ctx->pc = 0x307E88u;
            goto label_307e88;
        }
    }
    ctx->pc = 0x307E70u;
label_307e70:
    // 0x307e70: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x307e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x307e74: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x307e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x307e78: 0xc0c1f60  jal         func_307D80
    ctx->pc = 0x307E78u;
    SET_GPR_U32(ctx, 31, 0x307E80u);
    ctx->pc = 0x307E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307E78u;
    // 0x307e7c: 0x26867d08  addiu       $a2, $s4, 0x7D08 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307D80u, 0x307E78u, 0x307E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307E80u;
label_307e80:
    // 0x307e80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x307e80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307e84: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x307e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
label_307e88:
    // 0x307e88: 0x1630fff1  bne         $s1, $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x307E88u;
    {
        const bool branch_taken_0x307e88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x307E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E88u;
        // 0x307e8c: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x307e88) {
            ctx->pc = 0x307E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307e50;
        }
    }
    ctx->pc = 0x307E90u;
    // 0x307e90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x307E90u;
    {
        const bool branch_taken_0x307e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307E90u;
        // 0x307e94: 0xaed11298  sw          $s1, 0x1298($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4760), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307e90) {
            ctx->pc = 0x307E9Cu;
            goto label_307e9c;
        }
    }
    ctx->pc = 0x307E98u;
label_307e98:
    // 0x307e98: 0xaed11298  sw          $s1, 0x1298($s6)
    ctx->pc = 0x307e98u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4760), GPR_U32(ctx, 17));
label_307e9c:
    // 0x307e9c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x307e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x307ea0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x307ea0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x307ea4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x307ea4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x307ea8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x307ea8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x307eac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x307eacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x307eb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x307eb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x307eb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x307eb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x307eb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x307eb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x307EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307EBCu;
        // 0x307ec0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307EC4u;
    // 0x307ec4: 0x0  nop
    ctx->pc = 0x307ec4u;
    // NOP
    ctx->pc = 0x307ec8u;
}
