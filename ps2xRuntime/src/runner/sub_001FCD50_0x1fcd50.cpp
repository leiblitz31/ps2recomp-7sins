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

// Function: sub_001FCD50
// Address: 0x1fcd50 - 0x1fcf60
void sub_001FCD50_0x1fcd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCD50_0x1fcd50");
#endif

    switch (ctx->pc) {
        case 0x1fcdb0u: goto label_1fcdb0;
        case 0x1fcdb8u: goto label_1fcdb8;
        case 0x1fcdd0u: goto label_1fcdd0;
        case 0x1fcdf4u: goto label_1fcdf4;
        case 0x1fce0cu: goto label_1fce0c;
        case 0x1fce1cu: goto label_1fce1c;
        case 0x1fce2cu: goto label_1fce2c;
        case 0x1fce40u: goto label_1fce40;
        case 0x1fce50u: goto label_1fce50;
        case 0x1fced0u: goto label_1fced0;
        case 0x1fcee0u: goto label_1fcee0;
        case 0x1fcef8u: goto label_1fcef8;
        case 0x1fcf0cu: goto label_1fcf0c;
        default: break;
    }

    ctx->pc = 0x1fcd50u;

    // 0x1fcd50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1fcd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1fcd54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1fcd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1fcd58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1fcd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1fcd5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fcd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1fcd60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fcd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fcd64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fcd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fcd68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fcd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fcd6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fcd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fcd70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fcd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fcd74: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x1fcd74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x1fcd78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fcd78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd7c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fcd7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd80: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1fcd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fcd84: 0x8c64010c  lw          $a0, 0x10C($v1)
    ctx->pc = 0x1fcd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x1fcd88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fcd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fcd8c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FCD8Cu;
    {
        const bool branch_taken_0x1fcd8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fcd8c) {
            ctx->pc = 0x1FCDA8u;
            goto label_1fcda8;
        }
    }
    ctx->pc = 0x1FCD94u;
    // 0x1fcd94: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1fcd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fcd98: 0x8c640114  lw          $a0, 0x114($v1)
    ctx->pc = 0x1fcd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x1fcd9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fcd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fcda0: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1FCDA0u;
    {
        const bool branch_taken_0x1fcda0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fcda0) {
            ctx->pc = 0x1FCE64u;
            goto label_1fce64;
        }
    }
    ctx->pc = 0x1FCDA8u;
label_1fcda8:
    // 0x1fcda8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1FCDA8u;
    {
        const bool branch_taken_0x1fcda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcda8) {
            ctx->pc = 0x1FCF30u;
            goto label_1fcf30;
        }
    }
    ctx->pc = 0x1FCDB0u;
label_1fcdb0:
    // 0x1fcdb0: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1FCDB0u;
    SET_GPR_U32(ctx, 31, 0x1FCDB8u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1FCDB0u, 0x1FCDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCDB8u;
label_1fcdb8:
    // 0x1fcdb8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fcdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fcdbc: 0x8c63bfac  lw          $v1, -0x4054($v1)
    ctx->pc = 0x1fcdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFACu));
    // 0x1fcdc0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1fcdc0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1fcdc4: 0x8810  mfhi        $s1
    ctx->pc = 0x1fcdc4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1fcdc8: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1FCDC8u;
    SET_GPR_U32(ctx, 31, 0x1FCDD0u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1FCDC8u, 0x1FCDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCDD0u;
label_1fcdd0:
    // 0x1fcdd0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fcdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fcdd4: 0x8c63bfb0  lw          $v1, -0x4050($v1)
    ctx->pc = 0x1fcdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFB0u));
    // 0x1fcdd8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1fcdd8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1fcddc: 0x8010  mfhi        $s0
    ctx->pc = 0x1fcddcu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x1fcde0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1fcde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fcde4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fcde4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcde8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fcde8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcdec: 0xc07eeec  jal         func_1FBBB0
    ctx->pc = 0x1FCDECu;
    SET_GPR_U32(ctx, 31, 0x1FCDF4u);
    ctx->pc = 0x1FBBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBBB0u, 0x1FCDECu, 0x1FCDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCDF4u;
label_1fcdf4:
    // 0x1fcdf4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1fcdf4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcdf8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1fcdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fcdfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fcdfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fce00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce04: 0xc07eed8  jal         func_1FBB60
    ctx->pc = 0x1FCE04u;
    SET_GPR_U32(ctx, 31, 0x1FCE0Cu);
    ctx->pc = 0x1FBB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBB60u, 0x1FCE04u, 0x1FCE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCE0Cu;
