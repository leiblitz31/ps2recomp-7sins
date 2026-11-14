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

// Function: sub_00271080
// Address: 0x271080 - 0x271390
void sub_00271080_0x271080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271080_0x271080");
#endif

    switch (ctx->pc) {
        case 0x2710b4u: goto label_2710b4;
        case 0x2710d8u: goto label_2710d8;
        case 0x2710e8u: goto label_2710e8;
        case 0x27110cu: goto label_27110c;
        case 0x271134u: goto label_271134;
        case 0x27114cu: goto label_27114c;
        case 0x2711a0u: goto label_2711a0;
        case 0x2711b8u: goto label_2711b8;
        case 0x2711d0u: goto label_2711d0;
        case 0x2711e8u: goto label_2711e8;
        case 0x271200u: goto label_271200;
        case 0x271238u: goto label_271238;
        case 0x271250u: goto label_271250;
        case 0x271268u: goto label_271268;
        case 0x271280u: goto label_271280;
        case 0x271298u: goto label_271298;
        case 0x2712b8u: goto label_2712b8;
        case 0x2712d0u: goto label_2712d0;
        case 0x2712f0u: goto label_2712f0;
        case 0x271308u: goto label_271308;
        case 0x271320u: goto label_271320;
        case 0x271330u: goto label_271330;
        case 0x27133cu: goto label_27133c;
        case 0x271358u: goto label_271358;
        case 0x271370u: goto label_271370;
        default: break;
    }

    ctx->pc = 0x271080u;

    // 0x271080: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x271080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x271084: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x271084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x271088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x271088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27108c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27108cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x271090: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x271090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x271094: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x271094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
    // 0x271098: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x271098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
    // 0x27109c: 0xafa70160  sw          $a3, 0x160($sp)
    ctx->pc = 0x27109cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 7));
    // 0x2710a0: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2710a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2710a4: 0x24050537  addiu       $a1, $zero, 0x537
    ctx->pc = 0x2710a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1335));
    // 0x2710a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2710a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2710ac: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2710ACu;
    SET_GPR_U32(ctx, 31, 0x2710B4u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2710ACu, 0x2710B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2710B4u;
label_2710b4:
    // 0x2710b4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2710b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2710b8: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2710B8u;
    {
        const bool branch_taken_0x2710b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2710b8) {
            ctx->pc = 0x2710F0u;
            goto label_2710f0;
        }
    }
    ctx->pc = 0x2710C0u;
    // 0x2710c0: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2710c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2710c4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2710c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2710c8: 0x24a5cfc0  addiu       $a1, $a1, -0x3040
    ctx->pc = 0x2710c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954944));
    // 0x2710cc: 0x2786a128  addiu       $a2, $gp, -0x5ED8
    ctx->pc = 0x2710ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943016));
    // 0x2710d0: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x2710D0u;
    SET_GPR_U32(ctx, 31, 0x2710D8u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x2710D0u, 0x2710D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2710D8u;
label_2710d8:
    // 0x2710d8: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x2710d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2710dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2710dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2710e0: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2710E0u;
    SET_GPR_U32(ctx, 31, 0x2710E8u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2710E0u, 0x2710E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2710E8u;
label_2710e8:
    // 0x2710e8: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x2710E8u;
    {
        const bool branch_taken_0x2710e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2710e8) {
            ctx->pc = 0x271370u;
            goto label_271370;
        }
    }
    ctx->pc = 0x2710F0u;
label_2710f0:
    // 0x2710f0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2710f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2710f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2710F4u;
    {
        const bool branch_taken_0x2710f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2710f4) {
            ctx->pc = 0x271114u;
            goto label_271114;
        }
    }
    ctx->pc = 0x2710FCu;
    // 0x2710fc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2710fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271100: 0x2785a12c  addiu       $a1, $gp, -0x5ED4
    ctx->pc = 0x271100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943020));
    // 0x271104: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x271104u;
    SET_GPR_U32(ctx, 31, 0x27110Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x271104u, 0x27110Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27110Cu;
label_27110c:
    // 0x27110c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27110Cu;
    {
        const bool branch_taken_0x27110c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27110c) {
            ctx->pc = 0x27114Cu;
            goto label_27114c;
        }
    }
    ctx->pc = 0x271114u;
