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

// Function: sub_00284440
// Address: 0x284440 - 0x284920
void sub_00284440_0x284440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284440_0x284440");
#endif

    switch (ctx->pc) {
        case 0x284460u: goto label_284460;
        case 0x28447cu: goto label_28447c;
        case 0x2844fcu: goto label_2844fc;
        case 0x28451cu: goto label_28451c;
        case 0x28454cu: goto label_28454c;
        case 0x284590u: goto label_284590;
        case 0x2845a0u: goto label_2845a0;
        case 0x2845e8u: goto label_2845e8;
        case 0x284618u: goto label_284618;
        case 0x284630u: goto label_284630;
        case 0x2846b4u: goto label_2846b4;
        case 0x28470cu: goto label_28470c;
        case 0x284724u: goto label_284724;
        case 0x28473cu: goto label_28473c;
        case 0x284764u: goto label_284764;
        case 0x284784u: goto label_284784;
        case 0x284798u: goto label_284798;
        case 0x2847a4u: goto label_2847a4;
        case 0x2847ccu: goto label_2847cc;
        case 0x284894u: goto label_284894;
        case 0x2848b0u: goto label_2848b0;
        case 0x2848e0u: goto label_2848e0;
        default: break;
    }

    ctx->pc = 0x284440u;

    // 0x284440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x284444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x284448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x284448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28444c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28444cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x284450: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x284450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284454: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x284454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x284458: 0xc091174  jal         func_2445D0
    ctx->pc = 0x284458u;
    SET_GPR_U32(ctx, 31, 0x284460u);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x284458u, 0x284460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284460u;
label_284460:
    // 0x284460: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x284460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x284464: 0x24635f90  addiu       $v1, $v1, 0x5F90
    ctx->pc = 0x284464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24464));
    // 0x284468: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x284468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28446c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28446cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x284470: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x284470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284474: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x284474u;
    {
        const bool branch_taken_0x284474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284474) {
            ctx->pc = 0x284490u;
            goto label_284490;
        }
    }
    ctx->pc = 0x28447Cu;
label_28447c:
    // 0x28447c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x28447cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x284480: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x284480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284484: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x284488: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x284488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x28448c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28448cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_284490:
    // 0x284490: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x284490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x284494: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x284494u;
    {
        const bool branch_taken_0x284494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284494) {
            ctx->pc = 0x28447Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28447c;
        }
    }
    ctx->pc = 0x28449Cu;
    // 0x28449c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28449cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2844a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2844a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2844a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2844a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2844a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2844a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2844ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2844ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2844ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2844B4u;
    // 0x2844b4: 0x0  nop
    ctx->pc = 0x2844b4u;
    // NOP
    // 0x2844b8: 0x0  nop
    ctx->pc = 0x2844b8u;
    // NOP
    // 0x2844bc: 0x0  nop
    ctx->pc = 0x2844bcu;
    // NOP
    // 0x2844c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2844c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2844c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2844c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2844c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2844c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2844cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2844ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2844d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2844d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2844d4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2844D4u;
    {
        const bool branch_taken_0x2844d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2844d4) {
            ctx->pc = 0x28451Cu;
            goto label_28451c;
        }
    }
    ctx->pc = 0x2844DCu;
    // 0x2844dc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2844dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2844e0: 0x24635f90  addiu       $v1, $v1, 0x5F90
    ctx->pc = 0x2844e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24464));
    // 0x2844e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2844e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2844e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2844e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2844ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2844ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2844f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2844f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2844f4: 0xc091188  jal         func_244620
    ctx->pc = 0x2844F4u;
    SET_GPR_U32(ctx, 31, 0x2844FCu);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x2844F4u, 0x2844FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2844FCu;
label_2844fc:
    // 0x2844fc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2844fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284500: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x284500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x284504: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x284504u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x284508: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284508u;
    {
        const bool branch_taken_0x284508 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x284508) {
            ctx->pc = 0x28451Cu;
            goto label_28451c;
        }
    }
    ctx->pc = 0x284510u;
    // 0x284510: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284514: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x284514u;
    SET_GPR_U32(ctx, 31, 0x28451Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x284514u, 0x28451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28451Cu;
label_28451c:
    // 0x28451c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28451cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284524: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x284524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x284528: 0x3e00008  jr          $ra
    ctx->pc = 0x284528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284530u;
    // 0x284530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x284534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x284538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x284538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28453c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28453cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x284540: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x284540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284544: 0xc0911a4  jal         func_244690
    ctx->pc = 0x284544u;
    SET_GPR_U32(ctx, 31, 0x28454Cu);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x284544u, 0x28454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28454Cu;
label_28454c:
    // 0x28454c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x28454cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x284550: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x284550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284554: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x284554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x284558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28455c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28455cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x284560: 0x3e00008  jr          $ra
    ctx->pc = 0x284560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284568u;
    // 0x284568: 0x0  nop
    ctx->pc = 0x284568u;
    // NOP
    // 0x28456c: 0x0  nop
    ctx->pc = 0x28456cu;
    // NOP
    // 0x284570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x284570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x284574: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x284574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x284578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x284578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28457c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28457cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x284580: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x284580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x284584: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x284584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284588: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x284588u;
    SET_GPR_U32(ctx, 31, 0x284590u);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x284588u, 0x284590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284590u;
label_284590:
    // 0x284590: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x284590u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x284594: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x284594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284598: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x284598u;
    {
        const bool branch_taken_0x284598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284598) {
            ctx->pc = 0x284644u;
            goto label_284644;
        }
    }
    ctx->pc = 0x2845A0u;
