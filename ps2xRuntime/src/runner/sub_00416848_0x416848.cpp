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

// Function: sub_00416848
// Address: 0x416848 - 0x4168d8
void sub_00416848_0x416848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00416848_0x416848");
#endif

    switch (ctx->pc) {
        case 0x416848u: goto label_416848;
        case 0x41684cu: goto label_41684c;
        case 0x416850u: goto label_416850;
        case 0x416854u: goto label_416854;
        case 0x416858u: goto label_416858;
        case 0x41685cu: goto label_41685c;
        case 0x416860u: goto label_416860;
        case 0x416864u: goto label_416864;
        case 0x416868u: goto label_416868;
        case 0x41686cu: goto label_41686c;
        case 0x416870u: goto label_416870;
        case 0x416874u: goto label_416874;
        case 0x416878u: goto label_416878;
        case 0x41687cu: goto label_41687c;
        case 0x416880u: goto label_416880;
        case 0x416884u: goto label_416884;
        case 0x416888u: goto label_416888;
        case 0x41688cu: goto label_41688c;
        case 0x416890u: goto label_416890;
        case 0x416894u: goto label_416894;
        case 0x416898u: goto label_416898;
        case 0x41689cu: goto label_41689c;
        case 0x4168a0u: goto label_4168a0;
        case 0x4168a4u: goto label_4168a4;
        case 0x4168a8u: goto label_4168a8;
        case 0x4168acu: goto label_4168ac;
        case 0x4168b0u: goto label_4168b0;
        case 0x4168b4u: goto label_4168b4;
        case 0x4168b8u: goto label_4168b8;
        case 0x4168bcu: goto label_4168bc;
        case 0x4168c0u: goto label_4168c0;
        case 0x4168c4u: goto label_4168c4;
        case 0x4168c8u: goto label_4168c8;
        case 0x4168ccu: goto label_4168cc;
        case 0x4168d0u: goto label_4168d0;
        case 0x4168d4u: goto label_4168d4;
        default: break;
    }

    ctx->pc = 0x416848u;

label_416848:
    // 0x416848: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x416848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_41684c:
    // 0x41684c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41684cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_416850:
    // 0x416850: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x416850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_416854:
    // 0x416854: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x416854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_416858:
    // 0x416858: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x416858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_41685c:
    // 0x41685c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x41685cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_416860:
    // 0x416860: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x416860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_416864:
    // 0x416864: 0x8c62e92c  lw          $v0, -0x16D4($v1)
    ctx->pc = 0x416864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961452)));
label_416868:
    // 0x416868: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x416868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41686c:
    // 0x41686c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41686cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_416870:
    // 0x416870: 0x40f809  jalr        $v0
label_416874:
    if (ctx->pc == 0x416874u) {
        ctx->pc = 0x416874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416870u;
        // 0x416874: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416878u;
        goto label_416878;
    }
    ctx->pc = 0x416870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x416878u);
        ctx->pc = 0x416874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416870u;
        // 0x416874: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x416870u, 0x416878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x416878u;
label_416878:
    // 0x416878: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_41687c:
    if (ctx->pc == 0x41687Cu) {
        ctx->pc = 0x41687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416878u;
        // 0x41687c: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x416880u;
        goto label_416880;
    }
    ctx->pc = 0x416878u;
    {
        const bool branch_taken_0x416878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416878u;
        // 0x41687c: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x416878) {
            ctx->pc = 0x4168B8u;
            goto label_4168b8;
        }
    }
    ctx->pc = 0x416880u;
label_416880:
    // 0x416880: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x416880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_416884:
    // 0x416884: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x416884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_416888:
    // 0x416888: 0x2484ca10  addiu       $a0, $a0, -0x35F0
    ctx->pc = 0x416888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
label_41688c:
    // 0x41688c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x41688cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_416890:
    // 0x416890: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x416890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_416894:
    // 0x416894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x416894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_416898:
    // 0x416898: 0xc104aec  jal         func_412BB0
label_41689c:
    if (ctx->pc == 0x41689Cu) {
        ctx->pc = 0x41689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x416898u;
        // 0x41689c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4168A0u;
        goto label_4168a0;
    }
    ctx->pc = 0x416898u;
    SET_GPR_U32(ctx, 31, 0x4168A0u);
    ctx->pc = 0x41689Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x416898u;
    // 0x41689c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x416898u, 0x4168A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4168A0u;
label_4168a0:
    // 0x4168a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4168a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4168a4:
    // 0x4168a4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x4168a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_4168a8:
    // 0x4168a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4168a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4168ac:
    // 0x4168ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4168acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4168b0:
    // 0x4168b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_4168b4:
    if (ctx->pc == 0x4168B4u) {
        ctx->pc = 0x4168B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4168B0u;
        // 0x4168b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4168B8u;
        goto label_4168b8;
    }
    ctx->pc = 0x4168B0u;
    {
        const bool branch_taken_0x4168b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4168B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4168B0u;
        // 0x4168b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4168b0) {
            ctx->pc = 0x4168C0u;
            goto label_4168c0;
        }
    }
    ctx->pc = 0x4168B8u;
label_4168b8:
    // 0x4168b8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4168b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4168bc:
    // 0x4168bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4168bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4168c0:
    // 0x4168c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4168c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4168c4:
    // 0x4168c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4168c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4168c8:
    // 0x4168c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4168c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4168cc:
    // 0x4168cc: 0x3e00008  jr          $ra
label_4168d0:
    if (ctx->pc == 0x4168D0u) {
        ctx->pc = 0x4168D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4168CCu;
        // 0x4168d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4168D4u;
        goto label_4168d4;
    }
    ctx->pc = 0x4168CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4168D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4168CCu;
        // 0x4168d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4168CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4168D4u;
label_4168d4:
    // 0x4168d4: 0x0  nop
    ctx->pc = 0x4168d4u;
    // NOP
    ctx->pc = 0x4168d8u;
}
