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

// Function: sub_001274E0
// Address: 0x1274e0 - 0x1278d0
void sub_001274E0_0x1274e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001274E0_0x1274e0");
#endif

    switch (ctx->pc) {
        case 0x12751cu: goto label_12751c;
        case 0x127558u: goto label_127558;
        case 0x127590u: goto label_127590;
        case 0x1275ccu: goto label_1275cc;
        case 0x1275e0u: goto label_1275e0;
        case 0x1275f8u: goto label_1275f8;
        case 0x127608u: goto label_127608;
        case 0x127620u: goto label_127620;
        case 0x127644u: goto label_127644;
        case 0x1276e4u: goto label_1276e4;
        case 0x1276f4u: goto label_1276f4;
        case 0x12770cu: goto label_12770c;
        case 0x127748u: goto label_127748;
        case 0x127754u: goto label_127754;
        case 0x127888u: goto label_127888;
        default: break;
    }

    ctx->pc = 0x1274e0u;

    // 0x1274e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1274e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1274e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1274e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1274e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1274e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1274ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1274ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1274f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1274f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1274f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1274f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1274f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1274f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1274fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1274fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x127500: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x127500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x127504: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x127504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x127508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x127508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12750c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x12750cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127510: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x127510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x127514: 0xc042330  jal         func_108CC0
    ctx->pc = 0x127514u;
    SET_GPR_U32(ctx, 31, 0x12751Cu);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x127514u, 0x12751Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12751Cu;
label_12751c:
    // 0x12751c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x12751cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x127520: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x127520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x127524: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x127524u;
    {
        const bool branch_taken_0x127524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x127524) {
            ctx->pc = 0x12753Cu;
            goto label_12753c;
        }
    }
    ctx->pc = 0x12752Cu;
    // 0x12752c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12752cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127530: 0x307e00ff  andi        $fp, $v1, 0xFF
    ctx->pc = 0x127530u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x127534: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x127534u;
    {
        const bool branch_taken_0x127534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127534) {
            ctx->pc = 0x127540u;
            goto label_127540;
        }
    }
    ctx->pc = 0x12753Cu;
label_12753c:
    // 0x12753c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x12753cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127540:
    // 0x127540: 0x33d600ff  andi        $s6, $fp, 0xFF
    ctx->pc = 0x127540u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x127544: 0x12c000d4  beqz        $s6, . + 4 + (0xD4 << 2)
    ctx->pc = 0x127544u;
    {
        const bool branch_taken_0x127544 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x127544) {
            ctx->pc = 0x127898u;
            goto label_127898;
        }
    }
    ctx->pc = 0x12754Cu;
    // 0x12754c: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x12754cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x127550: 0xc04939c  jal         func_124E70
    ctx->pc = 0x127550u;
    SET_GPR_U32(ctx, 31, 0x127558u);
    ctx->pc = 0x124E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E70u, 0x127550u, 0x127558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127558u;
label_127558:
    // 0x127558: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x127558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12755c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x12755Cu;
    {
        const bool branch_taken_0x12755c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x12755c) {
            ctx->pc = 0x127574u;
            goto label_127574;
        }
    }
    ctx->pc = 0x127564u;
    // 0x127564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x127564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127568: 0x307700ff  andi        $s7, $v1, 0xFF
    ctx->pc = 0x127568u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12756c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12756Cu;
    {
        const bool branch_taken_0x12756c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12756c) {
            ctx->pc = 0x127578u;
            goto label_127578;
        }
    }
    ctx->pc = 0x127574u;
label_127574:
    // 0x127574: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x127574u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127578:
    // 0x127578: 0x32f600ff  andi        $s6, $s7, 0xFF
    ctx->pc = 0x127578u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x12757c: 0x12c000c6  beqz        $s6, . + 4 + (0xC6 << 2)
    ctx->pc = 0x12757Cu;
    {
        const bool branch_taken_0x12757c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x12757c) {
            ctx->pc = 0x127898u;
            goto label_127898;
        }
    }
    ctx->pc = 0x127584u;
    // 0x127584: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x127584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127588: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x127588u;
    {
        const bool branch_taken_0x127588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127588) {
            ctx->pc = 0x12788Cu;
            goto label_12788c;
        }
    }
    ctx->pc = 0x127590u;