label_2845a0:
    // 0x2845a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2845a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2845a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2845a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2845a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2845a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2845ac: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2845acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2845b0: 0x10020023  beq         $zero, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2845B0u;
    {
        const bool branch_taken_0x2845b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2845b0) {
            ctx->pc = 0x284640u;
            goto label_284640;
        }
    }
    ctx->pc = 0x2845B8u;
    // 0x2845b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2845b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2845bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2845bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2845c0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2845c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2845c4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2845c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2845c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2845c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2845cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2845ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2845d0: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x2845d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2845d4: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x2845d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x2845d8: 0x24a54950  addiu       $a1, $a1, 0x4950
    ctx->pc = 0x2845d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18768));
    // 0x2845dc: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x2845dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2845e0: 0xc0e68da  jal         func_39A368
    ctx->pc = 0x2845E0u;
    SET_GPR_U32(ctx, 31, 0x2845E8u);
    ctx->pc = 0x39A368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A368u, 0x2845E0u, 0x2845E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2845E8u;
label_2845e8:
    // 0x2845e8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2845e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2845ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2845ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2845f0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2845f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2845f4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2845f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2845f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2845f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2845fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2845fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x284600: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x284600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x284604: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x284604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x284608: 0x24a54990  addiu       $a1, $a1, 0x4990
    ctx->pc = 0x284608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18832));
    // 0x28460c: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x28460cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x284610: 0xc0e6954  jal         func_39A550
    ctx->pc = 0x284610u;
    SET_GPR_U32(ctx, 31, 0x284618u);
    ctx->pc = 0x39A550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A550u, 0x284610u, 0x284618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284618u;
label_284618:
    // 0x284618: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x284618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x28461c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x28461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x284624: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x284624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x284628: 0xc0e653c  jal         func_3994F0
    ctx->pc = 0x284628u;
    SET_GPR_U32(ctx, 31, 0x284630u);
    ctx->pc = 0x3994F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3994F0u, 0x284628u, 0x284630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284630u;
label_284630:
    // 0x284630: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x284630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x284634: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x284634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284638: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28463c: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x28463cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_284640:
    // 0x284640: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x284640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_284644:
    // 0x284644: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x284644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x284648: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x284648u;
    {
        const bool branch_taken_0x284648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284648) {
            ctx->pc = 0x2845A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2845a0;
        }
    }
    ctx->pc = 0x284650u;
    // 0x284650: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x284650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284654: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x284654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284658: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x284658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28465c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28465cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284660: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x284660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x284664: 0x3e00008  jr          $ra
    ctx->pc = 0x284664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28466Cu;
    // 0x28466c: 0x0  nop
    ctx->pc = 0x28466cu;
    // NOP
    // 0x284670: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x284670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x284674: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x284674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x284678: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x284678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x28467c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28467cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x284680: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x284680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x284684: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x284684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x284688: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x284688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28468c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28468cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x284690: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x284690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x284694: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x284694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x284698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x284698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28469c: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x28469cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
    // 0x2846a0: 0xafa50160  sw          $a1, 0x160($sp)
    ctx->pc = 0x2846a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 5));
    // 0x2846a4: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x2846a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2846a8: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x2846a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2846ac: 0xc0911dc  jal         func_244770
    ctx->pc = 0x2846ACu;
    SET_GPR_U32(ctx, 31, 0x2846B4u);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x2846ACu, 0x2846B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2846B4u;
label_2846b4:
    // 0x2846b4: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x2846b4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2846b8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2846b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2846bc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2846bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2846c0: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2846C0u;
    {
        const bool branch_taken_0x2846c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2846c0) {
            ctx->pc = 0x2846D8u;
            goto label_2846d8;
        }
    }
    ctx->pc = 0x2846C8u;
    // 0x2846c8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2846c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2846cc: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x2846ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2846d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2846D0u;
    {
        const bool branch_taken_0x2846d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2846d0) {
            ctx->pc = 0x2846E0u;
            goto label_2846e0;
        }
    }
    ctx->pc = 0x2846D8u;