label_271114:
    // 0x271114: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x271114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x271118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27111c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27111Cu;
    {
        const bool branch_taken_0x27111c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27111c) {
            ctx->pc = 0x27113Cu;
            goto label_27113c;
        }
    }
    ctx->pc = 0x271124u;
    // 0x271124: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x271124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271128: 0x2785a130  addiu       $a1, $gp, -0x5ED0
    ctx->pc = 0x271128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943024));
    // 0x27112c: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x27112Cu;
    SET_GPR_U32(ctx, 31, 0x271134u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x27112Cu, 0x271134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271134u;
label_271134:
    // 0x271134: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x271134u;
    {
        const bool branch_taken_0x271134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271134) {
            ctx->pc = 0x27114Cu;
            goto label_27114c;
        }
    }
    ctx->pc = 0x27113Cu;
label_27113c:
    // 0x27113c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x27113cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271140: 0x2785a134  addiu       $a1, $gp, -0x5ECC
    ctx->pc = 0x271140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943028));
    // 0x271144: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x271144u;
    SET_GPR_U32(ctx, 31, 0x27114Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x271144u, 0x27114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27114Cu;
label_27114c:
    // 0x27114c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x27114cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x271150: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x271150u;
    {
        const bool branch_taken_0x271150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x271150) {
            ctx->pc = 0x2711D8u;
            goto label_2711d8;
        }
    }
    ctx->pc = 0x271158u;
    // 0x271158: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x271158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27115c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x27115Cu;
    {
        const bool branch_taken_0x27115c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27115c) {
            ctx->pc = 0x2711D8u;
            goto label_2711d8;
        }
    }
    ctx->pc = 0x271164u;
    // 0x271164: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x271164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x271168: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x271168u;
    {
        const bool branch_taken_0x271168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x271168) {
            ctx->pc = 0x2711C0u;
            goto label_2711c0;
        }
    }
    ctx->pc = 0x271170u;
    // 0x271170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271174: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x271174u;
    {
        const bool branch_taken_0x271174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x271174) {
            ctx->pc = 0x2711A8u;
            goto label_2711a8;
        }
    }
    ctx->pc = 0x27117Cu;
    // 0x27117c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271180: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271180u;
    {
        const bool branch_taken_0x271180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x271180) {
            ctx->pc = 0x271190u;
            goto label_271190;
        }
    }
    ctx->pc = 0x271188u;
    // 0x271188: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x271188u;
    {
        const bool branch_taken_0x271188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271188) {
            ctx->pc = 0x2711E8u;
            goto label_2711e8;
        }
    }
    ctx->pc = 0x271190u;
label_271190:
    // 0x271190: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x271190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271194: 0x2785a138  addiu       $a1, $gp, -0x5EC8
    ctx->pc = 0x271194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943032));
    // 0x271198: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x271198u;
    SET_GPR_U32(ctx, 31, 0x2711A0u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x271198u, 0x2711A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2711A0u;
label_2711a0:
    // 0x2711a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2711A0u;
    {
        const bool branch_taken_0x2711a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2711a0) {
            ctx->pc = 0x2711E8u;
            goto label_2711e8;
        }
    }
    ctx->pc = 0x2711A8u;
label_2711a8:
    // 0x2711a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2711a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2711ac: 0x2785a13c  addiu       $a1, $gp, -0x5EC4
    ctx->pc = 0x2711acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943036));
    // 0x2711b0: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2711B0u;
    SET_GPR_U32(ctx, 31, 0x2711B8u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2711B0u, 0x2711B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2711B8u;
label_2711b8:
    // 0x2711b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2711B8u;
    {
        const bool branch_taken_0x2711b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2711b8) {
            ctx->pc = 0x2711E8u;
            goto label_2711e8;
        }
    }
    ctx->pc = 0x2711C0u;
label_2711c0:
    // 0x2711c0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2711c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2711c4: 0x2785a140  addiu       $a1, $gp, -0x5EC0
    ctx->pc = 0x2711c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943040));
    // 0x2711c8: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2711C8u;
    SET_GPR_U32(ctx, 31, 0x2711D0u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2711C8u, 0x2711D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2711D0u;
label_2711d0:
    // 0x2711d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2711D0u;
    {
        const bool branch_taken_0x2711d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2711d0) {
            ctx->pc = 0x2711E8u;
            goto label_2711e8;
        }
    }
    ctx->pc = 0x2711D8u;
