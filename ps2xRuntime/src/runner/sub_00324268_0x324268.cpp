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

// Function: sub_00324268
// Address: 0x324268 - 0x324320
void sub_00324268_0x324268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324268_0x324268");
#endif

    switch (ctx->pc) {
        case 0x3242a0u: goto label_3242a0;
        case 0x3242b4u: goto label_3242b4;
        case 0x3242e8u: goto label_3242e8;
        case 0x3242fcu: goto label_3242fc;
        default: break;
    }

    ctx->pc = 0x324268u;

    // 0x324268: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x324268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x32426c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x32426cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x324270: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x324270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x324274: 0x24050114  addiu       $a1, $zero, 0x114
    ctx->pc = 0x324274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x324278: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x324278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x32427c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32427cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324280: 0x8c43b1ec  lw          $v1, -0x4E14($v0)
    ctx->pc = 0x324280u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1ECu));
    // 0x324284: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x324284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324288: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x324288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x32428c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32428cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x324290: 0x2438021  addu        $s0, $s2, $v1
    ctx->pc = 0x324290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x324294: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x324294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x324298: 0xc103322  jal         func_40CC88
    ctx->pc = 0x324298u;
    SET_GPR_U32(ctx, 31, 0x3242A0u);
    ctx->pc = 0x32429Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324298u;
    // 0x32429c: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x324298u, 0x3242A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3242A0u;
label_3242a0:
    // 0x3242a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3242A0u;
    {
        const bool branch_taken_0x3242a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3242A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3242A0u;
        // 0x3242a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3242a0) {
            ctx->pc = 0x3242C0u;
            goto label_3242c0;
        }
    }
    ctx->pc = 0x3242A8u;
    // 0x3242a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3242a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3242ac: 0xc10480a  jal         func_412028
    ctx->pc = 0x3242ACu;
    SET_GPR_U32(ctx, 31, 0x3242B4u);
    ctx->pc = 0x3242B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3242ACu;
    // 0x3242b0: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3242ACu, 0x3242B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3242B4u;
label_3242b4:
    // 0x3242b4: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x3242b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x3242b8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3242B8u;
    {
        const bool branch_taken_0x3242b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3242BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3242B8u;
        // 0x3242bc: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3242b8) {
            ctx->pc = 0x3242C8u;
            goto label_3242c8;
        }
    }
    ctx->pc = 0x3242C0u;
label_3242c0:
    // 0x3242c0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3242C0u;
    {
        const bool branch_taken_0x3242c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3242C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3242C0u;
        // 0x3242c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3242c0) {
            ctx->pc = 0x324304u;
            goto label_324304;
        }
    }
    ctx->pc = 0x3242C8u;
label_3242c8:
    // 0x3242c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3242c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3242cc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3242ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3242d0: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x3242d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x3242d4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3242d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3242d8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3242d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3242dc: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x3242dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x3242e0: 0xc0c8bd0  jal         func_322F40
    ctx->pc = 0x3242E0u;
    SET_GPR_U32(ctx, 31, 0x3242E8u);
    ctx->pc = 0x3242E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3242E0u;
    // 0x3242e4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F40u, 0x3242E0u, 0x3242E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3242E8u;
label_3242e8:
    // 0x3242e8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3242e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3242ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3242ECu;
    {
        const bool branch_taken_0x3242ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3242F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3242ECu;
        // 0x3242f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3242ec) {
            ctx->pc = 0x324304u;
            goto label_324304;
        }
    }
    ctx->pc = 0x3242F4u;
    // 0x3242f4: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x3242F4u;
    SET_GPR_U32(ctx, 31, 0x3242FCu);
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x3242F4u, 0x3242FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3242FCu;
label_3242fc:
    // 0x3242fc: 0xae42007c  sw          $v0, 0x7C($s2)
    ctx->pc = 0x3242fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 2));
    // 0x324300: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x324300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_324304:
    // 0x324304: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x324304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x324308: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x324308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32430c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x32430cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x324310: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x324310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x324314: 0x3e00008  jr          $ra
    ctx->pc = 0x324314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324314u;
        // 0x324318: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32431Cu;
    // 0x32431c: 0x0  nop
    ctx->pc = 0x32431cu;
    // NOP
    ctx->pc = 0x324320u;
}
