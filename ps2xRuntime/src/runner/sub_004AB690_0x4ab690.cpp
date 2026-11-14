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

// Function: sub_004AB690
// Address: 0x4ab690 - 0x4ab818
void sub_004AB690_0x4ab690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB690_0x4ab690");
#endif

    switch (ctx->pc) {
        case 0x4ab6c0u: goto label_4ab6c0;
        case 0x4ab6e4u: goto label_4ab6e4;
        case 0x4ab6ecu: goto label_4ab6ec;
        case 0x4ab738u: goto label_4ab738;
        case 0x4ab788u: goto label_4ab788;
        case 0x4ab7b0u: goto label_4ab7b0;
        default: break;
    }

    ctx->pc = 0x4ab690u;

    // 0x4ab690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ab690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ab694: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ab694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4ab698: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ab698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4ab69c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ab69cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab6a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ab6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ab6a4: 0x2623000c  addiu       $v1, $s1, 0xC
    ctx->pc = 0x4ab6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x4ab6a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ab6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4ab6ac: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x4ab6acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4ab6b0: 0x12030025  beq         $s0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x4AB6B0u;
    {
        const bool branch_taken_0x4ab6b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x4AB6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB6B0u;
        // 0x4ab6b4: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab6b0) {
            ctx->pc = 0x4AB748u;
            goto label_4ab748;
        }
    }
    ctx->pc = 0x4AB6B8u;
    // 0x4ab6b8: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x4ab6b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4ab6bc: 0x0  nop
    ctx->pc = 0x4ab6bcu;
    // NOP
label_4ab6c0:
    // 0x4ab6c0: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x4AB6C0u;
    {
        const bool branch_taken_0x4ab6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab6c0) {
            ctx->pc = 0x4AB6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AB6C0u;
            // 0x4ab6c4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AB740u;
            goto label_4ab740;
        }
    }
    ctx->pc = 0x4AB6C8u;
    // 0x4ab6c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4ab6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4ab6cc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4ab6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4ab6d0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x4ab6d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4ab6d4: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x4AB6D4u;
    {
        const bool branch_taken_0x4ab6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab6d4) {
            ctx->pc = 0x4AB6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AB6D4u;
            // 0x4ab6d8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AB740u;
            goto label_4ab740;
        }
    }
    ctx->pc = 0x4AB6DCu;
    // 0x4ab6dc: 0xc12ae3e  jal         func_4AB8F8
    ctx->pc = 0x4AB6DCu;
    SET_GPR_U32(ctx, 31, 0x4AB6E4u);
    ctx->pc = 0x4AB6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB6DCu;
    // 0x4ab6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB8F8u, 0x4AB6DCu, 0x4AB6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB6E4u;
label_4ab6e4:
    // 0x4ab6e4: 0xc12ae06  jal         func_4AB818
    ctx->pc = 0x4AB6E4u;
    SET_GPR_U32(ctx, 31, 0x4AB6ECu);
    ctx->pc = 0x4AB6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB6E4u;
    // 0x4ab6e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB818u, 0x4AB6E4u, 0x4AB6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB6ECu;
label_4ab6ec:
    // 0x4ab6ec: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x4AB6ECu;
    {
        const bool branch_taken_0x4ab6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ab6ec) {
            ctx->pc = 0x4AB6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AB6ECu;
            // 0x4ab6f0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AB74Cu;
            goto label_4ab74c;
        }
    }
    ctx->pc = 0x4AB6F4u;
    // 0x4ab6f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ab6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ab6f8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4ab6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4ab6fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4ab6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4ab700: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4ab700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4ab704: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ab704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ab708: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4ab708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x4ab70c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4ab70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4ab710: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AB710u;
    {
        const bool branch_taken_0x4ab710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x4ab710) {
            ctx->pc = 0x4AB730u;
            goto label_4ab730;
        }
    }
    ctx->pc = 0x4AB718u;
    // 0x4ab718: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4ab718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4ab71c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ab71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ab720: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4ab720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4ab724: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x4ab724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x4ab728: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4AB728u;
    {
        const bool branch_taken_0x4ab728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB728u;
        // 0x4ab72c: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab728) {
            ctx->pc = 0x4AB748u;
            goto label_4ab748;
        }
    }
    ctx->pc = 0x4AB730u;