label_2846d8:
    // 0x2846d8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2846d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2846dc: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2846dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2846e0:
    // 0x2846e0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2846e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2846e4: 0x241607d0  addiu       $s6, $zero, 0x7D0
    ctx->pc = 0x2846e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x2846e8: 0x241107d0  addiu       $s1, $zero, 0x7D0
    ctx->pc = 0x2846e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x2846ec: 0x241503e8  addiu       $s5, $zero, 0x3E8
    ctx->pc = 0x2846ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2846f0: 0x10100013  beq         $zero, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2846F0u;
    {
        const bool branch_taken_0x2846f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x2846f0) {
            ctx->pc = 0x284740u;
            goto label_284740;
        }
    }
    ctx->pc = 0x2846F8u;
    // 0x2846f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2846f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2846fc: 0x24050412  addiu       $a1, $zero, 0x412
    ctx->pc = 0x2846fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x284700: 0x24060640  addiu       $a2, $zero, 0x640
    ctx->pc = 0x284700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
    // 0x284704: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x284704u;
    SET_GPR_U32(ctx, 31, 0x28470Cu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x284704u, 0x28470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28470Cu;
label_28470c:
    // 0x28470c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x28470cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284714: 0x24050413  addiu       $a1, $zero, 0x413
    ctx->pc = 0x284714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1043));
    // 0x284718: 0x24060640  addiu       $a2, $zero, 0x640
    ctx->pc = 0x284718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
    // 0x28471c: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x28471Cu;
    SET_GPR_U32(ctx, 31, 0x284724u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x28471Cu, 0x284724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284724u;
label_284724:
    // 0x284724: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x284724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28472c: 0x24050414  addiu       $a1, $zero, 0x414
    ctx->pc = 0x28472cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x284730: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x284730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x284734: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x284734u;
    SET_GPR_U32(ctx, 31, 0x28473Cu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x284734u, 0x28473Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28473Cu;
label_28473c:
    // 0x28473c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x28473cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_284740:
    // 0x284740: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x284740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x284744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284748: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x284748u;
    {
        const bool branch_taken_0x284748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x284748) {
            ctx->pc = 0x2847F0u;
            goto label_2847f0;
        }
    }
    ctx->pc = 0x284750u;
    // 0x284750: 0xa3a000c0  sb          $zero, 0xC0($sp)
    ctx->pc = 0x284750u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 0));
    // 0x284754: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x284754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x284758: 0x2785a278  addiu       $a1, $gp, -0x5D88
    ctx->pc = 0x284758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943352));
    // 0x28475c: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x28475Cu;
    SET_GPR_U32(ctx, 31, 0x284764u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x28475Cu, 0x284764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284764u;
label_284764:
    // 0x284764: 0x2794a280  addiu       $s4, $gp, -0x5D80
    ctx->pc = 0x284764u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943360));
    // 0x284768: 0x1010000b  beq         $zero, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x284768u;
    {
        const bool branch_taken_0x284768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x284768) {
            ctx->pc = 0x284798u;
            goto label_284798;
        }
    }
    ctx->pc = 0x284770u;
    // 0x284770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284774: 0x24050415  addiu       $a1, $zero, 0x415
    ctx->pc = 0x284774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
    // 0x284778: 0x2786a280  addiu       $a2, $gp, -0x5D80
    ctx->pc = 0x284778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943360));
    // 0x28477c: 0xc041a50  jal         func_106940
    ctx->pc = 0x28477Cu;
    SET_GPR_U32(ctx, 31, 0x284784u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x28477Cu, 0x284784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284784u;
label_284784:
    // 0x284784: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x284784u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284788: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x284788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x28478c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28478cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284790: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x284790u;
    SET_GPR_U32(ctx, 31, 0x284798u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x284790u, 0x284798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284798u;
label_284798:
    // 0x284798: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x284798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x28479c: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x28479Cu;
    SET_GPR_U32(ctx, 31, 0x2847A4u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x28479Cu, 0x2847A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847A4u;
label_2847a4:
    // 0x2847a4: 0x2c410005  sltiu       $at, $v0, 0x5
    ctx->pc = 0x2847a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2847a8: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x2847A8u;
    {
        const bool branch_taken_0x2847a8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2847a8) {
            ctx->pc = 0x2847F0u;
            goto label_2847f0;
        }
    }
    ctx->pc = 0x2847B0u;
    // 0x2847b0: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x2847b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x2847b4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2847b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2847b8: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x2847b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x2847bc: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2847bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2847c0: 0x27a6014c  addiu       $a2, $sp, 0x14C
    ctx->pc = 0x2847c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x2847c4: 0xc0a0ff0  jal         func_283FC0
    ctx->pc = 0x2847C4u;
    SET_GPR_U32(ctx, 31, 0x2847CCu);
    ctx->pc = 0x283FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283FC0u, 0x2847C4u, 0x2847CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2847CCu;
label_2847cc:
    // 0x2847cc: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x2847ccu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2847d0: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x2847d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2847d4: 0x10020006  beq         $zero, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2847D4u;
    {
        const bool branch_taken_0x2847d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2847d4) {
            ctx->pc = 0x2847F0u;
            goto label_2847f0;
        }
    }
    ctx->pc = 0x2847DCu;
    // 0x2847dc: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x2847dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x2847e0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x2847e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2847e4: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x2847e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x2847e8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2847E8u;
    {
        const bool branch_taken_0x2847e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2847e8) {
            ctx->pc = 0x2847F0u;
            goto label_2847f0;
        }
    }
    ctx->pc = 0x2847F0u;
