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

// Function: sub_0037A480
// Address: 0x37a480 - 0x37a550
void sub_0037A480_0x37a480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A480_0x37a480");
#endif

    switch (ctx->pc) {
        case 0x37a4b0u: goto label_37a4b0;
        case 0x37a52cu: goto label_37a52c;
        default: break;
    }

    ctx->pc = 0x37a480u;

    // 0x37a480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37a480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37a484: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37a484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37a488: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37a488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37a48c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x37a48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a490: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37a490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37a494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37a494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37a498: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37a498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a49c: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x37a49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x37a4a0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x37a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x37a4a4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x37a4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x37a4a8: 0xc0e294a  jal         func_38A528
    ctx->pc = 0x37A4A8u;
    SET_GPR_U32(ctx, 31, 0x37A4B0u);
    ctx->pc = 0x37A4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A4A8u;
    // 0x37a4ac: 0x389c3  sra         $s1, $v1, 7 (Delay Slot)
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A528u, 0x37A4A8u, 0x37A4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A4B0u;
label_37a4b0:
    // 0x37a4b0: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x37a4b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x37a4b4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x37a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x37a4b8: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x37A4B8u;
    {
        const bool branch_taken_0x37a4b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A4B8u;
        // 0x37a4bc: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a4b8) {
            ctx->pc = 0x37A4E4u;
            goto label_37a4e4;
        }
    }
    ctx->pc = 0x37A4C0u;
    // 0x37a4c0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x37a4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x37a4c4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x37A4C4u;
    {
        const bool branch_taken_0x37a4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A4C4u;
        // 0x37a4c8: 0x34841002  ori         $a0, $a0, 0x1002 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4098);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a4c4) {
            ctx->pc = 0x37A524u;
            goto label_37a524;
        }
    }
    ctx->pc = 0x37A4CCu;
    // 0x37a4cc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x37a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x37a4d0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x37a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x37a4d4: 0x34841013  ori         $a0, $a0, 0x1013
    ctx->pc = 0x37a4d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4115);
    // 0x37a4d8: 0x34421014  ori         $v0, $v0, 0x1014
    ctx->pc = 0x37a4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4116);
    // 0x37a4dc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x37A4DCu;
    {
        const bool branch_taken_0x37a4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A4DCu;
        // 0x37a4e0: 0x51200b  movn        $a0, $v0, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a4dc) {
            ctx->pc = 0x37A524u;
            goto label_37a524;
        }
    }
    ctx->pc = 0x37A4E4u;
label_37a4e4:
    // 0x37a4e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a4e8: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37A4E8u;
    {
        const bool branch_taken_0x37a4e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x37A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A4E8u;
        // 0x37a4ec: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a4e8) {
            ctx->pc = 0x37A500u;
            goto label_37a500;
        }
    }
    ctx->pc = 0x37A4F0u;
    // 0x37a4f0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x37A4F0u;
    {
        const bool branch_taken_0x37a4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A4F0u;
        // 0x37a4f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a4f0) {
            ctx->pc = 0x37A51Cu;
            goto label_37a51c;
        }
    }
    ctx->pc = 0x37A4F8u;
    // 0x37a4f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37A4F8u;
    {
        const bool branch_taken_0x37a4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A4F8u;
        // 0x37a4fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a4f8) {
            ctx->pc = 0x37A51Cu;
            goto label_37a51c;
        }
    }
    ctx->pc = 0x37A500u;
label_37a500:
    // 0x37a500: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x37a500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x37a504: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x37a504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x37a508: 0x3a230001  xori        $v1, $s1, 0x1
    ctx->pc = 0x37a508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x37a50c: 0x34841013  ori         $a0, $a0, 0x1013
    ctx->pc = 0x37a50cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4115);
    // 0x37a510: 0x34421014  ori         $v0, $v0, 0x1014
    ctx->pc = 0x37a510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4116);
    // 0x37a514: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37A514u;
    {
        const bool branch_taken_0x37a514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A514u;
        // 0x37a518: 0x43200a  movz        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a514) {
            ctx->pc = 0x37A524u;
            goto label_37a524;
        }
    }
    ctx->pc = 0x37A51Cu;
label_37a51c:
    // 0x37a51c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x37a51cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x37a520: 0x34841002  ori         $a0, $a0, 0x1002
    ctx->pc = 0x37a520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4098);
label_37a524:
    // 0x37a524: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x37A524u;
    SET_GPR_U32(ctx, 31, 0x37A52Cu);
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x37A524u, 0x37A52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A52Cu;
label_37a52c:
    // 0x37a52c: 0xae42006c  sw          $v0, 0x6C($s2)
    ctx->pc = 0x37a52cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
    // 0x37a530: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x37a530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a534: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37a534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37a538: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37a538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a53c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37a53cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37a540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a544: 0x3e00008  jr          $ra
    ctx->pc = 0x37A544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A544u;
        // 0x37a548: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A54Cu;
    // 0x37a54c: 0x0  nop
    ctx->pc = 0x37a54cu;
    // NOP
    ctx->pc = 0x37a550u;
}
