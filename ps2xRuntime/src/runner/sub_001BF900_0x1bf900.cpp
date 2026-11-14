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

// Function: sub_001BF900
// Address: 0x1bf900 - 0x1bfa50
void sub_001BF900_0x1bf900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF900_0x1bf900");
#endif

    switch (ctx->pc) {
        case 0x1bf934u: goto label_1bf934;
        case 0x1bf94cu: goto label_1bf94c;
        case 0x1bf958u: goto label_1bf958;
        case 0x1bf9ccu: goto label_1bf9cc;
        case 0x1bfa04u: goto label_1bfa04;
        default: break;
    }

    ctx->pc = 0x1bf900u;

    // 0x1bf900: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1bf900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1bf904: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1bf904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1bf908: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bf908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bf90c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bf90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bf910: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bf910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bf914: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bf914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bf918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf91c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1bf91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1bf920: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x1bf920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x1bf924: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1bf924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bf928: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1bf928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bf92c: 0xc0702d0  jal         func_1C0B40
    ctx->pc = 0x1BF92Cu;
    SET_GPR_U32(ctx, 31, 0x1BF934u);
    ctx->pc = 0x1C0B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0B40u, 0x1BF92Cu, 0x1BF934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF934u;
label_1bf934:
    // 0x1bf934: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1bf934u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf938: 0x8e930008  lw          $s3, 0x8($s4)
    ctx->pc = 0x1bf938u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1bf93c: 0x8e92000c  lw          $s2, 0xC($s4)
    ctx->pc = 0x1bf93cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1bf940: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bf940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf944: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1BF944u;
    {
        const bool branch_taken_0x1bf944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf944) {
            ctx->pc = 0x1BFA18u;
            goto label_1bfa18;
        }
    }
    ctx->pc = 0x1BF94Cu;
label_1bf94c:
    // 0x1bf94c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bf94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf950: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1BF950u;
    {
        const bool branch_taken_0x1bf950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf950) {
            ctx->pc = 0x1BFA08u;
            goto label_1bfa08;
        }
    }
    ctx->pc = 0x1BF958u;
label_1bf958:
    // 0x1bf958: 0x251182b  sltu        $v1, $s2, $s1
    ctx->pc = 0x1bf958u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1bf95c: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1BF95Cu;
    {
        const bool branch_taken_0x1bf95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf95c) {
            ctx->pc = 0x1BFA04u;
            goto label_1bfa04;
        }
    }
    ctx->pc = 0x1BF964u;
    // 0x1bf964: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x1bf964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1bf968: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1bf968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1bf96c: 0x8c63be58  lw          $v1, -0x41A8($v1)
    ctx->pc = 0x1bf96cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1bf970: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x1bf970u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bf974: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x1BF974u;
    {
        const bool branch_taken_0x1bf974 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf974) {
            ctx->pc = 0x1BFA04u;
            goto label_1bfa04;
        }
    }
    ctx->pc = 0x1BF97Cu;
    // 0x1bf97c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1bf97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bf980: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1bf980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bf984: 0x2512023  subu        $a0, $s2, $s1
    ctx->pc = 0x1bf984u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1bf988: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1bf988u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bf98c: 0x8cc400b4  lw          $a0, 0xB4($a2)
    ctx->pc = 0x1bf98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 180)));
    // 0x1bf990: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x1bf990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bf994: 0x2702821  addu        $a1, $s3, $s0
    ctx->pc = 0x1bf994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1bf998: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1bf998u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1bf99c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bf99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bf9a0: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x1bf9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1bf9a4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1bf9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1bf9a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bf9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bf9ac: 0x84840006  lh          $a0, 0x6($a0)
    ctx->pc = 0x1bf9acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1bf9b0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x1bf9b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1bf9b4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1bf9b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1bf9b8: 0x14640012  bne         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BF9B8u;
    {
        const bool branch_taken_0x1bf9b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1bf9b8) {
            ctx->pc = 0x1BFA04u;
            goto label_1bfa04;
        }
    }
    ctx->pc = 0x1BF9C0u;
    // 0x1bf9c0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1bf9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bf9c4: 0xc06e5c8  jal         func_1B9720
    ctx->pc = 0x1BF9C4u;
    SET_GPR_U32(ctx, 31, 0x1BF9CCu);
    ctx->pc = 0x1B9720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9720u, 0x1BF9C4u, 0x1BF9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF9CCu;
label_1bf9cc:
    // 0x1bf9cc: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1bf9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bf9d0: 0x2511823  subu        $v1, $s2, $s1
    ctx->pc = 0x1bf9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1bf9d4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1bf9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bf9d8: 0x8ca300b4  lw          $v1, 0xB4($a1)
    ctx->pc = 0x1bf9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x1bf9dc: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1bf9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bf9e0: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x1bf9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1bf9e4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1bf9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1bf9e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bf9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bf9ec: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1bf9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bf9f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bf9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bf9f4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1bf9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bf9f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bf9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf9fc: 0xc06edac  jal         func_1BB6B0
    ctx->pc = 0x1BF9FCu;
    SET_GPR_U32(ctx, 31, 0x1BFA04u);
    ctx->pc = 0x1BB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB6B0u, 0x1BF9FCu, 0x1BFA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA04u;
label_1bfa04:
    // 0x1bfa04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bfa04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1bfa08:
    // 0x1bfa08: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1bfa08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bfa0c: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1BFA0Cu;
    {
        const bool branch_taken_0x1bfa0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfa0c) {
            ctx->pc = 0x1BF958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf958;
        }
    }
    ctx->pc = 0x1BFA14u;
    // 0x1bfa14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bfa14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bfa18:
    // 0x1bfa18: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x1bfa18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bfa1c: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1BFA1Cu;
    {
        const bool branch_taken_0x1bfa1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfa1c) {
            ctx->pc = 0x1BF94Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf94c;
        }
    }
    ctx->pc = 0x1BFA24u;
    // 0x1bfa24: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1bfa24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bfa28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bfa28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bfa2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bfa2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bfa30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bfa30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bfa34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bfa34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfa38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bfa38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfa3c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1bfa3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bfa40: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFA48u;
    // 0x1bfa48: 0x0  nop
    ctx->pc = 0x1bfa48u;
    // NOP
    // 0x1bfa4c: 0x0  nop
    ctx->pc = 0x1bfa4cu;
    // NOP
    ctx->pc = 0x1bfa50u;
}
