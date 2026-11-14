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

// Function: sub_00252460
// Address: 0x252460 - 0x252680
void sub_00252460_0x252460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252460_0x252460");
#endif

    switch (ctx->pc) {
        case 0x2524d8u: goto label_2524d8;
        case 0x25254cu: goto label_25254c;
        case 0x252588u: goto label_252588;
        case 0x2525a8u: goto label_2525a8;
        case 0x2525ccu: goto label_2525cc;
        case 0x252608u: goto label_252608;
        case 0x252630u: goto label_252630;
        case 0x25265cu: goto label_25265c;
        default: break;
    }

    ctx->pc = 0x252460u;

    // 0x252460: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x252460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x252464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x252464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x252468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25246c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25246cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252470: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x252470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x252474: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x252474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x252478: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x252478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x25247c: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x25247cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
    // 0x252480: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x252480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x252484: 0x10600075  beqz        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x252484u;
    {
        const bool branch_taken_0x252484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x252484) {
            ctx->pc = 0x25265Cu;
            goto label_25265c;
        }
    }
    ctx->pc = 0x25248Cu;
    // 0x25248c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x25248cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x252490: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x252490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x252494: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x252494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x252498: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x252498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25249c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x25249cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2524a0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2524a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2524a4: 0x41943  sra         $v1, $a0, 5
    ctx->pc = 0x2524a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
    // 0x2524a8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2524A8u;
    {
        const bool branch_taken_0x2524a8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2524a8) {
            ctx->pc = 0x2524B8u;
            goto label_2524b8;
        }
    }
    ctx->pc = 0x2524B0u;
    // 0x2524b0: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x2524b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x2524b4: 0x21943  sra         $v1, $v0, 5
    ctx->pc = 0x2524b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
label_2524b8:
    // 0x2524b8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2524b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2524bc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2524bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2524c0: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2524C0u;
    {
        const bool branch_taken_0x2524c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2524c0) {
            ctx->pc = 0x252638u;
            goto label_252638;
        }
    }
    ctx->pc = 0x2524C8u;
    // 0x2524c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2524c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2524cc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2524ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2524d0: 0xc094ae0  jal         func_252B80
    ctx->pc = 0x2524D0u;
    SET_GPR_U32(ctx, 31, 0x2524D8u);
    ctx->pc = 0x252B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252B80u, 0x2524D0u, 0x2524D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2524D8u;
label_2524d8:
    // 0x2524d8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2524d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2524dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2524dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2524e0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2524e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2524e4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2524e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2524e8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2524e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2524ec: 0x38943  sra         $s1, $v1, 5
    ctx->pc = 0x2524ecu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 5));
    // 0x2524f0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2524F0u;
    {
        const bool branch_taken_0x2524f0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2524f0) {
            ctx->pc = 0x252500u;
            goto label_252500;
        }
    }
    ctx->pc = 0x2524F8u;
    // 0x2524f8: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x2524f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x2524fc: 0x28943  sra         $s1, $v0, 5
    ctx->pc = 0x2524fcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 5));
label_252500:
    // 0x252500: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x252500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x252504: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x252504u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x252508: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x252508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25250c: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x25250cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x252510: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x252510u;
    {
        const bool branch_taken_0x252510 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x252510) {
            ctx->pc = 0x2525B0u;
            goto label_2525b0;
        }
    }
    ctx->pc = 0x252518u;
    // 0x252518: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x252518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25251c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x25251cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x252520: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x252520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x252524: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x252524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x252528: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x252528u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25252c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x25252cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x252530: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x252530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x252534: 0xa3a0005c  sb          $zero, 0x5C($sp)
    ctx->pc = 0x252534u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x252538: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x252538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x25253c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x25253cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x252540: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x252540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x252544: 0xc094ac0  jal         func_252B00
    ctx->pc = 0x252544u;
    SET_GPR_U32(ctx, 31, 0x25254Cu);
    ctx->pc = 0x252B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252B00u, 0x252544u, 0x25254Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25254Cu;
