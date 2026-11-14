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

// Function: sub_0037FBB8
// Address: 0x37fbb8 - 0x37fc88
void sub_0037FBB8_0x37fbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037FBB8_0x37fbb8");
#endif

    switch (ctx->pc) {
        case 0x37fbe4u: goto label_37fbe4;
        case 0x37fc34u: goto label_37fc34;
        default: break;
    }

    ctx->pc = 0x37fbb8u;

    // 0x37fbb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37fbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37fbbc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37fbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37fbc0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37fbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37fbc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x37fbc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fbc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37fbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37fbcc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x37fbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x37fbd0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x37fbd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fbd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37fbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37fbd8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37fbd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fbdc: 0xc0dfc42  jal         func_37F108
    ctx->pc = 0x37FBDCu;
    SET_GPR_U32(ctx, 31, 0x37FBE4u);
    ctx->pc = 0x37FBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FBDCu;
    // 0x37fbe0: 0x8e050100  lw          $a1, 0x100($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F108u, 0x37FBDCu, 0x37FBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FBE4u;
label_37fbe4:
    // 0x37fbe4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37fbe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fbe8: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x37FBE8u;
    {
        const bool branch_taken_0x37fbe8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FBE8u;
        // 0x37fbec: 0x3c0438e3  lui         $a0, 0x38E3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14563 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fbe8) {
            ctx->pc = 0x37FC68u;
            goto label_37fc68;
        }
    }
    ctx->pc = 0x37FBF0u;
    // 0x37fbf0: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x37fbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x37fbf4: 0x34848e39  ori         $a0, $a0, 0x8E39
    ctx->pc = 0x37fbf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36409);
    // 0x37fbf8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x37fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37fbfc: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x37fbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x37fc00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x37fc04: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x37fc04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37fc08: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x37fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x37fc0c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x37fc0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37fc10: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x37fc10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x37fc14: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x37fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37fc18: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x37fc18u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37fc1c: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x37fc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x37fc20: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x37fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37fc24: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37FC24u;
    {
        const bool branch_taken_0x37fc24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fc24) {
            ctx->pc = 0x37FC40u;
            goto label_37fc40;
        }
    }
    ctx->pc = 0x37FC2Cu;
    // 0x37fc2c: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x37FC2Cu;
    SET_GPR_U32(ctx, 31, 0x37FC34u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x37FC2Cu, 0x37FC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FC34u;
label_37fc34:
    // 0x37fc34: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x37fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37fc38: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x37fc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x37fc3c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x37fc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_37fc40:
    // 0x37fc40: 0x5240000a  beql        $s2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x37FC40u;
    {
        const bool branch_taken_0x37fc40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x37fc40) {
            ctx->pc = 0x37FC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FC40u;
            // 0x37fc44: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FC6Cu;
            goto label_37fc6c;
        }
    }
    ctx->pc = 0x37FC48u;
    // 0x37fc48: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x37fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x37fc4c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37fc50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37fc54: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x37fc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x37fc58: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x37fc58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
    // 0x37fc5c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x37fc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x37fc60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37FC60u;
    {
        const bool branch_taken_0x37fc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FC60u;
        // 0x37fc64: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fc60) {
            ctx->pc = 0x37FC6Cu;
            goto label_37fc6c;
        }
    }
    ctx->pc = 0x37FC68u;
label_37fc68:
    // 0x37fc68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37fc68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37fc6c:
    // 0x37fc6c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37fc6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37fc70: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37fc70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37fc74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37fc74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37fc78: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x37fc78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37fc7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37fc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37fc80: 0x3e00008  jr          $ra
    ctx->pc = 0x37FC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FC80u;
        // 0x37fc84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FC88u;
}
