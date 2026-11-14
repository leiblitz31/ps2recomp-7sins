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

// Function: sub_0015F4C0
// Address: 0x15f4c0 - 0x15f600
void sub_0015F4C0_0x15f4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F4C0_0x15f4c0");
#endif

    switch (ctx->pc) {
        case 0x15f51cu: goto label_15f51c;
        case 0x15f530u: goto label_15f530;
        case 0x15f544u: goto label_15f544;
        case 0x15f558u: goto label_15f558;
        case 0x15f568u: goto label_15f568;
        case 0x15f580u: goto label_15f580;
        case 0x15f5b4u: goto label_15f5b4;
        case 0x15f5c8u: goto label_15f5c8;
        case 0x15f5d4u: goto label_15f5d4;
        default: break;
    }

    ctx->pc = 0x15f4c0u;

    // 0x15f4c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15f4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15f4c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15f4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15f4c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15f4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15f4cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f4d0: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x15f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x15f4d4: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x15F4D4u;
    {
        const bool branch_taken_0x15f4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f4d4) {
            ctx->pc = 0x15F5E0u;
            goto label_15f5e0;
        }
    }
    ctx->pc = 0x15F4DCu;
    // 0x15f4dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15f4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f4e0: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x15f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x15f4e4: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x15f4e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x15f4e8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F4E8u;
    {
        const bool branch_taken_0x15f4e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f4e8) {
            ctx->pc = 0x15F4FCu;
            goto label_15f4fc;
        }
    }
    ctx->pc = 0x15F4F0u;
    // 0x15f4f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15f4f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f4f4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x15F4F4u;
    {
        const bool branch_taken_0x15f4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f4f4) {
            ctx->pc = 0x15F5E4u;
            goto label_15f5e4;
        }
    }
    ctx->pc = 0x15F4FCu;
label_15f4fc:
    // 0x15f4fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15f500: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15f500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f504: 0xac430090  sw          $v1, 0x90($v0)
    ctx->pc = 0x15f504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 3));
    // 0x15f508: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15f508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f50c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x15f50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15f510: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x15f510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15f514: 0xc057d80  jal         func_15F600
    ctx->pc = 0x15F514u;
    SET_GPR_U32(ctx, 31, 0x15F51Cu);
    ctx->pc = 0x15F600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F600u, 0x15F514u, 0x15F51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F51Cu;
label_15f51c:
    // 0x15f51c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15f51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f520: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15f520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15f524: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15f524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f528: 0xc057d80  jal         func_15F600
    ctx->pc = 0x15F528u;
    SET_GPR_U32(ctx, 31, 0x15F530u);
    ctx->pc = 0x15F600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F600u, 0x15F528u, 0x15F530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F530u;
label_15f530:
    // 0x15f530: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15f530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f534: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15f534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f538: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15f538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f53c: 0xc057d80  jal         func_15F600
    ctx->pc = 0x15F53Cu;
    SET_GPR_U32(ctx, 31, 0x15F544u);
    ctx->pc = 0x15F600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F600u, 0x15F53Cu, 0x15F544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F544u;
label_15f544:
    // 0x15f544: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15f544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f548: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15f548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f54c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15f54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15f550: 0xc057d80  jal         func_15F600
    ctx->pc = 0x15F550u;
    SET_GPR_U32(ctx, 31, 0x15F558u);
    ctx->pc = 0x15F600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F600u, 0x15F550u, 0x15F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F558u;
label_15f558:
    // 0x15f558: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15f558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f55c: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x15f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x15f560: 0xc057954  jal         func_15E550
    ctx->pc = 0x15F560u;
    SET_GPR_U32(ctx, 31, 0x15F568u);
    ctx->pc = 0x15E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E550u, 0x15F560u, 0x15F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F568u;
label_15f568:
    // 0x15f568: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15F568u;
    {
        const bool branch_taken_0x15f568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f568) {
            ctx->pc = 0x15F5BCu;
            goto label_15f5bc;
        }
    }
    ctx->pc = 0x15F570u;
    // 0x15f570: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15f570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f574: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x15f574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x15f578: 0xc057954  jal         func_15E550
    ctx->pc = 0x15F578u;
    SET_GPR_U32(ctx, 31, 0x15F580u);
    ctx->pc = 0x15E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E550u, 0x15F578u, 0x15F580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F580u;
label_15f580:
    // 0x15f580: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15f580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f584: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x15f584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x15f588: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15f588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15f58c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x15f58cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x15f590: 0x1810  mfhi        $v1
    ctx->pc = 0x15f590u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x15f594: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15f594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f598: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x15f598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x15f59c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f5a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15f5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f5a4: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x15f5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x15f5a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15f5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f5ac: 0xc0584ec  jal         func_1613B0
    ctx->pc = 0x15F5ACu;
    SET_GPR_U32(ctx, 31, 0x15F5B4u);
    ctx->pc = 0x1613B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1613B0u, 0x15F5ACu, 0x15F5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F5B4u;
label_15f5b4:
    // 0x15f5b4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f5b8: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x15f5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_15f5bc:
    // 0x15f5bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f5c0: 0xc0580cc  jal         func_160330
    ctx->pc = 0x15F5C0u;
    SET_GPR_U32(ctx, 31, 0x15F5C8u);
    ctx->pc = 0x160330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160330u, 0x15F5C0u, 0x15F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F5C8u;
label_15f5c8:
    // 0x15f5c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15f5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f5cc: 0xc057dc4  jal         func_15F710
    ctx->pc = 0x15F5CCu;
    SET_GPR_U32(ctx, 31, 0x15F5D4u);
    ctx->pc = 0x15F710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F710u, 0x15F5CCu, 0x15F5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F5D4u;
label_15f5d4:
    // 0x15f5d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15f5d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15F5D8u;
    {
        const bool branch_taken_0x15f5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f5d8) {
            ctx->pc = 0x15F5E4u;
            goto label_15f5e4;
        }
    }
    ctx->pc = 0x15F5E0u;
label_15f5e0:
    // 0x15f5e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15f5e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f5e4:
    // 0x15f5e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15f5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f5e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15f5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15f5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x15F5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F5F4u;
    // 0x15f5f4: 0x0  nop
    ctx->pc = 0x15f5f4u;
    // NOP
    // 0x15f5f8: 0x0  nop
    ctx->pc = 0x15f5f8u;
    // NOP
    // 0x15f5fc: 0x0  nop
    ctx->pc = 0x15f5fcu;
    // NOP
    ctx->pc = 0x15f600u;
}