label_127590:
    // 0x127590: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x127590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x127594: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x127594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x127598: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x127598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12759c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12759Cu;
    {
        const bool branch_taken_0x12759c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12759c) {
            ctx->pc = 0x1275ECu;
            goto label_1275ec;
        }
    }
    ctx->pc = 0x1275A4u;
    // 0x1275a4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1275a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1275a8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1275a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1275ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1275acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1275b0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1275B0u;
    {
        const bool branch_taken_0x1275b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1275b0) {
            ctx->pc = 0x1275ECu;
            goto label_1275ec;
        }
    }
    ctx->pc = 0x1275B8u;
    // 0x1275b8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1275b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1275bc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1275bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1275c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1275c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1275c4: 0xc049b18  jal         func_126C60
    ctx->pc = 0x1275C4u;
    SET_GPR_U32(ctx, 31, 0x1275CCu);
    ctx->pc = 0x126C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126C60u, 0x1275C4u, 0x1275CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1275CCu;
label_1275cc:
    // 0x1275cc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1275ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1275d0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1275d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1275d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1275d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1275d8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1275D8u;
    SET_GPR_U32(ctx, 31, 0x1275E0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1275D8u, 0x1275E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1275E0u;
label_1275e0:
    // 0x1275e0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1275e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1275e4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1275e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1275e8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1275e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1275ec:
    // 0x1275ec: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x1275ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1275f0: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x1275F0u;
    SET_GPR_U32(ctx, 31, 0x1275F8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1275F0u, 0x1275F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1275F8u;
label_1275f8:
    // 0x1275f8: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x1275f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1275fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1275fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127600: 0xc0400e0  jal         func_100380
    ctx->pc = 0x127600u;
    SET_GPR_U32(ctx, 31, 0x127608u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x127600u, 0x127608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127608u;
label_127608:
    // 0x127608: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x127608u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12760c: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x12760Cu;
    {
        const bool branch_taken_0x12760c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x12760c) {
            ctx->pc = 0x127624u;
            goto label_127624;
        }
    }
    ctx->pc = 0x127614u;
    // 0x127614: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x127614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127618: 0xc049b30  jal         func_126CC0
    ctx->pc = 0x127618u;
    SET_GPR_U32(ctx, 31, 0x127620u);
    ctx->pc = 0x126CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CC0u, 0x127618u, 0x127620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127620u;
label_127620:
    // 0x127620: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x127620u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127624:
    // 0x127624: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x127624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x127628: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x127628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x12762c: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x12762cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x127630: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x127630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x127634: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x127634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x127638: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x127638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12763c: 0xc08cf44  jal         func_233D10
    ctx->pc = 0x12763Cu;
    SET_GPR_U32(ctx, 31, 0x127644u);
    ctx->pc = 0x233D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233D10u, 0x12763Cu, 0x127644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127644u;
label_127644:
    // 0x127644: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x127644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x127648: 0xa040b485  sb          $zero, -0x4B7B($v0)
    ctx->pc = 0x127648u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x60B485u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x60B485u, _value); } while (0);
    // 0x12764c: 0x300300ff  andi        $v1, $zero, 0xFF
    ctx->pc = 0x12764cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x127650: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x127650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x127654: 0xa043b47c  sb          $v1, -0x4B84($v0)
    ctx->pc = 0x127654u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60B47Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x60B47Cu, _value); } while (0);
    // 0x127658: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x127658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12765c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x12765cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x127660: 0xa043b474  sb          $v1, -0x4B8C($v0)
    ctx->pc = 0x127660u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60B474u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x60B474u, _value); } while (0);
    // 0x127664: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x127664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x127668: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x127668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x12766c: 0xa043b484  sb          $v1, -0x4B7C($v0)
    ctx->pc = 0x12766cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60B484u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x60B484u, _value); } while (0);
    // 0x127670: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x127670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x127674: 0xa382ba28  sb          $v0, -0x45D8($gp)
    ctx->pc = 0x127674u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949416), (uint8_t)GPR_U32(ctx, 2));
    // 0x127678: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x127678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12767c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x12767cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x127680: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x127680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x127684: 0x2442b7e0  addiu       $v0, $v0, -0x4820
    ctx->pc = 0x127684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948832));
    // 0x127688: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12768c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x12768cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x127690: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x127690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127694: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x127694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x127698: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x127698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x12769c: 0x2442b7f0  addiu       $v0, $v0, -0x4810
    ctx->pc = 0x12769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948848));
    // 0x1276a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1276a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1276a4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1276a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1276a8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1276a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1276ac: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1276acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1276b0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1276b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1276b4: 0x2442b800  addiu       $v0, $v0, -0x4800
    ctx->pc = 0x1276b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948864));
    // 0x1276b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1276b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1276bc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1276bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1276c0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1276c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1276c4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1276c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1276c8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1276c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1276cc: 0x2442b810  addiu       $v0, $v0, -0x47F0
    ctx->pc = 0x1276ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948880));
    // 0x1276d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1276d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1276d4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1276d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1276d8: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1276d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1276dc: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x1276DCu;
    SET_GPR_U32(ctx, 31, 0x1276E4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1276DCu, 0x1276E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1276E4u;
label_1276e4:
    // 0x1276e4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1276e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1276e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1276e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1276ec: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1276ECu;
    SET_GPR_U32(ctx, 31, 0x1276F4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1276ECu, 0x1276F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1276F4u;
label_1276f4:
    // 0x1276f4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1276f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1276f8: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1276F8u;
    {
        const bool branch_taken_0x1276f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1276f8) {
            ctx->pc = 0x127710u;
            goto label_127710;
        }
    }
    ctx->pc = 0x127700u;
    // 0x127700: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x127700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127704: 0xc119f38  jal         func_467CE0
    ctx->pc = 0x127704u;
    SET_GPR_U32(ctx, 31, 0x12770Cu);
    ctx->pc = 0x467CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467CE0u, 0x127704u, 0x12770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12770Cu;
label_12770c:
    // 0x12770c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12770cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127710:
    // 0x127710: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x127710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x127714: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x127714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x127718: 0x2442b820  addiu       $v0, $v0, -0x47E0
    ctx->pc = 0x127718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948896));
    // 0x12771c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12771cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127720: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x127720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x127724: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x127724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x127728: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x127728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x12772c: 0x2442b820  addiu       $v0, $v0, -0x47E0
    ctx->pc = 0x12772cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948896));
    // 0x127730: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127734: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x127734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x127738: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x127738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x12773c: 0x8c452210  lw          $a1, 0x2210($v0)
    ctx->pc = 0x12773cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4E2210u));
    // 0x127740: 0xc119f5c  jal         func_467D70
    ctx->pc = 0x127740u;
    SET_GPR_U32(ctx, 31, 0x127748u);
    ctx->pc = 0x467D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467D70u, 0x127740u, 0x127748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127748u;