label_4ab730:
    // 0x4ab730: 0xc12ae6c  jal         func_4AB9B0
    ctx->pc = 0x4AB730u;
    SET_GPR_U32(ctx, 31, 0x4AB738u);
    ctx->pc = 0x4AB734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AB730u;
    // 0x4ab734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB9B0u, 0x4AB730u, 0x4AB738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AB738u;
label_4ab738:
    // 0x4ab738: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AB738u;
    {
        const bool branch_taken_0x4ab738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB738u;
        // 0x4ab73c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab738) {
            ctx->pc = 0x4AB74Cu;
            goto label_4ab74c;
        }
    }
    ctx->pc = 0x4AB740u;
label_4ab740:
    // 0x4ab740: 0x1603ffdf  bne         $s0, $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x4AB740u;
    {
        const bool branch_taken_0x4ab740 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x4AB744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB740u;
        // 0x4ab744: 0x205102b  sltu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab740) {
            ctx->pc = 0x4AB6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ab6c0;
        }
    }
    ctx->pc = 0x4AB748u;
label_4ab748:
    // 0x4ab748: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ab748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ab74c:
    // 0x4ab74c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ab74cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ab750: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ab750u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ab754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ab754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ab758: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB758u;
        // 0x4ab75c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB760u;
    // 0x4ab760: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x4ab760u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab764: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x4ab764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x4ab768: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x4ab768u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x4ab76c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x4ab76cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab770: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x4ab770u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x4ab774: 0x258b000c  addiu       $t3, $t4, 0xC
    ctx->pc = 0x4ab774u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
    // 0x4ab778: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x4ab778u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x4ab77c: 0x8d88000c  lw          $t0, 0xC($t4)
    ctx->pc = 0x4ab77cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x4ab780: 0x110b001f  beq         $t0, $t3, . + 4 + (0x1F << 2)
    ctx->pc = 0x4AB780u;
    {
        const bool branch_taken_0x4ab780 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 11));
        ctx->pc = 0x4AB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB780u;
        // 0x4ab784: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab780) {
            ctx->pc = 0x4AB800u;
            goto label_4ab800;
        }
    }
    ctx->pc = 0x4AB788u;
label_4ab788:
    // 0x4ab788: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4ab788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4ab78c: 0x246a0001  addiu       $t2, $v1, 0x1
    ctx->pc = 0x4ab78cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4ab790: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x4ab790u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ab794: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4ab794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4ab798: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x4ab798u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x4ab79c: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x4ab79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4ab7a0: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x4ab7a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ab7a4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x4ab7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ab7a8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x4ab7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4ab7ac: 0x0  nop
    ctx->pc = 0x4ab7acu;
    // NOP
label_4ab7b0:
    // 0x4ab7b0: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x4ab7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4ab7b4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x4ab7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x4ab7b8: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x4ab7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x4ab7bc: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x4ab7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x4ab7c0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4ab7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4ab7c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4ab7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4ab7c8: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x4ab7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x4ab7cc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4ab7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ab7d0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x4ab7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4ab7d4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4ab7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4ab7d8: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x4ab7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x4ab7dc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4ab7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ab7e0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4ab7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4ab7e4: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x4ab7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x4ab7e8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4ab7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ab7ec: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x4ab7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x4ab7f0: 0x54c2ffef  bnel        $a2, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x4AB7F0u;
    {
        const bool branch_taken_0x4ab7f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ab7f0) {
            ctx->pc = 0x4AB7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AB7F0u;
            // 0x4ab7f4: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AB7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ab7b0;
        }
    }
    ctx->pc = 0x4AB7F8u;
    // 0x4ab7f8: 0x150bffe3  bne         $t0, $t3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x4AB7F8u;
    {
        const bool branch_taken_0x4ab7f8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 11));
        ctx->pc = 0x4AB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB7F8u;
        // 0x4ab7fc: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab7f8) {
            ctx->pc = 0x4AB788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ab788;
        }
    }
    ctx->pc = 0x4AB800u;
label_4ab800:
    // 0x4ab800: 0x8d820004  lw          $v0, 0x4($t4)
    ctx->pc = 0x4ab800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x4ab804: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x4ab804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ab808: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x4ab808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x4ab80c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB80Cu;
        // 0x4ab810: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB814u;
    // 0x4ab814: 0x0  nop
    ctx->pc = 0x4ab814u;
    // NOP
    ctx->pc = 0x4ab818u;
}