label_2847f0:
    // 0x2847f0: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x2847f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
    // 0x2847f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2847f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2847f8: 0x0  nop
    ctx->pc = 0x2847f8u;
    // NOP
    // 0x2847fc: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2847fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x284800: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x284800u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284804: 0x0  nop
    ctx->pc = 0x284804u;
    // NOP
    // 0x284808: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x284808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28480c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x28480cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x284810: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x284810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x284814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284818: 0x0  nop
    ctx->pc = 0x284818u;
    // NOP
    // 0x28481c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28481cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x284820: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x284820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x284824: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x284824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
    // 0x284828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x284828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28482c: 0x0  nop
    ctx->pc = 0x28482cu;
    // NOP
    // 0x284830: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x284830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x284834: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x284834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x284838: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x284838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28483c: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x28483cu;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284840: 0x0  nop
    ctx->pc = 0x284840u;
    // NOP
    // 0x284844: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x284844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x284848: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x284848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28484c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x28484cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x284850: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x284850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x284854: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x284854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284858: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x284858u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28485c: 0x0  nop
    ctx->pc = 0x28485cu;
    // NOP
    // 0x284860: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x284860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x284864: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x284864u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x284868: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x284868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x28486c: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x28486cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x284870: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x284870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x284874: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x284874u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284878: 0x0  nop
    ctx->pc = 0x284878u;
    // NOP
    // 0x28487c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28487cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x284880: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x284880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x284884: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x284884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x284888: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x284888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x28488c: 0xc0e65d6  jal         func_399758
    ctx->pc = 0x28488Cu;
    SET_GPR_U32(ctx, 31, 0x284894u);
    ctx->pc = 0x399758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399758u, 0x28488Cu, 0x284894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284894u;
label_284894:
    // 0x284894: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x284894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x284898: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x284898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    // 0x28489c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x28489cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2848a0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2848a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2848a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2848a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2848a8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2848A8u;
    SET_GPR_U32(ctx, 31, 0x2848B0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2848A8u, 0x2848B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848B0u;
label_2848b0:
    // 0x2848b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2848b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2848b4: 0x1013000a  beq         $zero, $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x2848B4u;
    {
        const bool branch_taken_0x2848b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x2848b4) {
            ctx->pc = 0x2848E0u;
            goto label_2848e0;
        }
    }
    ctx->pc = 0x2848BCu;
    // 0x2848bc: 0x27a20148  addiu       $v0, $sp, 0x148
    ctx->pc = 0x2848bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x2848c0: 0xc780a270  lwc1        $f0, -0x5D90($gp)
    ctx->pc = 0x2848c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2848c4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2848c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2848c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2848c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2848cc: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x2848ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2848d0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2848d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2848d4: 0x27a70148  addiu       $a3, $sp, 0x148
    ctx->pc = 0x2848d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x2848d8: 0xc0a43e4  jal         func_290F90
    ctx->pc = 0x2848D8u;
    SET_GPR_U32(ctx, 31, 0x2848E0u);
    ctx->pc = 0x290F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F90u, 0x2848D8u, 0x2848E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2848E0u;
label_2848e0:
    // 0x2848e0: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2848e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2848e4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2848e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2848e8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2848e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2848ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2848ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2848f0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2848f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2848f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2848f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2848f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2848f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2848fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2848fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284900: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x284900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x284904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284908: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x284908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28490c: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x28490cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x284910: 0x3e00008  jr          $ra
    ctx->pc = 0x284910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284918u;
    // 0x284918: 0x0  nop
    ctx->pc = 0x284918u;
    // NOP
    // 0x28491c: 0x0  nop
    ctx->pc = 0x28491cu;
    // NOP
    ctx->pc = 0x284920u;
}