label_25254c:
    // 0x25254c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x25254cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x252550: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x252550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x252554: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x252554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x252558: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x252558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25255c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25255cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x252560: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x252560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x252564: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x252564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x252568: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x252568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x25256c: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x25256cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x252570: 0xa3a00058  sb          $zero, 0x58($sp)
    ctx->pc = 0x252570u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x252574: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x252574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x252578: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x252578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25257c: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x25257cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x252580: 0xc094a8c  jal         func_252A30
    ctx->pc = 0x252580u;
    SET_GPR_U32(ctx, 31, 0x252588u);
    ctx->pc = 0x252A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252A30u, 0x252580u, 0x252588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252588u;
label_252588:
    // 0x252588: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x252588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25258c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x25258cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x252590: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x252590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x252594: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x252594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x252598: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x252598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25259c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x25259cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2525a0: 0xc094a74  jal         func_2529D0
    ctx->pc = 0x2525A0u;
    SET_GPR_U32(ctx, 31, 0x2525A8u);
    ctx->pc = 0x2529D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2529D0u, 0x2525A0u, 0x2525A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2525A8u;
label_2525a8:
    // 0x2525a8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2525A8u;
    {
        const bool branch_taken_0x2525a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2525a8) {
            ctx->pc = 0x25265Cu;
            goto label_25265c;
        }
    }
    ctx->pc = 0x2525B0u;
label_2525b0:
    // 0x2525b0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2525b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2525b4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2525b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2525b8: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x2525b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2525bc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2525bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2525c0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2525c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2525c4: 0xc094a64  jal         func_252990
    ctx->pc = 0x2525C4u;
    SET_GPR_U32(ctx, 31, 0x2525CCu);
    ctx->pc = 0x252990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252990u, 0x2525C4u, 0x2525CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2525CCu;
label_2525cc:
    // 0x2525cc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2525ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2525d0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2525d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2525d4: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x2525d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2525d8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2525d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2525dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2525dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2525e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2525e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2525e4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2525e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2525e8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2525e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2525ec: 0xa3a00054  sb          $zero, 0x54($sp)
    ctx->pc = 0x2525ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x2525f0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2525f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2525f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2525f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2525f8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2525f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2525fc: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x2525fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x252600: 0xc094ac0  jal         func_252B00
    ctx->pc = 0x252600u;
    SET_GPR_U32(ctx, 31, 0x252608u);
    ctx->pc = 0x252B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252B00u, 0x252600u, 0x252608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252608u;
label_252608:
    // 0x252608: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x252608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25260c: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x25260cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x252610: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x252610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x252614: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x252614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x252618: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x252618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x25261c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x25261cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x252620: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x252620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252624: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x252624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x252628: 0xc094a74  jal         func_2529D0
    ctx->pc = 0x252628u;
    SET_GPR_U32(ctx, 31, 0x252630u);
    ctx->pc = 0x2529D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2529D0u, 0x252628u, 0x252630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252630u;
label_252630:
    // 0x252630: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x252630u;
    {
        const bool branch_taken_0x252630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252630) {
            ctx->pc = 0x25265Cu;
            goto label_25265c;
        }
    }
    ctx->pc = 0x252638u;
label_252638:
    // 0x252638: 0xa3a00050  sb          $zero, 0x50($sp)
    ctx->pc = 0x252638u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x25263c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x25263cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x252640: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x252640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x252644: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x252644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x252648: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x252648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25264c: 0x8fa80080  lw          $t0, 0x80($sp)
    ctx->pc = 0x25264cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x252650: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x252650u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252654: 0xc0949a0  jal         func_252680
    ctx->pc = 0x252654u;
    SET_GPR_U32(ctx, 31, 0x25265Cu);
    ctx->pc = 0x252680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252680u, 0x252654u, 0x25265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25265Cu;
label_25265c:
    // 0x25265c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25265cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252660: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252668: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x252668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25266c: 0x3e00008  jr          $ra
    ctx->pc = 0x25266Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25266Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252674u;
    // 0x252674: 0x0  nop
    ctx->pc = 0x252674u;
    // NOP
    // 0x252678: 0x0  nop
    ctx->pc = 0x252678u;
    // NOP
    // 0x25267c: 0x0  nop
    ctx->pc = 0x25267cu;
    // NOP
    ctx->pc = 0x252680u;
}
