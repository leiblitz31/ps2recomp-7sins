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

// Function: entry_302df8
// Address: 0x302df8 - 0x302ee8
void entry_302df8_0x302ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_302df8_0x302ee8");
#endif

    switch (ctx->pc) {
        case 0x302e14u: goto label_302e14;
        case 0x302e2cu: goto label_302e2c;
        case 0x302e34u: goto label_302e34;
        case 0x302e44u: goto label_302e44;
        case 0x302e58u: goto label_302e58;
        case 0x302e68u: goto label_302e68;
        case 0x302eacu: goto label_302eac;
        case 0x302ebcu: goto label_302ebc;
        case 0x302ed0u: goto label_302ed0;
        default: break;
    }

    ctx->pc = 0x302df8u;

    // 0x302df8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x302df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x302dfc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x302dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x302e00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x302e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302e04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x302e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x302e08: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x302e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x302e0c: 0xc0c0a30  jal         func_3028C0
    ctx->pc = 0x302E0Cu;
    SET_GPR_U32(ctx, 31, 0x302E14u);
    ctx->pc = 0x302E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302E0Cu;
    // 0x302e10: 0x240400fd  addiu       $a0, $zero, 0xFD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028C0u, 0x302E0Cu, 0x302E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302E14u;
label_302e14:
    // 0x302e14: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x302e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x302e18: 0x8c620c1c  lw          $v0, 0xC1C($v1)
    ctx->pc = 0x302e18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F0C1Cu));
    // 0x302e1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302E1Cu;
    {
        const bool branch_taken_0x302e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x302e1c) {
            ctx->pc = 0x302E2Cu;
            goto label_302e2c;
        }
    }
    ctx->pc = 0x302E24u;
    // 0x302e24: 0xc0c0a7a  jal         func_3029E8
    ctx->pc = 0x302E24u;
    SET_GPR_U32(ctx, 31, 0x302E2Cu);
    ctx->pc = 0x3029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3029E8u, 0x302E24u, 0x302E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302E2Cu;
label_302e2c:
    // 0x302e2c: 0xc0c0afc  jal         func_302BF0
    ctx->pc = 0x302E2Cu;
    SET_GPR_U32(ctx, 31, 0x302E34u);
    ctx->pc = 0x302BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302BF0u, 0x302E2Cu, 0x302E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302E34u;
label_302e34:
    // 0x302e34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x302E34u;
    {
        const bool branch_taken_0x302e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302e34) {
            ctx->pc = 0x302E50u;
            goto label_302e50;
        }
    }
    ctx->pc = 0x302E3Cu;
    // 0x302e3c: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x302E3Cu;
    SET_GPR_U32(ctx, 31, 0x302E44u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x302E3Cu, 0x302E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302E44u;
label_302e44:
    // 0x302e44: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x302e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x302e48: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x302E48u;
    {
        const bool branch_taken_0x302e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E48u;
        // 0x302e4c: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e48) {
            ctx->pc = 0x302ED4u;
            goto label_302ed4;
        }
    }
    ctx->pc = 0x302E50u;
label_302e50:
    // 0x302e50: 0xc0c0892  jal         func_302248
    ctx->pc = 0x302E50u;
    SET_GPR_U32(ctx, 31, 0x302E58u);
    ctx->pc = 0x302248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302248u, 0x302E50u, 0x302E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302E58u;
label_302e58:
    // 0x302e58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x302E58u;
    {
        const bool branch_taken_0x302e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E58u;
        // 0x302e5c: 0x3c070061  lui         $a3, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e58) {
            ctx->pc = 0x302E70u;
            goto label_302e70;
        }
    }
    ctx->pc = 0x302E60u;
    // 0x302e60: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x302E60u;
    SET_GPR_U32(ctx, 31, 0x302E68u);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x302E60u, 0x302E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302E68u;
label_302e68:
    // 0x302e68: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x302E68u;
    {
        const bool branch_taken_0x302e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302E68u;
        // 0x302e6c: 0x2402fff0  addiu       $v0, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302e68) {
            ctx->pc = 0x302ED4u;
            goto label_302ed4;
        }
    }
    ctx->pc = 0x302E70u;
label_302e70:
    // 0x302e70: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x302e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x302e74: 0x24511f80  addiu       $s1, $v0, 0x1F80
    ctx->pc = 0x302e74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8064));
    // 0x302e78: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x302e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x302e7c: 0xacf01340  sw          $s0, 0x1340($a3)
    ctx->pc = 0x302e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4928), GPR_U32(ctx, 16));
    // 0x302e80: 0x24842a40  addiu       $a0, $a0, 0x2A40
    ctx->pc = 0x302e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
    // 0x302e84: 0x24e71340  addiu       $a3, $a3, 0x1340
    ctx->pc = 0x302e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4928));
    // 0x302e88: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x302e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x302e8c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x302e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x302e90: 0x240500fd  addiu       $a1, $zero, 0xFD
    ctx->pc = 0x302e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x302e94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x302e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302e98: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x302e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x302e9c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x302e9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302ea0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x302ea0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x302ea4: 0xc0c08d4  jal         func_302350
    ctx->pc = 0x302EA4u;
    SET_GPR_U32(ctx, 31, 0x302EACu);
    ctx->pc = 0x302EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302EA4u;
    // 0x302ea8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302350u, 0x302EA4u, 0x302EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302EACu;
label_302eac:
    // 0x302eac: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x302EACu;
    {
        const bool branch_taken_0x302eac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x302EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302EACu;
        // 0x302eb0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302eac) {
            ctx->pc = 0x302EC4u;
            goto label_302ec4;
        }
    }
    ctx->pc = 0x302EB4u;
    // 0x302eb4: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x302EB4u;
    SET_GPR_U32(ctx, 31, 0x302EBCu);
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x302EB4u, 0x302EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302EBCu;
label_302ebc:
    // 0x302ebc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x302EBCu;
    {
        const bool branch_taken_0x302ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302EBCu;
        // 0x302ec0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302ebc) {
            ctx->pc = 0x302ED4u;
            goto label_302ed4;
        }
    }
    ctx->pc = 0x302EC4u;
label_302ec4:
    // 0x302ec4: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x302ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x302ec8: 0xc0c0a3c  jal         func_3028F0
    ctx->pc = 0x302EC8u;
    SET_GPR_U32(ctx, 31, 0x302ED0u);
    ctx->pc = 0x302ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302EC8u;
    // 0x302ecc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3028F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3028F0u, 0x302EC8u, 0x302ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302ED0u;
label_302ed0:
    // 0x302ed0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x302ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_302ed4:
    // 0x302ed4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x302ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x302ed8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x302ed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302edc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x302edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x302EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302EE0u;
        // 0x302ee4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302EE8u;
}
