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

// Function: sub_001BFC10
// Address: 0x1bfc10 - 0x1bfda0
void sub_001BFC10_0x1bfc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFC10_0x1bfc10");
#endif

    switch (ctx->pc) {
        case 0x1bfc68u: goto label_1bfc68;
        case 0x1bfc80u: goto label_1bfc80;
        case 0x1bfc8cu: goto label_1bfc8c;
        case 0x1bfd44u: goto label_1bfd44;
        default: break;
    }

    ctx->pc = 0x1bfc10u;

    // 0x1bfc10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1bfc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1bfc14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1bfc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1bfc18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bfc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bfc1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bfc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bfc20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bfc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bfc24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bfc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bfc28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bfc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bfc2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bfc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bfc30: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1bfc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1bfc34: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1bfc34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x1bfc38: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x1bfc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x1bfc3c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1bfc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bfc40: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1bfc40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bfc44: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1bfc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bfc48: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x1bfc48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bfc4c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1bfc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bfc50: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1bfc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bfc54: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x1bfc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1bfc58: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1bfc58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc5c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1bfc5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc60: 0xc070194  jal         func_1C0650
    ctx->pc = 0x1BFC60u;
    SET_GPR_U32(ctx, 31, 0x1BFC68u);
    ctx->pc = 0x1C0650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0650u, 0x1BFC60u, 0x1BFC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFC68u;
label_1bfc68:
    // 0x1bfc68: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1bfc68u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bfc6c: 0x12a0003f  beqz        $s5, . + 4 + (0x3F << 2)
    ctx->pc = 0x1BFC6Cu;
    {
        const bool branch_taken_0x1bfc6c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc6c) {
            ctx->pc = 0x1BFD6Cu;
            goto label_1bfd6c;
        }
    }
    ctx->pc = 0x1BFC74u;
    // 0x1bfc74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bfc74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc78: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1BFC78u;
    {
        const bool branch_taken_0x1bfc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc78) {
            ctx->pc = 0x1BFD60u;
            goto label_1bfd60;
        }
    }
    ctx->pc = 0x1BFC80u;
label_1bfc80:
    // 0x1bfc80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bfc80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfc84: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1BFC84u;
    {
        const bool branch_taken_0x1bfc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc84) {
            ctx->pc = 0x1BFD50u;
            goto label_1bfd50;
        }
    }
    ctx->pc = 0x1BFC8Cu;
label_1bfc8c:
    // 0x1bfc8c: 0x251182b  sltu        $v1, $s2, $s1
    ctx->pc = 0x1bfc8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1bfc90: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1BFC90u;
    {
        const bool branch_taken_0x1bfc90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc90) {
            ctx->pc = 0x1BFD4Cu;
            goto label_1bfd4c;
        }
    }
    ctx->pc = 0x1BFC98u;
    // 0x1bfc98: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x1bfc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1bfc9c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bfc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bfca0: 0x8c63be58  lw          $v1, -0x41A8($v1)
    ctx->pc = 0x1bfca0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1bfca4: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x1bfca4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bfca8: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x1BFCA8u;
    {
        const bool branch_taken_0x1bfca8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfca8) {
            ctx->pc = 0x1BFD4Cu;
            goto label_1bfd4c;
        }
    }
    ctx->pc = 0x1BFCB0u;
    // 0x1bfcb0: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1bfcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1bfcb4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1bfcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1bfcb8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1bfcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1bfcbc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1bfcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bfcc0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1bfcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bfcc4: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1bfcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bfcc8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1bfcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1bfccc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bfcccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bfcd0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bfcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1bfcd4: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1bfcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bfcd8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bfcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bfcdc: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BFCDCu;
    {
        const bool branch_taken_0x1bfcdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bfcdc) {
            ctx->pc = 0x1BFD4Cu;
            goto label_1bfd4c;
        }
    }
    ctx->pc = 0x1BFCE4u;
    // 0x1bfce4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1bfce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bfce8: 0x2511023  subu        $v0, $s2, $s1
    ctx->pc = 0x1bfce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1bfcec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1bfcecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bfcf0: 0x8c8200b4  lw          $v0, 0xB4($a0)
    ctx->pc = 0x1bfcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x1bfcf4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1bfcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfcf8: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x1bfcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1bfcfc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1bfcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1bfd00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bfd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfd04: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1bfd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bfd08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bfd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bfd0c: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x1bfd0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfd10: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1bfd10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1bfd14: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1bfd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bfd18: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1bfd18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1bfd1c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1bfd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bfd20: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1bfd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfd24: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1bfd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bfd28: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1bfd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1bfd2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bfd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bfd30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1bfd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bfd34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1bfd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfd38: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x1bfd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1bfd3c: 0xc06edac  jal         func_1BB6B0
    ctx->pc = 0x1BFD3Cu;
    SET_GPR_U32(ctx, 31, 0x1BFD44u);
    ctx->pc = 0x1BB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB6B0u, 0x1BFD3Cu, 0x1BFD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD44u;
label_1bfd44:
    // 0x1bfd44: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1bfd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bfd48: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1bfd48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1bfd4c:
    // 0x1bfd4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bfd4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bfd50:
    // 0x1bfd50: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1bfd50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bfd54: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1BFD54u;
    {
        const bool branch_taken_0x1bfd54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfd54) {
            ctx->pc = 0x1BFC8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfc8c;
        }
    }
    ctx->pc = 0x1BFD5Cu;
    // 0x1bfd5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bfd5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bfd60:
    // 0x1bfd60: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x1bfd60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bfd64: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1BFD64u;
    {
        const bool branch_taken_0x1bfd64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfd64) {
            ctx->pc = 0x1BFC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfc80;
        }
    }
    ctx->pc = 0x1BFD6Cu;
label_1bfd6c:
    // 0x1bfd6c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1bfd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bfd70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bfd70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bfd74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bfd74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bfd78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bfd78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bfd7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bfd7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bfd80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bfd80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfd84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bfd84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfd88: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1bfd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1bfd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFD94u;
    // 0x1bfd94: 0x0  nop
    ctx->pc = 0x1bfd94u;
    // NOP
    // 0x1bfd98: 0x0  nop
    ctx->pc = 0x1bfd98u;
    // NOP
    // 0x1bfd9c: 0x0  nop
    ctx->pc = 0x1bfd9cu;
    // NOP
    ctx->pc = 0x1bfda0u;
}