label_127748:
    // 0x127748: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x127748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12774c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x12774Cu;
    {
        const bool branch_taken_0x12774c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12774c) {
            ctx->pc = 0x12786Cu;
            goto label_12786c;
        }
    }
    ctx->pc = 0x127754u;
label_127754:
    // 0x127754: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x127754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127758: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x127758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x12775c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x12775cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x127760: 0x2442b840  addiu       $v0, $v0, -0x47C0
    ctx->pc = 0x127760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
    // 0x127764: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x127764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127768: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x127768u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x12776c: 0x300200ff  andi        $v0, $zero, 0xFF
    ctx->pc = 0x12776cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x127770: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x127770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x127774: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x127774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x127778: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x127778u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x12777c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12777cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x127780: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x127780u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x127784: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x127784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x127788: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x127788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x12778c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12778cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x127790: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x127790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x127794: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x127794u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x127798: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x127798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12779c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12779cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1277a0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1277a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1277a4: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x1277a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x1277a8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1277a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1277ac: 0x2442b840  addiu       $v0, $v0, -0x47C0
    ctx->pc = 0x1277acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
    // 0x1277b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1277b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1277b4: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1277b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1277b8: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1277b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1277bc: 0x300200ff  andi        $v0, $zero, 0xFF
    ctx->pc = 0x1277bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x1277c0: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1277c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1277c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1277c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1277c8: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x1277c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1277cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1277ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1277d0: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x1277d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x1277d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1277d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1277d8: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x1277d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1277dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1277dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1277e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1277e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1277e4: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1277e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1277e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1277e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1277ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1277ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1277f0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1277f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1277f4: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x1277f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x1277f8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1277f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1277fc: 0x2442b840  addiu       $v0, $v0, -0x47C0
    ctx->pc = 0x1277fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
    // 0x127800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127804: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x127804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x127808: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x127808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x12780c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x12780cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x127810: 0x2442b840  addiu       $v0, $v0, -0x47C0
    ctx->pc = 0x127810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
    // 0x127814: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127818: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x127818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x12781c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x12781cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x127820: 0x2442b840  addiu       $v0, $v0, -0x47C0
    ctx->pc = 0x127820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
    // 0x127824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127828: 0xa4400016  sh          $zero, 0x16($v0)
    ctx->pc = 0x127828u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x12782c: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x12782cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x127830: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x127830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x127834: 0x2442b840  addiu       $v0, $v0, -0x47C0
    ctx->pc = 0x127834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
    // 0x127838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12783c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x12783cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x127840: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x127840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x127844: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x127844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x127848: 0x2442b840  addiu       $v0, $v0, -0x47C0
    ctx->pc = 0x127848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
    // 0x12784c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12784cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127850: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x127850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x127854: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x127854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x127858: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x127858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x12785c: 0x2442b840  addiu       $v0, $v0, -0x47C0
    ctx->pc = 0x12785cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
    // 0x127860: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x127860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x127864: 0xa0400020  sb          $zero, 0x20($v0)
    ctx->pc = 0x127864u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x127868: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x127868u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_12786c:
    // 0x12786c: 0x2e620014  sltiu       $v0, $s3, 0x14
    ctx->pc = 0x12786cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x127870: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x127870u;
    {
        const bool branch_taken_0x127870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127870) {
            ctx->pc = 0x127754u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127754;
        }
    }
    ctx->pc = 0x127878u;
    // 0x127878: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x127878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x12787c: 0x2484b430  addiu       $a0, $a0, -0x4BD0
    ctx->pc = 0x12787cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947888));
    // 0x127880: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x127880u;
    SET_GPR_U32(ctx, 31, 0x127888u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x127880u, 0x127888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127888u;
label_127888:
    // 0x127888: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x127888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12788c:
    // 0x12788c: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x12788cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x127890: 0x1460ff3f  bnez        $v1, . + 4 + (-0xC1 << 2)
    ctx->pc = 0x127890u;
    {
        const bool branch_taken_0x127890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x127890) {
            ctx->pc = 0x127590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127590;
        }
    }
    ctx->pc = 0x127898u;
label_127898:
    // 0x127898: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x127898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12789c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x12789cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1278a0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1278a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1278a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1278a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1278a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1278a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1278ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1278acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1278b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1278b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1278b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1278b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1278b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1278b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1278bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1278bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1278c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1278c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1278c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1278C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1278C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1278CCu;
    // 0x1278cc: 0x0  nop
    ctx->pc = 0x1278ccu;
    // NOP
    ctx->pc = 0x1278d0u;
}