label_2711d8:
    // 0x2711d8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2711d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2711dc: 0x2785a144  addiu       $a1, $gp, -0x5EBC
    ctx->pc = 0x2711dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943044));
    // 0x2711e0: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2711E0u;
    SET_GPR_U32(ctx, 31, 0x2711E8u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2711E0u, 0x2711E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2711E8u;
label_2711e8:
    // 0x2711e8: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2711e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2711ec: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2711ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2711f0: 0x24a5cfb0  addiu       $a1, $a1, -0x3050
    ctx->pc = 0x2711f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954928));
    // 0x2711f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2711f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2711f8: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2711F8u;
    SET_GPR_U32(ctx, 31, 0x271200u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2711F8u, 0x271200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271200u;
label_271200:
    // 0x271200: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x271200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271204: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x271204u;
    {
        const bool branch_taken_0x271204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x271204) {
            ctx->pc = 0x271258u;
            goto label_271258;
        }
    }
    ctx->pc = 0x27120Cu;
    // 0x27120c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27120cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271210: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x271210u;
    {
        const bool branch_taken_0x271210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x271210) {
            ctx->pc = 0x271240u;
            goto label_271240;
        }
    }
    ctx->pc = 0x271218u;
    // 0x271218: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271218u;
    {
        const bool branch_taken_0x271218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271218) {
            ctx->pc = 0x271228u;
            goto label_271228;
        }
    }
    ctx->pc = 0x271220u;
    // 0x271220: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x271220u;
    {
        const bool branch_taken_0x271220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271220) {
            ctx->pc = 0x271268u;
            goto label_271268;
        }
    }
    ctx->pc = 0x271228u;
label_271228:
    // 0x271228: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x271228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27122c: 0x2785a148  addiu       $a1, $gp, -0x5EB8
    ctx->pc = 0x27122cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943048));
    // 0x271230: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x271230u;
    SET_GPR_U32(ctx, 31, 0x271238u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x271230u, 0x271238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271238u;
label_271238:
    // 0x271238: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x271238u;
    {
        const bool branch_taken_0x271238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271238) {
            ctx->pc = 0x271268u;
            goto label_271268;
        }
    }
    ctx->pc = 0x271240u;
label_271240:
    // 0x271240: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x271240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271244: 0x2785a14c  addiu       $a1, $gp, -0x5EB4
    ctx->pc = 0x271244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943052));
    // 0x271248: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x271248u;
    SET_GPR_U32(ctx, 31, 0x271250u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x271248u, 0x271250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271250u;
label_271250:
    // 0x271250: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x271250u;
    {
        const bool branch_taken_0x271250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271250) {
            ctx->pc = 0x271268u;
            goto label_271268;
        }
    }
    ctx->pc = 0x271258u;
label_271258:
    // 0x271258: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x271258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27125c: 0x2785a150  addiu       $a1, $gp, -0x5EB0
    ctx->pc = 0x27125cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943056));
    // 0x271260: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x271260u;
    SET_GPR_U32(ctx, 31, 0x271268u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x271260u, 0x271268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271268u;
label_271268:
    // 0x271268: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x271268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x27126c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x27126cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x271270: 0x24a5cfd0  addiu       $a1, $a1, -0x3030
    ctx->pc = 0x271270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954960));
    // 0x271274: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x271274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271278: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x271278u;
    SET_GPR_U32(ctx, 31, 0x271280u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x271278u, 0x271280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271280u;
label_271280:
    // 0x271280: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x271280u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x271284: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x271284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x271288: 0x24050483  addiu       $a1, $zero, 0x483
    ctx->pc = 0x271288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
    // 0x27128c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27128cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271290: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x271290u;
    SET_GPR_U32(ctx, 31, 0x271298u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x271290u, 0x271298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271298u;
label_271298:
    // 0x271298: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x271298u;
    {
        const bool branch_taken_0x271298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271298) {
            ctx->pc = 0x2712D8u;
            goto label_2712d8;
        }
    }
    ctx->pc = 0x2712A0u;
    // 0x2712a0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2712A0u;
    {
        const bool branch_taken_0x2712a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2712a0) {
            ctx->pc = 0x2712C0u;
            goto label_2712c0;
        }
    }
    ctx->pc = 0x2712A8u;
    // 0x2712a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2712a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2712ac: 0x2785a154  addiu       $a1, $gp, -0x5EAC
    ctx->pc = 0x2712acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943060));
    // 0x2712b0: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2712B0u;
    SET_GPR_U32(ctx, 31, 0x2712B8u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2712B0u, 0x2712B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2712B8u;
label_2712b8:
    // 0x2712b8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2712B8u;
    {
        const bool branch_taken_0x2712b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2712b8) {
            ctx->pc = 0x271308u;
            goto label_271308;
        }
    }
    ctx->pc = 0x2712C0u;