label_1fce0c:
    // 0x1fce0c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1fce0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce10: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1fce10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fce14: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FCE14u;
    SET_GPR_U32(ctx, 31, 0x1FCE1Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FCE14u, 0x1FCE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCE1Cu;
label_1fce1c:
    // 0x1fce1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fce1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce20: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1fce20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce24: 0xc08c9a8  jal         func_2326A0
    ctx->pc = 0x1FCE24u;
    SET_GPR_U32(ctx, 31, 0x1FCE2Cu);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x1FCE24u, 0x1FCE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCE2Cu;
label_1fce2c:
    // 0x1fce2c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FCE2Cu;
    {
        const bool branch_taken_0x1fce2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fce2c) {
            ctx->pc = 0x1FCE60u;
            goto label_1fce60;
        }
    }
    ctx->pc = 0x1FCE34u;
    // 0x1fce34: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1fce34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fce38: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FCE38u;
    SET_GPR_U32(ctx, 31, 0x1FCE40u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FCE38u, 0x1FCE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCE40u;
label_1fce40:
    // 0x1fce40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fce40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce44: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1fce44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce48: 0xc08c9a8  jal         func_2326A0
    ctx->pc = 0x1FCE48u;
    SET_GPR_U32(ctx, 31, 0x1FCE50u);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x1FCE48u, 0x1FCE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCE50u;
label_1fce50:
    // 0x1fce50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCE50u;
    {
        const bool branch_taken_0x1fce50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fce50) {
            ctx->pc = 0x1FCE60u;
            goto label_1fce60;
        }
    }
    ctx->pc = 0x1FCE58u;
    // 0x1fce58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fce58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fce5c: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1fce5cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1fce60:
    // 0x1fce60: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1fce60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1fce64:
    // 0x1fce64: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FCE64u;
    {
        const bool branch_taken_0x1fce64 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fce64) {
            ctx->pc = 0x1FCE78u;
            goto label_1fce78;
        }
    }
    ctx->pc = 0x1FCE6Cu;
    // 0x1fce6c: 0x2e63000a  sltiu       $v1, $s3, 0xA
    ctx->pc = 0x1fce6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fce70: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1FCE70u;
    {
        const bool branch_taken_0x1fce70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fce70) {
            ctx->pc = 0x1FCDB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcdb0;
        }
    }
    ctx->pc = 0x1FCE78u;
label_1fce78:
    // 0x1fce78: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x1fce78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1fce7c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FCE7Cu;
    {
        const bool branch_taken_0x1fce7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fce7c) {
            ctx->pc = 0x1FCEB4u;
            goto label_1fceb4;
        }
    }
    ctx->pc = 0x1FCE84u;
    // 0x1fce84: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1fce84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fce88: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1fce88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1fce8c: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x1fce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1fce90: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1fce90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fce94: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1fce94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1fce98: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1fce98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1fce9c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1fce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fcea0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fcea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fcea4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fcea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fcea8: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x1fcea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1fceac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCEACu;
    {
        const bool branch_taken_0x1fceac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fceac) {
            ctx->pc = 0x1FCEBCu;
            goto label_1fcebc;
        }
    }
    ctx->pc = 0x1FCEB4u;
label_1fceb4:
    // 0x1fceb4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1FCEB4u;
    {
        const bool branch_taken_0x1fceb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fceb4) {
            ctx->pc = 0x1FCF30u;
            goto label_1fcf30;
        }
    }
    ctx->pc = 0x1FCEBCu;
label_1fcebc:
    // 0x1fcebc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1fcebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fcec0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fcec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcec4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fcec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcec8: 0xc07eed8  jal         func_1FBB60
    ctx->pc = 0x1FCEC8u;
    SET_GPR_U32(ctx, 31, 0x1FCED0u);
    ctx->pc = 0x1FBB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBB60u, 0x1FCEC8u, 0x1FCED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCED0u;
label_1fced0:
    // 0x1fced0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1fced0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fced4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1fced4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fced8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FCED8u;
    SET_GPR_U32(ctx, 31, 0x1FCEE0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FCED8u, 0x1FCEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCEE0u;
label_1fcee0:
    // 0x1fcee0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fcee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fcee4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1fcee4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fcee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fcee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fceec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fceecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcef0: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1FCEF0u;
    SET_GPR_U32(ctx, 31, 0x1FCEF8u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1FCEF0u, 0x1FCEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCEF8u;
label_1fcef8:
    // 0x1fcef8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1fcef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fcefc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fcefcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fcf00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf04: 0xc07f844  jal         func_1FE110
    ctx->pc = 0x1FCF04u;
    SET_GPR_U32(ctx, 31, 0x1FCF0Cu);
    ctx->pc = 0x1FE110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE110u, 0x1FCF04u, 0x1FCF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF0Cu;
label_1fcf0c:
    // 0x1fcf0c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fcf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fcf10: 0xc461bf74  lwc1        $f1, -0x408C($v1)
    ctx->pc = 0x1fcf10u;
    { uint32_t bits = FAST_READ32(0x60BF74u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fcf14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fcf14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fcf18: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1fcf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fcf1c: 0xe4600134  swc1        $f0, 0x134($v1)
    ctx->pc = 0x1fcf1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 308), bits); }
    // 0x1fcf20: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1fcf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fcf24: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1fcf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcf28: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1fcf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fcf2c: 0xe460011c  swc1        $f0, 0x11C($v1)
    ctx->pc = 0x1fcf2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 284), bits); }
label_1fcf30:
    // 0x1fcf30: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1fcf30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fcf34: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1fcf34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fcf38: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fcf38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fcf3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fcf3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fcf40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fcf40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fcf44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fcf44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcf48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fcf48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcf4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fcf4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcf50: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1fcf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1fcf54: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCF5Cu;
    // 0x1fcf5c: 0x0  nop
    ctx->pc = 0x1fcf5cu;
    // NOP
    ctx->pc = 0x1fcf60u;
}