label_2712c0:
    // 0x2712c0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2712c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2712c4: 0x2785a158  addiu       $a1, $gp, -0x5EA8
    ctx->pc = 0x2712c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943064));
    // 0x2712c8: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2712C8u;
    SET_GPR_U32(ctx, 31, 0x2712D0u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2712C8u, 0x2712D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2712D0u;
label_2712d0:
    // 0x2712d0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2712D0u;
    {
        const bool branch_taken_0x2712d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2712d0) {
            ctx->pc = 0x271308u;
            goto label_271308;
        }
    }
    ctx->pc = 0x2712D8u;
label_2712d8:
    // 0x2712d8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2712D8u;
    {
        const bool branch_taken_0x2712d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2712d8) {
            ctx->pc = 0x2712F8u;
            goto label_2712f8;
        }
    }
    ctx->pc = 0x2712E0u;
    // 0x2712e0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2712e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2712e4: 0x2785a158  addiu       $a1, $gp, -0x5EA8
    ctx->pc = 0x2712e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943064));
    // 0x2712e8: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2712E8u;
    SET_GPR_U32(ctx, 31, 0x2712F0u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2712E8u, 0x2712F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2712F0u;
label_2712f0:
    // 0x2712f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2712F0u;
    {
        const bool branch_taken_0x2712f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2712f0) {
            ctx->pc = 0x271308u;
            goto label_271308;
        }
    }
    ctx->pc = 0x2712F8u;
label_2712f8:
    // 0x2712f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2712f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2712fc: 0x2785a154  addiu       $a1, $gp, -0x5EAC
    ctx->pc = 0x2712fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943060));
    // 0x271300: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x271300u;
    SET_GPR_U32(ctx, 31, 0x271308u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x271300u, 0x271308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271308u;
label_271308:
    // 0x271308: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x271308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x27130c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x27130cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x271310: 0x24a5cfc0  addiu       $a1, $a1, -0x3040
    ctx->pc = 0x271310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954944));
    // 0x271314: 0x2786a128  addiu       $a2, $gp, -0x5ED8
    ctx->pc = 0x271314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943016));
    // 0x271318: 0xc04206c  jal         func_1081B0
    ctx->pc = 0x271318u;
    SET_GPR_U32(ctx, 31, 0x271320u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x271318u, 0x271320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271320u;
label_271320:
    // 0x271320: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x271320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271324: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x271324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271328: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x271328u;
    SET_GPR_U32(ctx, 31, 0x271330u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x271328u, 0x271330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271330u;
label_271330:
    // 0x271330: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x271330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271334: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x271334u;
    SET_GPR_U32(ctx, 31, 0x27133Cu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x271334u, 0x27133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27133Cu;
label_27133c:
    // 0x27133c: 0x2c410020  sltiu       $at, $v0, 0x20
    ctx->pc = 0x27133cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x271340: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x271340u;
    {
        const bool branch_taken_0x271340 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x271340) {
            ctx->pc = 0x271360u;
            goto label_271360;
        }
    }
    ctx->pc = 0x271348u;
    // 0x271348: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x271348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x27134c: 0x2785a160  addiu       $a1, $gp, -0x5EA0
    ctx->pc = 0x27134cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943072));
    // 0x271350: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x271350u;
    SET_GPR_U32(ctx, 31, 0x271358u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x271350u, 0x271358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271358u;
label_271358:
    // 0x271358: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x271358u;
    {
        const bool branch_taken_0x271358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271358) {
            ctx->pc = 0x271370u;
            goto label_271370;
        }
    }
    ctx->pc = 0x271360u;
label_271360:
    // 0x271360: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x271360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x271364: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x271364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x271368: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x271368u;
    SET_GPR_U32(ctx, 31, 0x271370u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x271368u, 0x271370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271370u;
label_271370:
    // 0x271370: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x271370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271374: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x271374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271378: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27137c: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x27137cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x271380: 0x3e00008  jr          $ra
    ctx->pc = 0x271380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271388u;
    // 0x271388: 0x0  nop
    ctx->pc = 0x271388u;
    // NOP
    // 0x27138c: 0x0  nop
    ctx->pc = 0x27138cu;
    // NOP
    ctx->pc = 0x271390u;
}
